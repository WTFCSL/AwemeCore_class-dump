//
//     Generated by private class-dump
//

@class NSURLSession, NSArray, NSDictionary, NSString, NSError;

@interface ACCFileDownloadTask : NSOperation <NSURLSessionDownloadDelegate> {
    BOOL executing;
    BOOL finished;
    id /* block */ _progressBlock;
    NSString *_filePath;
    NSError *_error;
    NSDictionary *_extraInfoDict;
    NSArray *_requests;
    double _progress;
    NSURLSession *_downloadSession;
    unsigned long long _index;
}

@property (copy, nonatomic) NSArray *requests;
@property (nonatomic) double progress;
@property (retain, nonatomic) NSURLSession *downloadSession;
@property (nonatomic) unsigned long long index;
@property (copy, nonatomic) NSDictionary *extraInfoDict;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadRequestAtIndex:(unsigned long long)arg0;
- (void)setExtraInfoDict:(id)arg0;
- (id)extraInfoDict;
- (id)initWithURLRequests:(id)arg0 filePath:(id)arg1;
- (void)setRequests:(id)arg0;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)setIndex:(unsigned long long)arg0;
- (id)requests;
- (id)filePath;
- (void)main;
- (void).cxx_destruct;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2;
- (BOOL)isExecuting;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)setProgressBlock:(id /* block */)arg0;
- (unsigned long long)index;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (double)progress;
- (id /* block */)progressBlock;
- (void)start;
- (void)setProgress:(double)arg0;
- (id)error;
- (id)downloadSession;
- (void)setDownloadSession:(id)arg0;

@end
