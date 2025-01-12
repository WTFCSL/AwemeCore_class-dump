//
//     Generated by private class-dump
//

@interface HybridRLGurdProcessor : HybridRLBaseProcessor

+ (void)deleteGurdCacheForResource:(id)arg0;

- (id)resourceLoaderName;
- (void)fetchResourceWithURL:(id)arg0 container:(id)arg1 loaderConfig:(id)arg2 taskConfig:(id)arg3 resolve:(id /* block */)arg4 reject:(id /* block */)arg5;
- (void)saveCacheIfNeeded:(id)arg0;
- (id)getProviderWith:(id)arg0 loaderConfig:(id)arg1;
- (void)doTaskWith:(id)arg0 loaderConfig:(id)arg1 container:(id)arg2 warpResolveHandler:(id /* block */)arg3 warpRejectHandler:(id /* block */)arg4;
- (id)init;
- (void)cancelLoad;
- (void)dealloc;

@end
