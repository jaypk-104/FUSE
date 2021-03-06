#include <DownloadDelegate.h>
#include <uObjC.Foreign.h>
#include <Uno-iOS/AppDelegate.h>
#include <AppDelegateDownloadListener.h>
#include <Fuse.BackgroundDownload.BackgroundDownload.h>

@implementation DownloadDelegate {
    NSURLSessionConfiguration* sessionConfiguration;
    NSURLSession* session;
}

- (void)setup
{
    sessionConfiguration = [NSURLSessionConfiguration backgroundSessionConfigurationWithIdentifier:@"com.SomeFookinSessionID"];
    sessionConfiguration.HTTPMaximumConnectionsPerHost = 5;
    session = [NSURLSession sessionWithConfiguration:sessionConfiguration
               delegate:self
               delegateQueue:nil];
}

//------------------------------

- (NSUInteger)startDownload:(NSString*)urlStr
{
    NSURLSessionDownloadTask* task = [session downloadTaskWithURL:[NSURL URLWithString:urlStr]];
    NSUInteger tID = task.taskIdentifier;
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Fuse::BackgroundDownload::BackgroundDownload::RegisterDownload(tID, ::g::ObjC::Object::Create(task)); }();
    [task resume];
    return tID;
}

- (void)pauseDownload:(NSURLSessionDownloadTask*)task
{
    NSUInteger tID = task.taskIdentifier;

    [task cancelByProducingResumeData:^(NSData *resumeData) {
        if (resumeData != nil) {
            NSData* data = [[NSData alloc] initWithData:resumeData];
            [&]() -> void { ::uForeignPool __foreignPool; ::g::Fuse::BackgroundDownload::BackgroundDownload::RecieveDownloadPaused(tID, ::g::ObjC::Object::Create(data)); }();
        } else {
            [&]() -> void { ::uForeignPool __foreignPool; ::g::Fuse::BackgroundDownload::BackgroundDownload::RecieveDownloadPaused(tID, ::g::ObjC::Object::Create(NULL)); }();
        }
    }];
}

- (NSUInteger)resumeDownload:(NSData*)resumeData
{
    NSURLSessionDownloadTask* task = [session downloadTaskWithResumeData:resumeData];
    NSUInteger tID = task.taskIdentifier;
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Fuse::BackgroundDownload::BackgroundDownload::RegisterDownload(tID, ::g::ObjC::Object::Create(task)); }();
    [task resume];
    return tID;
}

- (void)stopDownload:(NSURLSessionDownloadTask*)task
{
    [task cancel];
}

- (void)URLSession:(NSURLSession *)session
      downloadTask:(NSURLSessionDownloadTask *)downloadTask
      didWriteData:(int64_t)bytesWritten
 totalBytesWritten:(int64_t)totalBytesWritten
totalBytesExpectedToWrite:(int64_t)totalBytesExpectedToWrite
{
    [[NSOperationQueue mainQueue] addOperationWithBlock:^{
        [&]() -> void { ::uForeignPool __foreignPool; ::g::Fuse::BackgroundDownload::BackgroundDownload::RecieveProgress(downloadTask.taskIdentifier, totalBytesWritten, totalBytesExpectedToWrite); }();
    }];
}


// Finished Successfully
- (void)URLSession:(NSURLSession *)session
      downloadTask:(NSURLSessionDownloadTask *)downloadTask
didFinishDownloadingToURL:(NSURL *)location
{
    NSString* humanFileName = downloadTask.originalRequest.URL.lastPathComponent;
    [[NSOperationQueue mainQueue] addOperationWithBlock:^{
        [&]() -> void { ::uForeignPool __foreignPool; ::g::Fuse::BackgroundDownload::BackgroundDownload::RecieveSuccessfulCompletion(downloadTask.taskIdentifier, ::uObjC::UnoString([location path])); }();
    }];
}


// Finished with Error
-(void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task didCompleteWithError:(NSError *)error
{
    if (error != nil)
    {
        [[NSOperationQueue mainQueue] addOperationWithBlock:^{
            [&]() -> void { ::uForeignPool __foreignPool; ::g::Fuse::BackgroundDownload::BackgroundDownload::RecieveErroredCompletion(task.taskIdentifier, ::uObjC::UnoString([error localizedDescription])); }();
        }];
    }
    // 'else' is ignored as `didFinishDownloadingToURL` will have been called before this
}

//------------------------------

-(void)URLSessionDidFinishEventsForBackgroundURLSession:(NSURLSession *)session
{
    uAppDelegate* appDelegate = (uAppDelegate*)[UIApplication sharedApplication].delegate;

    // Check if all download tasks have been finished.
    [session getTasksWithCompletionHandler:^(NSArray *dataTasks, NSArray *uploadTasks, NSArray *downloadTasks) {
        if ([downloadTasks count] == 0) {
            if (appDelegate.backgroundTransferCompletionHandler != nil) {
                // Copy locally the completion handler.
                void(^completionHandler)() = appDelegate.backgroundTransferCompletionHandler;
                // Make nil the backgroundTransferCompletionHandler.
                appDelegate.backgroundTransferCompletionHandler = nil;

                [[NSOperationQueue mainQueue] addOperationWithBlock:^{
                    // End of the 'wake from background' scope
                    completionHandler();
                }];
            }
        }
    }];
}

@end
