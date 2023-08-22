// GENERATED FILE - DO NOT EDIT.
// Generated by gen_builtin_symbols.py using data from builtin_variables.json and
// builtin_function_declarations.txt.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ImmutableString_autogen.cpp: Wrapper for static or pool allocated char arrays, that are
// guaranteed to be valid and unchanged for the duration of the compilation. Implements
// mangledNameHash using perfect hash function from gen_builtin_symbols.py

#include "compiler/translator/ImmutableString.h"

std::ostream &operator<<(std::ostream &os, const sh::ImmutableString &str)
{
    return os.write(str.data(), str.length());
}

#if defined(_MSC_VER)
#    pragma warning(disable : 4309)  // truncation of constant value
#endif

namespace
{

constexpr int mangledkT1[] = {3064, 1851, 1414, 3139, 4344, 3861, 2198, 569,  2942, 936,
                              1011, 2797, 994,  3172, 2246, 1929, 3580, 2059, 3211, 2760,
                              3315, 3834, 4289, 1359, 1965, 849,  1949, 3923, 2685, 4274,
                              4060, 2274, 1752, 1405, 743,  2453, 2110};
constexpr int mangledkT2[] = {3974, 952,  3020, 19,   962,  3302, 1369, 968,  2483, 3954,
                              2409, 949,  1306, 577,  1474, 224,  2913, 2365, 494,  208,
                              654,  3238, 2268, 54,   1039, 35,   3881, 44,   150,  967,
                              1157, 2004, 4019, 4114, 1201, 3022, 2477};
constexpr int mangledkG[]  = {
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    237,  0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    4415, 0,    0,    1692, 0,    0,    0,    0,    0,    0,    4425, 0,
    0,    0,    0,    0,    0,    0,    4034, 1669, 0,    0,    0,    0,    2799, 0,    0,    0,
    0,    2968, 0,    294,  0,    3468, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    908,  0,    0,    0,    0,    0,    0,    2400, 0,    2142, 0,    0,    0,    0,    0,
    0,    0,    0,    0,    294,  0,    0,    0,    0,    0,    857,  0,    0,    0,    0,    0,
    0,    1663, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    1876, 0,    0,    0,    0,    225,  0,    0,    0,    0,    0,    640,  810,  0,    3416, 0,
    0,    3688, 0,    0,    3802, 4332, 0,    0,    2261, 0,    0,    0,    1719, 0,    0,    0,
    0,    0,    1386, 0,    1507, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    356,  0,    0,    0,    0,    0,    0,    432,  0,    0,    0,    1198, 0,
    0,    0,    0,    0,    2445, 0,    0,    222,  0,    0,    3859, 0,    0,    0,    0,    0,
    0,    0,    0,    0,    3598, 918,  0,    0,    0,    0,    0,    0,    1694, 0,    0,    0,
    0,    0,    1161, 0,    0,    0,    0,    0,    381,  0,    222,  0,    3810, 0,    1466, 3945,
    0,    3178, 0,    0,    331,  60,   0,    0,    0,    605,  679,  0,    3566, 0,    0,    0,
    438,  0,    3807, 0,    0,    0,    1331, 0,    0,    0,    945,  0,    0,    0,    3384, 2673,
    0,    0,    0,    4287, 4141, 455,  0,    4098, 0,    0,    0,    0,    0,    0,    685,  1248,
    4248, 0,    0,    0,    0,    0,    0,    0,    0,    1704, 0,    0,    0,    0,    204,  0,
    0,    3604, 1783, 889,  0,    0,    0,    533,  841,  0,    0,    0,    722,  2641, 0,    0,
    0,    3828, 1320, 700,  4165, 0,    2297, 1239, 0,    2147, 0,    0,    0,    0,    0,    75,
    0,    0,    0,    2019, 0,    0,    0,    0,    0,    1980, 0,    0,    0,    0,    75,   0,
    0,    0,    578,  1657, 0,    0,    0,    0,    2823, 240,  0,    0,    29,   0,    0,    1252,
    0,    2306, 0,    0,    0,    0,    0,    0,    0,    0,    0,    1198, 3986, 0,    0,    0,
    0,    0,    1984, 0,    0,    0,    1929, 3657, 0,    0,    0,    0,    1516, 0,    0,    593,
    0,    0,    0,    0,    0,    0,    0,    0,    478,  0,    883,  0,    0,    0,    0,    0,
    1844, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1100, 0,    0,    0,    0,
    3867, 559,  0,    0,    0,    0,    4302, 0,    0,    0,    0,    780,  0,    0,    1982, 0,
    0,    0,    4234, 0,    0,    0,    0,    0,    0,    0,    2296, 0,    0,    0,    659,  0,
    0,    3233, 0,    0,    0,    0,    0,    0,    0,    322,  393,  4384, 1087, 520,  0,    1156,
    1940, 0,    0,    0,    662,  866,  3748, 0,    958,  1862, 0,    409,  0,    0,    0,    1528,
    0,    0,    0,    0,    0,    0,    0,    3561, 0,    210,  0,    604,  3750, 869,  0,    859,
    786,  0,    0,    3852, 0,    0,    0,    0,    667,  4364, 860,  1783, 0,    0,    0,    0,
    0,    209,  0,    3492, 4421, 0,    0,    0,    0,    1394, 0,    0,    0,    1002, 0,    0,
    0,    0,    0,    0,    1081, 0,    0,    0,    0,    0,    0,    3533, 0,    0,    0,    0,
    507,  2504, 0,    0,    0,    0,    0,    0,    0,    1709, 806,  1351, 209,  0,    813,  0,
    0,    0,    0,    0,    0,    0,    0,    0,    655,  0,    0,    0,    0,    0,    0,    4319,
    0,    0,    111,  656,  0,    255,  0,    0,    315,  4070, 3520, 0,    0,    0,    0,    0,
    0,    0,    0,    3079, 967,  1823, 1486, 0,    434,  0,    0,    3856, 0,    0,    4252, 2293,
    0,    0,    0,    0,    0,    0,    1117, 0,    0,    1022, 0,    2050, 4188, 0,    3664, 0,
    0,    0,    801,  0,    0,    0,    0,    0,    0,    0,    2511, 0,    0,    0,    0,    69,
    360,  0,    873,  0,    0,    0,    0,    4049, 4196, 0,    0,    0,    2160, 506,  0,    1160,
    0,    0,    0,    0,    0,    1966, 57,   0,    0,    4399, 0,    3118, 0,    0,    3220, 0,
    36,   0,    1406, 0,    0,    0,    692,  0,    0,    1501, 0,    0,    4442, 0,    1161, 0,
    660,  0,    0,    0,    0,    0,    1589, 0,    0,    0,    0,    0,    0,    847,  0,    0,
    0,    536,  0,    1851, 0,    0,    0,    0,    3951, 4010, 0,    0,    1443, 0,    0,    0,
    235,  0,    0,    1930, 2635, 0,    1948, 2125, 0,    631,  0,    0,    1625, 0,    0,    4132,
    0,    0,    2700, 1001, 0,    0,    947,  2543, 1489, 0,    4346, 0,    0,    150,  0,    0,
    2828, 0,    0,    0,    0,    0,    0,    278,  4192, 756,  0,    3986, 0,    0,    380,  0,
    1812, 0,    3423, 0,    0,    0,    182,  0,    0,    0,    814,  0,    304,  4449, 0,    646,
    0,    0,    95,   0,    0,    1125, 0,    0,    0,    0,    0,    3814, 0,    0,    2261, 0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    3776, 0,    0,    2770, 0,    0,    0,
    782,  3419, 0,    4001, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    986,  0,
    1770, 758,  0,    0,    0,    0,    1084, 0,    343,  0,    0,    0,    0,    0,    0,    1935,
    0,    0,    1532, 535,  0,    0,    0,    0,    0,    0,    1205, 3609, 0,    0,    0,    0,
    0,    1031, 0,    0,    2709, 0,    4085, 0,    3679, 0,    0,    0,    514,  0,    4211, 0,
    0,    357,  0,    0,    0,    0,    1866, 0,    2116, 0,    0,    0,    0,    2538, 0,    4146,
    0,    0,    0,    0,    0,    1774, 1203, 4192, 0,    37,   0,    0,    4239, 1431, 0,    0,
    0,    2085, 3360, 313,  1258, 3044, 1013, 0,    0,    0,    2550, 0,    937,  0,    0,    0,
    0,    4097, 0,    0,    0,    2627, 1961, 0,    0,    0,    3686, 3390, 0,    0,    324,  0,
    0,    0,    0,    1933, 0,    670,  0,    338,  0,    0,    0,    0,    1111, 0,    0,    0,
    0,    1483, 0,    320,  0,    1248, 0,    924,  0,    0,    0,    0,    1072, 0,    0,    0,
    0,    4238, 3207, 0,    396,  0,    0,    0,    84,   0,    1418, 127,  0,    1372, 0,    0,
    0,    0,    0,    711,  0,    2598, 2053, 4314, 0,    2707, 568,  0,    0,    1248, 0,    0,
    1186, 0,    0,    3899, 1893, 0,    0,    0,    1498, 591,  2018, 551,  2649, 911,  0,    2537,
    0,    0,    0,    3434, 0,    0,    0,    0,    2339, 0,    0,    461,  0,    0,    0,    0,
    0,    4013, 0,    3289, 647,  0,    0,    0,    466,  230,  0,    1544, 0,    1576, 0,    0,
    0,    3249, 0,    0,    699,  0,    0,    4205, 0,    0,    0,    0,    0,    653,  0,    2703,
    0,    0,    0,    2215, 0,    2015, 0,    0,    0,    0,    0,    0,    0,    0,    1307, 663,
    0,    178,  0,    0,    0,    0,    2717, 927,  358,  0,    4142, 1093, 3580, 0,    467,  0,
    0,    0,    0,    933,  590,  85,   3482, 1580, 3629, 0,    0,    0,    0,    0,    0,    3354,
    0,    0,    165,  0,    0,    1642, 1429, 0,    0,    4427, 0,    0,    0,    0,    328,  0,
    0,    0,    0,    0,    857,  0,    0,    751,  0,    0,    4389, 446,  0,    0,    1645, 0,
    0,    0,    0,    0,    0,    0,    3076, 0,    0,    1571, 472,  1588, 0,    0,    0,    17,
    0,    653,  816,  3016, 400,  0,    0,    0,    0,    0,    0,    4005, 0,    0,    1981, 2016,
    0,    934,  0,    0,    0,    0,    0,    0,    4100, 644,  1623, 0,    0,    91,   2506, 0,
    1312, 0,    2364, 0,    0,    327,  0,    0,    0,    264,  0,    3166, 3276, 4163, 1593, 0,
    0,    733,  0,    0,    0,    4089, 0,    3221, 1135, 0,    0,    0,    0,    867,  2968, 1781,
    0,    0,    4039, 2959, 0,    3500, 0,    3383, 1150, 2820, 268,  802,  132,  0,    0,    0,
    3176, 0,    1651, 3802, 0,    0,    0,    0,    0,    2732, 0,    0,    0,    150,  0,    0,
    1117, 3687, 0,    696,  2045, 0,    814,  0,    0,    0,    0,    3981, 0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    278,  2734, 0,    686,  853,  349,  0,    575,  2143, 0,
    0,    0,    3275, 0,    3086, 0,    0,    0,    0,    563,  1960, 0,    0,    0,    4128, 311,
    2688, 4370, 348,  1881, 1648, 1442, 0,    4229, 1609, 0,    0,    387,  2765, 0,    956,  0,
    0,    3301, 2280, 812,  0,    0,    66,   0,    0,    0,    0,    0,    0,    3084, 203,  0,
    708,  0,    235,  176,  0,    0,    0,    0,    2513, 1450, 0,    3215, 0,    0,    0,    1514,
    1008, 1860, 0,    3610, 906,  0,    0,    0,    158,  0,    153,  719,  0,    1185, 396,  256,
    0,    0,    517,  4240, 2401, 2210, 0,    4057, 0,    0,    1262, 0,    0,    0,    701,  604,
    0,    0,    136,  0,    0,    2102, 3714, 0,    826,  2267, 344,  0,    0,    4015, 0,    3959,
    1358, 0,    354,  0,    0,    598,  0,    0,    0,    0,    294,  3552, 0,    1276, 0,    0,
    0,    0,    140,  0,    0,    4114, 0,    0,    0,    1945, 0,    3229, 0,    973,  102,  1382,
    0,    0,    1012, 3534, 4384, 1312, 124,  2647, 0,    2014, 0,    1867, 0,    0,    3712, 99,
    515,  0,    0,    166,  858,  0,    0,    0,    0,    3900, 3591, 0,    0,    0,    0,    0,
    0,    0,    1972, 0,    1653, 4379, 1975, 0,    948,  0,    0,    1553, 0,    0,    0,    0,
    144,  1095, 1404, 315,  0,    0,    0,    0,    1666, 0,    1042, 0,    2900, 1356, 0,    0,
    0,    0,    0,    860,  0,    0,    0,    957,  1889, 0,    0,    0,    0,    3925, 0,    0,
    2819, 0,    2639, 0,    0,    2583, 0,    0,    805,  1852, 0,    0,    0,    4051, 0,    3569,
    0,    0,    0,    0,    0,    0,    0,    0,    885,  0,    1526, 0,    847,  0,    532,  0,
    1212, 3983, 1204, 1023, 664,  1264, 2772, 0,    0,    72,   0,    1553, 0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    2702, 2088, 811,  339,  0,    2050, 3888, 115,  72,
    0,    0,    0,    1749, 1278, 232,  1112, 0,    0,    0,    0,    1421, 369,  589,  0,    0,
    0,    0,    0,    3945, 0,    192,  0,    1500, 2057, 0,    3093, 0,    0,    253,  686,  0,
    0,    0,    1847, 0,    0,    0,    0,    1529, 0,    222,  0,    0,    1290, 1153, 0,    0,
    0,    1423, 0,    0,    91,   1760, 0,    3482, 174,  3016, 0,    0,    0,    2091, 0,    1082,
    0,    1332, 2071, 573,  1651, 1903, 0,    0,    358,  3933, 999,  0,    0,    0,    0,    134,
    4134, 0,    0,    0,    288,  0,    0,    0,    464,  0,    890,  408,  2369, 978,  0,    2495,
    3640, 0,    0,    0,    0,    1013, 1171, 1937, 2472, 0,    0,    0,    84,   518,  0,    1452,
    1596, 0,    1521, 0,    3416, 0,    1555, 0,    1997, 4117, 1537, 3658, 0,    0,    444,  451,
    2039, 835,  3930, 0,    4098, 1127, 0,    500,  0,    0,    0,    249,  0,    0,    4088, 2388,
    629,  0,    801,  0,    0,    1568, 771,  0,    948,  0,    140,  0,    0,    1806, 1568, 0,
    0,    2031, 1755, 0,    0,    2075, 0,    2829, 0,    0,    0,    0,    854,  1779, 0,    1021,
    2947, 0,    22,   0,    668,  1835, 105,  0,    0,    110,  1656, 1229, 0,    0,    0,    0,
    3191, 406,  0,    752,  971,  0,    2872, 73,   0,    4399, 2629, 0,    1194, 399,  0,    949,
    0,    429,  0,    4344, 2988, 0,    1480, 3077, 0,    3808, 0,    0,    0,    455,  0,    1267,
    0,    0,    0,    1642, 1885, 0,    391,  1478, 1476, 0,    0,    906,  433,  0,    556,  0,
    0,    3782, 0,    2578, 2017, 4024, 0,    0,    0,    570,  2699, 1749, 0,    0,    0,    2651,
    1491, 0,    0,    0,    0,    905,  0,    0,    488,  1274, 0,    310,  437,  4202, 3962, 0,
    255,  2234, 2841, 0,    0,    0,    1666, 263,  1319, 0,    2742, 4376, 0,    0,    1651, 0,
    109,  0,    0,    0,    0,    777,  0,    0,    2423, 4124, 0,    1814, 0,    1951, 0,    0,
    0,    923,  4000, 0,    1108, 201,  0,    1719, 1045, 230,  0,    1359, 102,  0,    0,    0,
    105,  0,    872,  675,  0,    1685, 0,    0,    44,   0,    798,  554,  0,    239,  0,    0,
    0,    0,    881,  2691, 0,    4223, 0,    845,  0,    0,    2051, 0,    0,    0,    0,    4292,
    0,    1618, 125,  4436, 1169, 491,  0,    0,    3102, 0,    0,    1043, 1499, 1290, 0,    0,
    0,    278,  0,    0,    1599, 0,    0,    0,    0,    0,    0,    0,    2903, 0,    0,    0,
    0,    683,  471,  0,    742,  2315, 0,    0,    1851, 1386, 1159, 1494, 1859, 0,    3499, 4049,
    581,  0,    0,    227,  1737, 0,    0,    0,    354,  0,    3818, 0,    4093, 0,    0,    1895,
    0,    1866, 1629, 0,    696,  0,    0,    1811, 0,    0,    0,    0,    0,    0,    0,    3866,
    753,  0,    0,    1902, 0,    0,    404,  830,  0,    1268, 0,    0,    0,    0,    2689, 0,
    0,    0,    0,    0,    0,    1274, 0,    0,    1799, 968,  0,    0,    0,    471,  465,  110,
    0,    0,    4410, 0,    2883, 3928, 724,  0,    0,    0,    1270, 2067, 2790, 1810, 0,    0,
    0,    0,    97,   0,    867,  1424, 1558, 1665, 1393, 0,    939,  692,  0,    0,    290,  803,
    0,    0,    1839, 0,    3826, 0,    1040, 0,    0,    0,    0,    0,    0,    0,    0,    3660,
    1943, 0,    0,    958,  1505, 4211, 238,  0,    0,    0,    119,  0,    0,    0,    407,  0,
    0,    0,    0,    3009, 1972, 1308, 0,    775,  0,    3397, 0,    532,  0,    0,    0,    0,
    0,    0,    0,    0,    0,    786,  0,    0,    2087, 0,    0,    0,    1648, 0,    0,    841,
    3232, 1828, 0,    334,  3195, 0,    13,   0,    779,  0,    1004, 1147, 0,    513,  3955, 0,
    0,    154,  567,  0,    0,    0,    1905, 0,    0,    949,  1022, 0,    2350, 1139, 0,    870,
    218,  291,  0,    1859, 3041, 708,  1500, 4198, 2385, 0,    0,    2040, 0,    276,  708,  3508,
    0,    0,    3581, 0,    0,    183,  219,  1024, 0,    4272, 3737, 0,    2220, 0,    1223, 1984,
    4319, 374,  0,    0,    0,    0,    0,    944,  2350, 496,  0,    1757, 0,    0,    0,    425,
    2723, 0,    0,    0,    771,  0,    0,    1184, 960,  3976, 0,    0,    0,    0,    0,    0,
    935,  0,    1339, 2161, 1198, 0,    0,    0,    0,    109,  850,  0,    0,    0,    0,    541,
    2149, 415,  0,    3874, 208,  0,    1655, 495,  1902, 0,    0,    2135, 0,    0,    0,    640,
    3196, 0,    0,    0,    3486, 0,    234,  0,    0,    0,    1377, 0,    0,    723,  107,  954,
    0,    0,    3310, 0,    3588, 419,  0,    4015, 1633, 2624, 0,    1128, 0,    1348, 2147, 0,
    0,    3078, 2173, 1650, 0,    0,    505,  0,    0,    2215, 0,    3567, 1278, 3671, 526,  1355,
    0,    1077, 507,  345,  0,    695,  0,    160,  0,    1867, 1923, 0,    528,  0,    0,    555,
    0,    0,    0,    0,    2207, 0,    0,    1838, 0,    0,    0,    0,    0,    1923, 1492, 0,
    1738, 1336, 0,    903,  0,    691,  1268, 0,    1946, 0,    393,  0,    0,    13,   0,    0,
    866,  2299, 1334, 0,    0,    0,    727,  2446, 3227, 3237, 667,  0,    0,    0,    1279, 2776,
    0,    0,    0,    434,  4302, 2397, 4103, 671,  1657, 0,    0,    4023, 0,    0,    0,    0,
    3357, 0,    0,    1009, 0,    0,    0,    0,    1660, 3425, 0,    0,    0,    616,  372,  0,
    1705, 4365, 998,  276,  0,    0,    963,  0,    0,    794,  4047, 1750, 1406, 0,    54,   1751,
    0,    0,    0,    0,    0,    0,    0,    0,    739,  0,    649,  0,    0,    0,    3990, 0,
    3272, 0,    0,    0,    0,    0,    0,    0,    3295, 0,    1428, 0,    0,    812,  0,    351,
    0,    3835, 0,    1564, 0,    0,    1058, 2305, 3303, 1938, 0,    923,  378,  3177, 0,    0,
    1468, 0,    286,  0,    3064, 1370, 0,    675,  1708, 0,    0,    1203, 0,    0,    0,    0,
    376,  0,    346,  983,  2009, 0,    3790, 27,   247,  821,  0,    836,  1905, 575,  561,  1806,
    0,    107,  0,    932,  0,    0,    1154, 87,   0,    2077, 0,    0,    838,  731,  289,  0,
    0,    0,    2114, 3726, 1066, 2248, 1546, 1000, 0,    0,    550,  3065, 1987, 0,    0,    0,
    0,    202,  0,    1788, 0,    981,  0,    3628, 881,  3968, 1358, 639,  4323, 0,    0,    0,
    613,  751,  0,    0,    3915, 326,  4034, 452,  1688, 4105, 4054, 0,    0,    795,  755,  3427,
    0,    4057, 0,    0,    0,    512,  3446, 0,    0,    0,    2624, 0,    3564, 1334, 0,    1244,
    2280, 301,  0,    0,    946,  0,    0,    0,    3406, 0,    0,    0,    4298, 0,    0,    1612,
    311,  1739, 0,    492,  3070, 0,    221,  3974, 1171, 898,  0,    1212, 0,    0,    1075, 2752,
    582,  0,    4030, 297,  0,    0,    3208, 0,    2012, 0,    408,  459,  101,  0,    0,    0,
    0,    318,  463,  4380, 0,    243,  0,    1065, 3614, 3654, 2871, 3545, 0,    0,    585,  903,
    274,  0,    1457, 0,    0,    4057, 692,  15,   0,    1008, 4196, 0,    0,    0,    524,  0,
    0,    0,    0,    845,  203,  1783, 2118, 0,    672,  2269, 0,    0,    1907, 0,    0,    4417,
    0,    3798, 455,  0,    195,  0,    929,  4167, 480,  744,  4217, 0,    0,    3705, 2915, 2273,
    1062, 677,  0,    4420, 2325, 0,    0,    0,    1178, 1725, 0,    0,    3730, 0,    38,   4270,
    1585, 0,    1925, 3912, 0,    0,    0,    0,    0,    0,    4274, 0,    824,  0,    970,  0,
    0,    0,    0,    1928, 298,  0,    735,  0,    0,    10,   2811, 850,  0,    2730, 1321, 4050,
    3210, 0,    4321, 786,  346,  2109, 0,    0,    1919, 0,    0,    1661, 280,  174,  518,  3704,
    3169, 0,    0,    3433, 3344, 3829, 3866, 0,    195,  1421, 0,    0,    2369, 483,  1717, 0,
    0,    0,    0,    0,    0,    0,    594,  420,  0,    829,  0,    248,  1449, 4229, 0,    190,
    0,    3538, 4358, 3070, 0,    1222, 33,   0,    0,    16,   355,  0,    361,  606,  297,  0,
    1158, 1532, 0,    486,  0,    0,    0,    60,   749,  462,  861,  0,    4407, 463,  0,    0,
    849,  218,  0,    0,    0,    1061, 1411, 0,    1275, 45,   0,    0,    0,    86,   670,  861,
    569,  1206, 0,    0,    0,    0,    1367, 162,  352,  2631, 689,  1288, 0,    383,  0,    0,
    0,    0,    1901, 1817, 532,  1743, 438,  0,    3197, 0,    1134, 4398, 0,    0,    0,    1458,
    499,  253,  1313, 3691, 515,  0,    1730, 0,    1513, 691,  1126, 257,  0,    534,  0,    302,
    0,    0,    0,    0,    0,    1192, 50,   0,    314,  0,    0,    332,  4102, 265,  0,    1207,
    0,    2236, 0,    0,    0,    916,  0,    0,    2083, 2924, 543,  2492, 3603, 762,  423,  0,
    1293, 3453, 0,    2499, 0,    1700, 0,    0,    812,  1928, 1279, 2631, 436,  1423, 0,    0,
    1200, 0,    0,    1338, 67,   1873, 4153, 4268, 4239, 0,    1705, 0,    0,    0,    523,  0,
    0,    2026, 986,  291,  176,  1381, 1033, 518,  0,    0,    1611, 4312, 3213, 0,    0,    952,
    0,    0,    541,  818,  0,    0,    1348, 0,    0,    525,  0,    1457, 0,    1408, 3698, 823,
    0,    1883, 546,  4103, 1013, 700,  1048, 1166, 840,  0,    3918, 1405, 0,    2137, 1292, 0,
    0,    0,    697,  1168, 45,   0,    579,  0,    3506, 0,    4195, 2147, 0,    0,    228,  519,
    0,    0,    4271, 0,    28,   0,    581,  1070, 1434, 0,    268,  0,    0,    408,  3320, 64,
    1411, 730,  1394, 0,    0,    2114, 1306, 0,    0,    236,  0,    0,    3602, 4029, 0,    0,
    716,  0,    2457, 0,    3916, 4440, 2554, 3643, 0,    628,  1356, 1373, 1008, 0,    0,    3023,
    1346, 230,  0,    0,    1991, 430,  100,  0,    0,    0,    0,    1766, 0,    0,    4436, 0,
    236,  3880, 0,    1921, 0,    2200, 0,    4411, 0,    1006, 3899, 0,    0,    282,  0,    1362,
    1017, 0,    0,    1191, 4441, 0,    0,    1279, 741,  2104, 1910, 0,    0,    394,  4403, 0,
    969,  0,    0,    0,    0,    4028, 0,    4148, 94,   3451, 131,  2735, 1448, 0,    228,  3911,
    0,    0,    713,  0,    0,    2154, 314,  382,  3165, 157,  1849, 0,    3496, 3767, 179,  0,
    0,    0,    912,  0,    0,    0,    596,  1766, 2680, 4277, 591,  0,    4043, 3673, 3883, 0,
    1562, 421,  1388, 4120, 4153, 4200, 0,    3910, 95,   3477, 242,  0,    0,    256,  1298, 459,
    0,    0,    0,    0,    0,    4255, 0,    0,    440,  0,    0,    1967, 735,  2878, 0,    163,
    0,    2812, 3015, 2070, 0,    0,    0,    0,    294,  1999, 1933, 4131, 1509, 2149, 0,    0,
    1969, 792,  2383, 2594, 985,  1628, 0,    48,   0,    0,    0,    0,    9,    0,    1126, 49,
    0,    0,    51,   0,    1013, 0,    1350, 0,    2061, 2487, 1716, 1425, 0,    3255, 970,  1752,
    0,    4326, 0,    639,  0,    1347, 2053, 3757, 1295, 1818, 1805, 0,    0,    0,    4319, 2090,
    0,    0,    2321, 0,    0,    3823, 193,  3422, 0,    2160, 0,    1106, 1630, 25,   0,    0,
    0,    0,    1436, 3023, 1003, 0,    2324, 0,    0,    682,  1022, 1760, 0,    1894, 16,   778,
    1559, 244,  1004, 0,    492,  2069, 4421, 1315, 3755, 764,  0,    0,    29,   0,    466,  1511,
    412,  0,    0,    0,    570,  0,    0,    0,    2074, 1627, 0,    0,    2037, 0,    539,  832,
    1953, 0,    0,    639,  650,  900,  462,  1215, 0,    1073, 0,    0,    1006, 0,    0,    0,
    0,    3391, 1988, 0,    831,  1710, 0,    0,    3855, 2597, 959,  3987, 0,    4209, 0,    772,
    0,    0,    4415, 2725, 0,    0,    2165, 771,  0,    0,    2181, 431,  4129, 1508, 48,   790,
    3068, 0,    4308, 1596, 0,    0,    857,  0,    823,  3595, 2052, 3140, 0,    4377, 0,    194,
    414,  0,    0,    1050, 963,  1533, 0,    0,    1265, 3491, 0,    0,    0,    828,  1504, 0,
    1895, 0,    648,  833,  2963, 37,   3225, 1426, 3700, 1202, 1929, 1301, 2167, 0,    992,  1771,
    106,  0,    842,  0,    1151, 0,    0,    0,    1605, 0,    1533, 0,    709,  96,   658,  2045,
    2865, 618,  0,    3439, 0,    4312, 2084, 371,  0,    1961, 141,  0,    0,    0,    1552, 0,
    0,    0,    3073, 0,    1381, 1098, 1423, 0,    2743, 0,    45,   3082, 62,   3153, 0,    3754,
    3949, 2255, 808,  0,    0,    1791, 0,    2956, 1335, 152,  0,    1695, 2180, 335,  0,    502,
    895,  3490, 0,    924,  441,  465,  0,    0,    3206, 3577, 407,  2564, 2165, 4008, 734,  1520,
    765,  0,    0,    586,  0,    1024, 0,    1345, 1,    0,    139,  1355, 1884, 4337, 916,  1410,
    0,    0,    0,    75,   0,    1201, 4196, 1720, 1178, 0,    3223, 1724, 785,  0,    0,    44,
    0,    1285, 0,    145,  0,    4040, 0,    0,    0,    909,  0,    0,    277,  1485, 1494, 3994,
    0,    0,    363,  952,  582,  2391, 1748, 951,  0,    0,    799,  0,    0,    3674, 7,    884,
    2132, 0,    498,  702,  0,    0,    0,    1527, 0,    0,    0,    558,  3174, 0,    2887, 20,
    0,    863,  0,    1542, 1194, 0,    0,    0,    1530, 0,    1426, 3370, 1183, 1888, 0,    0,
    0,    1880, 0,    0,    0,    0,    1373, 0,    0,    3925, 0,    0,    609,  3556, 886,  512,
    0,    1443, 1158, 0,    1601, 0,    496,  0,    0,    0,    0,    3981, 316,  0,    3998, 608,
    1375, 4451, 2447, 334,  0,    615,  1540, 3032, 3997, 0,    4214, 1469, 0,    1136, 925,  1311,
    0,    1763, 0,    2334, 645,  0,    942,  0,    2473, 0,    1213, 1635, 0,    0,    82,   4374,
    1992, 207,  292,  1172, 0,    2020, 0,    1194, 0,    540,  0,    641,  0,    0,    0,    1653,
    4302, 4209, 1076, 0,    4000, 0,    700,  3918, 3318, 3817, 750,  2117, 3307, 0,    3891, 1426,
    3664, 2485, 0,    14,   0,    0,    0,    2064, 0,    0,    0,    0,    1040, 0,    2024, 856,
    0,    1671, 879,  684,  683,  0,    846,  0,    1964, 3882, 0,    2652, 0,    0,    0,    3343,
    3567, 1574, 0,    1079, 1180, 1637, 482,  0,    2037, 265,  0,    1412, 0,    2269, 1228, 0,
    314,  297,  0,    2,    512,  0,    1097, 1346, 0,    4166, 0,    0,    0,    0,    0,    0,
    1372, 368,  1293, 0,    0,    0,    2844, 571,  1965, 4451, 1206, 1894, 1973, 2267, 0,    1272,
    0,    1584, 1144, 0,    2292, 1717, 3713, 1000, 0,    0,    1007, 834,  346,  1993, 1329, 4270,
    2874, 2333, 0,    0,    950,  0,    0,    0,    0,    3963, 1195, 1830, 1537, 3866, 808,  1958,
    0,    0,    4321, 0,    0,    0,    2289, 1032, 1592, 0,    340,  444,  3595, 3437, 424,  1916,
    0,    12,   181,  1544, 2175, 0,    1535, 1624, 0,    0,    1211, 0,    0,    4223, 0,    0,
    618,  2131, 0,    430,  1002, 666,  2643, 2023, 0,    1845, 632,  1055, 1251, 0,    468,  4018,
    0,    0,    0,    0,    4173, 1951, 1641, 1372, 0,    0,    0,    4294, 1219, 113,  0,    418,
    652,  98,   1014, 4403, 0,    1294, 0,    1339, 3942, 0,    542,  3493, 75,   919,  404,  329,
    0,    1438, 300,  956,  0,    0,    602,  373,  0,    4302, 2585, 23,   1959, 293,  3629, 1485,
    1241, 0,    0,    0,    1109, 0,    533,  0,    1842, 772,  0,    879,  1239, 0,    1545, 0,
    0,    0,    159,  112,  730,  0,    0,    0,    1284, 126,  2537, 2421, 0,    1076, 656,  862,
    3395, 3538, 399,  859,  1477, 0,    3064, 0,    0,    1873, 0,    1187, 39,   3292, 397,  0,
    0,    1097, 1548, 0,    0,    0,    3,    4273, 3348, 1906, 518,  1258, 1309, 167,  753,  330,
    0,    2196, 777,  3060, 0,    1447, 810,  0,    983,  0,    0,    1386, 1266, 0,    0,    0,
    1429, 1565, 1976, 3102, 0,    0,    0,    3726, 0,    2404, 0,    0,    3509, 2114, 0,    1146,
    0,    1704, 0,    0,    74,   0,    3847, 0,    0,    0,    0,    822,  3349, 4291, 977,  1393,
    1631, 0,    4271, 1276, 0,    0,    0,    2093, 774,  0,    3926, 900,  0,    3714, 0,    0,
    1582, 0,    1741, 4024, 748,  2962, 1208, 0,    0,    1440, 941,  2827, 0,    797,  2566, 4276,
    252,  2841, 3771, 0,    1222, 0,    0,    1900, 0,    3581, 1281, 1111, 0,    1261, 122,  116,
    380,  537,  1615, 2427, 1559, 1101, 2474, 1722, 0,    902,  0,    3891, 468,  3629, 338,  0,
    887,  4365, 676,  1438, 838,  119,  0,    940,  0,    1869, 353,  1742, 0,    1479, 0,    3561,
    0,    1483, 3730, 0,    3009, 0,    0,    0,    1887, 161,  635,  0,    3015, 0,    4170, 0,
    0,    946,  0,    118,  1617, 0,    0,    2563, 170,  458,  0,    1046, 1107, 1879, 504,  0,
    2102, 0,    1144, 2340, 364,  0,    0,    0,    39,   0,    2062, 282,  0,    744,  4329, 0,
    98,   1996, 0,    2710, 1761, 0,    1424, 3704, 0,    0,    0,    0,    1356, 4382, 3326, 0,
    0,    3027, 499,  2275, 0,    3230, 0,    922,  0,    0,    4362, 4025, 869,  0,    0,    0,
    1528, 0,    222,  915,  0,    0,    4270, 1210, 0,    1802, 0,    0,    2894, 1825, 873,  1052,
    1322, 1833, 360,  0,    1586, 1732, 0,    1071, 0,    0,    0,    942,  1379, 0,    3870, 4429,
    3155, 1312, 2013, 0,    4231, 1316, 335,  637,  2071, 19,   4384, 0,    832,  0,    3,    0,
    0,    0,    1650, 4307, 0,    1869, 0,    0,    4114, 1016, 317,  0,    0,    1842, 0,    1377,
    577,  0,    0,    4442, 80,   3850, 0,    1643, 4385, 3916, 1747, 0,    1664, 0,    1216, 367,
    0,    0,    937,  0,    207,  2033, 0,    413,  655,  632,  433,  0,    0,    933,  0,    36,
    4005, 0,    0,    1536, 342,  0,    0,    667,  363,  117,  4353, 0,    0,    0,    249,  104,
    1553, 1547, 19,   0,    493,  1351, 1917, 1691, 0,    1347, 0,    380,  757,  0,    0,    0,
    0,    0,    1415, 0,    1644, 0,    0,    241,  3884, 2487, 1276, 0,    0,    714,  0,    1468,
    0,    145,  1965, 0,    1115, 0,    2624, 0,    878,  2183, 1566, 1770, 850,  699,  0,    0,
    2283, 535,  0,    584,  0,    2002, 242,  0,    3766, 1093, 2006, 0,    0,    0,    4207, 3761,
    4353, 1045, 310,  3707, 0,    1252, 1283, 0,    0,    3089, 337,  2235, 161,  4231, 0,    422,
    5,    694,  1718, 0,    1853, 1475, 191,  1297, 0,    0,    2917, 4064, 0,    0,    1088, 0,
    0,    1309, 2035, 4328, 34,   0,    0,    1853, 0,    4389, 1250, 0,    1094, 1677, 1125, 1034,
    1048, 773,  2533, 769,  15,   343,  3631, 768,  539,  0,    1909, 672,  0,    460,  1732, 0,
    4192, 0,    1434, 1388, 2036, 0,    0,    2293, 0,    0,    919,  0,    1137, 1125, 0,    0,
    0,    1454, 0,    1987, 0,    1289, 77};

int MangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 4455;
    }
    return mangledkG[sum];
}

