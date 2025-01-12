//
//     Generated by private class-dump
//

@protocol BDXResourceLoaderProtocol <BDXServiceProtocol>

+ (id)extractURLDetail:(id)arg0 withPrefix:(id)arg1;

- (void)updateLoaderConfig:(id)arg0;
- (id)currentLoaderConfig;
- (id)fetchResourceWithURL:(id)arg0 container:(id)arg1 taskConfig:(id)arg2 completion:(id /* block */)arg3;
- (id)fetchResourceWithURL:(id)arg0 taskConfig:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)cancelResourceLoad:(id)arg0;
- (id)extractChannelAndBundleFromURL:(id)arg0 taskConfig:(id)arg1;
- (BOOL)deleteResource:(id)arg0;

@optional

- (id)getAdvancedOperator;
- (void)clearCacheWith:(id)arg0;
- (BOOL)isCompliantRemoteUrl:(id)arg0;
- (id)preloadInfoManager;

@end
