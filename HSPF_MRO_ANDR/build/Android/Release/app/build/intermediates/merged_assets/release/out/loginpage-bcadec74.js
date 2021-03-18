var Observable = require("FuseJS/Observable");
var Alerts = require("FuseJS/Alerts");

var login_flag1 = Observable();
var login_flag2 = Observable("false");
var login_id = Observable("");
var login_pw = Observable("");
var auto_login = Observable("false");

var menu_id = Observable("c_gr");

var g_DATE_DD = Observable(("0" + new Date().getDate()).slice(-2));
var g_DATE_YM = Observable(new Date().getFullYear() + "." + ("0" + (new Date().getMonth() + 1)).slice(-2));
var week_eng = new Array('SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT');
var week_kor = new Array('일', '월', '화', '수', '목', '금', '토');
var week_day = week_kor[new Date().getDay()] + ', ' + week_eng[new Date().getDay()]
var g_DATE_DAY = Observable(week_day);

//var url = "http://123.142.124.166:8083/Fuse_Main.jsp";
var url = "http://123.142.124.161:8080/Fuse_Main.jsp";

main_yn = "Y";
var exit = Observable(false);

var hasStored = Observable(false);
var Storage = require("FuseJS/Storage");
var SAVENAME = "localStorage.json";


debug_log("Js initialized");

Storage.read(SAVENAME).then(function(content) {
    var data = JSON.parse(content);
    console.log('storage:::::::::::::' + data.usr_id + '///' + data.usr_pw + data.auto);

    if(data.usr_id != undefined && data.usr_pw != undefined) {
        login_id.value = data.usr_id;
        login_pw.value = data.usr_pw;
        auto_login.value = data.auto;
    }

}, function(error) {
});
 
function saveUser(id, pw, auto) {
    console.log('input:::::::::::::' + id + '/' + pw  +'/'+ auto);
    
    var storeObject = {usr_id: id, usr_pw: pw, auto: auto} ;

    Storage.deleteSync(SAVENAME);
    Storage.write(SAVENAME, JSON.stringify(storeObject));
    hasStored.value = true;

}

function loginClick(arg) {
    if (login_id.value == '') {
        Alerts.alert("확인", "아이디를 입력하세요.", "NO").then(function (x) {});
        login_flag1.value = "false";
    } else if (login_pw.value == '') {
        Alerts.alert("확인", "패스워드를 입력하세요.", "NO").then(function (x) {});
        login_flag1.value = "false";
    } else {
        login_flag1.value = "true";
        
        main_yn = "N"; //메인화면 OUT

        var status = 0;
        var response_ok = false;

        var data = {
            V_TYPE: 'LOGIN',
            V_USR_ID: login_id.value,
            V_PASSWORD: login_pw.value
        };

        fetch(url, {
                method: 'POST',
                headers: {
                    "Content-type": "application/json; charset=utf-8"
                },
                body: JSON.stringify(data)
            })
            .then(function (response) {

                status = response.status; // Get the HTTP status code
                response_ok = response.ok; // Is response.status in the 200-range?

                console.log(status);
                console.log(response_ok);

                if (status == 500) {
                    console.log("Login Failed");
                    login_flag1.value = "false";
                    login_flag2.value = "false";
                } else {
                    console.log("Login Success");
                    return response.json();
                }

            })
            .then(function (responseObject) {
                var res = JSON.stringify(responseObject);
                var data = JSON.parse(res);

                if (data.FLAG == 'SUCCESS') {
                    login_flag1.value = "true";
                    login_flag2.value = "true";

                    g_BP_NM = data.BP_NM;
                    g_USR_NM = data.USR_NM;

                    G_USR_ID = data.USR_ID;
                    G_BP_CD = data.BP_CD;

                    if (data.MENU_CD == 'admin') {
                        menu_id.value = "a_menu";
                    } else if (data.MENU_CD == 'custom') {
                        menu_id.value = "c_menu";
                        // router.goto("c_menu");
                    } else if (data.MENU_CD == 'supplier') {
                        menu_id.value = "s_inq01";
                    } else {
                        menu_id.value = "c_menu";
                        
                    }

                    /*자동완성*/
                    console.log('input: id value: ' + login_id.value);
                    console.log('input: pw value: ' + login_pw.value);
                    console.log('input: autologin value: ' + auto_login.value);

                    if(auto_login.value == true || auto_login.value == 'true') {
                        saveUser(login_id.value, login_pw.value, 'true');
                    } else {
                        saveUser(undefined, undefined, 'false');
                    }

                } else {
                    Alerts.alert("확인", "아이디 혹은 비밀번호가 일치하지 않습니다.", "확인").then(function (x) {});
                    login_flag1.value = "false";
                    login_flag2.value = "false";
                }

                test = 'test';
            })
            .catch(function (err) {
                console.log("catch Error : " + err);
                console.log("Login Failed.");
            });


    }

}

