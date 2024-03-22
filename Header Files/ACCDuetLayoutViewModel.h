//
//     Generated by private class-dump
//

@class NSString, RACSubject, ACCDuetLayoutManager, RACSignal, NSArray;
@protocol ACCRecordPropService, ACCRecordFlowService, ACCCameraService;

@interface ACCDuetLayoutViewModel : ACCRecorderViewModel <ACCDuetLayoutManagerDelegate, ACCDuetLayoutService> {
    BOOL _hasRetryDuetLayout;
    BOOL _isDuetGreenScreenSelected;
    BOOL _figureAppearanceDurationReachesThreshold;
    RACSubject *_duetLayoutDidChangedSubject;
    RACSubject *_updateIconSubject;
    RACSubject *_shouldSwapCameraPositionSubject;
    RACSubject *_applyDuetLayoutSubject;
    RACSubject *_refreshDuetLayoutsSubject;
    RACSubject *_successDownFirstLayoutResourceSubject;
    RACSubject *_duetIconImageReadySubject;
    id<ACCCameraService> _cameraService;
    id<ACCRecordPropService> _propService;
    id<ACCRecordFlowService> _flowService;
    ACCDuetLayoutManager *_duetManager;
    long long _duetGreenScreenAppearanceThreshold;
    long long _figureAppearanceDuration;
}

@property (retain, nonatomic) RACSubject *duetLayoutDidChangedSubject;
@property (retain, nonatomic) RACSubject *updateIconSubject;
@property (retain, nonatomic) RACSubject *shouldSwapCameraPositionSubject;
@property (retain, nonatomic) RACSubject *applyDuetLayoutSubject;
@property (retain, nonatomic) RACSubject *refreshDuetLayoutsSubject;
@property (retain, nonatomic) RACSubject *successDownFirstLayoutResourceSubject;
@property (retain, nonatomic) RACSubject *duetIconImageReadySubject;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) ACCDuetLayoutManager *duetManager;
@property (nonatomic) BOOL hasRetryDuetLayout;
@property (nonatomic) long long duetGreenScreenAppearanceThreshold;
@property (nonatomic) long long figureAppearanceDuration;
@property (nonatomic) BOOL isDuetGreenScreenSelected;
@property (nonatomic) BOOL figureAppearanceDurationReachesThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) RACSignal *duetLayoutDidChangedSignal;
@property (readonly, nonatomic) RACSignal *updateIconSignal;
@property (readonly, nonatomic) RACSignal *shouldSwapCameraPositionSignal;
@property (readonly, nonatomic) RACSignal *applyDuetLayoutSignal;
@property (readonly, nonatomic) RACSignal *successDownFirstLayoutResourceSignal;
@property (readonly, nonatomic) RACSignal *refreshDuetLayoutsSignal;
@property (readonly, nonatomic) RACSignal *duetIconImageReadySignal;
@property (readonly, nonatomic) NSArray *duetLayoutModels;
@property (readonly, nonatomic) long long firstTimeIndex;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (BOOL)enableDuetImportAsset;
- (BOOL)supportImportAssetDuetLayout;
- (void)handleMessageOfDuetLayoutChanged:(id)arg0;
- (id)duetLayoutDidChangedSignal;
- (id)updateIconSignal;
- (id)shouldSwapCameraPositionSignal;
- (id)applyDuetLayoutSignal;
- (id)successDownFirstLayoutResourceSignal;
- (id)refreshDuetLayoutsSignal;
- (id)duetIconImageReadySignal;
- (id)duetLayoutModels;
- (long long)firstTimeIndex;
- (id)duetManager;
- (void)updateFigureAppearanceDurationInMS;
- (BOOL)isDuetLandscapeVideoAndNeedOptimizeLayout;
- (void)sendUpdateIconSignal:(id)arg0;
- (void)startDuetIfNecessary;
- (void)didSelectDuetLayoutAtIndex:(long long)arg0;
- (void)retryDownloadDuetEffects;
- (void)handleMessageOfFigureAppearanceDurationReachesThreshold;
- (BOOL)isDuetGreenScreenEverShot;
- (void)sendMessageOfRemovingSegmentsToEffectWithID:(long long)arg0;
- (void)duetLayoutManager:(id)arg0 loadEffectsFinished:(BOOL)arg1;
- (void)succeedDownloadFirstLayoutResource;
- (void)duetLayoutManager:(id)arg0 willApplyDuetLayoutModel:(id)arg1;
- (void)duetLayoutManager:(id)arg0 didApplyDuetLayout:(id)arg1;
- (id)successDownFirstLayoutResourceSubject;
- (id)applyDuetLayoutSubject;
- (id)refreshDuetLayoutsSubject;
- (void)setIsDuetGreenScreenSelected:(BOOL)arg0;
- (void)updateShouldShowDuetGreenScreenAlert;
- (BOOL)isDuetGreenScreenSelected;
- (void)setDuetGreenScreenAppearanceThreshold:(long long)arg0;
- (long long)duetGreenScreenAppearanceThreshold;
- (id)shouldSwapCameraPositionSubject;
- (id)p_landscapeVideoConfigDuetLayoutName;
- (id)duetLayoutDidChangedSubject;
- (id)updateIconSubject;
- (id)duetIconImageReadySubject;
- (BOOL)hasRetryDuetLayout;
- (void)setHasRetryDuetLayout:(BOOL)arg0;
- (void)retryMultiVideoSeekToTimeIfNeeded;
- (void)moniterDuetCameraCreation;
- (id)supportDuetLayoutList;
- (BOOL)figureAppearanceDurationReachesThreshold;
- (long long)figureAppearanceDuration;
- (void)setFigureAppearanceDuration:(long long)arg0;
- (void)setFigureAppearanceDurationReachesThreshold:(BOOL)arg0;
- (void)setDuetLayoutDidChangedSubject:(id)arg0;
- (void)setUpdateIconSubject:(id)arg0;
- (void)setShouldSwapCameraPositionSubject:(id)arg0;
- (void)setApplyDuetLayoutSubject:(id)arg0;
- (void)setRefreshDuetLayoutsSubject:(id)arg0;
- (void)setSuccessDownFirstLayoutResourceSubject:(id)arg0;
- (void)setDuetIconImageReadySubject:(id)arg0;
- (void)setDuetManager:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end