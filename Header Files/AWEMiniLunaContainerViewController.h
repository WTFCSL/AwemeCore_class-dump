//
//     Generated by private class-dump
//

@class AWEMusicSegmentedControl, NSString, NSArray, AWEUserModel, AWEMusicSingleTabTopView, AWEMusicDataManager, UIButton, LunaMainFeedMusicServiceManager, AWEMiniLunaPrivacyGuideManager, AWEMusicDSPEventModel, NSDictionary, AWESlidingViewController;
@protocol MusicService;

@interface AWEMiniLunaContainerViewController : UIViewController <AWEMusicBottomPlayerCanAutoShowProtocol, AWESlidingViewControllerDelegate, AWEMusicSegmentedControlDelegate, AWEMusicServiceDelegate, AWEMusicContainerDelegateProtocol, AWEMiniLunaPrivacyGuideDelegate, AWEUserMessage, AWERouterViewControllerProtocol> {
    BOOL _shouldCollectTagAutoPlay;
    BOOL _previousKeepAlive;
    BOOL _isClickToDiscovery;
    BOOL _shouldRecommendTagAutoPlay;
    BOOL _canShowPrivacyPopGuide;
    BOOL _canAutoCreatePlaylist;
    BOOL _isAppeared;
    NSString *_forceInsertTrackID;
    unsigned long long _initTabType;
    AWEMusicDSPEventModel *_eventModel;
    NSDictionary *_extraParams;
    AWESlidingViewController *_slidingVC;
    AWEMusicSegmentedControl *_segmentControl;
    AWEMusicSingleTabTopView *_singleTabTopView;
    UIButton *_darkBackBtn;
    UIButton *_lightBackBtn;
    AWEMusicDataManager *_dataManager;
    NSArray *_itemArray;
    id<MusicService> _musicService;
    id<MusicService> _secondaryMusicService;
    AWEUserModel *_userModel;
    unsigned long long _currentTabIndex;
    LunaMainFeedMusicServiceManager *_musicServiceManager;
    long long _defaultTabIndex;
    AWEMiniLunaPrivacyGuideManager *_privacyManager;
}

