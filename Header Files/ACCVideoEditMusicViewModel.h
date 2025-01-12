//
//     Generated by private class-dump
//

@class NSMutableDictionary, RACSubject, ACCRearMusicModel, RACSignal, NSDictionary, ACCMusicPanelViewModel, ACCMusicVolumeViewModel, ACCRecommendMusicRequestManager, ACCEditMusicBizModule, ACCEditStandaloneMusicPlayerModule, NSString, AWEVideoPublishViewModel, NSArray, NSNumber, AWEVideoPublishMusicSelectUserCollectionsReqeustManager, ACCMusicCapsuleUIState, ACCCameraSubscription;
@protocol ACCEditTextReaderServiceProtocol, ACCEditServiceProtocol, ACCStickerServiceProtocol, ACCSequenceEditServiceProtocol, ACCMusicModelProtocol, ACCElementBindService, ACCRecordSelectMusicService, ACCVideoEditFlowControlService, ACCEditMusicServiceDelegate, IESServiceProvider;

@interface ACCVideoEditMusicViewModel : NSObject <ACCEditMusicServiceProtocol, AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate, ACCVideoEditMusicPlayerDelegate, AWEVideoPublishMusicSelectViewRecentMusicDelegate> {
    BOOL _presentingCurrentMusicPanel;
    BOOL _musicStoryLoadFailed;
    BOOL _isRetryingFetchRecentMusic;
    BOOL _isRetryingFetchUserCollectedMusic;
    BOOL _musicFeatureDisable;
    BOOL _hasStartFetchZipURI;
    BOOL _hasFetchingZipURL;
    BOOL _hasFetchZipURI;
    BOOL _hasFetchFrameZipURI;
    BOOL _needResetInitialMusic;
    BOOL _recommendMusichasRemoved;
    BOOL _hasShowSimilarMusicToast;
    BOOL _fetchingFramsAndUpload;
    BOOL _musicEntranceClicked;
    id<ACCEditMusicServiceDelegate> _delegate;
    AWEVideoPublishViewModel *_repoContainer;
    id<IESServiceProvider> _serviceProvider;
    id<ACCEditServiceProtocol> _editService;
    id<ACCStickerServiceProtocol> _stickerService;
    id<ACCVideoEditFlowControlService> _editFlowControlService;
    ACCEditMusicBizModule *_musicBizModule;
    NSArray *_musicList;
    double _preTotalDuration;
    ACCRearMusicModel *_rearApplyMusic;
    id<ACCMusicModelProtocol> _challengeOrPropMusic;
    RACSubject *_didHandleOfflineMusicSubject;
    ACCEditStandaloneMusicPlayerModule *_standaloneMusicPlayerModule;
    NSArray *_toolBarModels;
    double _showMusicPanelTime;
    double _showMusicDurationTime;
    NSMutableDictionary *_pitayaTrackModels;
    ACCMusicVolumeViewModel *_volumeViewModel;
    id /* block */ _preconditionDisablePlayMusic;
    ACCMusicPanelViewModel *_musicPanelViewModel;
    ACCRecommendMusicRequestManager *_recommendMusicRequestManager;
    unsigned long long _currentMusicServiceModuleType;
    ACCCameraSubscription *_subscription;
    RACSubject *_willSelectMusicSubject;
    RACSubject *_didDeselectMusicSubject;
    RACSubject *_musicChangedSubject;
    RACSubject *_didRequestMusicSubject;
    RACSubject *_mvWillAddMusicSubject;
    RACSubject *_didAddMusicSubject;
    RACSubject *_mvDidChangeMusicSubject;
    RACSubject *_didSelectCutMusicSubject;
    RACSubject *_willAddMusicSubject;
    RACSubject *_mvChangeMusicLoadingSubject;
    RACSubject *_changeMusicTipsSubject;
    RACSubject *_collectedMusicListSubject;
    RACSubject *_volumeChangedSubject;
    RACSubject *_refreshVolumeViewSubject;
    RACSubject *_refreshMusicRelatedUISubject;
    RACSubject *_cutMusicButtonClickedSubject;
    RACSubject *_showMusicPanelSubject;
    RACSubject *_featchFramesUploadStatusSubject;
    RACSubject *_advanceEditDeleteAudioSubject;
    RACSubject *_updateCurrentBindChallengesSubject;
    RACSubject *_musicComponentDidMountSubject;
    RACSubject *_standaloneMusicPlayerChangedSubject;
    NSArray *_userCollectedMusicList;
    NSArray *_recentMusicList;
    AWEVideoPublishMusicSelectUserCollectionsReqeustManager *_userMusicCollectionReqManager;
    RACSubject *_recentMusicListSubject;
    id<ACCMusicModelProtocol> _autoSelectMusicShowInPanel;
    id<ACCRecordSelectMusicService> _recordMusicService;
    id<ACCEditTextReaderServiceProtocol> _editTextReaderService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    NSDictionary *_showToolBarFunctionDictionary;
    ACCMusicCapsuleUIState *_capsuleUIState;
    NSDictionary *_recommendReasonDict;
    id<ACCElementBindService> _elementBindService;
}

