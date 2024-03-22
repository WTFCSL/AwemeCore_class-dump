//
//     Generated by private class-dump
//

@class NSOperationQueue, NSError;

@interface LVResourceDownloader : NSObject {
    NSOperationQueue *_downloadQueue;
    NSError *_error;
    unsigned long long _taskCount;
    id /* block */ _progressHandler;
    id /* block */ _callback;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    BOOL _canceled;
}

@property (nonatomic) BOOL canceled;

- (void)cancelAllRequest;
- (void)downloadResources:(const void *)arg0 progressHandler:(id /* block */)arg1 callback:(id /* block */)arg2;
- (id)init;
- (void).cxx_destruct;
- (BOOL)canceled;
- (void)setCanceled:(BOOL)arg0;
- (void)addObserver;

@end
