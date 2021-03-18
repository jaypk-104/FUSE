var Observable = require("FuseJS/Observable");
var Downloader = require("FuseJS/BackgroundDownload");
var FileSystem = require("FuseJS/FileSystem");
var InterApp = require("FuseJS/InterApp");

var lastDownloadID = -1;
var info = Observable("");

var FileSystem = require("FuseJS/FileSystem");

var startDownload = function() {
    console.log("Starting########");
    //url = "http://123.142.124.161:8080/mro_data_temp/C_GR_10161390.png";
    url = "http://123.142.124.161:8080/mro_data/20201020_164759_MRO.pptx";
    
    InterApp.launchUri(url);
    
    InterApp.on("receivedUri", function(uri) {
        console.log(url);
    });

	// function sendMessage() {
	// 	InterApp.launchUri("InterApp2://Some Message");
	// }


    // FileSystem.writeTextToFile(path, "hello world")
    // .then(function() {
    //     return FileSystem.readTextFromFile(path);
    // })
    // .then(function(text) {
    //     console.log("The read file content was: " + text);
    // })
    // .catch(function(error) {
    //     console.log("Unable to read file due to error:" + error);
    // });

    // lastDownloadID = Downloader.start("http://123.142.124.161:8080/mro_data_temp/C_GR_10161390.png");
    // console.log("Started " + lastDownloadID);
};

var stopDownload = function() {
    console.log("stop called: " + lastDownloadID);
    Downloader.stop(lastDownloadID);
};

var pauseDownload = function() {
    console.log("pause called: " + lastDownloadID);
    Downloader.pause(lastDownloadID);
};

var resumeDownload = function() {
    console.log("resume called: " + lastDownloadID);
    lastDownloadID = Downloader.resume(lastDownloadID);
};

Downloader.on("progress", function(downloadID, bytesSoFar, totalBytesExpected) {
    console.log("Rock on " + downloadID + ": " + bytesSoFar/totalBytesExpected);
});

Downloader.on("paused", function(kind, downloadID) {
    console.log(kind + " - " + downloadID);
});

Downloader.on("succeeded", function(downloadID, finalPath) {
    console.log("success! - " + downloadID + ": " + finalPath);
});

Downloader.on("failed", function(downloadID, errorMessage) {
    console.log("failure :( - " + downloadID + ": " + errorMessage);
});

module.exports = {
    startDownload: startDownload,
    stopDownload: stopDownload,
    pauseDownload: pauseDownload,
    resumeDownload: resumeDownload,
    info: info
};