int MangledPerfectHash(const char *key)
{
    if (strlen(key) > 37)
        return 0;

    return (MangledHashG(key, mangledkT1) + MangledHashG(key, mangledkT2)) % 4455;
}

constexpr int unmangledkT1[] = {152, 85,  131, 46, 141, 140, 355, 227, 157, 95, 193, 274, 113,
                                293, 338, 312, 38, 56,  305, 7,   299, 103, 63, 14,  147, 26};
constexpr int unmangledkT2[] = {16,  254, 132, 341, 351, 23,  144, 38, 280, 327, 291, 81, 145,
                                376, 164, 258, 319, 373, 246, 29,  53, 104, 148, 299, 8,  288};
constexpr int unmangledkG[]  = {
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   341, 0,   0,   207, 0,   0,   0,   0,   156,
    107, 0,   304, 0,   0,   10,  0,   0,   0,   0,   0,   195, 0,   252, 0,   0,   0,   82,  0,
    0,   0,   178, 24,  0,   0,   0,   0,   0,   54,  318, 0,   287, 265, 10,  0,   0,   342, 0,
    0,   0,   123, 0,   0,   367, 136, 363, 0,   0,   0,   0,   0,   0,   0,   0,   46,  0,   0,
    214, 0,   0,   152, 0,   25,  0,   135, 0,   168, 0,   0,   0,   357, 92,  0,   263, 374, 0,
    91,  0,   103, 0,   157, 153, 0,   0,   0,   0,   0,   287, 32,  0,   139, 0,   104, 367, 295,
    0,   66,  0,   369, 122, 149, 0,   0,   0,   0,   0,   349, 149, 191, 282, 172, 0,   374, 0,
    0,   0,   147, 0,   357, 274, 0,   116, 50,  0,   141, 11,  0,   0,   367, 50,  224, 54,  0,
    0,   0,   172, 84,  129, 0,   253, 0,   0,   84,  0,   117, 0,   0,   0,   0,   119, 270, 295,
    23,  70,  180, 59,  217, 284, 72,  0,   0,   0,   63,  0,   237, 116, 71,  173, 4,   0,   370,
    0,   0,   0,   266, 330, 90,  132, 81,  40,  0,   378, 190, 23,  346, 0,   0,   174, 0,   120,
    0,   0,   0,   0,   0,   0,   12,  297, 249, 98,  0,   32,  0,   53,  81,  247, 150, 387, 89,
    21,  0,   183, 341, 24,  362, 0,   14,  144, 112, 26,  0,   40,  28,  44,  0,   0,   165, 182,
    0,   0,   19,  0,   0,   0,   0,   236, 209, 306, 77,  338, 196, 14,  0,   200, 251, 35,  191,
    22,  194, 0,   123, 64,  166, 0,   0,   136, 0,   0,   201, 0,   158, 0,   255, 163, 342, 73,
    0,   270, 0,   0,   0,   102, 0,   0,   181, 0,   27,  363, 0,   87,  20,  0,   385, 384, 33,
    0,   0,   129, 0,   213, 231, 74,  151, 8,   16,  244, 0,   0,   55,  5,   72,  189, 186, 0,
    17,  115, 380, 53,  351, 147, 0,   286, 0,   124, 0,   43,  0,   0,   0,   304, 240, 0,   132,
    0,   69,  185, 99,  0,   34,  70,  378, 171, 104, 208, 280, 119, 0,   261, 174, 0,   0,   167,
    6,   30,  0,   253, 215, 204, 0,   0,   154, 0,   67,  367, 122, 2,   0,   140, 193, 0,   0,
    284, 326, 0,   0,   0,   0,   0,   99};

int UnmangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 388;
    }
    return unmangledkG[sum];
}

int UnmangledPerfectHash(const char *key)
{
    if (strlen(key) > 26)
        return 0;

    return (UnmangledHashG(key, unmangledkT1) + UnmangledHashG(key, unmangledkT2)) % 388;
}

}  // namespace

namespace sh
{

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvPrime = 16777619u;

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvOffsetBasis = 0x811c9dc5u;

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvPrime =
    static_cast<size_t>(1099511628211ull);

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvOffsetBasis =
    static_cast<size_t>(0xcbf29ce484222325ull);

uint32_t ImmutableString::mangledNameHash() const
{
    return MangledPerfectHash(data());
}

uint32_t ImmutableString::unmangledNameHash() const
{
    return UnmangledPerfectHash(data());
}

}  // namespace sh