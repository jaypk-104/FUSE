﻿namespace Uno.Compiler.Core
{
    enum ErrorCode
    {
        // Unknown
        I0000,
        E0000,
        W0000,
        M0000,

        // Various
        E0001,
        I0002,
        I0003,
        I0004,
        I0005,
        I0006,
        I0007,
        I0008,
        I0009,
        I0010,
        I0011,
        I0012,
        I0013,
        I0014,
        E0015,
        E0016,
        I0017,
        I0018,
        I0019,
        I0020,
        I0021,
        I0022,
        I0023,
        I0024,
        I0025,
        I0026,
        I0027,
        I0028,
        I0029,
        E0030,
        E0031,
        E0032,
        I0033,
        I0034,
        I0035,
        I0036,
        I0037,
        I0038,
        I0039,
        I0040,
        I0041,
        I0042,
        I0043,
        I0044,
        I0045,
        E0046,
        I0047,
        I0048,
        I0049,
        I0050,
        IW0051,
        E0052,
        I0053,
        I0054,
        I0055,
        I0056,
        I0057,
        I0058,
        E0059,
        E0060,
        E0061,
        E0062,
        E0063,
        E0064,
        E0065,
        I0066,
        I0067,
        E0068,
        I0069,
        E0070,
        I0071,
        I0072,
        E0073,
        I0074,
        I0075,
        I0076,
        E0077,
        W0078,
        E0079,
        W0080,
        E0081,
        E0082,
        W0083,
        E0084,
        E0085,
        I0086,
        E0087,
        E0088,
        W0089,
        I0090,
        I0091,
        E0092,
        E0093,
        E0100,
        W0101,
        W0102,
        E0101,
        E0102,
        E0103,
        E0104,
        E0105,
        E0106,
        E0107,
        I0108,
        E0109,
        E0110,
        E0748,

        // Native build failed
        E0200,

        // Parser / Syntax errors
        E1001,
        E1002,
        E1003,
        E1004,
        E1005,
        E1006,
        E1007,
        E1008,
        E1009,
        E1010,
        E1011,
        E1012,
        E1013,
        E1014,
        E1015,
        E1016,
        E1017,
        E1018,
        E1019,
        E1020,
        E1021,
        E1022,
        E1023,
        E1024,
        E1025,
        E1026,
        E1027,
        E1028,
        E1029,
        E1030,
        E1031,
        E1032,
        E1033,
        E1034,
        E1035,
        E1036,
        E1037,
        E1038,
        E1039,
        E1040,
        E1041,
        E1042,
        E1043,
        E1044,
        E1045,
        E1046,
        E1047,
        E1048,
        E1049,
        E1050,
        E1051,
        E1052,
        E1053,
        E1054,
        E1055,
        E1056,
        E1057,
        E1058,
        E1059,
        E1060,
        E1061,
        E1062,
        E1063,
        E1064,
        E1065,
        E1066,
        E1067,
        E1068,
        E1069,
        E1070,
        E1071,
        E1072,
        E1073,
        E1074,
        E1075,
        E1076,
        E1077,
        E1078,
        E1079,
        E1080,
        E1081,
        E1082,
        E1083,
        E1084,
        E1085,
        E1086,
        E1087,
        E1088,
        E1089,
        E1090,
        E1091,
        E1092,
        E1093,
        //E1094,
        E1095,
        E1096,
        E1097,
        E1098,
        E1099,
        E1100,
        E1101,
        E1102,
        E1103,
        E1104,
        E1105,
        E1106,
        E1107,
        E1108,
        E1109,
        E1110,
        E1111,
        E1112,
        E1113,
        E1114,
        E1115,
        E1116,
        E1117,
        E1118,
        E1119,
        E1120,
        E1121,
        E1122,
        E1123,
        E1124,
        E1125,
        E1126,
        E1127,
        E1128,
        E1129,
        E1130,
        E1131,
        E1132,
        E1133,
        E1134,
        E1135,
        E1136,
        E1137,
        E1138,
        E1139,
        E1140,
        E1141,
        E1142,
        E1143,
        E1144,
        E1145,
        E1146,
        E1147,
        E1148,
        E1149,
        E1150,
        E1151,
        E1152,
        E1153,
        E1154,
        E1155,
        E1156,
        E1157,
        E1158,
        E1159,
        E1160,
        E1161,
        E1162,
        E1163,
        E1164,
        E1165,
        E1166,
        E1167,
        E1168,
        E1169,
        E1170,
        E1171,
        E1172,
        E1173,
        E1174,
        E1175,
        E1176,
        E1177,
        E1178,
        E1179,
        E1180,
        E1181,
        E1182,
        E1183,
        E1184,
        E1185,
        E1186,
        E1187,
        E1188,
        E1189,
        E1190,
        E1191,
        E1192,
        E1193,
        E1194,
        E1195,
        E1196,
        E1197,
        E1198,
        E1199,
        E1200,
        E1201,
        E1202,
        E1203,
        E1204,
        E1205,
        E1206,
        E1207,
        E1208,
        E1209,
        E1210,
        E1211,
        E1212,
        E1213,
        E1214,
        E1215,
        E1216,
        E1217,
        E1218,
        E1219,
        E1220,
        E1221,
        E1222,
        E1223,
        E1224,
        E1225,
        E1226,
        E1227,
        E1228,
        E1229,
        E1230,
        E1231,
        E1232,
        E1233,
        E1234,
        E1235,
        E1236,
        I1237,
        E1238,
        E1239,
        E1240,
        E1241,
        E1242,
        E1243,
        E1244,
        E1245,
        E1246,
        E1247,
        E1248,
        E1249,
        E1250,
        E1251,
        E1252,
        E1253,
        E1254,
        IW1255,
        E1593,
        E1661,

        // ExpressionCompiler E2xxx
        E2001,
        E2002,
        E2003,
        E2004,
        E2005,
        E2006,
        W2007,
        E2008,
        E2009,
        E2010,
        E2011,
        E2012,
        W2013,
        E2014,
        E2015,
        E2016,
        E2017,
        E2018,
        //E2019,
        E2020,
        //E2021,
        E2022,
        E2023,
        I2024,
        I2025,
        E2026,
        E2027,
        E2028,
        E2029,
        E2030,
        E2031,
        E2032,
        E2033,
        E2034,
        E2035,
        E2036,
        E2037,
        E2038,
        E2039,
        E2040,
        E2041,
        I2042,
        E2043,
        E2044,
        E2045,
        E2046,
        E2047,
        E2048,
        E2049,
        E2050,
        E2051,
        E2052,
        E2053,
        E2054,
        I2055,
        E2056,
        E2057,
        E2058,
        E2059,
        E2060,
        E2061,
        E2062,
        E2063,
        E2064,
        E2065,
        E2066,
        E2067,
        I2068,
        E2069,
        E2070,
        E2071,
        E2072,
        E2073,
        E2074,
        E2075,
        E2076,
        E2077,
        E2078,
        E2079,
        E2080,
        I2081,
        I2082,
        I2083,
        E2084,
        E2085,
        E2086,
        //E2087,
        E2088,
        E2089,
        E2090,

        // DrawCallGenerator.Trace
        E2500,
        E2501,
        E2502,
        E2503,
        E2504,
        E2505,
        E2506,
        E2507,
        E2508,

        // TypeProcessor E30xx
        E3001,
        E3002,
        E3003,
        E3004,
        W3005,
        E3006,
        E3007,
        E3008,
        E3009,
        E3010,
        E3011,
        E3012,
        E3013,
        E3014,
        E3015,
        E3016,
        E3017,
        E3018,
        I3019,
        E3020,
        E3021,
        I3022,
        E3023,
        E3024,
        E3025,
        E3026,
        E3027,
        E3028,
        W3029,
        I3030,
        I3031,
        I3032,
        I3033,
        I3034,
        I3035,
        I3036,
        I3037,
        I3038,
        E3039,
        E3040,
        E3041,
        E3042,
        E3043,
        I3044,
        I3045,
        I3046,
        I3047,
        E3048,
        I3049,

        // NameResolver E31xx
        E3101,
        E3102,
        E3103,
        E3104,
        E3105,
        E3106,
        E3107,
        E3108,
        E3109,
        E3110,
        E3111,
        E3112,
        E3113,
        E3114,
        E3115,
        E3116,
        E3117,
        E3118,
        E3119,
        E3120,
        E3121,
        E3122,
        E3123,
        E3124,
        E3125,
        E3126,
        E3127,
        E3128,
        E3129,
        E3130,
        E3131,
        E3132,
        E3133,
        E3134,
        E3135,

        // Block processor E32xx
        E3200,
        W3201,
        W3202,
        E3203,
        E3204,
        IW3205,
        I3206,
        E3207,
        E3208,
        E3209,
        E3210,
        E3211,
        E3212,
        E3213,
        E3214,
        E3215,
        E3216,
        E3217,
        E3218,
        E3219,
        E3220,
        E3221,
        E3222,
        E3223,

        // Compiler E33xx
        E3300,
        E3301,
        E3302,
        E3303,
        E3304,
        E3305,
        E3306,
        E3307,
        E3308,
        E3309,
        E3310,
        E3311,
        E3312,
        E3313,
        E3314,
        E3315,
        E3316,
        E3317,
        E3318,
        E3319,
        E3320,
        E3321,
        E3322,
        E3323,
        E3324,
        E3325,
        E3326,
        E3327,
        E3328,
        E3329,
        E3330,
        I3331,
        E3332,
        E3333,
        E3334,
        E3335,
        W3336,
        W3337,
        E3338,
        E3339,
        E3340,
        W3341,
        E3342,
        E3343,
        E3344,
        E3345,
        W3346,
        E3347,
        E3348,
        E3349,
        E3350,
        I3351,
        E3352,
        E3353,
        E3354,
        E3355,
        E3356,
        E3357,
        E3358,
        E3359,
        E3360,
        E3361,
        E3362,
        E3363,
        E3364,
        E3365,

        // Statement compiler E34xx
        E3400,
        W3401,
        E3402,
        E3403,
        E3404,
        E3405,
        E3406,
        E3407,
        E3408,
        E3409,
        E3410,
        I3411,
        E3412,
        E3413,
        E3414,
        E3415,

        // Various passes E35xx
        E3501,
        E3502,
        E3503,
        E3504,
        /*E3505,
        E3506,
        E3507,
        E3508,
        E3509,
        E3510,
        E3511,
        E3512,
        E3513,
        E3514,
        E3515,
        E3516,
        E3517,
        E3518,
        E3519,*/

        // ILVerifier E4xxxx
        E4001,
        E4002,
        E4003,
        E4004,
        E4005,
        E4006,
        E4007,
        I4008,
        E4009,
        E4010,
        E4011,
        E4012,
        E4013,
        E4014,
        E4015,
        E4016,
        E4017,
        E4018,
        E4019,
        E4020,
        E4021,
        E4022,
        E4023,
        I4024,
        I4025,
        E4026,
        E4027,
        E4028,
        E4029,
        E4030,
        E4031,
        E4032,
        E4033,
        E4034,
        I4035,
        E4036,
        E4037,
        E4038,
        E4039,
        E4040,
        I4041,
        I4042,
        I4043,
        E4044,
        E4045,
        E4046,
        I4047,
        I4048,
        I4049,
        E4050,
        E4051,
        I4052,
        I4053,
        I4054,
        I4055,
        I4056,
        I4057,
        I4058,
        I4059,
        I4060,
        E4061,
        I4062,
        I4063,
        I4064,
        E4065,
        I4066,
        I4067,
        I4068,
        E4069,
        I4070,
        I4071,
        E4072,
        I4073,
        I4074,
        E4075,
        E4076,
        E4077,
        E4078,
        E4079,
        E4080,
        E4081,
        I4082,
        E4083,
        I4084,
        E4085,
        E4086,
        E4087,
        E4088,
        E4089,
        I4090,
        I4091,
        I4092,
        E4093,
        E4094,
        E4095,
        E4096,
        E4097,
        E4098,
        E4099,
        E4100,
        E4101,
        E4102,
        E4103,
        E4104,
        E4105,
        E4106,
        E4107,
        E4108,
        E4109,
        I4110,
        E4111,
        E4112,
        I4113,
        E4114,
        E4115,
        E4116,
        E4117,
        E4118,
        I4119,
        I4120,
        E4121,
        E4122,
        E4123,
        I4124,
        I4125,
        E4126,
        E4127,
        E4128,
        E4129,
        E4130,
        E4131,
        E4132,
        E4133,
        E4134,
        E4135,
        E4136,
        E4137,
        I4138,
        W4139,
        E4140,

        // ControlFlowVerifier E45xx
        E4500,
        E4501,
        E4502,
        W4503,
        E4504,
        E4505,
        E4506,
        E4507,
        E4508,
        E4509,
        E4510,
        E4511,
        E4512,
        E4513,
        E4514,
        E4515,
        E4516,
        E4517,

        // GenericTransform E46xx,
        I4600,

        // Generator E5xxx
        E5000,
        I5001,
        E5002,
        E5003,
        E5004,
        E5005,
        I5006,
        E5007,
        E5008,
        E5009,
        E5010,
        E5011,
        E5012,
        E5013,
        E5014,
        E5015,
        I5016,
        E5017,
        IW5018,
        E5019,
        E5020,
        E5021,
        I5022,
        E5023,
        E5024,
        E5025,
        E5026,
        E5027,
        E5028,
        E5029,
        E5030,
        E5031,
        E5032,
        E5033,
        E5034,
        E5035,
        E5036,
        E5037,
        E5038,
        E5039,

        // UnoGraphicsToOpenGL.cs E60xx
        E6001,
        E6002,
        E6003,

        // JsPreprocessor E61xx
        E6100,
        E6101,
        E6102,
        E6103,
        E6104,
        I6105,
        E6106,
        E6107,
        E6108,
        E6109,
        E6110,
        E6111,
        E6112,
        E6113,
        E6114,
        E6115,
        E6116,
        E6117,
        E6118,
        E6119,
        E6120,
        E6121,
        E6122,
        E6123,

        // CilBackend E62xx
        I6200,
        I6201,
        I6202,

        // JsBackend E63xx
        W6300,

        // Bytecode backend E65xx
        I6500,

        // UX markup
        E8001,
        W8002,

        // CodeWriter E90xx
        E9001,
        E9002,
        I9003,
        W9004,
        W9005,
        E9006,
        E9007,
        E9008,

        // GlslWriter.cs E91xx
        E9101,
        E9102,
        I9103,
        I9104,
        I9105,
    }
}

