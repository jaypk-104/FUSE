var Observable = require("FuseJS/Observable");
var Alerts = require("FuseJS/Alerts");
var c_menu = Observable();

var g_DATE_DD = Observable(("0" + new Date().getDate()).slice(-2));
var g_DATE_YM = Observable(new Date().getFullYear() + "." + ("0" + (new Date().getMonth()+1)).slice(-2));
var week_eng = new Array('SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT');
var week_kor = new Array('일', '월', '화', '수', '목', '금', '토');
var week_day = week_kor[new Date().getDay()] + ', ' + week_eng[new Date().getDay()]
var g_DATE_DAY = Observable( week_day );

var Environment = require('FuseJS/Environment');
var device = Observable("Hidden");

if(Environment.ios || Environment.preview) {
    device = "Visible";
} 
var g_BP_NM_obs = Observable(g_BP_NM);
var g_USR_NM_obs = Observable(g_USR_NM);
//var g_BP_NM_obs = 'test';
// var g_USR_NM_obs = 'test';

// G_USR_ID = 'test2_1';
// G_BP_CD = 'test2';
page_name = 'menu';

/*마스터계정 일경우, 입고등록 else 물품수령*/
var master_text = Observable();
if(G_USR_ID == 'sh7785' || G_USR_ID == 'gumai' || G_USR_ID == 'kyoungwon' || G_USR_ID == 'hjkim' || G_USR_ID == 'hmaster'|| G_USR_ID == 'dmaster'|| G_USR_ID == 'smaster' || G_USR_ID == 'custom2') {
    master_text.value = "입고등록";
} else {
    master_text.value = "입고등록";
}

var menu_visible = Observable("Visible");

if(G_BP_CD == '06730' || G_BP_CD == '04516' || G_BP_CD == 'test3'|| G_BP_CD == 'test4') {  //화승케미컬, 이노폴 결재관리 hidden
    menu_visible = Observable("Collapsed");
} 

var menu_visible_210129 = Observable(""); //Collapsed

if(G_BP_CD == '06730' || G_BP_CD == 'test3') { //화승케미컬 발주관리 hidden
    menu_visible_210129 = Observable("Collapsed");
}


function btnInq(arg) {
    console.log('견적click');
    router.goto("c_inq");
}
function btnGr(arg) {
    console.log('입고click');
    router.goto("c_gr");
}
function btnAppr(arg) {
    console.log('결재click');
    router.goto("c_appr");
    page_name = 'c_appr';
}

function btnPo(arg) {
    console.log('btnPoclick');
    router.goto("c_po");
    page_name = 'c_po';
}


function backBtn() {
    console.log('here?');
    Alerts
    .confirm("확인", "로그아웃 하시겠습니까?", "YES", "NO")
    .then(function (btn) {
        if (btn == true) {
            console.log('2.main_yn? : ' + main_yn);
                router.goto("login");
                main_yn = "Y";
        }
    })
}


module.exports = {
    c_menu: c_menu,
    btnInq: btnInq,
    btnGr: btnGr,
    btnAppr: btnAppr,
    btnPo: btnPo,
    backBtn: backBtn,

    g_DATE_DD: g_DATE_DD,
    g_DATE_YM: g_DATE_YM,
    g_DATE_DAY: g_DATE_DAY,
    g_BP_NM_obs: g_BP_NM_obs,
    g_USR_NM_obs: g_USR_NM_obs,

    master_text: master_text,
    device: device,
    menu_visible: menu_visible,
    menu_visible_210129: menu_visible_210129
};