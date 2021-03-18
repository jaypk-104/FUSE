var Observable = require("FuseJS/Observable");
var Lifecycle = require('FuseJS/Lifecycle');
var Alerts = require("FuseJS/Alerts");
var vibration = require('FuseJS/Vibration');
var deviceToast = require("deviceToast");

var Environment = require('FuseJS/Environment');
var device = Observable("Hidden");
if(Environment.ios || Environment.preview) {
    device = "Visible";
} 
var items2 = Observable();

var ITEM_CD = Observable();
var ITEM_NM = Observable();
var SPEC = Observable();
var MAKER = Observable();
var UNIT = Observable();
var QTY = Observable();
var REMARK = Observable();

var inq_hope_dt = Observable();
var dtpk1_visible = Observable(false);
var dtpk1_visible_ios = Observable(false);

var items2 = Observable();

var cal_date = Observable();

//var url = "http://123.142.124.166:8080/Fuse_Customer_INQ.jsp";
var url = "http://123.142.124.161:8080/Fuse_Customer_INQ.jsp";

var camera = require('FuseJS/Camera');
var cameraRoll = require("FuseJS/CameraRoll");
var ImageTools = require('FuseJS/ImageTools');

var images = Observable();
var imgFileName = Observable();
var imgFilePc = Observable();


var img_visible = Observable(false);
var img_url = Observable();
var loading_visible = Observable(false);

var isBusy = Observable(false);

var temp_ios_date = Observable("default");

function getDate(now) {
    var year = now.getFullYear(); //yyyy
    var month = (1 + now.getMonth()); //M
    month = month >= 10 ?
        month :
        '0' + month; //month 두자리로 저장
    var day = now.getDate(); //d
    day = day >= 10 ?
        day :
        '0' + day; //day 두자리로 저장

    return year + '-' + month + '-' + day;
}

function sendBtn(arg) {
    var jsonArray = new Array();
    var flag = '';
    var msg = '';
    for (var i = 0; i < items2.length; i++) {
        var jsonInfo = new Object();
        var item = items2.getAt(i);

        if(item.ITEM_NM.value == '' || item.ITEM_NM.value == undefined || item.ITEM_NM.value == null) {
            flag = 'F';
            msg = '품명을 입력하세요';
            break;
        }
        else if(item.SPEC.value == '' || item.SPEC.value == undefined || item.SPEC.value == null) {
            flag = 'F';
            msg = '규격을 입력하세요';
            break;
        }
        else if(item.MAKER.value == '' || item.MAKER.value == undefined || item.MAKER.value == null) {
            flag = 'F';
            msg = '제조사를 입력하세요';
            break;
        }
        else if(item.UNIT.value == '' || item.UNIT.value == undefined || item.UNIT.value == null) {
            flag = 'F';
            msg = '단위를 입력하세요';
            break;
        }
        else if(item.QTY.value == '' || item.QTY.value == undefined || item.QTY.value == null || item.QTY.value == 0) {
            flag = 'F';
            msg = '견적수량을 입력하세요';
            break;
        } else {
            flag = 'T';
            jsonInfo.ITEM_CD = item.ITEM_CD.value;
            jsonInfo.ITEM_NM = item.ITEM_NM.value;
            jsonInfo.SPEC = item.SPEC.value;
            jsonInfo.MAKER = item.MAKER.value;
            jsonInfo.UNIT = item.UNIT.value;
            jsonInfo.QTY = item.QTY.value;
            jsonInfo.REMARK = item.REMARK.value;
            jsonInfo.INQ_HOPE_DT = inq_hope_dt.value;
            jsonInfo.FILE_NM = item.imgFileName.value;
            jsonInfo.FILE_NM_PC = item.imgFileName.value;

            jsonArray.push(jsonInfo);
        }

        
    }

    if(flag == 'F') {
        //견적제출에 누락된 데이터가 있을 경우 진입
        console.log('msg:: ' + msg);
        Alerts
                    .alert("확인", msg, "OK")
                    .then(function (x) {});
    } else {
        var data = {
            V_TYPE: 'C_INQ_C',
            V_USR_ID: G_USR_ID,
            V_BP_CD: G_BP_CD,
            V_DATA: jsonArray
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
                    console.log("DB Failed");
                } else {
                    console.log("DB Success");
                    return response.json();
                }
    
            })
            .then(function (responseObject) {
                console.log(responseObject);
                items2.clear();
                vibration.vibrate(0.8);
                deviceToast.ToastIt('견적의뢰완료');
    
            })
            .catch(function (err) {
                console.log("catch Error : " + err);
                console.log("DB Failed.");
                Alerts
                    .alert("Error", "Network Error : " + err, "OK")
                    .then(function (x) {});
            });
    }
    

}

