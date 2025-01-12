//
//     Generated by private class-dump
//

@class ACCRearMusicModel, NSString, RACSubject, ACCVideoEditMusicViewModel, IESEffectModel, ACCRecordSelectMusicPanel, RACSignal;
@protocol ACCRecordSwitchModeService, ACCRecordPropService, ACCRecorderViewContainer, ACCRecordUIHiddenStrategyService, ACCRecordConfigService, ACCRecordSidebarService, ACCMusicModelProtocol, ACCVideoConfigProtocol, ACCRecordFlowService, ACCCameraService, ACCRecordSelectMusicBindService;

@interface ACCRecordSelectMusicServiceImpl : ACCRecorderViewModel <ACCRecordConfigDurationHandler, ACCRecordConfigAudioHandler, ACCRecordSelectMusicService, FPDependentInitable> {
    BOOL _isMusicLoading;
    BOOL _isFirstAppear;
    BOOL _mounted;
    BOOL _enableAsyncPickMusic;
    BOOL _hasSelectedMusic;
    long long _currentMusicPanelStatus;
    id<ACCMusicModelProtocol> _propRecommendMusic;
    ACCRearMusicModel *_rearApplyMusic;
    id /* block */ _hasSelectingMusicBlock;
    id /* block */ _updateRearApplyMusicBlock;
    double _propBindMusicStartTime;
    NSString *_currentPropID;
    id<ACCMusicModelProtocol> _weakBindMusic;
    RACSubject *_musicCoverSubject;
    RACSubject *_selectMusicAnimationSubject;
    RACSubject *_bindMusicErrorSubject;
    RACSubject *_cancelMusicSubject;
    RACSubject *_pickMusicSubject;
    RACSubject *_updateMusicSubject;
    RACSubject *_updateMusicEnableSubject;
    RACSubject *_muteTipSubject;
    RACSubject *_downloadMusicForStickerSubject;
    RACSubject *_showSelectMusicPanelSubject;
    RACSubject *_cancelSelectedMusicSubject;
    double _currentPlayTime;
    RACSubject *_periodicTimeObserveSubject;
    RACSubject *_changePeriodicTimeIntervalSubject;
    double _periodicTimeInterval;
    RACSubject *_musicLoadingSubject;
    IESEffectModel *_currentSticker;
    IESEffectModel *_reuseFeedEffect;
    NSString *_feedMusicFailedReason;
    NSString *_feedStickerFailedReason;
    id<ACCCameraService> _cameraService;
    id<ACCRecordPropService> _propService;
    id<ACCRecordUIHiddenStrategyService> _hiddenStragyService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordFlowService> _flowService;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCRecordSidebarService> _sidebarService;
    id<ACCVideoConfigProtocol> _config;
    id<ACCRecordConfigService> _recordConfigService;
    id<ACCMusicModelProtocol> _forceBindMusic;
    ACCVideoEditMusicViewModel *_editMusicViewModel;
    ACCRecordSelectMusicPanel *_musicPanelService;
    id<ACCRecordSelectMusicBindService> _selectMusicBindService;
}

