//
//     Generated by private class-dump
//

@class NSString, HunterPreloadDetailModel;

@interface HunterPreload : NSObject <HunterPreloadProtocol> {
    HunterPreloadDetailModel *_preloadDetail;
    id /* block */ _preloadHandler;
}

@property (retain, nonatomic) HunterPreloadDetailModel *preloadDetail;
@property (copy, nonatomic) id /* block */ preloadHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)valueForDynamicKeyPath:(id)arg0 object:(id)arg1;
+ (BOOL)shouldUseHunterPrefetchAPIWithExposure:(BOOL)arg0;
+ (id)processPrefetchOrPreloadSchema:(id)arg0 queryData:(id)arg1;
+ (void)triggerPrefetchWithSchema:(id)arg0;
+ (BOOL)shouldUseHunterPreloadResourceWithExposure:(BOOL)arg0;
+ (void)findPreloadConfigWith:(id)arg0 taskConfig:(id)arg1 completion:(id /* block */)arg2;
+ (void)processHunterPreloadConfig:(id)arg0 bdxPreloadConfigDict:(id)arg1 dynamicCompPreloadArray:(id)arg2 xElementPreloadArray:(id)arg3 preloadAwemeModels:(id)arg4 dataResource:(id)arg5 schema:(id)arg6;
+ (void)preloadVideoForModels:(id)arg0;
+ (void)preloadVideoWithURL:(id)arg0;
+ (void)preloadAlphaVideoWithZipURL:(id)arg0;
+ (id)monitorDict:(id)arg0 resourceProvider:(id)arg1;
+ (id)encodeURLStringIfNeeded:(id)arg0;
+ (unsigned long long)currentTimeInterval;

- (void)prefetchAPIForSchema:(id)arg0 queryData:(id)arg1;
- (void)prefetchAPIForSchemaConfigs:(id)arg0;
- (void)preloadResourceWithSchema:(id)arg0 dataResource:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)prefetchAPIAndPreloadResourceWithSchema:(id)arg0 dataResource:(id)arg1 queryData:(id)arg2 completionHandler:(id /* block */)arg3;
- (id /* block */)preloadHandler;
- (void)setPreloadHandler:(id /* block */)arg0;
- (void)preloadResourceWithSchema:(id)arg0 dataResource:(id)arg1 triggerPrefetch:(BOOL)arg2 isRecursion:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)handlePreloadConfig:(id)arg0 schema:(id)arg1 dataResource:(id)arg2 triggerPrefetch:(BOOL)arg3 isRecursion:(BOOL)arg4;
- (void)handleCompletionCallback:(id)arg0;
- (void)addPreloadResources:(id)arg0;
- (id)preloadDetail;
- (void)updateTotalRecursionCount:(id)arg0;
- (void)setPreloadDetail:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
