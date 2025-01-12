//
//     Generated by private class-dump
//

@class NPPresetRecommendService_OC, NPGenericTemplateTrackHelper, NSString;
@protocol NPGenericTemplateRecommendConfigDelegate;

@interface NPGenericTemplateService_OC : NSObject <NPPresetRecommendExtractFrameConfigDelegate, NPPresetRecommendAlgorithmServiceDelegate> {
    struct shared_ptr<nle::preset::NPGenericTemplateService> { struct NPGenericTemplateService *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
    id<NPGenericTemplateRecommendConfigDelegate> _recommendConfigDelegate;
    NPPresetRecommendService_OC *_recommendService;
    NPGenericTemplateTrackHelper *_trackHelper;
}

@property (retain, nonatomic) NPPresetRecommendService_OC *recommendService;
@property (retain, nonatomic) NPGenericTemplateTrackHelper *trackHelper;
@property (readonly, nonatomic) struct shared_ptr<nle::preset::NPGenericTemplateService> { struct NPGenericTemplateService *x0; struct __shared_weak_count *x1; } cppValue;
@property (weak, nonatomic) id<NPGenericTemplateRecommendConfigDelegate> recommendConfigDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearCache:(unsigned long long)arg0;
+ (id)defaultCacheDirPath;
+ (BOOL)isMaterialsExist:(id)arg0;
+ (struct shared_ptr<nle::preset::NPGenericTemplateInfo> { struct NPGenericTemplateInfo *x0; struct __shared_weak_count *x1; })convertToCPPInfo:(id)arg0;
+ (void)setupInjectParams:(id)arg0;
+ (void)prefetchRecommendAlgorithm:(id)arg0 completion:(id /* block */)arg1;

- (struct shared_ptr<nle::preset::NPGenericTemplateService> { struct NPGenericTemplateService *x0; struct __shared_weak_count *x1; })cppValue;
- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPGenericTemplateService> { struct NPGenericTemplateService *x0; struct __shared_weak_count *x1; })arg0;
- (void)configTemplateServiceWithDownloadConcurrent:(unsigned long long)arg0;
- (void)configRecommendService;
- (void)configTracker;
- (void)preprocessMaterials:(id)arg0 toStage:(unsigned long long)arg1 withRequestParams:(id)arg2 withExtraTrackInfo:(id)arg3 progress:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)bimAlgorithmModelList;
- (id)recommendService;
- (void)fetchGenericTemplateListForMaterials:(id)arg0 withRequestParams:(id)arg1 withExtraTrackInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)recommendWithMaterials:(id)arg0 requestParams:(id)arg1 extraTrackInfo:(id)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)recommendConfigDelegate;
- (BOOL)supportFunctionForStage:(unsigned long long)arg0;
- (unsigned long long)frameExtractionStrategy;
- (struct CGSize { double x0; double x1; })videoFrameSizeForVideo:(id)arg0 forStage:(unsigned long long)arg1;
- (id)requestTimesForVideo:(id)arg0 forStage:(unsigned long long)arg1;
- (BOOL)c3FeatureEnabled;
- (id)initWithDownloadConcurrent:(unsigned long long)arg0;
- (void)preprocessMaterials:(id)arg0 toStage:(unsigned long long)arg1 withRequestParams:(id)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)recommendWithMaterials:(id)arg0 requestParams:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)fetchGenericTemplateListForMaterials:(id)arg0 withRequestParams:(id)arg1 completion:(id /* block */)arg2;
- (long long)fetchGenericTemplate:(id)arg0 priorityStrategy:(unsigned long long)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (long long)applyGenericTemplate:(id)arg0 toTarget:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3 sync:(BOOL)arg4;
- (long long)applyWithGenericModel:(id)arg0 toTarget:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3 sync:(BOOL)arg4;
- (id)getTemplateSummaryFromModel:(id)arg0 completion:(id /* block */)arg1;
- (long long)preprocessGenericTemplate:(id)arg0 materials:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)removeGenericTemplate:(id)arg0 fromTarget:(id)arg1;
- (void)pauseTaskByTemplateModel:(id)arg0;
- (void)cancelTaskByTemplateModel:(id)arg0;
- (BOOL)isTemplateReady:(id)arg0;
- (id)draftFolderForTemplateModel:(id)arg0;
- (void)setRecommendConfigDelegate:(id)arg0;
- (void)setRecommendService:(id)arg0;
- (id)trackHelper;
- (void)setTrackHelper:(id)arg0;
- (void)cancelTask:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)releaseResource;
- (void)dealloc;
- (id).cxx_construct;

@end
