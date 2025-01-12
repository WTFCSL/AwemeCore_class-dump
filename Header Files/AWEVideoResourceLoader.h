//
//     Generated by private class-dump
//

@class NSString, AWEVideoCachePlayTask, NSURL, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AWEVideoPlayerInternalDelegate, AWEVideoResourceLoaderDelegate;

@interface AWEVideoResourceLoader : NSObject <AWEVideoCacheRequestTaskDelegate, AVAssetResourceLoaderDelegate> {
    BOOL _stopped;
    id<AWEVideoResourceLoaderDelegate> _delegate;
    NSError *_error;
    unsigned long long _errorStrategy;
    NSURL *_requestURL;
    NSString *_requestURLKey;
    NSMutableArray *_requestList;
    AWEVideoCachePlayTask *_playTask;
    NSObject<OS_dispatch_queue> *_taskQueue;
    id<AWEVideoPlayerInternalDelegate> _internalDelegate;
    long long _errorTryCount;
}

@property (retain, nonatomic) NSURL *requestURL;
@property (copy, nonatomic) NSString *requestURLKey;
@property (retain, nonatomic) NSMutableArray *requestList;
@property (retain, nonatomic) AWEVideoCachePlayTask *playTask;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (nonatomic) BOOL stopped;
@property (weak, nonatomic) id<AWEVideoPlayerInternalDelegate> internalDelegate;
@property (nonatomic) long long errorTryCount;
@property (weak, nonatomic) id<AWEVideoResourceLoaderDelegate> delegate;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long errorStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resourceLoaderWithURL:(id)arg0 queue:(id)arg1 internalDelegate:(id)arg2;

- (id)requestURLKey;
- (void)requestTask:(id)arg0 didReceiveResponse:(id)arg1;
- (void)requestTask:(id)arg0 didReceiveData:(id)arg1;
- (void)requestTask:(id)arg0 didFailWithError:(id)arg1;
- (void)requestTaskDidFinishLoading:(id)arg0;
- (void)setRequestURLKey:(id)arg0;
- (unsigned long long)errorStrategy;
- (void)setErrorStrategy:(unsigned long long)arg0;
- (id)initWithURL:(id)arg0 queue:(id)arg1 internalDelegate:(id)arg2;
- (void)setRequestList:(id)arg0;
- (void)setPlayTask:(id)arg0;
- (id)playTask;
- (void)setErrorTryCount:(long long)arg0;
- (id)dataRequestDescription:(id)arg0;
- (long long)errorTryCount;
- (void)addLoadingRequest:(id)arg0;
- (void)removeLoadingRequest:(id)arg0;
- (void)processRequestList;
- (id)requestList;
- (BOOL)requestedDataCached:(id)arg0;
- (void)finishLoadingWithLoadingRequest:(id)arg0;
- (void)getCacheLengthWithCompletion:(id /* block */)arg0;
- (void)stopLoading;
- (void).cxx_destruct;
- (void)setTaskQueue:(id)arg0;
- (id)taskQueue;
- (id)delegate;
- (id)requestURL;
- (BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1;
- (void)setError:(id)arg0;
- (void)setRequestURL:(id)arg0;
- (id)internalDelegate;
- (void)setInternalDelegate:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setStopped:(BOOL)arg0;
- (id)error;
- (BOOL)stopped;
- (void)resourceLoader:(id)arg0 didCancelLoadingRequest:(id)arg1;

@end