function addBtn() {
    items2.add({
        ITEM_CD: Observable(),
        ITEM_NM: Observable(),
        SPEC: Observable(),
        MAKER: Observable(),
        UNIT: Observable(),
        QTY: Observable(),
        REMARK: Observable(),
        imgFileName: Observable(),
    });
}

function delBtn(arg) {
    items2.remove(arg.data);
}

function getFormatDate(date) {

    if (typeof (date) == 'object') {
        var year = date.getFullYear(); //yyyy
        var month = (1 + date.getMonth()); //M
        month = month >= 10 ?
            month :
            '0' + month; //month 두자리로 저장
        var day = date.getDate(); //d
        day = day >= 10 ?
            day :
            '0' + day; //day 두자리로 저장

        return year + '-' + month + '-' + day;
    } else if (typeof (date) == 'string') {
        var y = date.substr(0, 4);
        var m = date.substr(4, 2);
        var d = date.substr(6, 2);

        return date;
    }
}
var now3 = new Date();
now3.setDate(now3.getDate() + 3);

//var someDate = Observable(getFormatDate(new Date()));
var someDate = Observable(getFormatDate(now3));

someDate.onValueChanged(module, function (date) {
    var new_dt = date;
    inq_hope_dt.value = getFormatDate(new_dt); //new_dt;
    dtpk1_visible.value = false;
});

function clk_inq_dt() {
    if(Environment.ios ) {
        dtpk1_visible_ios.value = true;
    } else {
        /*안드로이드 캘린더*/
        dtpk1_visible.value = true;
    }
}

function camBtn(arg) {
    camera
        .takePicture(720, 1280)
        .then(function (image) {
            isBusy.value=true;

            ImageTools
                .getBase64FromImage(image)
                .then(function (base64Image) {

                    let today = new Date();
                    let time = '' + (
                        today.getMonth() + 1
                    ) + today.getDate() + today.getHours() + today.getMinutes() + today.getSeconds(); // 시
                    console.log(time);
                    console.log('base64Image' + base64Image);

                    var data = {
                        V_TYPE: 'CAM_I',
                        V_TIME: time,
                        V_PGM_TYPE: 'C_INQ',
                        V_IMG: base64Image,
                        V_USR_ID: G_USR_ID,
                        V_BP_CD: G_BP_CD
                    };

                    console.log('here?');
                    console.log(url);

                    return fetch(url, {
                            method: "POST",
                            headers: {
                                "Content-type": "application/json; charset=utf-8"
                            },
                            body: JSON.stringify(data)
                        })
                        .then(function (response) {
                            console.log("response: " + response.ok);
                            if (response.ok) {
                                arg.data.imgFileName.value =  'C_INQ_' + time + '.png';
                                console.log("filename: " +  'C_INQ_' + time + '.png' );
                            } else {
                                throw Error(response.status);
                            }
                            isBusy.value=false;
                            vibration.vibrate(0.8);
                        })
                        .then(function (json) {
                            //console.log(JSON.stringify(json));
                        });
                });
        })
        .then(function (response) {
            console.log("Got response");
        })
        .catch(function (e) {
            console.log("Error");
            console.log(e);
        });
   
}


