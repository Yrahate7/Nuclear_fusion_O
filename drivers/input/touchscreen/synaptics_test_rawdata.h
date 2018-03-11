#ifndef SYNAPTICS_TEST_RAWDATA_H
#define SYNAPTICS_TEST_RAWDATA_H

#define TX_NUM_TRULY  (13)
#define RX_NUM_TRULY  (25)
#define DiagonalUpperLimit_TRULY  (1100)
#define DiagonalLowerLimit_TRULY  (900)

const int16_t raw_cap_data_truly_3035[TX_NUM_TRULY][RX_NUM_TRULY*2] =
{
	{1444,2407,1374,2291,1428,2381,1368,2281,1364,2273,1379,2298,1332,2221,1342,2236,1357,2261,1326,2210,1321,2201,1363,2271,1111,1852,1107,1846,1094,1823,1078,1797,1075,1791,1076,1792,1059,1765,1060,1766,1071,1785,1070,1783,1073,1788,1037,1729,1024,1707,},
	{1370,2283,1338,2230,1339,2232,1324,2207,1304,2173,1322,2204,1306,2177,1300,2167,1306,2176,1273,2122,1277,2128,1263,2106,1194,1990,1184,1973,1203,2005,1159,1932,1165,1941,1158,1930,1150,1916,1148,1914,1157,1929,1151,1919,1156,1927,1127,1878,1117,1862,},
	{1366,2277,1329,2214,1346,2243,1318,2196,1303,2172,1309,2181,1294,2156,1282,2136,1292,2153,1262,2103,1263,2105,1249,2082,1201,2002,1195,1992,1192,1986,1171,1952,1175,1959,1162,1937,1148,1914,1155,1925,1169,1948,1168,1946,1166,1943,1134,1890,1128,1879,},
	{1366,2276,1331,2218,1339,2232,1333,2222,1299,2165,1296,2161,1285,2141,1268,2113,1283,2138,1261,2102,1257,2094,1247,2078,1208,2013,1202,2004,1221,2036,1178,1963,1176,1960,1163,1938,1167,1945,1192,1986,1152,1921,1141,1901,1147,1911,1133,1889,1124,1873,},
	{1367,2278,1331,2218,1339,2231,1325,2209,1291,2152,1292,2154,1273,2122,1268,2114,1281,2135,1251,2085,1253,2089,1244,2074,1210,2017,1208,2013,1236,2059,1191,1985,1184,1973,1175,1959,1172,1954,1188,1980,1160,1933,1146,1910,1156,1927,1135,1892,1128,1881,},
	{1355,2258,1334,2223,1338,2230,1309,2182,1280,2134,1285,2142,1267,2112,1264,2108,1266,2109,1240,2066,1248,2081,1232,2052,1211,2017,1212,2020,1244,2073,1197,1995,1193,1988,1184,1973,1190,1984,1215,2025,1163,1938,1151,1918,1156,1926,1136,1892,1135,1891,},
	{1330,2217,1317,2194,1311,2185,1303,2171,1287,2145,1287,2146,1263,2106,1259,2099,1263,2105,1238,2064,1243,2071,1225,2040,1209,2015,1232,2053,1214,2023,1214,2023,1219,2030,1228,2046,1170,1950,1179,1966,1172,1954,1159,1932,1159,1932,1138,1896,1148,1913,},
	{1318,2197,1316,2194,1306,2177,1300,2166,1286,2143,1294,2157,1261,2102,1256,2094,1266,2110,1227,2045,1228,2046,1219,2032,1211,2019,1250,2083,1217,2028,1214,2023,1206,2010,1197,1995,1176,1960,1186,1976,1180,1966,1165,1941,1169,1948,1156,1927,1157,1928,},
	{1307,2178,1297,2162,1299,2164,1292,2153,1279,2131,1281,2135,1260,2100,1252,2086,1251,2084,1218,2030,1221,2033,1212,2019,1213,2022,1220,2033,1218,2030,1198,1996,1207,2010,1198,1997,1183,1972,1190,1984,1187,1978,1170,1950,1179,1966,1177,1962,1165,1942,},
	{1302,2170,1299,2165,1304,2173,1290,2150,1282,2137,1277,2128,1258,2097,1255,2092,1257,2095,1223,2038,1225,2042,1213,2022,1228,2046,1268,2113,1229,2049,1227,2045,1223,2038,1209,2015,1196,1994,1199,1999,1197,1995,1182,1969,1193,1989,1192,1987,1173,1954,},
	{1296,2160,1287,2145,1298,2163,1291,2152,1275,2125,1273,2121,1259,2099,1253,2088,1249,2081,1224,2040,1225,2042,1213,2020,1255,2091,1255,2091,1243,2071,1229,2048,1236,2059,1221,2036,1211,2019,1213,2022,1205,2007,1199,1998,1210,2016,1200,2000,1177,1961,},
	{1293,2156,1282,2136,1296,2161,1299,2165,1267,2112,1270,2116,1250,2083,1246,2077,1240,2067,1218,2029,1217,2028,1206,2009,1298,2163,1334,2224,1261,2101,1247,2079,1259,2099,1244,2074,1239,2066,1238,2063,1224,2040,1220,2033,1231,2052,1222,2036,1214,2023,},
	{1254,2090,1237,2061,1241,2068,1224,2040,1207,2012,1203,2006,1185,1975,1179,1964,1170,1950,1146,1910,1143,1905,1129,1882,1611,2684,1434,2391,1378,2297,1336,2227,1334,2223,1315,2192,1304,2174,1297,2162,1286,2143,1277,2128,1288,2146,1286,2144,1326,2210,},
};


