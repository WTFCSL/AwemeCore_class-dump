//
//     Generated by private class-dump
//

@class UIView, IESLivePlaybackMainTabButton, NSDate, IESLivePlaybackMultiTabContainer, HTSEventForwardingView, NSString, UIButton, IESLiveButton, IESLivePlaybackMainTab;

@interface IESLivePlaybackMultiTabFragment : IESLivePlaybackComponent <IESLivePlaybackMainTabService, UIGestureRecognizerDelegate, IESVSVideoPlayAction, IESLivePlaybackResolutionRouter> {
    BOOL _isPlayFirstFrame;
    BOOL _isReplayPanelShow;
    IESLiveButton *_portraitStreamPlaybackListEntranceButton;
    IESLivePlaybackMultiTabContainer *_multiTabContainer;
    IESLivePlaybackMainTab *_mainTab;
    UIView *_mainTabContainerView;
    UIView *_mainTabLandscapeContainerView;
    UIView *_backgroundViewForLandscape;
    HTSEventForwardingView *_gradientView;
    IESLivePlaybackMainTabButton *_landscapeButton;
    UIButton *_nextButton;
    NSDate *_clickSwitchStreamDate;
    id /* block */ _toExecuteBlockForChangeStream;
    id /* block */ _toExecuteBlockForOpenEpisode;
}

@property (retain, nonatomic) IESLiveButton *portraitStreamPlaybackListEntranceButton;
@property (retain, nonatomic) IESLivePlaybackMultiTabContainer *multiTabContainer;
@property (retain, nonatomic) IESLivePlaybackMainTab *mainTab;
@property (retain, nonatomic) UIView *mainTabContainerView;
@property (retain, nonatomic) UIView *mainTabLandscapeContainerView;
@property (retain, nonatomic) UIView *backgroundViewForLandscape;
@property (retain, nonatomic) HTSEventForwardingView *gradientView;
@property (retain, nonatomic) IESLivePlaybackMainTabButton *landscapeButton;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) NSDate *clickSwitchStreamDate;
@property (nonatomic) BOOL isPlayFirstFrame;
@property (nonatomic) BOOL isReplayPanelShow;
@property (copy, nonatomic) id /* block */ toExecuteBlockForChangeStream;
@property (copy, nonatomic) id /* block */ toExecuteBlockForOpenEpisode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playNextVideo;
- (void)componentBindService;
- (void)componentCreate;
- (id)mainTab;
- (void)setMainTab:(id)arg0;
- (void)componentOrientationChanged:(long long)arg0;
- (id)multiTabContainer;
- (id)sameRoomPlaybackList;
- (id)allPlaybackList;
- (void)openPlaybackListIfEnable;
- (id)playingEpisode;
- (id)hybridContainerParameters;
- (void)changeStreamWithEpisode:(id)arg0;
- (id)trackerParameters;
- (id)multiTabView;
- (id)mainTabContainer;
- (BOOL)isReplayListPanelShow;
- (void)updateForVSPrivilegeWithRoomID:(long long)arg0 purchased:(BOOL)arg1;
- (void)setMultiTabContainer:(id)arg0;
- (void)onOrientationTransitionEnd;
- (void)didUpdatePlaybackEpisode:(id)arg0;
- (void)onVideoRenderStart;
- (void)onVideoFinish;
- (void)onVideoError:(id)arg0;
- (id)playbackList;
- (BOOL)liveVsPlaybackMainTabInitAfterEnter;
- (void)mainTabInit;
- (void)didSelectItemWithIndexPath:(id)arg0;
- (id)portraitStreamPlaybackListEntranceButton;
- (BOOL)getPlaybackListEntranceButtonHiddenStatus;
- (void)setupNextButtonIfNeeded;
- (id)getEpisodeWithIndexPath:(id)arg0;
- (void)setMainTabContainerView:(id)arg0;
- (id)mainTabContainerView;
- (void)resetMainTabViewOnView:(id)arg0;
- (void)resolutionChangedWithType:(unsigned long long)arg0;
- (void)setupForPortraitStreamIfNeeded;
- (void)setupForLandscapeStreamIfNeeded;
- (void)setPortraitStreamPlaybackListEntranceButton:(id)arg0;
- (void)showPlaybackListPanel;
- (void)showPlaybackListPanelForPortraitStream;
- (void)setupMultiTabIfNeeded;
- (BOOL)signleEpisodeInPlaybackList;
- (long long)tabsArrayCount;
- (void)setupMultiTab;
- (void)setupSingleTab;
- (void)enumerateMultiTabArrayForNew;
- (id)mapMultiTabToIdentifier:(long long)arg0;
- (id)generateNewSchema:(id)arg0 extraParams:(id)arg1;
- (id)hybridContainerWithURLString:(id)arg0;
- (void)hanlderTabEvent:(id)arg0;
- (long long)firstTabID;
- (id)firstTabJumpLink;
- (id /* block */)toExecuteBlockForChangeStream;
- (void)setToExecuteBlockForChangeStream:(id /* block */)arg0;
- (id /* block */)toExecuteBlockForOpenEpisode;
- (void)setToExecuteBlockForOpenEpisode:(id /* block */)arg0;
- (double)playbackBottomBarHeight;
- (void)setIsReplayPanelShow:(BOOL)arg0;
- (BOOL)hasMoreReplays;
- (void)p_changeStreamWithEpisode:(id)arg0;
- (BOOL)isReplayPanelShow;
- (void)setIsPlayFirstFrame:(BOOL)arg0;
- (id)clickSwitchStreamDate;
- (void)setClickSwitchStreamDate:(id)arg0;
- (BOOL)isPlayFirstFrame;
- (id)nextEpisodeInSection;
- (id)p_nextEpisode;
- (id)indexPathWithPlaybackList:(id)arg0;
- (id)backgroundViewForLandscape;
- (void)nextButtonDidTap;
- (id)mainTabLandscapeContainerView;
- (void)setMainTabLandscapeContainerView:(id)arg0;
- (void)setBackgroundViewForLandscape:(id)arg0;
- (void).cxx_destruct;
- (void)setGradientView:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)gradientView;
- (id)landscapeButton;
- (void)setLandscapeButton:(id)arg0;
- (id)nextButton;
- (void)setNextButton:(id)arg0;
- (id)nextEpisode;

@end