function SHA256(s) {

    var chrsz = 8;
    var hexcase = 0;

    function safe_add(x, y) {
        var lsw = (x & 0xFFFF) + (y & 0xFFFF);
        var msw = (x >> 16) + (y >> 16) + (lsw >> 16);
        return (msw << 16) | (lsw & 0xFFFF);
    }

    function S(X, n) {
        return (X >>> n) | (X << (32 - n));
    }

    function R(X, n) {
        return (X >>> n);
    }

    function Ch(x, y, z) {
        return ((x & y) ^ ((~x) & z));
    }

    function Maj(x, y, z) {
        return ((x & y) ^ (x & z) ^ (y & z));
    }

    function Sigma0256(x) {
        return (S(x, 2) ^ S(x, 13) ^ S(x, 22));
    }

    function Sigma1256(x) {
        return (S(x, 6) ^ S(x, 11) ^ S(x, 25));
    }

    function Gamma0256(x) {
        return (S(x, 7) ^ S(x, 18) ^ R(x, 3));
    }

    function Gamma1256(x) {
        return (S(x, 17) ^ S(x, 19) ^ R(x, 10));
    }

    function core_sha256(m, l) {

        var K = new Array(0x428A2F98, 0x71374491, 0xB5C0FBCF, 0xE9B5DBA5, 0x3956C25B, 0x59F111F1,
            0x923F82A4, 0xAB1C5ED5, 0xD807AA98, 0x12835B01, 0x243185BE, 0x550C7DC3,
            0x72BE5D74, 0x80DEB1FE, 0x9BDC06A7, 0xC19BF174, 0xE49B69C1, 0xEFBE4786,
            0xFC19DC6, 0x240CA1CC, 0x2DE92C6F, 0x4A7484AA, 0x5CB0A9DC, 0x76F988DA,
            0x983E5152, 0xA831C66D, 0xB00327C8, 0xBF597FC7, 0xC6E00BF3, 0xD5A79147,
            0x6CA6351, 0x14292967, 0x27B70A85, 0x2E1B2138, 0x4D2C6DFC, 0x53380D13,
            0x650A7354, 0x766A0ABB, 0x81C2C92E, 0x92722C85, 0xA2BFE8A1, 0xA81A664B,
            0xC24B8B70, 0xC76C51A3, 0xD192E819, 0xD6990624, 0xF40E3585, 0x106AA070,
            0x19A4C116, 0x1E376C08, 0x2748774C, 0x34B0BCB5, 0x391C0CB3, 0x4ED8AA4A,
            0x5B9CCA4F, 0x682E6FF3, 0x748F82EE, 0x78A5636F, 0x84C87814, 0x8CC70208,
            0x90BEFFFA, 0xA4506CEB, 0xBEF9A3F7, 0xC67178F2);

        var HASH = new Array(0x6A09E667, 0xBB67AE85, 0x3C6EF372, 0xA54FF53A, 0x510E527F, 0x9B05688C, 0x1F83D9AB, 0x5BE0CD19);

        var W = new Array(64);
        var a, b, c, d, e, f, g, h, i, j;
        var T1, T2;

        m[l >> 5] |= 0x80 << (24 - l % 32);
        m[((l + 64 >> 9) << 4) + 15] = l;

        for (var i = 0; i < m.length; i += 16) {
            a = HASH[0];
            b = HASH[1];
            c = HASH[2];
            d = HASH[3];
            e = HASH[4];
            f = HASH[5];
            g = HASH[6];
            h = HASH[7];

            for (var j = 0; j < 64; j++) {
                if (j < 16) W[j] = m[j + i];
                else W[j] = safe_add(safe_add(safe_add(Gamma1256(W[j - 2]), W[j - 7]), Gamma0256(W[j - 15])), W[j - 16]);

                T1 = safe_add(safe_add(safe_add(safe_add(h, Sigma1256(e)), Ch(e, f, g)), K[j]), W[j]);
                T2 = safe_add(Sigma0256(a), Maj(a, b, c));

                h = g;
                g = f;
                f = e;
                e = safe_add(d, T1);
                d = c;
                c = b;
                b = a;
                a = safe_add(T1, T2);
            }

            HASH[0] = safe_add(a, HASH[0]);
            HASH[1] = safe_add(b, HASH[1]);
            HASH[2] = safe_add(c, HASH[2]);
            HASH[3] = safe_add(d, HASH[3]);
            HASH[4] = safe_add(e, HASH[4]);
            HASH[5] = safe_add(f, HASH[5]);
            HASH[6] = safe_add(g, HASH[6]);
            HASH[7] = safe_add(h, HASH[7]);
        }
        return HASH;
    }

    function str2binb(str) {
        var bin = Array();
        var mask = (1 << chrsz) - 1;
        for (var i = 0; i < str.length * chrsz; i += chrsz) {
            bin[i >> 5] |= (str.charCodeAt(i / chrsz) & mask) << (24 - i % 32);
        }
        return bin;
    }

    function Utf8Encode(string) {
        string = string.replace(/\r\n/g, "\n");
        var utftext = "";

        for (var n = 0; n < string.length; n++) {

            var c = string.charCodeAt(n);

            if (c < 128) {
                utftext += String.fromCharCode(c);
            } else if ((c > 127) && (c < 2048)) {
                utftext += String.fromCharCode((c >> 6) | 192);
                utftext += String.fromCharCode((c & 63) | 128);
            } else {
                utftext += String.fromCharCode((c >> 12) | 224);
                utftext += String.fromCharCode(((c >> 6) & 63) | 128);
                utftext += String.fromCharCode((c & 63) | 128);
            }

        }

        return utftext;
    }

    function binb2hex(binarray) {
        var hex_tab = hexcase ? "0123456789ABCDEF" : "0123456789abcdef";
        var str = "";
        for (var i = 0; i < binarray.length * 4; i++) {
            str += hex_tab.charAt((binarray[i >> 2] >> ((3 - i % 4) * 8 + 4)) & 0xF) +
                hex_tab.charAt((binarray[i >> 2] >> ((3 - i % 4) * 8)) & 0xF);
        }
        return str;
    }

    s = Utf8Encode(s);
    return binb2hex(core_sha256(str2binb(s), s.length * chrsz));

}

function backBtn_main(data) {
    console.log('111111111111.main_yn은?' + main_yn);
    console.log(JSON.stringify(data));

    if(main_yn == 'Y') {
        Alerts
        .confirm("확인", "종료 하시겠습니까?", "YES", "NO")
        .then(function (btn) {
            if (btn == true) {
                console.log('APP EXIT@@@@@@@@@@@@@@@@@@@@@@@@');
                exit.value = true;
                throw new Error("process(): Argument must be an array.");
            }
        })
    }
}

module.exports = {
    loginClick: loginClick,

    login_flag1: login_flag1,
    login_flag2: login_flag2,
    login_id: login_id,
    login_pw: login_pw,
    auto_login: auto_login,
    menu_id: menu_id,
    g_DATE_DD: g_DATE_DD,
    g_DATE_YM: g_DATE_YM,

    backBtn_main: backBtn_main,
    exit: exit,

    saveUser: saveUser,
    hasStored: hasStored

};