#define TX_NUM_WINTEK  (13)
#define RX_NUM_WINTEK  (24)
#define DiagonalUpperLimit_WINTEK  (1100)
#define DiagonalLowerLimit_WINTEK  (900)

const int16_t raw_cap_data_wintek_9093[TX_NUM_WINTEK][RX_NUM_WINTEK*2] =
{
	{1438,2396,1331,2218,1325,2208,1278,2130,1265,2109,1247,2078,1234,2056,1218,2030,1200,2000,1192,1986,1185,1975,1240,2066, 968,1614, 965,1609, 946,1576, 940,1566, 932,1553, 920,1534, 905,1508, 926,1544, 914,1524, 908,1513, 888,1480, 831,1385,},
	{1326,2210,1284,2140,1250,2083,1233,2055,1216,2026,1193,1989,1180,1966,1165,1941,1146,1910,1133,1889,1118,1864,1110,1850,1013,1688,1011,1685, 991,1651,1014,1690, 983,1638, 981,1635, 958,1596, 975,1625, 967,1611, 961,1601, 943,1571, 899,1498,},
	{1292,2153,1263,2105,1235,2058,1219,2030,1202,2003,1184,1973,1166,1944,1150,1916,1135,1891,1118,1864,1101,1835,1087,1811,1021,1703,1024,1706,1003,1671, 997,1661, 989,1649, 981,1635, 968,1614, 986,1644, 980,1634, 970,1616, 954,1590, 952,1586,},
	{1271,2119,1253,2088,1225,2040,1209,2015,1187,1979,1172,1953,1154,1923,1141,1901,1121,1868,1109,1849,1086,1810,1067,1778,1024,1706,1025,1708,1010,1683,1020,1700, 998,1664, 999,1665, 995,1658, 977,1628, 963,1605, 964,1606, 964,1606, 996,1660,},
	{1256,2094,1250,2083,1219,2030,1200,2000,1182,1970,1168,1946,1148,1913,1131,1885,1117,1861,1100,1833,1084,1806,1069,1781,1040,1733,1043,1739,1033,1721,1003,1674,1031,1719, 985,1641, 979,1631, 978,1630, 969,1615, 967,1611, 972,1620,1016,1695,},
	{1249,2081,1235,2059,1217,2028,1199,1999,1185,1975,1162,1936,1143,1905,1126,1876,1115,1858,1097,1828,1079,1798,1060,1766,1061,1769,1037,1728,1046,1743,1016,1694,1007,1679, 998,1664, 988,1646, 994,1656, 982,1636, 978,1630, 986,1644,1028,1714,},
	{1247,2079,1244,2074,1217,2028,1196,1994,1181,1968,1168,1946,1154,1924,1133,1888,1117,1861,1095,1825,1081,1801,1065,1775,1048,1746,1052,1753,1040,1734,1053,1755,1028,1714,1042,1736,1051,1751,1011,1685,1000,1666, 995,1659,1003,1671,1011,1686,},
	{1245,2075,1244,2073,1212,2020,1199,1998,1185,1975,1169,1949,1151,1918,1131,1885,1117,1861,1095,1825,1080,1800,1060,1766,1059,1765,1065,1775,1051,1751,1040,1733,1032,1720,1025,1708,1011,1686,1016,1695,1008,1681,1008,1681,1019,1698,1064,1773,},
	{1248,2080,1246,2076,1221,2035,1202,2004,1186,1976,1173,1955,1151,1919,1127,1879,1115,1859,1093,1821,1081,1801,1055,1758,1113,1855,1077,1795,1077,1795,1054,1756,1046,1743,1041,1735,1028,1713,1030,1716,1021,1704,1021,1704,1034,1724,1094,1824,},
	{1252,2086,1250,2083,1221,2035,1206,2010,1193,1989,1175,1959,1156,1926,1133,1888,1118,1864,1098,1830,1082,1804,1056,1760,1109,1849,1102,1836,1085,1809,1070,1783,1064,1774,1057,1761,1048,1746,1050,1750,1040,1734,1043,1738,1057,1761,1110,1850,},
	{1250,2083,1244,2073,1215,2025,1202,2003,1187,1978,1166,1943,1146,1910,1130,1884,1112,1854,1097,1828,1078,1796,1052,1754,1124,1874,1127,1878,1104,1840,1094,1824,1121,1868,1076,1794,1069,1781,1070,1784,1058,1764,1061,1769,1070,1784,1078,1796,},
	{1241,2069,1244,2073,1209,2015,1199,1999,1182,1970,1161,1935,1140,1900,1122,1870,1108,1846,1089,1815,1068,1780,1043,1738,1157,1929,1139,1899,1122,1870,1111,1851,1106,1843,1096,1826,1086,1810,1088,1814,1081,1801,1080,1800,1088,1814,1061,1769,},
	{1204,2006,1198,1996,1165,1941,1151,1918,1129,1881,1105,1841,1085,1809,1067,1779,1046,1744,1027,1711,1003,1674, 981,1635,1562,2604,1316,2193,1234,2056,1204,2006,1185,1975,1169,1948,1151,1918,1152,1920,1146,1910,1148,1914,1172,1954,1205,2007,},
};


