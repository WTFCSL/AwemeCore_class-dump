//
//     Generated by private class-dump
//

@class HybridContext, NSString, HybridDefaultResourceLoader, HybridResourceConfig, NSNumber, HybridResourceLoaderConfig;
@protocol HybridResourceLoaderProtocol;

@interface HybridResourceLoader : NSObject <HybridResourceForestAdapterProtocol, HybridResourceService> {
    id<HybridResourceLoaderProtocol> _forestResourceLoader;
    HybridResourceLoaderConfig *_loaderConfig;
    HybridContext *_context;
    HybridDefaultResourceLoader *_defaultResourceLoader;
    HybridResourceConfig *_resourceConfig;
    NSNumber *_useForest;
}

@property (retain, nonatomic) HybridDefaultResourceLoader *defaultResourceLoader;
@property (retain, nonatomic) HybridResourceConfig *resourceConfig;
@property (retain, nonatomic) NSNumber *useForest;
@property (retain, nonatomic) HybridResourceLoaderConfig *loaderConfig;
@property (weak, nonatomic) HybridContext *context;
@property (retain, nonatomic) id<HybridResourceLoaderProtocol> forestResourceLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registeGlobalMonitor:(id)arg0;
+ (void)registeGlobalProcessor:(id)arg0;
+ (void)reportLog:(id)arg0;
+ (void)setGlobalUseForest:(id)arg0;
+ (void)hybrid_service_register;
+ (id)sharedInstance;
+ (id)monitor;
+ (void)reportError:(id)arg0;
+ (id)defaultLoader;
+ (id)appid;

- (id)getAdvancedOperator;
- (void)updateLoaderConfig:(id)arg0;
- (id)currentLoaderConfig;
- (id)fetchResourceWithURL:(id)arg0 container:(id)arg1 taskConfig:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)cancelResourceLoad:(id)arg0;
- (void)registeAccessKey:(id)arg0 appendPrefixList:(id)arg1;
- (id)openSession:(id)arg0;
- (id)getDefaultAccessKey;
- (void)registeDefaultAccessKey:(id)arg0;
- (void)registeAccessKey:(id)arg0 withPrefixList:(id)arg1;
- (void)appendPrefixList:(id)arg0 withAccessKey:(id)arg1;
- (void)syncChannelIfNeeded:(id)arg0 accessKey:(id)arg1 completion:(id /* block */)arg2;
- (id)getFalconPrefixList;
- (unsigned long long)packageVersionForAccessKey:(id)arg0 andChannel:(id)arg1;
- (void)setUseForest:(id)arg0;
- (BOOL)isUseForest:(id)arg0;
- (id)resourceConfig;
- (void)setResourceConfig:(id)arg0;
- (id)loaderConfig;
- (void)setLoaderConfig:(id)arg0;
- (id)useForest;
- (id)forestResourceLoader;
- (void)setForestResourceLoader:(id)arg0;
- (void)reportResourceLoaderPerformanceWithTaskConfig:(id)arg0 container:(id)arg1 resourceProvider:(id)arg2 url:(id)arg3;
- (id)getResourceInstanceIfUseForest:(BOOL)arg0;
- (void)updateLoaderConfigProps:(id)arg0;
- (id)defaultResourceLoader;
- (id)updateLoaderConfigProp:(id)arg0 to:(id)arg1;
- (void)setDefaultResourceLoader:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)closeSession:(id)arg0;
- (BOOL)deleteResource:(id)arg0;

@end