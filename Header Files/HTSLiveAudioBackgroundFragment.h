//
//     Generated by private class-dump
//

@class IESLiveAudioAvatarView, RACDisposable, HTSLiveToolbarItem, HTSLiveAudioThemeViewModel, UIImageView, NSString, IESLiveAudioBackgroundView, IESLiveInteractThemeManager;
@protocol IESLivePerfSampler, IESLiveRealStreamingProvider;

@interface HTSLiveAudioBackgroundFragment : IESLiveRoomComponent <UIActionSheetDelegate, IESLiveAudioBackgroundRouter, IESLiveMessageInteractionModuleCommentAction, IESLiveInteractAction, IESLiveRoomThemeActions, IESLiveGuestBattleActions, IESLiveAudioBackgroundViewDataSource, IESLiveGuestBattleResourceManagerActions, IESLiveSocialInteractAction, HTSLiveAudioBackgroundTrackRouter, IESLiveInteractionPlaymodeActions> {
    BOOL _isAnchor;
    BOOL _isCloseLive;
    HTSLiveAudioThemeViewModel *_viewModel;
    IESLiveAudioAvatarView *_avatarView;
    IESLiveAudioBackgroundView *_backgroundView;
    UIImageView *_gameBackgroundView;
    id<IESLiveRealStreamingProvider> _streamProvider;
    id<IESLivePerfSampler> _perfSampler;
    RACDisposable *_delayUpdateDefaultBackgroundImageDispose;
    HTSLiveToolbarItem *_themeItem;
    unsigned long long _prevScene;
    IESLiveInteractThemeManager *_manager;
    NSString *_showingBarImageUri;
}

@property (retain, nonatomic) HTSLiveAudioThemeViewModel *viewModel;
@property (retain, nonatomic) IESLiveAudioAvatarView *avatarView;
@property (retain, nonatomic) IESLiveAudioBackgroundView *backgroundView;
@property (retain, nonatomic) UIImageView *gameBackgroundView;
@property (retain, nonatomic) id<IESLiveRealStreamingProvider> streamProvider;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) RACDisposable *delayUpdateDefaultBackgroundImageDispose;
@property (retain, nonatomic) HTSLiveToolbarItem *themeItem;
@property (nonatomic) unsigned long long prevScene;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) IESLiveInteractThemeManager *manager;
@property (retain, nonatomic) NSString *showingBarImageUri;
@property (nonatomic) BOOL isCloseLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)setIsAnchor:(BOOL)arg0;
- (void)hideBackground;
- (void)bindViewModel;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)showAvatar;
- (void)remoteRoomDataReady:(id)arg0;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (void)roomThemeNeedRefresh;
- (void)hideAvatar;
- (void)hideComponent;
- (void)showComponent;
- (void)endInteractiveWithScene:(unsigned long long)arg0;
- (void)currentLayoutDidChangedFrom:(id)arg0 to:(id)arg1;
- (void)interactionModeStartedWithLayout:(id)arg0;
- (void)interactionModeEndedWithLayout:(id)arg0;
- (void)currentFlattenSceneDidChangedFrom:(unsigned long long)arg0 to:(unsigned long long)arg1;
- (BOOL)isAudioBackgroundAnimatedEnabled;
- (BOOL)isAudioThemeCacheAllFrameEnabled;
- (BOOL)audioThemeCacheFreeMemoryRatio;
- (BOOL)isAudioThemeUseStaticBackground;
- (void)showThemePanel;
- (void)preparePerformance;
- (void)setShowingBarImageUri:(id)arg0;
- (void)fetchLatestBg;
- (id)showingBarImageUri;
- (id)generateThemePanelViewModel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfAvatarView;
- (void)didMultiAudioSceneChangeFrom:(unsigned long long)arg0 to:(unsigned long long)arg1;
- (void)multiAudioLayoutDidChangeFrom:(id)arg0 to:(id)arg1;
- (id)delayUpdateDefaultBackgroundImageDispose;
- (void)setDelayUpdateDefaultBackgroundImageDispose:(id)arg0;
- (void)startMVModeWithMVBackground:(id)arg0;
- (void)stopMVMode;
- (id)audioBackgroundView;
- (void)showBackground;
- (id)soundAnimationURLs;
- (id)soundAnimationSpeakingImageList;
- (id)joinIconURLs;
- (id)showingTheme;
- (void)changeBackgroundImageForTeamFight:(BOOL)arg0;
- (void)onGuestBattleStartFromNone;
- (void)onGuestBattleStartFromSettle;
- (void)onGuestBattleFinish;
- (void)beginToClose;
- (void)interactionPlaymodeDidStart:(int)arg0;
- (void)interactionPlaymodeDidEnd:(int)arg0;
- (void)guestBattleDressConfigChangeAction;
- (void)setPrevScene:(unsigned long long)arg0;
- (void)showThemeEntranceIfNeeded;
- (id)gameBackgroundView;
- (unsigned long long)prevScene;
- (void)handleInteractiveSceneEnded:(unsigned long long)arg0;
- (void)handleInteractiveSceneStarted:(unsigned long long)arg0;
- (BOOL)isCloseLive;
- (void)hideThemePanel;
- (void)setIsCloseLive:(BOOL)arg0;
- (void)perfDegradeStopWebpAnimation:(unsigned long long)arg0;
- (void)setGameBackgroundView:(id)arg0;
- (id)themeItem;
- (id)itemGuildKeyForUri:(id)arg0 isPre:(BOOL)arg1;
- (void)onThemeitemShow;
- (void)updateThemeItemInToolBar;
- (void)showRedDotIfNeeded;
- (void)setThemeItem:(id)arg0;
- (void)setStreamProvider:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (id)backgroundView;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (void)setViewModel:(id)arg0;
- (void)keyboardWillHide;
- (void)setManager:(id)arg0;
- (void)keyboardWillShow;
- (id)viewModel;
- (id)streamProvider;
- (void)setBackgroundView:(id)arg0;
- (void)setupConstraints;
- (id)manager;
- (void)setupViews;

@end
