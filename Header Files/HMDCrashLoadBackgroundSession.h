//
//     Generated by private class-dump
//

@class NSURLSession, NSString, NSArray, NSURL, NSOperationQueue, NSMutableDictionary, NSMutableArray;

@interface HMDCrashLoadBackgroundSession : NSObject <NSURLSessionDataDelegate> {
    BOOL _previousTaskQueried;
    NSArray *_previousUploading;
    NSURL *_uploadURL;
    NSOperationQueue *_queue;
    NSURLSession *_session;
    NSString *_loadPrepared;
    NSMutableDictionary *_dataDictionary;
    NSMutableArray *_previousUploadingOnQueue;
    NSMutableArray *_retriedUploadingOnQueue;
    NSArray *_previousUploadingAsync;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionWithContext:(id)arg0;

- (void)previousUploadingTask;
- (id)requestForFileName:(id)arg0;
- (BOOL)logTaskReturnPrevious:(id)arg0;
- (void)uploadSuccess:(id)arg0;
- (void)uploadFailed:(id)arg0 needRetry:(BOOL)arg1;
- (void)taskFinished:(id)arg0 success:(BOOL)arg1 responseData:(id)arg2;
- (void)uploadPath:(id)arg0 name:(id)arg1;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1;

@end