@property (readonly, nonatomic) NSNumber *isRequestingMusicForQuickPicture;
@property (nonatomic) BOOL shouldForbidWeakBindMusic;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) RACSubject *willSelectMusicSubject;
@property (retain, nonatomic) RACSubject *didDeselectMusicSubject;
@property (retain, nonatomic) RACSubject *musicChangedSubject;
@property (retain, nonatomic) RACSubject *didRequestMusicSubject;
@property (retain, nonatomic) RACSubject *mvWillAddMusicSubject;
@property (retain, nonatomic) RACSubject *didAddMusicSubject;
@property (retain, nonatomic) RACSubject *mvDidChangeMusicSubject;
@property (retain, nonatomic) RACSubject *didSelectCutMusicSubject;
@property (retain, nonatomic) RACSubject *willAddMusicSubject;
@property (retain, nonatomic) RACSubject *mvChangeMusicLoadingSubject;
@property (retain, nonatomic) RACSubject *changeMusicTipsSubject;
@property (retain, nonatomic) RACSubject *collectedMusicListSubject;
@property (retain, nonatomic) RACSubject *volumeChangedSubject;
@property (retain, nonatomic) RACSubject *refreshVolumeViewSubject;
@property (retain, nonatomic) RACSubject *refreshMusicRelatedUISubject;
@property (retain, nonatomic) RACSubject *cutMusicButtonClickedSubject;
@property (retain, nonatomic) RACSubject *showMusicPanelSubject;
@property (retain, nonatomic) RACSubject *featchFramesUploadStatusSubject;
@property (retain, nonatomic) RACSubject *advanceEditDeleteAudioSubject;
@property (retain, nonatomic) RACSubject *updateCurrentBindChallengesSubject;
@property (retain, nonatomic) RACSubject *musicComponentDidMountSubject;
@property (retain, nonatomic) RACSubject *standaloneMusicPlayerChangedSubject;
@property (retain, nonatomic) RACSubject *didHandleOfflineMusicSubject;
@property (copy, nonatomic) NSArray *userCollectedMusicList;
@property (copy, nonatomic) NSArray *recentMusicList;
@property (retain, nonatomic) AWEVideoPublishMusicSelectUserCollectionsReqeustManager *userMusicCollectionReqManager;
@property (retain, nonatomic) RACSubject *recentMusicListSubject;
@property (nonatomic) BOOL isRetryingFetchRecentMusic;
@property (nonatomic) BOOL isRetryingFetchUserCollectedMusic;
@property (nonatomic) BOOL musicFeatureDisable;
@property (retain, nonatomic) ACCRearMusicModel *rearApplyMusic;
@property (retain, nonatomic) id<ACCMusicModelProtocol> challengeOrPropMusic;
@property (nonatomic) BOOL hasStartFetchZipURI;
@property (nonatomic) BOOL hasFetchingZipURL;
@property (nonatomic) BOOL hasFetchZipURI;
@property (nonatomic) BOOL hasFetchFrameZipURI;
@property (nonatomic) BOOL needResetInitialMusic;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> editFlowControlService;
@property (nonatomic) BOOL recommendMusichasRemoved;
@property (retain, nonatomic) id<ACCMusicModelProtocol> autoSelectMusicShowInPanel;
@property (weak, nonatomic) id<ACCRecordSelectMusicService> recordMusicService;
@property (weak, nonatomic) id<ACCEditTextReaderServiceProtocol> editTextReaderService;
@property (retain, nonatomic) ACCRecommendMusicRequestManager *recommendMusicRequestManager;
@property (retain, nonatomic) ACCMusicPanelViewModel *musicPanelViewModel;
@property (nonatomic) unsigned long long currentMusicServiceModuleType;
@property (nonatomic) double showMusicPanelTime;
@property (retain, nonatomic) ACCEditStandaloneMusicPlayerModule *standaloneMusicPlayerModule;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) BOOL hasShowSimilarMusicToast;
@property (nonatomic) BOOL fetchingFramsAndUpload;
@property (copy, nonatomic) NSDictionary *showToolBarFunctionDictionary;
@property (retain, nonatomic) NSMutableDictionary *pitayaTrackModels;
@property (copy, nonatomic) NSArray *toolBarModels;
@property (retain, nonatomic) ACCMusicCapsuleUIState *capsuleUIState;
@property (retain, nonatomic) NSDictionary *recommendReasonDict;
@property (nonatomic, getter=isMusicEntranceClicked) BOOL musicEntranceClicked;
@property (weak, nonatomic) id<ACCElementBindService> elementBindService;
@property (retain, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) ACCEditMusicBizModule *musicBizModule;
@property (copy, nonatomic) NSArray *musicList;
@property (nonatomic) double preTotalDuration;
@property (readonly, nonatomic) BOOL isCommerceLimitPanel;
@property (readonly, nonatomic) RACSignal *refreshMusicRelatedUISignal;
@property (readonly, nonatomic) RACSignal *didRequestMusicSignal;
@property (readonly, nonatomic) RACSignal *mvChangeMusicLoadingSignal;
@property (readonly, nonatomic) RACSignal *changeMusicTipsSignal;
@property (readonly, nonatomic) RACSignal *collectedMusicListSignal;
@property (readonly, nonatomic) RACSignal *recentMusicListSignal;
@property (readonly, nonatomic) RACSignal *featchFramesUploadStatusSignal;
@property (nonatomic) double showMusicDurationTime;
@property (readonly, nonatomic) BOOL isAdvancedEditOn;
@property (retain, nonatomic) ACCMusicVolumeViewModel *volumeViewModel;
@property (copy, nonatomic) id /* block */ preconditionDisablePlayMusic;
@property (nonatomic) BOOL presentingCurrentMusicPanel;
@property (nonatomic) BOOL musicStoryLoadFailed;
@property (readonly, nonatomic) RACSignal *capsuleUIStateSignal;
@property (weak, nonatomic) id<ACCEditMusicServiceDelegate> delegate;
@property (readonly, nonatomic) BOOL musicPanelShowing;
@property (readonly, nonatomic) BOOL useMusicSelectPanel;
@property (readonly, nonatomic) RACSignal *willSelectMusicSignal;
@property (readonly, nonatomic) RACSignal *willAddMusicSignal;
@property (readonly, nonatomic) RACSignal *didAddMusicSignal;
@property (readonly, nonatomic) RACSignal *didDeselectMusicSignal;
@property (readonly, nonatomic) RACSignal *mvWillAddMusicSignal;
@property (readonly, nonatomic) RACSignal *mvDidChangeMusicSignal;
@property (readonly, nonatomic) RACSignal *cutMusicButtonClickedSignal;
@property (readonly, nonatomic) RACSignal *didSelectCutMusicSignal;
@property (readonly, nonatomic) RACSignal *volumeChangedSignal;
@property (readonly, nonatomic) RACSignal *refreshVolumeViewSignal;
@property (readonly, nonatomic) RACSignal *musicChangedSignal;
@property (readonly, nonatomic) RACSignal *advanceEditDeleteAudioSignal;
@property (readonly, nonatomic) RACSignal *showMusicPanelSignal;
@property (readonly, nonatomic) RACSignal *updateCurrentBindChallengesSignal;
@property (readonly, nonatomic) RACSignal *musicComponentDidMountSignal;
@property (readonly, nonatomic) RACSignal *standaloneMusicPlayerChangedSignal;
@property (readonly, nonatomic) RACSignal *didHandleOfflineMusicSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clickShowMusicPanelTrack:(id)arg0 moduleType:(unsigned long long)arg1;

