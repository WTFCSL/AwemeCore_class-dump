//
//     Generated by private class-dump
//

@protocol BDXPreloadProtocol <BDXServiceProtocol>

+ (void)preloadWithBuilder:(id /* block */)arg0 callback:(id /* block */)arg1;
+ (void)preloadResourceWith:(id)arg0 strategy:(id)arg1 taskConfig:(id)arg2 callback:(id /* block */)arg3;
+ (void)triggerAPIPrefetchAndPreloadResourceWith:(id)arg0 strategy:(id)arg1 taskConfig:(id)arg2 callback:(id /* block */)arg3;
+ (void)triggerAPIPrefetchFor:(id)arg0 with:(id)arg1;
+ (void)triggerAPIPrefetchFor:(id)arg0;
+ (void)forceCleanWith:(id)arg0;
+ (id)getCacheWith:(id)arg0;
+ (void)bdxRouterPreloadResourceWith:(id)arg0 strategy:(id)arg1 taskConfig:(id)arg2 callback:(id /* block */)arg3;
+ (void)triggerPrefetchWithSchema:(id)arg0 config:(id)arg1;
+ (void)dataWithRequestModel:(id)arg0 completion:(id /* block */)arg1;

@end