@property (retain, nonatomic) RACSubject *musicCoverSubject;
@property (retain, nonatomic) RACSubject *selectMusicAnimationSubject;
@property (retain, nonatomic) RACSubject *bindMusicErrorSubject;
@property (retain, nonatomic) RACSubject *cancelMusicSubject;
@property (retain, nonatomic) RACSubject *pickMusicSubject;
@property (retain, nonatomic) RACSubject *updateMusicSubject;
@property (retain, nonatomic) RACSubject *updateMusicEnableSubject;
@property (retain, nonatomic) RACSubject *muteTipSubject;
@property (retain, nonatomic) RACSubject *downloadMusicForStickerSubject;
@property (retain, nonatomic) RACSubject *showSelectMusicPanelSubject;
@property (retain, nonatomic) RACSubject *cancelSelectedMusicSubject;
@property (nonatomic) double currentPlayTime;
@property (retain, nonatomic) RACSubject *periodicTimeObserveSubject;
@property (retain, nonatomic) RACSubject *changePeriodicTimeIntervalSubject;
@property (nonatomic) double periodicTimeInterval;
@property (retain, nonatomic) RACSubject *musicLoadingSubject;
@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (retain, nonatomic) IESEffectModel *reuseFeedEffect;
@property (copy, nonatomic) NSString *feedMusicFailedReason;
@property (copy, nonatomic) NSString *feedStickerFailedReason;
@property (nonatomic) BOOL hasSelectedMusic;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStragyService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (retain, nonatomic) id<ACCVideoConfigProtocol> config;
@property (retain, nonatomic) id<ACCRecordConfigService> recordConfigService;
@property (retain, nonatomic) id<ACCMusicModelProtocol> forceBindMusic;
@property (weak, nonatomic) ACCVideoEditMusicViewModel *editMusicViewModel;
@property (weak, nonatomic) ACCRecordSelectMusicPanel *musicPanelService;
@property (weak, nonatomic) id<ACCRecordSelectMusicBindService> selectMusicBindService;
@property (readonly, nonatomic) RACSignal *cancelMusicSignal;
@property (readonly, nonatomic) RACSignal *pickMusicSignal;
@property (readonly, nonatomic) RACSignal *updateMusicSignal;
@property (readonly, nonatomic) RACSignal *updateMusicEnableSignal;
@property (readonly, nonatomic) RACSignal *musicCoverSignal;
@property (readonly, nonatomic) RACSignal *selectMusicAnimationSignal;
@property (readonly, nonatomic) RACSignal *bindMusicErrorSignal;
@property (readonly, nonatomic) RACSignal *muteTipSignal;
@property (readonly, nonatomic) RACSignal *downloadMusicForStickerSignal;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic, getter=isMounted) BOOL mounted;
@property (readonly, nonatomic) RACSignal *showSelectMusicPanelSignal;
@property (nonatomic) long long currentMusicPanelStatus;
@property (readonly, nonatomic) RACSignal *cancelSelectedMusicSignal;
@property (retain, nonatomic) id<ACCMusicModelProtocol> propRecommendMusic;
@property (retain, nonatomic) ACCRearMusicModel *rearApplyMusic;
@property (copy, nonatomic) id /* block */ hasSelectingMusicBlock;
@property (copy, nonatomic) id /* block */ updateRearApplyMusicBlock;
@property (nonatomic) BOOL enableAsyncPickMusic;
@property (nonatomic) double propBindMusicStartTime;
@property (retain, nonatomic) NSString *currentPropID;
@property (retain, nonatomic) id<ACCMusicModelProtocol> weakBindMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) RACSignal *musicLoadingSignal;
@property (nonatomic) BOOL isMusicLoading;
@property (readonly, nonatomic) RACSignal *periodicTimeObserveSignal;
@property (readonly, nonatomic) RACSignal *changePeriodicTimeIntervalSignal;

+ (BOOL)supportSelectMusicWithRepository:(id)arg0;
+ (id)obtainMusicCoverInfoFromMusic:(id)arg0;

