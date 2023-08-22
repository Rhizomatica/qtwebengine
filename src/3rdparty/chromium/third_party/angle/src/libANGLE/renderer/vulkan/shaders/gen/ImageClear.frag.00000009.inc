// GENERATED FILE - DO NOT EDIT.
// Generated by gen_vk_internal_shaders.py.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// shaders/gen/ImageClear.frag.00000009.inc:
//   Pre-generated shader for the ANGLE Vulkan back-end.

#pragma once
constexpr uint8_t kImageClear_frag_00000009[] = {
    0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x02,0xff,0x2d,0x50,0xbb,0x0a,0xc2,0x40,
    0x10,0x5c,0x73,0xe6,0xad,0x31,0x41,0xc4,0x2e,0x44,0x52,0x0a,0x62,0xa1,0x22,0x88,
    0x82,0x55,0x2c,0xd2,0xf9,0x05,0x82,0x8d,0x85,0x36,0xfa,0xf1,0x36,0x82,0x33,0xc9,
    0x1c,0xec,0xcd,0xed,0xec,0xec,0xec,0x26,0xce,0xab,0x43,0xb3,0x81,0x25,0x16,0x59,
    0x61,0xfd,0x29,0xcc,0x03,0x63,0x96,0x5a,0xd0,0x61,0xd3,0x5e,0xdb,0xd5,0xfb,0x73,
    0x5f,0x6d,0xb6,0x6b,0xd6,0x33,0x73,0x9d,0x8e,0xb5,0x09,0x34,0x43,0x20,0xe3,0x79,
    0x7b,0xbc,0xc8,0xc7,0x88,0x1c,0x1a,0x72,0x21,0xfb,0xf1,0x22,0x57,0xaa,0xe7,0x62,
    0x3e,0xe6,0xf5,0xa7,0x16,0x36,0xd0,0x93,0xf3,0x10,0x53,0xdc,0xc4,0x05,0x38,0x27,
    0x6e,0x06,0x8f,0x00,0x58,0xc9,0x63,0x8e,0x9c,0xde,0x81,0x66,0x57,0xb8,0x23,0xa0,
    0xd3,0xcc,0x83,0xf2,0x58,0x5c,0x29,0xff,0x50,0xda,0x54,0xb5,0x44,0x5a,0xe6,0x23,
    0x71,0x4b,0xcd,0x1a,0x6b,0x37,0xea,0x33,0xd5,0xd8,0xbf,0xc3,0xfe,0x9e,0xe6,0x9a,
    0xfc,0xbf,0x60,0x7c,0xe0,0x19,0x77,0xd6,0xfd,0x97,0xde,0x8f,0x1e,0x47,0xed,0x9a,
    0x8b,0x3f,0xa1,0x23,0x56,0xfe,0xc3,0xd7,0xec,0x11,0x7f,0x6b,0x6d,0xdf,0x88,0x88,
    0x01,0x00,0x00
};

// Generated from:
//
// #version 450 core
//
// layout(push_constant)uniform PushConstants {
//        ivec4 clearColor;
// } params;
//
// layout(location = 1)out ivec4 colorOut;
//
// void main()
// {
//     colorOut = params . clearColor;
// }