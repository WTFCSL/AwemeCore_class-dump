//
//     Generated by private class-dump
//

@interface LVEffectResourceDownloadOperation : LVResourceDownloadOperation {
    struct shared_ptr<cut::FetchEffectRequest> { struct FetchEffectRequest *__ptr_; struct __shared_weak_count *__cntrl_; } _request;
}

@property (nonatomic) struct shared_ptr<cut::FetchEffectRequest> { struct FetchEffectRequest *__ptr_; struct __shared_weak_count *__cntrl_; } request;

- (BOOL)checkExitInLocalDataSource;
- (void)resourceRequest:(struct shared_ptr<cut::FetchEffectRequest> { struct FetchEffectRequest *x0; struct __shared_weak_count *x1; })arg0 result:(id)arg1;
- (void)finishWithError:(id)arg0 effectInfo:(id)arg1;
- (void)main;
- (void).cxx_destruct;
- (void)setRequest:(struct shared_ptr<cut::FetchEffectRequest> { struct FetchEffectRequest *x0; struct __shared_weak_count *x1; })arg0;
- (struct shared_ptr<cut::FetchEffectRequest> { struct FetchEffectRequest *x0; struct __shared_weak_count *x1; })request;
- (id).cxx_construct;

@end