@property (retain, nonatomic) AWESlidingViewController *slidingVC;
@property (retain, nonatomic) AWEMusicSegmentedControl *segmentControl;
@property (retain, nonatomic) AWEMusicSingleTabTopView *singleTabTopView;
@property (retain, nonatomic) UIButton *darkBackBtn;
@property (retain, nonatomic) UIButton *lightBackBtn;
@property (retain, nonatomic) AWEMusicDataManager *dataManager;
@property (retain, nonatomic) NSArray *itemArray;
@property (retain, nonatomic) id<MusicService> musicService;
@property (retain, nonatomic) id<MusicService> secondaryMusicService;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (nonatomic) unsigned long long currentTabIndex;
@property (retain, nonatomic) LunaMainFeedMusicServiceManager *musicServiceManager;
@property (nonatomic) long long defaultTabIndex;
@property (nonatomic) BOOL previousKeepAlive;
@property (nonatomic) BOOL isClickToDiscovery;
@property (nonatomic) BOOL shouldRecommendTagAutoPlay;
@property (nonatomic) BOOL canShowPrivacyPopGuide;
@property (nonatomic) BOOL canAutoCreatePlaylist;
@property (retain, nonatomic) AWEMiniLunaPrivacyGuideManager *privacyManager;
@property (nonatomic) BOOL isAppeared;
@property (copy, nonatomic) NSString *forceInsertTrackID;
@property (nonatomic) unsigned long long initTabType;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL shouldCollectTagAutoPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogin;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)musicService:(id)arg0 playStatusChanged:(long long)arg1;
- (void)musicServiceDidPlay:(id)arg0;
- (id)privacyManager;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (void)receiveNotification:(id)arg0;
- (void)onBackButtonClicked;
- (void)p_setupBackBtn;
- (void)configSubviews;
- (id)itemArray;
- (void)setItemArray:(id)arg0;
- (id)currentPageName;
- (void)setPreviousKeepAlive:(BOOL)arg0;
- (BOOL)previousKeepAlive;
- (long long)numberOfControllers:(id)arg0;
- (id)slidingViewController:(id)arg0 viewControllerAtIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 didSelectIndex:(long long)arg1 transitionType:(long long)arg2;
- (id)slidingVC;
- (void)setSlidingVC:(id)arg0;
- (id)musicService;
- (void)setMusicService:(id)arg0;
- (void)setIsAppeared:(BOOL)arg0;
- (void)setSegmentControl:(id)arg0;
- (unsigned long long)initTabType;
- (void)setInitTabType:(unsigned long long)arg0;
- (void)p_setupSegmentControl;
- (void)tabChangedProgress:(double)arg0 fromIndex:(long long)arg1 toIndex:(long long)arg2;
- (BOOL)isHiddenSeperateView:(long long)arg0;
- (id)p_itemAtIndex:(long long)arg0;
- (id)eventModel;
- (void)changeToTabType:(unsigned long long)arg0 from:(id)arg1;
- (void)setCanShowPrivacyPopGuide:(BOOL)arg0;
- (BOOL)canShowPrivacyPopGuide;
- (void)setCanAutoCreatePlaylist:(BOOL)arg0;
- (BOOL)canAutoCreatePlaylist;
- (void)setEventModel:(id)arg0;
- (id)musicServiceManager;
- (void)setSecondaryMusicService:(id)arg0;
- (id)secondaryMusicService;
- (void)setMusicServiceManager:(id)arg0;
- (void)p_configItems;
- (void)p_registerMiniLunaUser;
- (id)forceInsertTrackID;
- (BOOL)shouldRecommendTagAutoPlay;
- (void)setDefaultTabIndex:(long long)arg0;
- (BOOL)shouldCollectTagAutoPlay;
- (void)p_updateTabPlayStatus;
- (void)et_reportTabShow;
- (void)p_checkShowCreatePlaylist;
- (void)p_checkShowChangeSongGuide;
- (BOOL)p_shouldKeepMusicServiceAfterExitMini;
- (void)et_reportAudioOverIfNeedKeepMusicServiceAfterExitWithType:(id)arg0;
- (void)setForceInsertTrackID:(id)arg0;
- (void)setShouldRecommendTagAutoPlay:(BOOL)arg0;
- (void)setShouldCollectTagAutoPlay:(BOOL)arg0;
- (BOOL)isClickToDiscovery;
- (void)et_reportChangeTabFromIndex:(long long)arg0 toIndex:(long long)arg1 isClickToDiscovery:(BOOL)arg2 transitionType:(long long)arg3;
- (void)setIsClickToDiscovery:(BOOL)arg0;
- (void)p_notifyShowingIndex:(long long)arg0;
- (BOOL)isDarkThemeOfIndex:(long long)arg0;
- (id)darkBackBtn;
- (id)lightBackBtn;
- (void)p_setupSlidingVC;
- (void)p_setupTitleArea;
- (long long)defaultTabIndex;
- (id)p_makeBackButtonWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 imageName:(id)arg1;
- (void)setDarkBackBtn:(id)arg0;
- (void)setLightBackBtn:(id)arg0;
- (id)singleTabTopView;
- (id)pageEventParams;
- (id)etPageName;
- (id)autoShowWithMusicService;
- (void)onMiniLunaPrivacyGuideDismissWithMethod:(long long)arg0;
- (id)initWithUserModel:(id)arg0 musicService:(id)arg1 secondaryMusicPlayer:(id)arg2;
- (void)setSingleTabTopView:(id)arg0;
- (void)setPrivacyManager:(id)arg0;
- (id)dataManager;
- (id)childViewControllerForStatusBarStyle;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)userModel;
- (void)setDataManager:(id)arg0;
- (void)setUserModel:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)hidesBottomBarWhenPushed;
- (id)segmentControl;
- (unsigned long long)currentTabIndex;
- (void)setCurrentTabIndex:(unsigned long long)arg0;
- (BOOL)isCurrentUser;
- (BOOL)isAppeared;

@end
