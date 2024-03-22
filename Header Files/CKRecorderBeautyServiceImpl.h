//
//     Generated by private class-dump
//

@class ACCCameraSubscription, NSArray, CKBeautyDataManager, NSString, CKBeautyCacheManager;
@protocol ACCCameraService;

@interface CKRecorderBeautyServiceImpl : ACCRecorderViewModel <CKBeautyDataManagerSubscriberProtocol, CKBeautyService> {
    BOOL _isSidebarFloatingViewAppearing;
    long long _takingEffectGender;
    CKBeautyDataManager *_dataManager;
    long long _latestDetectedGender;
    ACCCameraSubscription *_subscription;
    id<ACCCameraService> _cameraService;
    CKBeautyCacheManager *_cacheManager;
    long long _adjustedValue;
    NSArray *_adjustedEffectIds;
}

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) CKBeautyDataManager *dataManager;
@property (retain, nonatomic) CKBeautyCacheManager *cacheManager;
@property (nonatomic) BOOL isSidebarFloatingViewAppearing;
@property (nonatomic) long long adjustedValue;
@property (copy, nonatomic) NSArray *adjustedEffectIds;
@property (nonatomic) long long takingEffectGender;
@property (readonly, nonatomic) long long latestDetectedGender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (BOOL)isUsingBeauty;
- (void)updateBeautyAvailabilities;
- (void)reloadBeautyInCamera;
- (void)removeBeautyFromCamera;
- (BOOL)isBeautyOn;
- (void)turnOnBeauty;
- (void)turnOffBeauty;
- (void)notifySidebarFloatingViewDidAppear;
- (void)notifySidebarFloatingViewDidDisappear;
- (BOOL)isSidebarFloatingViewAppearing;
- (void)notifyBeautyPanelViewDidAppear;
- (void)notifyBeautyPanelViewDidDisappear;
- (void)updateAdjustedValue:(long long)arg0 effectIds:(id)arg1;
- (void)didChangeBeautyOnState:(BOOL)arg0;
- (void)removeCacheIfNeeded;
- (void)asyncFetchCachedResponseIfNeed;
- (void)downloadAndUpdateSourceData:(id /* block */)arg0 preUseCacheSucceedCallback:(id /* block */)arg1;
- (BOOL)hasDownloadedBeautyData;
- (long long)latestDetectedGender;
- (long long)takingEffectGender;
- (void)saveCacheForGenders:(id)arg0;
- (void)updateLastestDetectedGender:(long long)arg0;
- (void)upadteTakingEffectGender:(long long)arg0;
- (void)saveCacheForGender:(long long)arg0;
- (void)updateSourceDataUsingDownloadedData:(id /* block */)arg0;
- (void)markAlgorithmDetectGender:(long long)arg0;
- (void)didUpdateRenderingData:(id)arg0 oldAppliedItemModels:(id)arg1;
- (void)checkUpdateSourceDataWithCompletion:(id /* block */)arg0 didPreUseCache:(BOOL)arg1;
- (void)handleFinishGenerateTree;
- (void)handleFinishDownloadAllItemsAction;
- (void)preUseCacheIfEnableWithGenerateTreeCallback:(id /* block */)arg0 didFinishDownloadAllItemsCallback:(id /* block */)arg1;
- (id)p_generateDataFilterConfig;
- (BOOL)p_hasValidCache;
- (void)p_migrateDataIfNeeded;
- (void)p_updateStateAfterUpdatingSourceData:(id)arg0;
- (BOOL)p_isBeautyAvailableWithResourcePath:(id)arg0 tag:(id)arg1;
- (id)p_generateOffNodeNode;
- (BOOL)p_updateComposerNodesIfNeededWithAppliedItemModels:(id)arg0 oldAppliedItemModels:(id)arg1;
- (void)p_replaceComposerNodesWithAppliedItemModels:(id)arg0 oldAppliedItemModels:(id)arg1;
- (void)APMApplyEffect:(id)arg0;
- (long long)adjustedValue;
- (id)adjustedEffectIds;
- (float)p_effectRatioAfterReduction;
- (id)p_convertToVEComposerInfoFromItemModel:(id)arg0 shouldUseValue:(BOOL)arg1 value:(long long)arg2;
- (void)p_updateComposerNodesWithItemModel:(id)arg0 appliedModel:(id)arg1;
- (long long)getCurrectGenderABGroup;
- (void)setAdjustedValue:(long long)arg0;
- (void)setAdjustedEffectIds:(id)arg0;
- (void)setTakingEffectGender:(long long)arg0;
- (void)setIsSidebarFloatingViewAppearing:(BOOL)arg0;
- (id)dataManager;
- (void).cxx_destruct;
- (void)setDataManager:(id)arg0;
- (id)initWithServiceProvider:(id)arg0;
- (void)setSubscription:(id)arg0;
- (void)addSubscriber:(id)arg0;
- (id)subscription;
- (void)removeSubscriber:(id)arg0;
- (id)cacheManager;
- (void)setCacheManager:(id)arg0;

@end
