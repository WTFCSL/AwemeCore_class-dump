//
//     Generated by private class-dump
//

@class NSString, AWEComposerBeautyEffectWrapper;
@protocol ACCEditServiceProtocol;

@interface ACCEditorSpecialFilterHandler : ACCEditorSmartBeautyBasicHandler <ACCEditorOneClickBeautyHandler> {
    id<ACCEditServiceProtocol> _editService;
    AWEComposerBeautyEffectWrapper *_colorEffect;
}

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) AWEComposerBeautyEffectWrapper *colorEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)editService;
- (void)setEditService:(id)arg0;
- (unsigned long long)smartBeautyType;
- (void)smartBeautyRemoveWithContext:(id)arg0;
- (void)smartBeautyPrepareApplyWithContext:(id)arg0 trackInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)smartBeautyApplyWithContext:(id)arg0;
- (void)smartBeautyPreloadDataIfNeed;
- (BOOL)currentModelDownloaded;
- (BOOL)dataExist;
- (void)buildCurrentModelWithResponseModel:(id)arg0;
- (id)toDownloadEffectModels;
- (id)colorEffect;
- (void)setColorEffect:(id)arg0;
- (id)logCategory;
- (void).cxx_destruct;
- (id)panelName;

@end
