//
//     Generated by private class-dump
//

@class LunaCyclePageView, NSString, AWEMusicGuideService, UIButton, NSDictionary, LunaPlayerViewHolder, UIViewController, LunaLongLyricViewController, AWEMusicDSPEventModel;
@protocol MusicService, AWEMusicFeedPlayerDelegate, AWECommentListViewControllerProtocol, AWEMusicCollectionServiceProtocol;

@interface LunaPlayerViewController : AWEMiniLunaBaseViewController <LunaCyclePageDelegate, LunaCyclePageDataSource, LunaPlayerItemDelegate, LunaPlayerViewHolderDelgate, AWEMusicServiceDelegate, AWEMusicStreamingQueueHandlerDelegate, AWEMusicExceptionalViewDelegate, AWEMusicSubPlayerInnerTransitionProvider, AWERTVMessage, AWEMusicPlayerQueueDelegate, AWEMusicGuideServiceDelegate, LunaLongLyricTransitionOuterContextProvider, AWECommentControlVideoStateProtocol, AWEMusicFeedNative, AWEMusicFeedPlayerProtocol, AWERouterViewControllerProtocol> {
    BOOL _isCopyrightPreview;
    BOOL _disableChangeMode;
    BOOL _isQueryingQueue;
    BOOL _isFirstQueueNull;
    BOOL _isViewAppearing;
    BOOL _mainFeed_isAppearing;
    BOOL _bottomBtnTitleInitialized;
    BOOL _musicInterrupted;
    unsigned long long _displayType;
    id<AWEMusicFeedPlayerDelegate> _delegate;
    id<AWEMusicCollectionServiceProtocol> _collectionService;
    AWEMusicGuideService *_guideService;
    AWEMusicDSPEventModel *_eventModel;
    NSDictionary *_extraParams;
    LunaCyclePageView *_cyclePage;
    id<MusicService> _musicService;
    double _enterTime;
    LunaPlayerViewHolder *_viewHolder;
    LunaLongLyricViewController *_longLyricViewController;
    UIButton *_bottomDiversionButton;
    UIViewController<AWECommentListViewControllerProtocol> *_commentVC;
}