#define TX_NUM_TPK  (15)
#define RX_NUM_TPK  (28)
#define DiagonalUpperLimit_TPK  (1100)
#define DiagonalLowerLimit_TPK  (900)

const int16_t raw_cap_data_tpk[TX_NUM_TPK][RX_NUM_TPK*2] =
{
	//update base line data, 2013/12/22
    //update base line data, 2013/12/16
    //update base line data, 2013/11/25
	{1744,2908,1703,2839,1688,2814,1677,2795,1680,2801,1672,2787,1662,2770,1660,2767,1652,2754,1645,2741,1635,2725,1630,2716,1624,2707,1634,2723,1436,2394,1416,2359,1406,2344,1401,2335,1390,2317,1383,2305,1376,2293,1366,2276,1359,2264,1353,2254,1346,2243,1346,2244,1326,2210,1302,2170,}, 
	{1687,2811,1663,2772,1644,2740,1628,2714,1624,2707,1613,2688,1601,2669,1598,2664,1598,2663,1578,2630,1567,2611,1558,2597,1553,2589,1547,2579,1487,2478,1476,2460,1467,2446,1461,2435,1454,2424,1449,2415,1443,2405,1432,2387,1428,2379,1423,2371,1417,2361,1419,2364,1400,2333,1451,2418,}, 
	{1668,2780,1655,2759,1639,2731,1624,2707,1619,2698,1609,2681,1599,2665,1593,2656,1583,2638,1573,2622,1561,2602,1553,2588,1556,2594,1540,2566,1494,2490,1483,2471,1475,2459,1470,2450,1464,2441,1459,2431,1452,2420,1442,2404,1436,2394,1431,2386,1424,2374,1429,2381,1415,2358,1402,2337,}, 
	{1655,2759,1649,2749,1635,2725,1619,2698,1617,2694,1607,2678,1597,2662,1592,2654,1580,2633,1570,2616,1558,2597,1549,2581,1542,2571,1535,2558,1499,2498,1489,2482,1480,2468,1476,2460,1470,2449,1465,2442,1460,2432,1448,2414,1441,2402,1446,2410,1431,2385,1433,2389,1417,2362,1449,2415,}, 
	{1637,2729,1640,2733,1626,2710,1625,2708,1615,2692,1606,2676,1595,2659,1591,2651,1579,2632,1571,2619,1559,2599,1552,2587,1545,2575,1537,2561,1509,2514,1498,2497,1490,2483,1485,2475,1478,2463,1474,2456,1469,2448,1457,2428,1450,2417,1447,2411,1441,2402,1445,2408,1419,2365,1446,2410,}, 
	{1631,2718,1631,2718,1619,2699,1609,2681,1610,2683,1601,2668,1589,2649,1580,2634,1570,2617,1560,2600,1550,2583,1543,2572,1536,2561,1533,2555,1511,2518,1500,2499,1493,2489,1487,2478,1491,2485,1475,2459,1470,2449,1457,2429,1451,2418,1448,2414,1443,2404,1446,2410,1411,2352,1445,2408,}, 
	{1628,2714,1626,2709,1615,2692,1604,2673,1604,2674,1605,2675,1583,2639,1575,2624,1562,2604,1554,2589,1544,2573,1537,2562,1530,2549,1520,2534,1511,2519,1499,2499,1492,2487,1487,2478,1481,2468,1476,2460,1469,2448,1457,2428,1451,2419,1449,2415,1443,2405,1445,2409,1410,2349,1481,2468,}, 
	{1626,2710,1623,2705,1612,2687,1601,2669,1599,2665,1589,2648,1578,2630,1571,2618,1559,2598,1551,2584,1541,2568,1543,2571,1525,2542,1517,2528,1515,2525,1505,2508,1497,2495,1490,2483,1487,2478,1479,2466,1473,2454,1461,2435,1456,2427,1454,2423,1447,2412,1449,2416,1413,2354,1401,2334,}, 
	{1622,2703,1616,2694,1608,2679,1595,2659,1592,2653,1580,2633,1569,2615,1563,2605,1553,2589,1545,2574,1542,2571,1525,2542,1517,2528,1509,2515,1515,2526,1504,2507,1495,2492,1490,2483,1484,2473,1477,2461,1470,2450,1460,2433,1455,2424,1452,2419,1445,2408,1449,2415,1412,2354,1443,2404,}, 
	{1629,2714,1615,2691,1606,2676,1593,2654,1591,2651,1580,2633,1566,2610,1561,2601,1550,2584,1542,2570,1529,2549,1522,2536,1513,2522,1502,2503,1522,2536,1508,2512,1518,2530,1494,2489,1513,2521,1480,2467,1474,2457,1464,2440,1459,2431,1454,2424,1448,2413,1452,2420,1417,2362,1454,2424,}, 
	{1619,2698,1622,2703,1601,2669,1589,2649,1589,2648,1577,2629,1565,2608,1558,2597,1547,2579,1537,2561,1526,2543,1520,2534,1511,2518,1499,2498,1527,2546,1514,2523,1505,2509,1499,2498,1493,2488,1487,2479,1481,2468,1471,2451,1466,2443,1461,2435,1455,2425,1459,2431,1424,2373,1480,2467,}, 
	{1615,2692,1608,2680,1593,2656,1583,2638,1579,2632,1567,2612,1565,2609,1549,2581,1538,2563,1529,2548,1517,2528,1510,2517,1502,2503,1491,2486,1530,2550,1516,2526,1506,2511,1498,2497,1496,2493,1488,2479,1481,2468,1470,2450,1463,2439,1462,2436,1456,2427,1459,2431,1436,2393,1531,2551,}, 
	{1612,2687,1603,2672,1590,2651,1580,2634,1588,2647,1566,2611,1555,2592,1548,2580,1538,2563,1527,2546,1516,2527,1509,2516,1501,2502,1493,2489,1544,2574,1526,2544,1516,2527,1509,2515,1503,2505,1498,2497,1491,2486,1480,2466,1473,2454,1469,2449,1464,2440,1468,2447,1451,2419,1443,2405,}, 
	{1608,2680,1600,2666,1589,2648,1578,2630,1574,2624,1565,2608,1553,2588,1547,2578,1535,2558,1527,2544,1516,2526,1506,2510,1499,2499,1500,2501,1606,2676,1597,2662,1557,2596,1561,2601,1541,2568,1522,2536,1509,2516,1500,2500,1493,2488,1488,2480,1483,2471,1487,2478,1465,2442,1462,2437,}, 
	{1576,2627,1565,2608,1551,2585,1539,2564,1535,2559,1523,2538,1509,2515,1499,2498,1485,2475,1475,2458,1462,2436,1452,2420,1443,2404,1440,2400,1897,3161,1755,2926,1702,2836,1670,2783,1645,2741,1637,2728,1612,2686,1593,2655,1583,2638,1574,2624,1565,2608,1567,2612,1534,2557,1513,2522,}, 
};