function galBtn(arg) {
    cameraRoll
        .getImage()
        .then(function (image) {
            /*로딩바시작*/
            isBusy.value=true;

            ImageTools
                .getBase64FromImage(image)
                .then(function (base64Image) {

                    let today = new Date();
                    let time = '' + (
                        today.getMonth() + 1
                    ) + today.getDate() + today.getHours() + today.getMinutes() + today.getSeconds(); // 시
                    console.log(time);

                    var data = {
                        V_TYPE: 'CAM_I',
                        V_TIME: time,
                        V_PGM_TYPE: 'C_INQ',
                        V_IMG: base64Image,
                        V_USR_ID: G_USR_ID,
                        V_BP_CD: G_BP_CD
                    };
                    
                    return fetch(url, {
                        method: "POST",
                        headers: {
                            "Content-type": "application/json; charset=utf-8"
                        },
                        body: JSON.stringify(data)
                    })
                        .then(function (response) {
                            console.log("response: " + response.ok);
                            if (response.ok) {
                                arg.data.imgFileName.value =  'C_INQ_' + time + '.png';
                                console.log("filename: " +  'C_INQ_' + time + '.png' );
                            } else {
                                throw Error(response.status);
                            }
                              /*로딩바종료*/
                              isBusy.value=false;
                              vibration.vibrate(0.8);
                        })
                        .then(function (json) {
                            console.log(JSON.stringify(json));
                        });
                });

        }, function (error) {
            console.log("error occured");
        });
}

function imgClick(args) {
    img_visible.value = true;
    console.log('img_visible: ' + img_visible);
    img_url.value = "http://123.142.124.161:8080/mro_data/" + args.data.imgFileName.value;

}

/* ios 캘린더 날짜 바꾸기 */
function pad(n, width) {
    n = n + '';
    return n.length >= width ? n : new Array(width - n.length + 1).join('0') + n;
  }

temp_ios_date.onValueChanged(module, function(item) {
    if(item.substring(0,1) != 'd') {
        var year = item.split(' ')[1].substring(0,4);
        var month = item.substring(0,2).replace(/월/g,"");
        var day = item.split(' ')[1].substring(4,6);
    
        month = pad(month,2);
        day = pad(day,2);

        var date = year+'-'+month+'-'+day;
        inq_hope_dt.value = getFormatDate(date); //new_dt;

        dtpk1_visible_ios.value = false;
    }
});

function backBtn(data) {
    console.log('back:::'  + dtpk1_visible);
    if(dtpk1_visible.value == true) {
        dtpk1_visible.value = false;
    } else {
        router.goto("c_menu");
    }
}


module.exports = {
    sendBtn: sendBtn,
    addBtn: addBtn,
    delBtn: delBtn,
    clk_inq_dt: clk_inq_dt,
    camBtn: camBtn,
    galBtn: galBtn,
    imgClick: imgClick, 

    items2: items2,

    ITEM_CD: ITEM_CD,
    ITEM_NM: ITEM_NM,
    SPEC: SPEC,
    MAKER: MAKER,
    UNIT: UNIT,
    QTY: QTY,
    REMARK: REMARK,

    minDate: new Date(Date.parse("1950-01-01T00:00:00.000Z")),
    maxDate: new Date(Date.parse("2050-01-01T00:00:00.000Z")),
    someDate: someDate,
    inq_hope_dt: inq_hope_dt,
    dtpk1_visible: dtpk1_visible,
    dtpk1_visible_ios: dtpk1_visible_ios,
    imgFileName:imgFileName,
    imgFilePc: imgFilePc,

    img_visible: img_visible,
    img_url: img_url,
    loading_visible: loading_visible,

    isBusy: isBusy,
    temp_ios_date: temp_ios_date,
    backBtn:backBtn,
}