//
//     Generated by private class-dump
//

@class NPGenericTemplateService_OC, NSArray, NSString, AWEVideoPublishViewModel;
@protocol ACCLivePhotoEditServiceProtocol, ACCEditServiceProtocol, IESServiceProvider;

@interface ACCSideslipGenericTemplateService : NSObject <NPGenericTemplateRecommendConfigDelegate, ACCSideslipGenericTemplateService> {
    BOOL _isMaterialsInferring;
    id<IESServiceProvider> _serviceProvider;
    AWEVideoPublishViewModel *_repository;
    id<ACCLivePhotoEditServiceProtocol> _livePhotoEditService;
    id<ACCEditServiceProtocol> _editService;
    NPGenericTemplateService_OC *_service;
    NSArray *_materials;
    unsigned long long _frameExtractionStrategy;
    double _preprocessMaterialsTime;
}

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCLivePhotoEditServiceProtocol> livePhotoEditService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) NPGenericTemplateService_OC *service;
@property (copy, nonatomic) NSArray *materials;
@property (nonatomic) BOOL isMaterialsInferring;
@property (nonatomic) unsigned long long frameExtractionStrategy;
@property (nonatomic) double preprocessMaterialsTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchTemplateDetail:(id)arg0 completion:(id /* block */)arg1;

- (id)bimAlgorithmModelList;
- (BOOL)supportFunctionForStage:(unsigned long long)arg0;
- (unsigned long long)frameExtractionStrategy;
- (struct CGSize { double x0; double x1; })videoFrameSizeForVideo:(id)arg0 forStage:(unsigned long long)arg1;
- (id)requestTimesForVideo:(id)arg0 forStage:(unsigned long long)arg1;
- (BOOL)c3FeatureEnabled;
- (BOOL)isTemplateReady:(id)arg0;
- (id)editService;
- (void)setEditService:(id)arg0;
- (id)initWithServiceProvider:(id)arg0 repository:(id)arg1;
- (BOOL)shouldPreprocessMaterials;
- (void)preprocessMaterialsIfNeeded;
- (id)removeUniTemplateWithId:(id)arg0;
- (BOOL)isMaterialsInferring;
- (void)setIsMaterialsInferring:(BOOL)arg0;
- (void)updateVideoDataWithNLEModel:(id)arg0;
- (void)trackApplyCommitEvent:(id)arg0 templateModel:(id)arg1;
- (id)baseMaterialsForDefaultRequest;
- (void)applyUniTemplate:(id)arg0 completion:(id /* block */)arg1 renderCallback:(id /* block */)arg2;
- (void)removeUniTemplateWithId:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
- (double)preprocessMaterialsTime;
- (id)livePhotoEditService;
- (void)setLivePhotoEditService:(id)arg0;
- (void)setFrameExtractionStrategy:(unsigned long long)arg0;
- (id)generateMaterials;
- (void)setPreprocessMaterialsTime:(double)arg0;
- (id)generateAssetIdentifierDict;
- (void).cxx_destruct;
- (void)setService:(id)arg0;
- (void)setServiceProvider:(id)arg0;
- (void)setRepository:(id)arg0;
- (id)serviceProvider;
- (id)repository;
- (id)materials;
- (void)setMaterials:(id)arg0;
- (void)dealloc;
- (id)service;

@end