- (double)currentPlayTime;
- (id)publishModel;
- (id)cancelMusicSignal;
- (id)pickMusicSignal;
- (id)musicLoadingSignal;
- (BOOL)isMusicLoading;
- (void)setIsMusicLoading:(BOOL)arg0;
- (id)downloadMusicForStickerSignal;
- (BOOL)enableAsyncPickMusic;
- (void)setEnableAsyncPickMusic:(BOOL)arg0;
- (id)periodicTimeObserveSignal;
- (double)periodicTimeInterval;
- (id)changePeriodicTimeIntervalSignal;
- (long long)currentMusicPanelStatus;
- (void)setCurrentMusicPanelStatus:(long long)arg0;
- (void)changePeriodicTimeInterval:(double)arg0;
- (id)currentExtraRecommendedMusic;
- (BOOL)disableDeselectPropBindMusic;
- (BOOL)disableDeselectPropBindMusicWithProp:(id)arg0;
- (void)handleRearApplyMusic:(id)arg0 completion:(id /* block */)arg1;
- (void)handleCancelMusic:(id)arg0;
- (void)showSelectMusicPanel;
- (void)cancelSelectedMusic;
- (void)sendStartMusicLoadingSignal:(BOOL)arg0;
- (BOOL)shouldEnableSelectRearMusic;
- (double)calculateMusicDurationWithAsset:(id)arg0;
- (void)sendCurrentPlaybackTime:(double)arg0;
- (void)setCurrentPlayTime:(double)arg0;
- (void)setIsFirstAppear:(BOOL)arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)setMounted:(BOOL)arg0;
- (id)flowService;
- (id)switchModeService;
- (double)getComponentDuration:(id)arg0;
- (void)willSetMaxDuration:(inout double *)arg0 asset:(id)arg1 showTip:(BOOL)arg2 isFirstEmbed:(BOOL)arg3;
- (void)didSetMaxDuration:(double)arg0;
- (void)setFlowService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (id)showSelectMusicPanelSignal;
- (id)cancelSelectedMusicSignal;
- (id)propService;
- (void)setPropService:(id)arg0;
- (id)configService;
- (void)setRecordConfigService:(id)arg0;
- (void)setRearApplyMusic:(id)arg0;
- (id)sameStickerMusic;
- (id)rearApplyMusic;
- (BOOL)enableAsyncLoadingAnimation;
- (id)currentSticker;
- (void)updateCurrentSticker:(id)arg0;
- (void)assembleRearApplyMusic:(id)arg0;
- (void)assembleRearAndAutoApplyMusic:(id)arg0;
- (void)updateAudioRangeWithStartLocation:(double)arg0;
- (void)refreshMusicCover;
- (void)updateCurrentSelectEffectPack:(id)arg0;
- (id)propRecommendMusicWithCurrentEffectID;
- (void)updateSelectMusicIfNeed;
- (void)handleAutoApplyWeakBindMusicForEffect:(id)arg0;
- (void)cancelForceBindMusic:(id)arg0;
- (void)setCurrentSticker:(id)arg0;
- (id)sidebarService;
- (void)setSidebarService:(id)arg0;
- (void)videoMutedTip:(id)arg0;
- (id)recordConfigService;
- (void)setWeakBindMusic:(id)arg0;
- (id)weakBindMusic;
- (BOOL)hasCameraAndMicroPhoneAuth;
- (id)showSelectMusicPanelSubject;
- (id)cancelSelectedMusicSubject;
- (void)setShowSelectMusicPanelSubject:(id)arg0;
- (void)setCancelSelectedMusicSubject:(id)arg0;
- (void)recordComponentDidMount;
- (void)recordComponentDidAppear;
- (void)recordComponentDidDisappear;
- (void)recordComponentDidUnmount;
- (id)musicCoverSignal;
- (void)recordComponentWillAppear;
- (id)editMusicViewModel;
- (id)selectMusicAnimationSignal;
- (id)bindMusicErrorSignal;
- (id)muteTipSignal;
- (id)updateMusicSignal;
- (id)updateMusicEnableSignal;
- (id)musicPanelService;
- (void)trackChangeMusic:(BOOL)arg0;
- (BOOL)shouldHideSelectMusicButtonWithAnimationState:(BOOL)arg0;
- (BOOL)needFragmentInfo;
- (void)bindEditMusicViewModel:(id)arg0 musicPanelService:(id)arg1;
- (void)setEditMusicViewModel:(id)arg0;
- (void)setMusicPanelService:(id)arg0;
- (void)setHasSelectingMusicBlock:(id /* block */)arg0;
- (void)setUpdateRearApplyMusicBlock:(id /* block */)arg0;
- (void)trackWhenUseMusic:(id)arg0 extraInfo:(id)arg1;
- (void)handlePickMusic:(id)arg0 error:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)handleCancelMusic:(id)arg0 muteBGM:(BOOL)arg1 trackInfo:(id)arg2;
- (void)startBGMIfNeeded;
- (id)selectMusicBindService;
- (void)cleanCachedMusic;
- (void)startReuseFeedMusicFlowIfNeed;
- (BOOL)hasSelectedMusic;
- (void)autoApplyWeakBindMusic:(id)arg0;
- (void)updateWeakBindingMusic:(id)arg0;
- (void)updateSelectMusicEnableIfNeed;
- (void)refreshMusicCoverWithMusic:(id)arg0;
- (id)bindMusicErrorSubject;
- (void)setHasSelectedMusic:(BOOL)arg0;
- (void)pickMusic:(id)arg0 complete:(id /* block */)arg1;
- (void)unselectMusic:(id)arg0 muteBGM:(BOOL)arg1 trackInfo:(id)arg2;
- (void)selectForceBindMusic:(id)arg0 error:(id)arg1;
- (id)selectMusicAnimationSubject;
- (id)propRecommendMusic;
- (void)finishDownloadingPropRecommendMusicWithError:(id)arg0;
- (id)downloadMusicForStickerSubject;
- (void)updateForceBindMusicRange;
- (id /* block */)updateRearApplyMusicBlock;
- (id)updateMusicSubject;
- (id)updateMusicEnableSubject;
- (id)musicDurationWithAsset:(id)arg0;
- (void)setPeriodicTimeInterval:(double)arg0;
- (id)changePeriodicTimeIntervalSubject;
- (id)periodicTimeObserveSubject;
- (id)musicLoadingSubject;
- (id /* block */)hasSelectingMusicBlock;
- (void)setForceBindMusic:(id)arg0;
- (id)forceBindMusic;
- (void)downloadPropRecommendedMusic;
- (BOOL)enableAsyncPickMusicCurrent;
- (id)currentPropID;
- (double)propBindMusicStartTime;
- (void)trackWhenPropAutoLoadMusic:(id)arg0 currentPropID:(id)arg1 status:(long long)arg2 duration:(long long)arg3;
- (void)handleAutoSelectWeakBindMusic:(id)arg0 error:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)effectAutoBindMusicSendTrackWithMusic:(id)arg0 propID:(id)arg1;
- (void)setPropRecommendMusic:(id)arg0;
- (void)downloadAndUseCurrentPropRecommendedMusic;
- (id)hiddenStragyService;
- (BOOL)checkShouldShowSelectMusicButtonDefault;
- (id)pickMusicSubject;
- (id)musicCoverSubject;
- (id)cancelMusicSubject;
- (BOOL)shouldUseCurrentFeedMusic;
- (void)preFetchFeedMusicWithCompletion:(id /* block */)arg0;
- (void)preFetchFeedStickerWithCompletion:(id /* block */)arg0;
- (void)showFeedMusicViewIfNeeded;
- (id)reuseFeedEffect;
- (id)feedMusicFailedReason;
- (id)feedStickerFailedReason;
- (BOOL)canUseFeedSticker:(id)arg0;
- (void)setReuseFeedEffect:(id)arg0;
- (void)setFeedStickerFailedReason:(id)arg0;
- (void)setFeedMusicFailedReason:(id)arg0;
- (id)muteTipSubject;
- (void)pickForceBindMusic:(id)arg0 isForceBind:(BOOL)arg1 error:(id)arg2;
- (void)switchAIRecordFrameTypeIfNeeded;
- (void)removeFrames:(BOOL)arg0;
- (void)updateForceBindingMusic:(id)arg0;
- (void)setPropBindMusicStartTime:(double)arg0;
- (void)setCurrentPropID:(id)arg0;
- (void)setMusicCoverSubject:(id)arg0;
- (void)setSelectMusicAnimationSubject:(id)arg0;
- (void)setBindMusicErrorSubject:(id)arg0;
- (void)setCancelMusicSubject:(id)arg0;
- (void)setPickMusicSubject:(id)arg0;
- (void)setUpdateMusicSubject:(id)arg0;
- (void)setUpdateMusicEnableSubject:(id)arg0;
- (void)setMuteTipSubject:(id)arg0;
- (void)setDownloadMusicForStickerSubject:(id)arg0;
- (void)setPeriodicTimeObserveSubject:(id)arg0;
- (void)setChangePeriodicTimeIntervalSubject:(id)arg0;
- (void)setMusicLoadingSubject:(id)arg0;
- (void)setHiddenStragyService:(id)arg0;
- (void)setSelectMusicBindService:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithServiceProvider:(id)arg0;
- (void)dealloc;
- (BOOL)isFirstAppear;
- (BOOL)isMounted;
- (id)musicAsset;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
