//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface DAVResourceManager_OC : NSObject {
    NSMutableArray *_handlers;
    struct shared_ptr<davinci::resource::DAVResourceManager> { struct DAVResourceManager *__ptr_; struct __shared_weak_count *__cntrl_; } _internalResourceManager;
}

@property (retain, nonatomic) NSMutableArray *handlers;
@property (nonatomic) struct shared_ptr<davinci::resource::DAVResourceManager> { struct DAVResourceManager *__ptr_; struct __shared_weak_count *__cntrl_; } internalResourceManager;

+ (id)getDefaultResourceManager;

- (void)setInternalResourceManager:(struct shared_ptr<davinci::resource::DAVResourceManager> { struct DAVResourceManager *x0; struct __shared_weak_count *x1; })arg0;
- (struct shared_ptr<davinci::resource::DAVResourceManager> { struct DAVResourceManager *x0; struct __shared_weak_count *x1; })internalResourceManager;
- (void)fetchWithResource:(id)arg0 extraParams:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)getResourceFromCacheWithResourceId:(id)arg0 extraParams:(id)arg1;
- (void)registerResourceHandler:(id)arg0;
- (void)setHandlers:(id)arg0;
- (id)handlers;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
