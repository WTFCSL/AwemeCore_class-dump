//
//     Generated by private class-dump
//

@class NSString;

@interface BDPAppConfigPreloader : NSObject <BDPAppPreloadCacheDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)getPreloadDataSource;
+ (BOOL)supportPreloadForType:(long long)arg0;
+ (id)sharedManager;

- (void)preloadObjectWithModel:(id)arg0 schema:(id)arg1 reader:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)preloadCache:(id)arg0 shouldPreloadNextWithExistingObject:(id)arg1;
- (void)preloadCache:(id)arg0 willReleaseObject:(id)arg1;

@end
