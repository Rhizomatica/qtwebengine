/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the QtWebEngine module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or later as published by the Free
** Software Foundation and appearing in the file LICENSE.GPL included in
** the packaging of this file. Please review the following information to
** ensure the GNU General Public License version 2.0 requirements will be
** met: http://www.gnu.org/licenses/gpl-2.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "pepper_host_factory_qt.h"

#include "build/build_config.h"
#include "content/public/browser/browser_ppapi_host.h"
#include "ppapi/host/message_filter_host.h"
#include "ppapi/host/ppapi_host.h"
#include "ppapi/host/resource_host.h"
#include "ppapi/proxy/ppapi_messages.h"
#include "ppapi/shared_impl/ppapi_permissions.h"
#include "pepper_flash_browser_host_qt.h"

using ppapi::host::MessageFilterHost;
using ppapi::host::ResourceHost;
using ppapi::host::ResourceMessageFilter;

namespace QtWebEngineCore {

PepperHostFactoryQt::PepperHostFactoryQt(content::BrowserPpapiHost* host)
    : host_(host)
{
}

PepperHostFactoryQt::~PepperHostFactoryQt() {}

scoped_ptr<ppapi::host::ResourceHost> PepperHostFactoryQt::CreateResourceHost(
        ppapi::host::PpapiHost* host,
        const ppapi::proxy::ResourceMessageCallParams& params,
        PP_Instance instance,
        const IPC::Message& message)
{
    DCHECK(host == host_->GetPpapiHost());


    if (!host_->IsValidInstance(instance))
        return scoped_ptr<ppapi::host::ResourceHost>();

    if (host_->GetPpapiHost()->permissions().HasPermission(ppapi::PERMISSION_FLASH)
            && message.type() == PpapiHostMsg_Flash_Create::ID)
        return scoped_ptr<ppapi::host::ResourceHost>(
                    new PepperFlashBrowserHostQt(host_,
                                                 instance,
                                                 params.pp_resource()));

    return scoped_ptr<ppapi::host::ResourceHost>();
}

}  // namespace QtWebEngineCore
