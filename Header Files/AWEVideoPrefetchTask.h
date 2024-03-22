//
//     Generated by private class-dump
//

@class AWEVideoCachePrefetchTask, NSURL, NSString;
@protocol AWEVideoPrefetchTaskDelegate;

@interface AWEVideoPrefetchTask : NSObject <AWEVideoCacheRequestTaskDelegate> {
    BOOL _enablePrefetchWIFIOnly;
    AWEVideoCachePrefetchTask *_requestTask;
    NSURL *_videoURL;
    NSString *_videoURLKey;
    unsigned long long _prefetchSize;
    long long _state;
    id<AWEVideoPrefetchTaskDelegate> _delegate;
    double _prefetchBeginTime;
    id /* block */ _successBlock;
    id /* block */ _failureBlock;
    id /* block */ _cancelBlock;
}

@property (retain, nonatomic) AWEVideoCachePrefetchTask *requestTask;
@property (retain, nonatomic) NSURL *videoURL;
@property (copy, nonatomic) NSString *videoURLKey;
@property (nonatomic) unsigned long long prefetchSize;
@property (nonatomic) BOOL enablePrefetchWIFIOnly;
@property (nonatomic) long long state;
@property (weak, nonatomic) id<AWEVideoPrefetchTaskDelegate> delegate;
@property (nonatomic) double prefetchBeginTime;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskWithURLString:(id)arg0 size:(unsigned long long)arg1 queue:(id)arg2;
+ (id)taskWithURLString:(id)arg0 cacheString:(id)arg1 size:(unsigned long long)arg2 queue:(id)arg3;

- (void)requestTask:(id)arg0 didReceiveResponse:(id)arg1;
- (void)requestTask:(id)arg0 didReceiveWiredData:(id)arg1;
- (void)requestTask:(id)arg0 didReceiveData:(id)arg1;
- (void)requestTask:(id)arg0 didFailWithError:(id)arg1;
- (void)requestTaskDidFinishLoading:(id)arg0;
- (id)taskWithURLString:(id)arg0 size:(unsigned long long)arg1 queue:(id)arg2;
- (void)setPrefetchSize:(unsigned long long)arg0;
- (void)setVideoURLKey:(id)arg0;
- (id)videoURLKey;
- (unsigned long long)prefetchSize;
- (void)setPrefetchBeginTime:(double)arg0;
- (double)prefetchBeginTime;
- (void)cancelPrefetch;
- (BOOL)enablePrefetchWIFIOnly;
- (id)taskWithURLString:(id)arg0 cacheString:(id)arg1 size:(unsigned long long)arg2 queue:(id)arg3;
- (void)setEnablePrefetchWIFIOnly:(BOOL)arg0;
- (BOOL)startPrefetch;
- (id)videoURL;
- (void)setRequestTask:(id)arg0;
- (id)init;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg0;
- (id /* block */)cancelBlock;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;
- (id)delegate;
- (id)requestTask;
- (void)setCancelBlock:(id /* block */)arg0;
- (void)setVideoURL:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg0;

@end