//
//     Generated by private class-dump
//

@protocol BDPAppPreloadCacheDataSource <NSObject>

+ (id)getPreloadDataSource;
+ (BOOL)supportPreloadForType:(long long)arg0;

- (void)preloadObjectWithModel:(id)arg0 schema:(id)arg1 reader:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)preloadCache:(id)arg0 shouldPreloadNextWithExistingObject:(id)arg1;
- (void)preloadCache:(id)arg0 willReleaseObject:(id)arg1;

@end