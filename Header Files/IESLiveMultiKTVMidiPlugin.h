//
//     Generated by private class-dump
//

@class UILabel, RACDisposable, UIView, HTSLiveMidiSkinDressInfo, IESLiveKTVMidiStore, UIImageView, IESLiveGCDTimer, HTSEventForwardingView, NSString, IESLiveKTVMIDIView, IESLiveMultiKTVMidiModeIndicatorView;
@protocol IESLiveCompoundSubscription, IESLiveMultiKTVChallengeRouter, IESLiveMultiKTVStageProvider;

@interface IESLiveMultiKTVMidiPlugin : IESLiveMultiKTVStagePluginBase <IESLiveKTVActions, IESLiveMultiKTVEndAndHotRankActions, CAAnimationDelegate, IESLiveMultiKTVStagePluginProtocol> {
    BOOL _isActive;
    BOOL _isShowFeedback;
    BOOL _isMVMode;
    BOOL _comboBGShowing;
    BOOL _highScoreLabelAnimeShowing;
    BOOL _highScoreLabelExisting;
    BOOL _isPause;
    HTSEventForwardingView *_midiBgView;
    IESLiveKTVMidiStore *_midiStore;
    IESLiveKTVMIDIView *_midiView;
    IESLiveMultiKTVMidiModeIndicatorView *_indicatorView;
    UILabel *_noMidiLabel;
    id<IESLiveCompoundSubscription> _userDisposable;
    id<IESLiveCompoundSubscription> _midiDisposable;
    double _lastScore;
    double _lastAnimiationTime;
    UIImageView *_comboBGImageView;
    UIImageView *_normalScorePanelView;
    UIImageView *_highScorePanelView;
    UILabel *_scoreLabelV2;
    IESLiveGCDTimer *_timer;
    double _curScore;
    RACDisposable *_decorateDisposable;
    UIView *_container;
    long long _isCPUOptimize;
    double _timerInterval;
    id<IESLiveMultiKTVStageProvider> _multiKTVStageProvider;
    id<IESLiveMultiKTVChallengeRouter> _challengeRouter;
    HTSLiveMidiSkinDressInfo *_dressInfo;
    NSString *_currentUserId;
}

@property (retain, nonatomic) HTSEventForwardingView *midiBgView;
@property (retain, nonatomic) IESLiveKTVMidiStore *midiStore;
@property (retain, nonatomic) IESLiveKTVMIDIView *midiView;
@property (retain, nonatomic) IESLiveMultiKTVMidiModeIndicatorView *indicatorView;
@property (retain, nonatomic) UILabel *noMidiLabel;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> userDisposable;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> midiDisposable;
@property (nonatomic) double lastScore;
@property (nonatomic) double lastAnimiationTime;
@property (nonatomic) BOOL isShowFeedback;
@property (nonatomic) BOOL isMVMode;
@property (retain, nonatomic) UIImageView *comboBGImageView;
@property (nonatomic) BOOL comboBGShowing;
@property (retain, nonatomic) UIImageView *normalScorePanelView;
@property (retain, nonatomic) UIImageView *highScorePanelView;
@property (retain, nonatomic) UILabel *scoreLabelV2;
@property (nonatomic) BOOL highScoreLabelAnimeShowing;
@property (nonatomic) BOOL highScoreLabelExisting;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) double curScore;
@property (nonatomic) BOOL isPause;
@property (retain, nonatomic) RACDisposable *decorateDisposable;
@property (retain, nonatomic) UIView *container;
@property (nonatomic) long long isCPUOptimize;
@property (nonatomic) double timerInterval;
@property (weak, nonatomic) id<IESLiveMultiKTVStageProvider> multiKTVStageProvider;
@property (weak, nonatomic) id<IESLiveMultiKTVChallengeRouter> challengeRouter;
@property (retain, nonatomic) HTSLiveMidiSkinDressInfo *dressInfo;
@property (copy, nonatomic) NSString *currentUserId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isActive;

