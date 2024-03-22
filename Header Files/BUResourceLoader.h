//
//     Generated by private class-dump
//

@class BUMediaCacheWorker, NSMutableDictionary, NSString, NSURL, NSMutableArray;
@protocol BUResourceLoaderDelegate;

@interface BUResourceLoader : NSObject <BUMediaDownloaderDelegate> {
    struct _opaque_pthread_mutexattr_t { long long __sig; char __opaque[8]; } _shared_mutexattr_t;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSURL *_url;
    id /* block */ _loadeFinishBlock;
    id /* block */ _loadedCancelBlock;
    id<BUResourceLoaderDelegate> _delegate;
    BUMediaCacheWorker *_cacheWorker;
    NSMutableArray *_mediaDownlader;
    NSMutableDictionary *_requestDownladerDic;
    long long _resceiveSize;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) BUMediaCacheWorker *cacheWorker;
@property (retain, nonatomic) NSMutableArray *mediaDownlader;
@property (retain, nonatomic) NSMutableDictionary *requestDownladerDic;
@property (nonatomic) long long resceiveSize;
@property (copy, nonatomic) id /* block */ loadeFinishBlock;
@property (copy, nonatomic) id /* block */ loadedCancelBlock;
@property (weak, nonatomic) id<BUResourceLoaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mediaDownlader;
- (id)requestDownladerDic;
- (id)cacheWorker;
- (id /* block */)loadedCancelBlock;
- (long long)resceiveSize;
- (void)setResceiveSize:(long long)arg0;
- (id /* block */)loadeFinishBlock;
- (void)mediaDownloader:(id)arg0 didReceiveLength:(long long)arg1 didFinishedWithError:(id)arg2 responseDesc:(id)arg3 localCache:(BOOL)arg4;
- (void)requestWithSize:(unsigned long long)arg0;
- (void)setLoadeFinishBlock:(id /* block */)arg0;
- (void)setLoadedCancelBlock:(id /* block */)arg0;
- (void)setCacheWorker:(id)arg0;
- (void)setMediaDownlader:(id)arg0;
- (void)setRequestDownladerDic:(id)arg0;
- (void)removeRequest:(id)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)initWithURL:(id)arg0;
- (void)addRequest:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)url;
- (void)requestCancel;

@end