- (double)currentPlayTime;
- (id)videoData;
- (id)publishModel;
- (id)currentExtraRecommendedMusic;
- (BOOL)musicFeatureDisable;
- (BOOL)musicPanelShowing;
- (BOOL)presentingCurrentMusicPanel;
- (BOOL)useMusicSelectPanel;
- (id)willSelectMusicSignal;
- (id)willAddMusicSignal;
- (id)didAddMusicSignal;
- (id)didDeselectMusicSignal;
- (id)mvWillAddMusicSignal;
- (id)mvDidChangeMusicSignal;
- (id)cutMusicButtonClickedSignal;
- (id)didSelectCutMusicSignal;
- (id)volumeChangedSignal;
- (id)refreshVolumeViewSignal;
- (id)featchFramesUploadStatusSignal;
- (id)musicChangedSignal;
- (id)advanceEditDeleteAudioSignal;
- (id)showMusicPanelSignal;
- (id)updateCurrentBindChallengesSignal;
- (id)musicComponentDidMountSignal;
- (id)standaloneMusicPlayerChangedSignal;
- (id)didHandleOfflineMusicSignal;
- (BOOL)disablePlayMusic;
- (void)generalFetchFramesAndUpload;
- (double)currentVoiceVolumeInPanelViewModel;
- (void)updateMusicPanelModelVoiceVolume:(double)arg0 MusicVolume:(double)arg1;
- (void)forceUpdateMusicList;
- (void)autoSelectMusicIfNeeded;
- (id)rearSelectedMusic;
- (void)handleSelectMusic:(id)arg0 isAutoSelected:(BOOL)arg1 error:(id)arg2 removeMusicSticker:(BOOL)arg3 completeBlock:(id /* block */)arg4;
- (void)preloadMusicPanelData;
- (BOOL)shouldEditSelectMusicIfNeeded;
- (void)triggleShowMusicPanel;
- (BOOL)shouldForbidPauseWhenDisappear;
- (id)initWithViewModelType:(unsigned long long)arg0;
- (void)continuePlay;
- (void)setVolumeForAudio:(float)arg0;
- (void)seekToTimeAndRender:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 completionHandler:(id /* block */)arg1;
- (id)musicList;
- (void)setMusicList:(id)arg0;
- (id)editService;
- (void)setEditService:(id)arg0;
- (BOOL)isShareAsStory;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (void)setStickerService:(id)arg0;
- (id)stickerService;
- (id)repoContainer;
- (void)setRepoContainer:(id)arg0;
- (void)updateVideoData:(id)arg0 updateType:(long long)arg1 completeBlock:(id /* block */)arg2;
- (void)setMusicBizModule:(id)arg0;
- (id)musicBizModule;
- (void)sendMusicComponentDidMountSignalWithModuleKey:(id)arg0;
- (void)fetchHotMuiscListIfNeeded;
- (void)setNeedResetInitialMusic:(BOOL)arg0;
- (void)setRearApplyMusic:(id)arg0;
- (void)retryFetchFirstPage;
- (void)handleSmartMVInitialMusic:(id)arg0;
- (void)updateOrPreloadMusicPanelListAfterFrameExtract;
- (void)fetchAutoSelectMusicSilentlyWithoutMusic:(BOOL)arg0;
- (void)fetchFramesAndUPload;
- (void)autoSelectMusicIfNeededWithCompletion:(id /* block */)arg0;
- (void)handleTasksAfterFirstRender;
- (void)updateCollectStateWithMusicId:(id)arg0 collect:(BOOL)arg1;
- (void)sendVoiceVolumeChangedSignal:(id)arg0;
- (void)resetCollectedMusicListIfNeeded;
- (id)changeMusicTipsSignal;
- (id)collectedMusicListSignal;
- (id)recentMusicListSignal;
- (id)didRequestMusicSignal;
- (BOOL)AIMusicDisableWithType:(unsigned long long *)arg0;
- (void)reFetchFramesAndUpload;
- (id)refreshMusicRelatedUISignal;
- (id /* block */)preconditionDisablePlayMusic;
- (void)setPreconditionDisablePlayMusic:(id /* block */)arg0;
- (id)currentBindChallenges;
- (void)sendUpdateCurrentBindChallengesSignal:(id)arg0 moduleKey:(id)arg1;
- (id)isRequestingMusicForQuickPicture;
- (void)replaceAudio:(id)arg0 completeBlock:(id /* block */)arg1;
- (void)deselectMusic:(id)arg0;
- (void)sendRefreshVolumeViewSignal:(id)arg0;
- (void)updateMusicList;
- (void)markShowIfNeeded;
- (void)clickShowMusicPanelTrack;
- (unsigned long long)selectMusic;
- (unsigned long long)selectMusicInPanel;
- (unsigned long long)selectMusicInLibrary;
- (void)fetchFramesAndUPloadIfNeeded;
- (void)fetchRecentMusicListIfNeeded;
- (void)fetchAndUpdateMusicPanelMusicList;
- (id)userCollectedMusicList;
- (void)sendCutMusicButtonClickedSignal;
- (void)collectMusic:(id)arg0 collect:(BOOL)arg1 tabName:(id)arg2;
- (void)updateDataSourceFavoriteState:(id)arg0;
- (void)recentMusicRetryFetchFirstPage;
- (void)handleSelectMusic:(id)arg0 error:(id)arg1 removeMusicSticker:(BOOL)arg2;
- (void)didSelectCutMusicSignal:(struct _HTSAudioRange { double x0; double x1; })arg0;
- (void)deselectMusic:(id)arg0 autoPlay:(BOOL)arg1;
- (void)setPresentingCurrentMusicPanel:(BOOL)arg0;
- (double)showMusicPanelTime;
- (void)setShowMusicPanelTime:(double)arg0;
- (id)musicPanelViewModel;
- (void)sendRefreshMusicRelatedUISignal;
- (void)sendMusicChangedSignal;
- (id)pitayaTrackModels;
- (void)updateCurrentMusic:(id)arg0 localURL:(id)arg1;
- (void)handleSelectMusic:(id)arg0 error:(id)arg1 removeMusicSticker:(BOOL)arg2 completeBlock:(id /* block */)arg3;
- (void)deselectMusic:(id)arg0 autoPlay:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)setAutoSelectMusic:(id)arg0;
- (id)autoSelectMusic;
- (BOOL)isAdvancedEditOn;
- (id)refreshVolumeViewSubject;
- (void)setRefreshVolumeViewSubject:(id)arg0;
- (id)rearApplyMusic;
- (id)editTextReaderService;
- (void)setEditTextReaderService:(id)arg0;
- (void)setAutoLoadMusicHandler:(id)arg0;
- (id)autoLoadMusicHandler;
- (void)fetchNextPage:(id /* block */)arg0;
- (BOOL)isProcessingFetchingData;
- (BOOL)canDeselectMusic;
- (double)getPGCAndUGCTrackVolume;
- (id)recordMusicService;
- (void)setRecordMusicService:(id)arg0;
- (unsigned long long)currentMusicServiceModuleType;
- (void)setCurrentMusicServiceModuleType:(unsigned long long)arg0;
- (void)updateCanvasAndStickerDuration:(id)arg0;
- (id)audioEffectService;
- (id)editFlowControlService;
- (void)setEditFlowControlService:(id)arg0;
- (id)elementBindService;
- (void)setElementBindService:(id)arg0;
- (void)showToastWhenFrameExtractDidFinishWithResultModel:(id)arg0 trackParams:(id)arg1;
- (void)clearMusicConfigAssembler;
- (id)updateCurrentBindChallengesSubject;
- (void)setUpdateCurrentBindChallengesSubject:(id)arg0;
- (id)standaloneMusicPlayerModule;
- (void)updateAudioEditToolBar:(unsigned long long)arg0 selected:(BOOL)arg1;
- (void)deleteItemModelIfNeeded:(id)arg0;
- (id)toolBarModels;
- (id)volumeViewModel;
- (void)updateAudioEditToolBar:(unsigned long long)arg0 selected:(BOOL)arg1 enabled:(BOOL)arg2;
- (void)setUserCollectedMusicList:(id)arg0;
- (BOOL)hasShowMusicPanel;
- (void)setVolumeViewModel:(id)arg0;
- (BOOL)shouldUseStandalonePlayer;
- (void)updateChallengeOrPropRecommendMusic:(id)arg0;
- (id)mvChangeMusicLoadingSignal;
- (void)replaceAudioForPhotoVideo:(id)arg0 completeBlock:(id /* block */)arg1;
- (void)sendAdvanceEditDeleteAudioSignal:(BOOL)arg0;
- (void)sendMusicVolumeChangedSignal:(id)arg0;
- (BOOL)isCommerceLimitPanel;
- (id)recentMusicList;
- (id)recommendMusicRequestManager;
- (void)updateMusicListWithArray:(id)arg0;
- (BOOL)recentMusicIsProcessingFetchingData;
- (BOOL)recentMusicHasMore;
- (void)recentMusicFetchNextPage:(id /* block */)arg0;
- (double)showMusicDurationTime;
- (void)setRecentMusicList:(id)arg0;
- (void)setShowMusicDurationTime:(double)arg0;
- (void)setPreTotalDuration:(double)arg0;
- (double)preTotalDuration;
- (BOOL)shouldRefactorForOpenCreation;
- (void)frameExtractDidFinish;
- (void)downloadAndApplyMusicWithPublishModel:(id)arg0 completion:(id /* block */)arg1;
- (id)didHandleOfflineMusicSubject;
- (void)clearStandaloneMusicPlayerIfNeeded;
- (BOOL)selectMusicbuttonEnable;
- (BOOL)isMusicStoryShare;
- (BOOL)musicStoryLoadFailed;
- (BOOL)addBgmForMusicStory;
- (id)displayTileOfMusic:(id)arg0;
- (BOOL)shouldAutoApplyRearBindMusic;
- (BOOL)shouldSelectMusicAutomatically;
- (BOOL)addBgmIfNeeded;
- (id)capsuleUIStateSignal;
- (void)trackAfterUsePitayaModel:(id)arg0;
- (BOOL)shouldEditSelectMusicAutomatically;
- (void)setIsRequestingMusicForQuickPicture:(id)arg0;
- (BOOL)allowApplyAutoMusic;
- (void)selectFirstMusicAutomatically:(double)arg0 autoLoadMusicType:(unsigned long long)arg1;
- (void)trackWhenAutoLoadMusic:(id)arg0 status:(long long)arg1 startTime:(double)arg2;
- (void)selectFirstMusic:(double)arg0 needTrack:(BOOL)arg1;
- (BOOL)shouldSelectMusicAutomaticallyAtSlides;
- (BOOL)p_captureSinglePhotoAutoSelectMusic;
- (BOOL)p_uploadPhotoAutoSelectMusic;
- (BOOL)p_checkSinglePhotoAutoSelectMusic;
- (BOOL)shouldForbidWeakBindMusic;
- (BOOL)didSignMusicSelectedFrom;
- (id)currentAutoLoadMusic;
- (void)applyWeakBindMusic:(id)arg0 completion:(id /* block */)arg1;
- (void)setShouldForbidWeakBindMusic:(BOOL)arg0;
- (void)setDidSignMusicSelectedFrom:(BOOL)arg0;
- (void)setupRecommendReasonObserver;
- (void)setPitayaTrackModels:(id)arg0;
- (void)p_fetchFramesAndUpload;
- (BOOL)hasStartFetchZipURI;
- (void)setHasStartFetchZipURI:(BOOL)arg0;
- (void)setHasFetchingZipURL:(BOOL)arg0;
- (void)setFetchingFramsAndUpload:(BOOL)arg0;
- (id)featchFramesUploadStatusSubject;
- (void)p_fetchHotMusicList;
- (void)setHasFetchZipURI:(BOOL)arg0;
- (void)setHasFetchFrameZipURI:(BOOL)arg0;
- (BOOL)hasFetchingZipURL;
- (BOOL)hasFetchFrameZipURI;
- (void)showRepalcedMusicToastWithList:(id)arg0;
- (BOOL)hasShowSimilarMusicToast;
- (void)setHasShowSimilarMusicToast:(BOOL)arg0;
- (BOOL)hasFetchZipURI;
- (void)p_fetchRecommendMusic:(id)arg0;
- (BOOL)shouldTransMusicItem:(id)arg0;
- (BOOL)musicListExistMusicOnTop:(id)arg0;
- (BOOL)shouldAddRearApplyMusic:(BOOL)arg0;
- (BOOL)recommendPanelSupportLongPressGesture;
- (BOOL)recommendMusichasRemoved;
- (id)autoSelectMusicShowInPanel;
- (void)setAutoSelectMusicShowInPanel:(id)arg0;
- (id)challengeOrPropMusic;
- (id)willSelectMusicSubject;
- (void)resetUserMusicCollectionData;
- (void)fetchUserMusicCollectionDataWithCompletion:(id /* block */)arg0;
- (void)sendDeselectMusicSignal;
- (id)willAddMusicSubject;
- (BOOL)isAudioBeatTrackMusicMV;
- (void)updateMusicOfMusicEffectMV:(id)arg0 removeMusicSticker:(BOOL)arg1;
- (void)updateMusicWithAudioBeatTrack:(id)arg0 removeMusicSticker:(BOOL)arg1;
- (void)updateMusicOfNormalVideo:(id)arg0 removeMusicSticker:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)requestMusicDetailIfNeeded:(id)arg0;
- (id)mvWillAddMusicSubject;
- (id)mvChangeMusicLoadingSubject;
- (void)musicEffectMVDidFinishSelectMusic;
- (void)sendDidAddMusicSignal:(BOOL)arg0;
- (id)changeMusicTipsSubject;
- (id)mvDidChangeMusicSubject;
- (id)didAddMusicSubject;
- (id)collectedMusicListSubject;
- (id)userMusicCollectionReqManager;
- (BOOL)needResetInitialMusic;
- (void)setRecommendMusichasRemoved:(BOOL)arg0;
- (void)dislikeMusicID:(id)arg0 channelID:(id)arg1 tryNumber:(long long)arg2;
- (void)dislikeMusicClickTrack:(id)arg0;
- (id)recentMusicListSubject;
- (id)generateUserCollectedMusicListWithRspModel:(id)arg0;
- (void)resetRecentMusicData;
- (void)fetchRecentMusicWithCompletion:(id /* block */)arg0;
- (id)generateRecentMusicListWithResponseModel:(id)arg0;
- (id)didRequestMusicSubject;
- (void)setChallengeOrPropMusic:(id)arg0;
- (id)didSelectCutMusicSubject;
- (id)musicChangedSubject;
- (id)refreshMusicRelatedUISubject;
- (id)volumeChangedSubject;
- (id)cutMusicButtonClickedSubject;
- (id)musicComponentDidMountSubject;
- (id)didDeselectMusicSubject;
- (id)advanceEditDeleteAudioSubject;
- (id)showMusicPanelSubject;
- (id)standaloneMusicPlayerChangedSubject;
- (void)setRecommendReasonDict:(id)arg0;
- (void)updateFavoriteListRecommendInfo;
- (void)updateRecentListRecommendInfo;
- (id)recommendReasonDict;
- (void)updateMusicFeatureDisable:(BOOL)arg0;
- (BOOL)isRetryingFetchUserCollectedMusic;
- (void)setIsRetryingFetchUserCollectedMusic:(BOOL)arg0;
- (BOOL)isRetryingFetchRecentMusic;
- (void)setIsRetryingFetchRecentMusic:(BOOL)arg0;
- (void)failToChangeMusicWithInfo:(id)arg0 autoPlay:(BOOL)arg1;
- (id)showToolBarFunctionDictionary;
- (BOOL)shouldShowToolBarModel:(id)arg0;
- (BOOL)isMusicEntranceClicked;
- (void)setMusicEntranceClicked:(BOOL)arg0;
- (BOOL)addBgmForOpenCreation;
- (BOOL)addBgmForSchemaConfig;
- (BOOL)addBgmForRearBinding;
- (void)bgmDoneWithResult:(BOOL)arg0 music:(id)arg1;
- (void)updateUIStateOnLoading;
- (void)setMusicStoryLoadFailed:(BOOL)arg0;
- (void)updateUIStateOnMusicAdded:(id)arg0;
- (void)updateUIStateOnFailed;
- (void)updateUIStateToDefault;
- (id)capsuleUIState;
- (void)setCapsuleUIState:(id)arg0;
- (BOOL)shouldRequestAIRecommmendMusicOnly;
- (id)musicListSignal;
- (double)genericTemplateTrackVolume;
- (void)setDidHandleOfflineMusicSubject:(id)arg0;
- (void)setStandaloneMusicPlayerModule:(id)arg0;
- (void)setToolBarModels:(id)arg0;
- (void)setMusicPanelViewModel:(id)arg0;
- (void)setRecommendMusicRequestManager:(id)arg0;
- (void)setWillSelectMusicSubject:(id)arg0;
- (void)setDidDeselectMusicSubject:(id)arg0;
- (void)setMusicChangedSubject:(id)arg0;
- (void)setDidRequestMusicSubject:(id)arg0;
- (void)setMvWillAddMusicSubject:(id)arg0;
- (void)setDidAddMusicSubject:(id)arg0;
- (void)setMvDidChangeMusicSubject:(id)arg0;
- (void)setDidSelectCutMusicSubject:(id)arg0;
- (void)setWillAddMusicSubject:(id)arg0;
- (void)setMvChangeMusicLoadingSubject:(id)arg0;
- (void)setChangeMusicTipsSubject:(id)arg0;
- (void)setCollectedMusicListSubject:(id)arg0;
- (void)setVolumeChangedSubject:(id)arg0;
- (void)setRefreshMusicRelatedUISubject:(id)arg0;
- (void)setCutMusicButtonClickedSubject:(id)arg0;
- (void)setShowMusicPanelSubject:(id)arg0;
- (void)setFeatchFramesUploadStatusSubject:(id)arg0;
- (void)setAdvanceEditDeleteAudioSubject:(id)arg0;
- (void)setMusicComponentDidMountSubject:(id)arg0;
- (void)setStandaloneMusicPlayerChangedSubject:(id)arg0;
- (void)setUserMusicCollectionReqManager:(id)arg0;
- (void)setRecentMusicListSubject:(id)arg0;
- (void)setMusicFeatureDisable:(BOOL)arg0;
- (BOOL)fetchingFramsAndUpload;
- (void)setShowToolBarFunctionDictionary:(id)arg0;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (void)setup;
- (id)delegate;
- (BOOL)hasMore;
- (id)serviceProvider;
- (void)setSubscription:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)addSubscriber:(id)arg0;
- (id)subscription;
- (void)removeSubscriber:(id)arg0;

@end
