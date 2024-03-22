//
//     Generated by private class-dump
//

@class NPGenericTemplateService_OC, NSArray, NSString, AWEVideoPublishViewModel, NSMutableArray;
@protocol ACCEditServiceProtocol, IESServiceProvider;

@interface ACCEditorOneClickFilmService : NSObject <NPGenericTemplateRecommendConfigDelegate, ACCEditorOneClickFilmService> {
    BOOL _isMaterialsInferring;
    BOOL _isShowingOneClickFilmPanel;
    id<IESServiceProvider> _serviceProvider;
    AWEVideoPublishViewModel *_repository;
    NPGenericTemplateService_OC *_service;
    NSArray *_materials;
    NSArray *_projectUUIDList;
    NSMutableArray *_completionBlockArray;
    id<ACCEditServiceProtocol> _editService;
}

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) NPGenericTemplateService_OC *service;
@property (copy, nonatomic) NSArray *materials;
@property (nonatomic) BOOL isMaterialsInferring;
@property (nonatomic) BOOL isShowingOneClickFilmPanel;
@property (copy, nonatomic) NSArray *projectUUIDList;
@property (retain, nonatomic) NSMutableArray *completionBlockArray;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void)prepareMaterial:(id /* block */)arg0;
- (void)applyUniTemplate:(id)arg0 completion:(id /* block */)arg1;
- (id)removeUniTemplateWithId:(id)arg0;
- (void)updatePanelState:(BOOL)arg0;
- (BOOL)isMaterialsInferring;
- (BOOL)isShowingOneClickFilmPanel;
- (id)completionBlockArray;
- (void)setCompletionBlockArray:(id)arg0;
- (id)projectUUIDList;
- (void)setProjectUUIDList:(id)arg0;
- (void)setIsMaterialsInferring:(BOOL)arg0;
- (void)updateVideoDataWithNLEModel:(id)arg0;
- (void)trackApplyCommitEvent:(id)arg0 templateModel:(id)arg1;
- (void)setIsShowingOneClickFilmPanel:(BOOL)arg0;
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