@property (retain, nonatomic) LunaCyclePageView *cyclePage;
@property (retain, nonatomic) id<MusicService> musicService;
@property (nonatomic) BOOL isQueryingQueue;
@property (nonatomic) BOOL isFirstQueueNull;
@property (nonatomic) BOOL isViewAppearing;
@property (nonatomic) BOOL mainFeed_isAppearing;
@property (nonatomic) double enterTime;
@property (retain, nonatomic) LunaPlayerViewHolder *viewHolder;
@property (retain, nonatomic) LunaLongLyricViewController *longLyricViewController;
@property (retain, nonatomic) UIButton *bottomDiversionButton;
@property (nonatomic) BOOL bottomBtnTitleInitialized;
@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (nonatomic) BOOL musicInterrupted;
@property (nonatomic) unsigned long long displayType;
@property (weak, nonatomic) id<AWEMusicFeedPlayerDelegate> delegate;
@property (weak, nonatomic) id<AWEMusicCollectionServiceProtocol> collectionService;
@property (retain, nonatomic) AWEMusicGuideService *guideService;
@property (nonatomic) BOOL isCopyrightPreview;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL disableChangeMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (BOOL)pauseVideoIfPlaying;
- (BOOL)recoverPlayIfPauseByComment;
- (id)viewHolder;
- (void)setViewHolder:(id)arg0;
- (void)musicServiceMusicChanged:(id)arg0;
- (void)musicServiceDidGoPrevFromRemote:(id)arg0;
- (void)musicServiceDidGoNextFromRemote:(id)arg0;
- (void)onAutoNext:(id)arg0 completion:(id /* block */)arg1;
- (void)onDidPrev:(id)arg0;
- (void)onDidNext:(id)arg0 isManual:(BOOL)arg1 isFinished:(BOOL)arg2;
- (id)extraParams;
- (void)setIsViewAppearing:(BOOL)arg0;
- (id)commentVC;
- (void)setCommentVC:(id)arg0;
- (void)setExtraParams:(id)arg0;
- (id)initWithMusicService:(id)arg0;
- (double)enterTime;
- (void)setEnterTime:(double)arg0;
- (void)setIsCopyrightPreview:(BOOL)arg0;
- (BOOL)isCopyrightPreview;
- (void)queueDidUpdatePlayList:(id)arg0;
- (void)queue:(id)arg0 didChangeLoopModeFromLoopMode:(unsigned long long)arg1;
- (void)handleBack;
- (id)musicService;
- (void)setMusicService:(id)arg0;
- (void)rtvServiceWillBegin:(id)arg0;
- (void)rtvServiceDidBegin:(id)arg0;
- (void)rtvServiceWillFinish:(id)arg0;
- (void)rtvServiceDidFinish:(id)arg0;
- (void)noNetViewDidTapTryAgain:(id)arg0;
- (id)eventModel;
- (id)currentMusicModel;
- (id)guideService;
- (void)loadingShow;
- (id)queueHandler;
- (void)loadingDismiss;
- (void)showNoNetView;
- (void)checkShowChangeSongGuide;
- (void)setEventModel:(id)arg0;
- (id)pageEventParams;
- (BOOL)canShowBgGuideNow;
- (BOOL)canShowChangeSongGuideNow;
- (void)onBgGuideDismissWithMethod:(long long)arg0;
- (void)setGuideService:(id)arg0;
- (void)queueHandler:(id)arg0 changedOf:(id)arg1 scene:(unsigned long long)arg2;
- (void)pageCycle:(id)arg0 scrollDidEndWithMethod:(long long)arg1;
- (id)pageCycle:(id)arg0 identifierOf:(id)arg1;
- (id)pageCycle:(id)arg0 createCycleItem:(id)arg1;
- (void)changeCurrentModel:(id)arg0;
- (id)pageCycleCurrentModel:(id)arg0;
- (id)pageCycle:(id)arg0 preModelOfcurrent:(id)arg1;
- (id)pageCycle:(id)arg0 nextModelOfcurrent:(id)arg1;
- (void)setDisableChangeMode:(BOOL)arg0;
- (id)createCycleItem:(id)arg0;
- (id)cyclePage;
- (void)setCyclePage:(id)arg0;
- (id)titleForPlayer;
- (id)subTitleForPlayer;
- (void)dismissNoNetView;
- (BOOL)isQueryingQueue;
- (void)setIsQueryingQueue:(BOOL)arg0;
- (id)collectionService;
- (BOOL)disableChangeMode;
- (void)setCollectionService:(id)arg0;
- (void)updateNavigatorStyle;
- (BOOL)isFirstQueueNull;
- (void)setIsFirstQueueNull:(BOOL)arg0;
- (id)pageCyclePlayingModel:(id)arg0;
- (BOOL)isPlayingModel:(id)arg0;
- (void)onCurrentItemDidChangedFrom:(id)arg0 to:(id)arg1 method:(long long)arg2;
- (void)onToggleLyricMode;
- (BOOL)mainFeed_isAppearing;
- (void)showCommentModel:(id)arg0;
- (void)setMainFeed_isAppearing:(BOOL)arg0;
- (void)p_showVipInterceptIfNeeded;
- (BOOL)musicInterrupted;
- (void)setMusicInterrupted:(BOOL)arg0;
- (BOOL)p_shouldMusicPause;
- (id)bottomDiversionButton;
- (BOOL)p_needShowBottomDiversionButton;
- (void)reportChangeSongGuideShow;
- (BOOL)bottomBtnTitleInitialized;
- (id)p_bottomDiversionButtonTitleWithModel:(id)arg0;
- (id)p_diversionExtraParamsWithCurrentModel:(id)arg0;
- (void)setBottomBtnTitleInitialized:(BOOL)arg0;
- (void)p_updateBottomDiversionButtonTitle;
- (void)setLongLyricViewController:(id)arg0;
- (id)longLyricViewController;
- (id)creatCommentVCWithModel:(id)arg0;
- (void)dismissComment;
- (void)didClickBottomDiversionButton;
- (unsigned long long)p_buttonDiversionButtonType;
- (id)p_defaultBottomDiversionButtonTextWith:(id)arg0;
- (id)p_buttonDiversionButtonSceneName;
- (id)p_buttonDiversionButtonTextWithScene:(id)arg0 hasScrolled:(BOOL)arg1;
- (void)noNetViewDidTapTryAgain;
- (void)onDidUpdateCurrent:(id)arg0 withoutPlay:(BOOL)arg1;
- (void)onDidUpdateCurrent:(id)arg0 withoutPlay:(BOOL)arg1 method:(long long)arg2;
- (id)tabName:(id)arg0;
- (void)setBottomDiversionButton:(id)arg0;
- (unsigned long long)displayType;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setDisplayType:(unsigned long long)arg0;
- (id)currentItem;
- (void)viewWillDisappear:(BOOL)arg0;
- (long long)preferredStatusBarStyle;
- (void)reloadData;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)delegate;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)hidesBottomBarWhenPushed;
- (void)setupUI;
- (void)reloadData:(BOOL)arg0;
- (BOOL)showNavigationBar;
- (BOOL)isViewAppearing;

@end