#define TX_NUM_YOUNGFAST  (15)
#define RX_NUM_YOUNGFAST  (28)
#define DiagonalUpperLimit_YOUNGFAST  (1100)
#define DiagonalLowerLimit_YOUNGFAST  (900)

const int16_t raw_cap_data_youngfast[TX_NUM_YOUNGFAST][RX_NUM_YOUNGFAST*2] =
{
	{1874,3123,1837,3062,1816,3027,1791,2985,1770,2949,1750,2917,1733,2888,1716,2859,1698,2830,1696,2826,1665,2775,1655,2758,1625,2708,1680,2800,1485,2475,1555,2592,1530,2551,1522,2537,1505,2509,1502,2503,1485,2476,1479,2465,1469,2448,1465,2442,1459,2432,1456,2426,1458,2430,1367,2279,},
	{1880,3133,1844,3074,1824,3040,1802,3003,1781,2968,1761,2934,1744,2906,1725,2875,1707,2845,1691,2818,1674,2790,1656,2760,1636,2726,1688,2814,1509,2516,1570,2616,1546,2577,1538,2563,1520,2534,1516,2527,1500,2500,1494,2490,1483,2472,1479,2465,1474,2456,1471,2451,1474,2456,1387,2312,},
	{1870,3117,1843,3071,1822,3036,1798,2996,1776,2960,1756,2927,1739,2899,1721,2868,1703,2838,1719,2865,1670,2782,1651,2752,1633,2721,1666,2777,1519,2531,1568,2613,1546,2577,1538,2564,1519,2531,1516,2526,1499,2499,1493,2488,1483,2471,1479,2466,1472,2454,1469,2448,1469,2449,1383,2304,},
	{1865,3108,1843,3071,1820,3033,1797,2996,1775,2958,1754,2924,1746,2911,1719,2865,1702,2836,1709,2849,1665,2774,1647,2745,1628,2714,1653,2754,1529,2548,1570,2617,1549,2582,1540,2568,1522,2536,1518,2530,1502,2503,1494,2490,1484,2474,1480,2467,1475,2458,1472,2453,1473,2455,1395,2326,},
	{1857,3096,1841,3069,1819,3031,1796,2993,1774,2956,1754,2923,1736,2894,1727,2878,1699,2832,1708,2846,1661,2769,1644,2741,1628,2713,1640,2733,1541,2568,1571,2618,1551,2585,1543,2572,1523,2538,1519,2532,1503,2504,1497,2495,1487,2479,1484,2473,1478,2464,1476,2460,1477,2461,1403,2339,},
	{1863,3104,1838,3064,1817,3028,1793,2988,1771,2952,1751,2919,1734,2890,1715,2859,1695,2826,1692,2819,1656,2761,1640,2733,1624,2706,1625,2708,1551,2584,1571,2618,1552,2586,1542,2571,1523,2539,1520,2534,1504,2506,1498,2497,1489,2481,1485,2475,1480,2466,1477,2461,1477,2462,1409,2349,},
	{1865,3109,1838,3063,1813,3022,1799,2998,1769,2948,1748,2914,1730,2884,1712,2853,1691,2819,1672,2786,1652,2753,1636,2727,1620,2700,1610,2683,1562,2602,1571,2618,1553,2588,1544,2573,1525,2541,1523,2538,1507,2512,1501,2501,1490,2484,1487,2479,1483,2471,1480,2466,1479,2465,1417,2362,},
	{1867,3111,1836,3061,1813,3022,1790,2984,1776,2960,1747,2911,1728,2879,1708,2847,1688,2813,1668,2780,1648,2746,1632,2720,1619,2698,1598,2664,1575,2625,1574,2623,1556,2594,1547,2579,1529,2549,1527,2545,1511,2518,1504,2508,1496,2493,1492,2487,1487,2478,1483,2471,1481,2468,1418,2363,},
	{1866,3110,1843,3071,1814,3024,1789,2981,1766,2943,1744,2908,1725,2875,1705,2842,1684,2807,1665,2775,1644,2740,1629,2716,1618,2697,1588,2647,1588,2647,1575,2625,1559,2598,1551,2585,1535,2558,1531,2552,1515,2526,1507,2512,1498,2497,1496,2493,1490,2484,1486,2477,1486,2477,1434,2389,},
	{1864,3107,1835,3058,1819,3031,1788,2979,1765,2942,1744,2906,1724,2873,1704,2840,1684,2807,1665,2775,1644,2740,1630,2716,1618,2697,1579,2632,1604,2673,1580,2633,1565,2608,1557,2596,1539,2565,1535,2559,1521,2535,1514,2523,1504,2507,1501,2501,1496,2493,1492,2486,1494,2489,1446,2410,},
	{1866,3110,1834,3057,1829,3048,1788,2980,1764,2941,1743,2904,1724,2873,1704,2840,1684,2807,1666,2776,1645,2741,1632,2720,1621,2702,1571,2619,1620,2700,1585,2642,1572,2619,1562,2604,1542,2571,1540,2567,1525,2541,1519,2531,1509,2516,1507,2511,1502,2503,1500,2499,1500,2501,1466,2443,},
	{1871,3118,1836,3060,1811,3018,1788,2980,1765,2942,1745,2908,1725,2874,1705,2842,1685,2809,1677,2796,1647,2745,1633,2722,1631,2718,1563,2605,1639,2731,1594,2656,1580,2633,1570,2616,1550,2583,1548,2580,1531,2551,1524,2541,1516,2527,1513,2522,1510,2516,1507,2512,1516,2526,1469,2448,},
	{1877,3128,1836,3059,1820,3033,1789,2981,1766,2943,1744,2906,1725,2875,1706,2843,1685,2809,1666,2777,1646,2743,1632,2721,1623,2705,1552,2586,1652,2753,1597,2661,1586,2643,1574,2623,1556,2594,1554,2589,1536,2560,1531,2551,1522,2536,1529,2549,1517,2529,1515,2524,1513,2522,1474,2456,},
	{1880,3134,1837,3062,1811,3019,1790,2984,1766,2944,1744,2907,1726,2876,1706,2843,1684,2807,1666,2777,1646,2743,1632,2721,1625,2708,1542,2571,1674,2790,1609,2681,1592,2653,1583,2639,1565,2608,1562,2603,1545,2575,1540,2566,1532,2553,1530,2550,1528,2546,1524,2540,1534,2556,1494,2490,},
	{1930,3216,1821,3035,1800,3001,1772,2953,1752,2920,1727,2879,1709,2849,1688,2814,1667,2779,1649,2748,1629,2715,1617,2695,1608,2681,1517,2529,1683,2805,1591,2652,1585,2641,1573,2622,1556,2593,1553,2588,1538,2563,1541,2569,1524,2540,1524,2539,1518,2530,1515,2526,1515,2524,1495,2492,},
};

#endif


