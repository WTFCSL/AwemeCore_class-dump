//
//     Generated by private class-dump
//

@class NSArray, NSProgress, NSDictionary, NSError, NSObject, NSString;
@protocol EffectPlatformRequestDelegate, OS_dispatch_semaphore;

@interface IESDelegateFileDownloadTask : NSOperation <IESFileDownloadTaskProtocol> {
    BOOL executing;
    BOOL finished;
    double _createTime;
    NSDictionary *_downloadParameters;
    id /* block */ _progressBlock;
    NSString *_filePath;
    NSError *_error;
    id<EffectPlatformRequestDelegate> _requestDelegate;
    NSArray *_urls;
    unsigned long long _index;
    NSProgress *_progress;
    NSDictionary *_extraInfoDict;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (copy, nonatomic) NSArray *urls;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) NSDictionary *extraInfoDict;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (copy, nonatomic) NSDictionary *downloadParameters;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (readonly, copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) id<EffectPlatformRequestDelegate> requestDelegate;
@property (nonatomic) double createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestDelegateWithIndex:(unsigned long long)arg0;
- (void)downloadRequestAtIndex:(unsigned long long)arg0;
- (id)downloadParameters;
- (void)setExtraInfoDict:(id)arg0;
- (void)setRequestDelegate:(id)arg0;
- (id)initWithURL:(id)arg0 filePath:(id)arg1;
- (id)requestDelegate;
- (void)setDownloadParameters:(id)arg0;
- (void)updateExtraInfoDict:(id)arg0;
- (id)extraInfoDict;
- (id)urls;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)setIndex:(unsigned long long)arg0;
- (id)filePath;
- (id)semaphore;
- (void)main;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (void)setCreateTime:(double)arg0;
- (void)setSemaphore:(id)arg0;
- (void)setProgressBlock:(id /* block */)arg0;
- (unsigned long long)index;
- (void)setUrls:(id)arg0;
- (double)createTime;
- (id)progress;
- (void)setError:(id)arg0;
- (id /* block */)progressBlock;
- (void)start;
- (void)dealloc;
- (void)setProgress:(id)arg0;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (id)error;
- (void)finishExecuting;

@end