- (void)didSetAttachingDIContext;
- (id)currentUserId;
- (double)timerInterval;
- (BOOL)isPause;
- (void)setIsPause:(BOOL)arg0;
- (void)setCurrentUserId:(id)arg0;
- (void)dealWithOpenCamera:(BOOL)arg0;
- (id)dressInfo;
- (void)setDressInfo:(id)arg0;
- (double)curScore;
- (void)updateScore:(double)arg0;
- (void)setIsCPUOptimize:(long long)arg0;
- (long long)isCPUOptimize;
- (void)updateListenerPlayingTime:(double)arg0;
- (id)midiStore;
- (void)setMidiStore:(id)arg0;
- (void)didPausePlayMusicWithMusicID:(id)arg0;
- (void)didResumePlayMusicWithMusicID:(id)arg0;
- (id)userDisposable;
- (void)setUserDisposable:(id)arg0;
- (id)midiView;
- (void)setMidiView:(id)arg0;
- (id)createZoomAnimeWithDuration:(double)arg0 fromValue:(id)arg1 toValue:(id)arg2 beginTime:(double)arg3;
- (id)challengeRouter;
- (void)setLastScore:(double)arg0;
- (void)setMidiDisposable:(id)arg0;
- (id)midiDisposable;
- (void)setChallengeRouter:(id)arg0;
- (BOOL)shouldShowMidiView;
- (void)enterDynamicStageMode;
- (void)didActivateInKTVStageContainerView:(id)arg0;
- (void)didDeactivated;
- (void)didPluginUnload;
- (void)willStartPlayingMusic:(id)arg0 afterTime:(long long)arg1;
- (void)didStartPlayingMusic:(id)arg0;
- (void)didStopPlayingMusic:(id)arg0;
- (void)updateSingerPlayingTime:(double)arg0;
- (void)handleMultiKTVSEIModel:(id)arg0;
- (void)updatePlayingUser:(id)arg0;
- (void)didUpdateDecorate:(id)arg0;
- (id)multiKTVStageProvider;
- (void)setMultiKTVStageProvider:(id)arg0;
- (void)willDisplayEndAndHotRankView:(id)arg0 style:(unsigned long long)arg1;
- (void)willEndDisplayEndAndHotRankView:(id)arg0 style:(unsigned long long)arg1;
- (id)decorateDisposable;
- (void)setDecorateDisposable:(id)arg0;
- (BOOL)isMVMode;
- (id)scoreLabelV2;
- (void)startMidiWithMusic:(id)arg0;
- (void)changeOriginBGShowStatus:(BOOL)arg0;
- (void)updateIndicatorViewWithUser:(id)arg0;
- (void)setHighScoreLabelExisting:(BOOL)arg0;
- (void)setHighScoreLabelAnimeShowing:(BOOL)arg0;
- (void)setComboBGShowing:(BOOL)arg0;
- (id)comboBGImageView;
- (void)updateProgressWithPlayingTime:(double)arg0;
- (BOOL)liveUGCMVEnableWithRoom;
- (void)resumeMidiIfNeeded;
- (void)setIsMVMode:(BOOL)arg0;
- (void)clearMidiView;
- (BOOL)isShowFeedback;
- (id)midiBgView;
- (void)startMidiScore;
- (void)endMidiScore;
- (void)setIsShowFeedback:(BOOL)arg0;
- (id)noMidiLabel;
- (void)loadMidiView;
- (id)normalScorePanelView;
- (id)highScorePanelView;
- (BOOL)comboBGShowing;
- (void)startAnimationWithScore:(double)arg0;
- (BOOL)highScoreLabelAnimeShowing;
- (BOOL)highScoreLabelExisting;
- (void)setCurScore:(double)arg0;
- (void)setMidiBgView:(id)arg0;
- (void)setNoMidiLabel:(id)arg0;
- (double)lastAnimiationTime;
- (void)setLastAnimiationTime:(double)arg0;
- (void)setComboBGImageView:(id)arg0;
- (void)setNormalScorePanelView:(id)arg0;
- (void)setHighScorePanelView:(id)arg0;
- (void)setScoreLabelV2:(id)arg0;
- (id)container;
- (id)timer;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (void)setContainer:(id)arg0;
- (void)cancelTimer;
- (void)setTimer:(id)arg0;
- (id)indicatorView;
- (double)lastScore;
- (BOOL)isActive;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)dealloc;
- (void)setIndicatorView:(id)arg0;
- (void)setTimerInterval:(double)arg0;

@end
