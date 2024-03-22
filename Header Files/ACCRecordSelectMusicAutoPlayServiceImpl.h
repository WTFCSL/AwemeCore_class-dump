//
//     Generated by private class-dump
//

@class NSString, AWEVideoPublishViewModel;
@protocol ACCRecordSwitchModeService, ACCRecordPropService, ACCAudioPlayerProtocol, ACCRecorderViewContainer, ACCMusicModelProtocol, ACCRecordSelectMusicService, ACCEditMusicServiceProtocol, ACCRecordFlowService, ACCCameraService, IESServiceProvider;

@interface ACCRecordSelectMusicAutoPlayServiceImpl : NSObject <ACCPropRecommendMusicProtocol, ACCRecordPropServiceSubscriber, ACCRecordFlowServiceSubscriber, ACCRecordSwitchModeServiceSubscriber, ACCPanelViewDelegate, ACCRecordSelectMusicAutoPlayService> {
    BOOL _musicPlaying;
    BOOL _needRepeat;
    BOOL _selectEffect;
    BOOL _selectEffectAudioPlay;
    BOOL _recordPhase;
    BOOL _shootModeSupportPlay;
    BOOL _homeAddPath;
    BOOL _singleSongPath;
    BOOL _recordComponentShow;
    BOOL _appResignActive;
    BOOL _countdownPannelShow;
    AWEVideoPublishViewModel *_repository;
    id<IESServiceProvider> _serviceProvider;
    id<ACCRecordFlowService> _flowService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCCameraService> _cameraService;
    id<ACCAudioPlayerProtocol> _playMusicService;
    id<ACCRecordPropService> _propService;
    id<ACCEditMusicServiceProtocol> _recordMusicService;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCRecordSelectMusicService> _selectMusicService;
    id<ACCMusicModelProtocol> _music;
    id<ACCMusicModelProtocol> _memoryMusic;
    struct _HTSAudioRange { double location; double length; } _audioRange;
}

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCAudioPlayerProtocol> playMusicService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> recordMusicService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordSelectMusicService> selectMusicService;
@property (retain, nonatomic) id<ACCMusicModelProtocol> music;
@property (retain, nonatomic) id<ACCMusicModelProtocol> memoryMusic;
@property (nonatomic) BOOL musicPlaying;
@property (nonatomic) BOOL needRepeat;
@property (nonatomic) struct _HTSAudioRange { double location; double length; } audioRange;
@property (nonatomic) BOOL selectEffect;
@property (nonatomic) BOOL selectEffectAudioPlay;
@property (nonatomic) BOOL recordPhase;
@property (nonatomic) BOOL shootModeSupportPlay;
@property (nonatomic) BOOL homeAddPath;
@property (nonatomic) BOOL singleSongPath;
@property (nonatomic) BOOL recordComponentShow;
@property (nonatomic) BOOL appResignActive;
@property (nonatomic) BOOL countdownPannelShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (struct _HTSAudioRange { double x0; double x1; })audioRange;
- (void)setAudioRange:(struct _HTSAudioRange { double x0; double x1; })arg0;
- (void)pauseMusic;
- (id)flowService;
- (id)switchModeService;
- (void)flowServiceStateDidChanged:(unsigned long long)arg0 preState:(unsigned long long)arg1;
- (void)flowServiceDidRemoveLastSegment:(BOOL)arg0;
- (void)flowServiceDidRemoveAllSegment;
- (void)flowServiceWillCancelRecord;
- (void)flowServiceStartShowCountDownAnimation;
- (void)panelViewController:(id)arg0 willShowPanelView:(id)arg1;
- (void)panelViewController:(id)arg0 didDismissPanelView:(id)arg1;
- (void)switchModeServiceDidChangeMode:(id)arg0 oldMode:(id)arg1;
- (void)setFlowService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void)configDelegateViewWithStatus:(unsigned long long)arg0;
- (void)propServiceDidApplyProp:(id)arg0 success:(BOOL)arg1;
- (void)continuePlayMusic;
- (id)initWithRepository:(id)arg0 serviceProvider:(id)arg1;
- (id)recordMusicService;
- (void)setRecordMusicService:(id)arg0;
- (void)bindService;
- (void)bindRACEvent;
- (BOOL)recordComponentShow;
- (void)setRecordComponentShow:(BOOL)arg0;
- (BOOL)currentRecordModeIsMutiShooting;
- (void)setRecordPhase:(BOOL)arg0;
- (void)conditionDidChangedIfNeed;
- (void)shootPathIsSingleSongPath:(id)arg0;
- (void)selectMusicDidChanged:(id)arg0;
- (void)musicAudioRangeDidChanged:(struct _HTSAudioRange { double x0; double x1; })arg0;
- (id)selectMusicService;
- (void)p_addPeriodicTimeObserverIfNeeded;
- (void)setAppResignActive:(BOOL)arg0;
- (void)selectEffectDidChanged:(BOOL)arg0 effectAudioPlay:(BOOL)arg1;
- (void)beginRecordFlowPhase;
- (void)setMemoryMusic:(id)arg0;
- (id)memoryMusic;
- (BOOL)shootModeSupportPlayMusic:(id)arg0;
- (void)shootModeChangedSupportPlayMusic:(BOOL)arg0;
- (void)setCountdownPannelShow:(BOOL)arg0;
- (BOOL)selectEffect;
- (BOOL)selectEffectAudioPlay;
- (void)setSelectEffect:(BOOL)arg0;
- (void)setSelectEffectAudioPlay:(BOOL)arg0;
- (BOOL)shootModeSupportPlay;
- (void)setShootModeSupportPlay:(BOOL)arg0;
- (void)setSingleSongPath:(BOOL)arg0;
- (void)setMusicPlaying:(BOOL)arg0;
- (BOOL)needRepeat;
- (BOOL)musicPlaying;
- (id)playMusicService;
- (BOOL)isAudioRange:(struct _HTSAudioRange { double x0; double x1; })arg0 equalTo:(struct _HTSAudioRange { double x0; double x1; })arg1;
- (void)conditionDidChangedIfNeed:(struct _HTSAudioRange { double x0; double x1; })arg0;
- (BOOL)recordPhase;
- (BOOL)appResignActive;
- (BOOL)countdownPannelShow;
- (BOOL)singleSongPath;
- (void)setNeedRepeat:(BOOL)arg0;
- (BOOL)playMusicWithMusicChangedIfNeed:(struct _HTSAudioRange { double x0; double x1; })arg0;
- (void)playNewMusic;
- (void)setPlayMusicService:(id)arg0;
- (void)p_removeTimeObserver;
- (void)recordComponentDidMount;
- (void)recordComponentDidAppear;
- (void)recordComponentDidDisappear;
- (void)recordComponentDidUnmount;
- (void)setSelectMusicService:(id)arg0;
- (BOOL)homeAddPath;
- (void)setHomeAddPath:(BOOL)arg0;
- (id)music;
- (void).cxx_destruct;
- (void)setMusic:(id)arg0;
- (void)setServiceProvider:(id)arg0;
- (void)setRepository:(id)arg0;
- (id)serviceProvider;
- (id)repository;
- (void)applicationDidBecomeActive;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (void)applicationDidResignActive;

@end
