//
//     Generated by private class-dump
//

@class NSDictionary, UIViewController, AWEListDataController, NSNumber, AWERVMediumVideoParamsModel, AWEAwemeModel, NSMutableArray, NSString, AWEPerfSession, AWERelatedVideoQualityMonitor, AWELVideoRelatedXiguaGuideModel, NSArray, AWERelatedVideoDataManager, DUXSelectPopover, AWEAwemePlayVideoViewController, AWERVMediumVideoPageContext, AWELVideoPlayControlInfoModel, UIView, AWEImmersionProgressSliderView, AWERelatedVideoScheduler, UISlider, AWERVLongVideoParamsModel, AWERVContainerTracker, AWERVLongVideoPageContext, AWERVDPerformanceMonitor, AWERelatedFeedExtra;
@protocol AWEAdLongVideoContainerViewController, AWERVPageConfigProtocol, AWELongVideoDataControllerProtocol, AWERVLongVideoProtocol, AWERelatedVideoControlViewDelegate;

@interface AWERVDetailPageContext : AWEPageContext <AWERVLVSelectDelegate, AWERVDetailPageContextControlViewProtocol> {
    BOOL _needPauseWhenFirstAppear;
    BOOL _isLongVideoPayingInProgress;
    BOOL _defaultScrollToComment;
    BOOL _defaultScrollToFeedShare;
    BOOL _isLongVideo;
    BOOL _isFromPush;
    BOOL _isFromeSchema;
    BOOL _isFirstAppear;
    BOOL _isShowingTab;
    BOOL _isShowingTag;
    BOOL _commentPanelIsShowing;
    BOOL _isModernFullScreen;
    BOOL _isInLandscape;
    BOOL _isEnterPureModePage;
    BOOL _isEnteringLandscape;
    BOOL _isSlidering;
    BOOL _isLongPressSpeeding;
    BOOL _isEnteringAwemeDetail;
    BOOL _isFromFeedShare;
    BOOL _isFromLongVideoBottomBar;
    BOOL _morePanelShowing;
    BOOL _needAutoEnterLandscapePage;
    BOOL _enableWaterFlow;
    BOOL _isClickingBottomComment;
    BOOL _isImmersionMode;
    BOOL _isSliding;
    BOOL _userCancelMixVideoAutoPlay;
    BOOL _isScreenCastLoading;
    BOOL _isOnFeedShare;
    BOOL _changeControllerHierarchy;
    BOOL _isPlaying;
    BOOL _isLagLoading;
    BOOL _isFailedMode;
    BOOL _loading;
    BOOL _isShowingFullPlayerReminderView;
    BOOL _isShowingBottomLeftReminderView;
    BOOL _isShowingTabList;
    BOOL _isShowingInputView;
    BOOL _isClickListVideo;
    BOOL _shouldAutorotate;
    BOOL _showLVWidget;
    BOOL _isScreenCast;
    BOOL _isUseAwemeModelEnter;
    BOOL _isBottomBarPreRequest;
    long long _tabIndex;
    NSString *_awemeID;
    NSString *_referString;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSString *_entrance;
    NSDictionary *_originRouterParams;
    AWEAwemeModel *_awemeModel;
    AWEAwemeModel *_legacyAwemeModel;
    AWEAwemeModel *_originAwemeModel;
    NSString *_originFromPage;
    NSString *_fromPage;
    NSString *_previousPage;
    NSString *_scene;
    NSDictionary *_logExtraDict;
    NSNumber *_defaultStratPlayTime;
    AWEPerfSession *_perfSession;
    AWELVideoPlayControlInfoModel *_playControlModel;
    AWERelatedVideoScheduler *_scheduler;
    AWEAwemeModel *_chooseRelatedModel;
    double _playSpeed;
    AWEAwemeModel *_currentPlayModel;
    NSString *_initialShowCommentID;
    NSArray *_relatedModels;
    AWEAwemePlayVideoViewController *_playerViewController;
    AWEImmersionProgressSliderView *_immersionProgressSlider;
    AWEListDataController<AWELongVideoDataControllerProtocol> *_longVideoDataController;
    UIViewController<AWEAdLongVideoContainerViewController> *_adLongVideoContainerViewController;
    double _lastVideoWatchProgress;
    unsigned long long _relatedVideoType;
    double _beforeLongPressPlayBackRate;
    long long _themeStyle;
    long long _jumpCount;
    long long _clickRelatedCount;
    NSMutableArray *_viewAwemeList;
    NSMutableArray *_viewAwemeTypeList;
    AWERVDPerformanceMonitor *_loadRecorder;
    AWERelatedVideoQualityMonitor *_qualityMonitor;
    AWERelatedVideoDataManager *_dataManager;
    AWERelatedFeedExtra *_relatedFeedExtra;
    double _hotZoneWidth;
    NSString *_parentGroupId;
    NSString *_parentAuthorId;
    AWELVideoRelatedXiguaGuideModel *_relatedXiguaGuideModel;
    NSDictionary *_danmakuConfigDict;
    id<AWERVPageConfigProtocol> _pageConfig;
    NSArray *_innerFlowFilterAwemeModels;
    NSArray *_innerFlowOriginalAwemeModels;
    id<AWERelatedVideoControlViewDelegate> _playerVC;
    double _dragTime;
    double _totalTime;
    UIView *_bottomBar;
    UIView *_progressBar;
    UISlider *_progressSlider;
    DUXSelectPopover *_resolutionSelectPopover;
    AWERVMediumVideoParamsModel *_mediumVideoParams;
    AWERVLongVideoParamsModel *_longVideoParams;
    AWERVLongVideoPageContext *_lvPageContext;
    AWERVMediumVideoPageContext *_mvPageContext;
    AWERVContainerTracker *_tracker;
    long long _relatedItemDiversionType;
    long long _relatedItemDiversionStyle;
    NSNumber *_qingTaoFlowGuideStep;
    NSNumber *_qingTaoFlowGuideStart;
    unsigned long long _supportedInterfaceOrientations;
    id<AWERVLongVideoProtocol> _longVideoProvider;
    UIView *_lvContainer;
    NSString *_playMode;
    long long _cacheSize;
    struct CGPoint { double x; double y; } _containerLastOffset;
}

@property (retain, nonatomic) id<AWERVPageConfigProtocol> pageConfig;
@property (nonatomic) long long tabIndex;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *entrance;
@property (copy, nonatomic) NSDictionary *originRouterParams;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEAwemeModel *legacyAwemeModel;
@property (retain, nonatomic) AWEAwemeModel *originAwemeModel;
@property (nonatomic) BOOL needPauseWhenFirstAppear;
@property (nonatomic) BOOL isLongVideoPayingInProgress;
@property (copy, nonatomic) NSString *originFromPage;
@property (copy, nonatomic) NSString *fromPage;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) NSNumber *defaultStratPlayTime;
@property (nonatomic) BOOL defaultScrollToComment;
@property (nonatomic) BOOL defaultScrollToFeedShare;
@property (nonatomic) BOOL isLongVideo;
@property (nonatomic) BOOL isFromPush;
@property (nonatomic) BOOL isFromeSchema;
@property (retain, nonatomic) AWEPerfSession *perfSession;
@property (retain, nonatomic) AWELVideoPlayControlInfoModel *playControlModel;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL isShowingTab;
@property (nonatomic) struct CGPoint { double x; double y; } containerLastOffset;
@property (retain, nonatomic) AWERelatedVideoScheduler *scheduler;
@property (nonatomic) BOOL isShowingTag;
@property (nonatomic) BOOL commentPanelIsShowing;
@property (nonatomic) BOOL isModernFullScreen;
@property (nonatomic) BOOL isInLandscape;
@property (retain, nonatomic) AWEAwemeModel *chooseRelatedModel;
@property (nonatomic) double playSpeed;
@property (retain, nonatomic) AWEAwemeModel *currentPlayModel;
@property (copy, nonatomic) NSString *initialShowCommentID;
@property (copy, nonatomic) NSArray *relatedModels;
@property (retain, nonatomic) AWEAwemePlayVideoViewController *playerViewController;
@property (weak, nonatomic) AWEImmersionProgressSliderView *immersionProgressSlider;
@property (retain, nonatomic) AWEListDataController<AWELongVideoDataControllerProtocol> *longVideoDataController;
@property (weak, nonatomic) UIViewController<AWEAdLongVideoContainerViewController> *adLongVideoContainerViewController;
@property (nonatomic) double lastVideoWatchProgress;
@property (nonatomic) unsigned long long relatedVideoType;
@property (nonatomic) BOOL isEnterPureModePage;
@property (nonatomic) BOOL isEnteringLandscape;
@property (nonatomic) BOOL isSlidering;
@property (nonatomic) BOOL isLongPressSpeeding;
@property (nonatomic) double beforeLongPressPlayBackRate;
@property (nonatomic) BOOL isEnteringAwemeDetail;
@property (nonatomic) BOOL isFromFeedShare;
@property (nonatomic) BOOL isFromLongVideoBottomBar;
@property (nonatomic) BOOL morePanelShowing;
@property (nonatomic) BOOL needAutoEnterLandscapePage;
@property (readonly, nonatomic) BOOL enableTabStyleExp;
@property (readonly, nonatomic) long long recommendListStyle;
@property (nonatomic) BOOL enableWaterFlow;
@property (readonly, nonatomic) BOOL preferDarkTheme;
@property (readonly, nonatomic) BOOL preferLightTheme;
@property (nonatomic) long long themeStyle;
@property (nonatomic) long long jumpCount;
@property (nonatomic) long long clickRelatedCount;
@property (retain, nonatomic) NSMutableArray *viewAwemeList;
@property (retain, nonatomic) NSMutableArray *viewAwemeTypeList;
@property (nonatomic) BOOL isClickingBottomComment;
@property (retain, nonatomic) AWERVDPerformanceMonitor *loadRecorder;
@property (retain, nonatomic) AWERelatedVideoQualityMonitor *qualityMonitor;
@property (retain, nonatomic) AWERelatedVideoDataManager *dataManager;
@property (retain, nonatomic) AWERelatedFeedExtra *relatedFeedExtra;
@property (nonatomic) double hotZoneWidth;
@property (copy, nonatomic) NSString *parentGroupId;
@property (copy, nonatomic) NSString *parentAuthorId;
@property (retain, nonatomic) AWELVideoRelatedXiguaGuideModel *relatedXiguaGuideModel;
@property (copy, nonatomic) NSDictionary *danmakuConfigDict;
@property (copy, nonatomic) NSArray *innerFlowFilterAwemeModels;
@property (copy, nonatomic) NSArray *innerFlowOriginalAwemeModels;
@property (nonatomic) BOOL isImmersionMode;
@property (weak, nonatomic) id<AWERelatedVideoControlViewDelegate> playerVC;
@property (nonatomic) BOOL isSliding;
@property (nonatomic) BOOL userCancelMixVideoAutoPlay;
@property (nonatomic) BOOL isScreenCastLoading;
@property (nonatomic) BOOL isOnFeedShare;
@property (nonatomic) BOOL changeControllerHierarchy;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) double dragTime;
@property (nonatomic) double totalTime;
@property (nonatomic) BOOL isLagLoading;
@property (nonatomic) BOOL isFailedMode;
@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL isShowingFullPlayerReminderView;
@property (nonatomic) BOOL isShowingBottomLeftReminderView;
@property (nonatomic) BOOL isShowingTabList;
@property (retain, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) UIView *progressBar;
@property (retain, nonatomic) UISlider *progressSlider;
@property (retain, nonatomic) DUXSelectPopover *resolutionSelectPopover;
@property (retain, nonatomic) AWERVMediumVideoParamsModel *mediumVideoParams;
@property (retain, nonatomic) AWERVLongVideoParamsModel *longVideoParams;
@property (retain, nonatomic) AWERVLongVideoPageContext *lvPageContext;
@property (retain, nonatomic) AWERVMediumVideoPageContext *mvPageContext;
@property (retain, nonatomic) AWERVContainerTracker *tracker;
@property (nonatomic) long long relatedItemDiversionType;
@property (nonatomic) long long relatedItemDiversionStyle;
@property (retain, nonatomic) NSNumber *qingTaoFlowGuideStep;
@property (retain, nonatomic) NSNumber *qingTaoFlowGuideStart;
@property (nonatomic) BOOL isShowingInputView;
@property (nonatomic) BOOL isClickListVideo;
@property (nonatomic) BOOL shouldAutorotate;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (weak, nonatomic) id<AWERVLongVideoProtocol> longVideoProvider;
@property (nonatomic, getter=isShowingLVWidget) BOOL showLVWidget;
@property (retain, nonatomic) UIView *lvContainer;
@property (copy, nonatomic) NSString *playMode;
@property (readonly, nonatomic) BOOL shouldEnterScreenCast;
@property (readonly, nonatomic) BOOL isInLVScreenCasting;
@property (readonly, nonatomic) BOOL isCastViewShowing;
@property (nonatomic) BOOL isScreenCast;
@property (nonatomic) long long cacheSize;
@property (nonatomic) BOOL isUseAwemeModelEnter;
@property (nonatomic) BOOL isBottomBarPreRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)awe_enableRVPreloadCoverImage;
+ (BOOL)awe_enableRVMixCoverRatioChange;
+ (BOOL)awe_enableFixRVSlider;
+ (BOOL)awe_enableRVCommentHeightChange;
+ (BOOL)shouldHideRewardButtonWithModel:(id)arg0;

- (id)awemeModel;
- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)enterFrom;
- (BOOL)isModernFullScreen;
- (void)setIsModernFullScreen:(BOOL)arg0;
- (id)longVideoDataController;
- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (void)setFromPage:(id)arg0;
- (void)setThemeStyle:(long long)arg0;
- (BOOL)isScreenCast;
- (void)setEntrance:(id)arg0;
- (id)currentPlayModel;
- (void)setIsFirstAppear:(BOOL)arg0;
- (void)setShouldAutorotate:(BOOL)arg0;
- (id)entrance;
- (void)setPlaySpeed:(double)arg0;
- (double)playSpeed;
- (BOOL)isLongVideo;
- (void)setIsLongVideo:(BOOL)arg0;
- (long long)relatedItemDiversionType;
- (void)setRelatedItemDiversionType:(long long)arg0;
- (long long)relatedItemDiversionStyle;
- (void)setRelatedItemDiversionStyle:(long long)arg0;
- (id)relatedXiguaGuideModel;
- (void)setRelatedXiguaGuideModel:(id)arg0;
- (id)relatedFeedExtra;
- (void)setRelatedFeedExtra:(id)arg0;
- (BOOL)preferLightTheme;
- (BOOL)isFromPush;
- (BOOL)isInLandscape;
- (id)originFromPage;
- (void)setOriginFromPage:(id)arg0;
- (void)setIsInLandscape:(BOOL)arg0;
- (void)setLongVideoDataController:(id)arg0;
- (BOOL)isShowingLVWidget;
- (void)setShowLVWidget:(BOOL)arg0;
- (BOOL)isSlidering;
- (double)dragTime;
- (void)setIsSlidering:(BOOL)arg0;
- (void)setDragTime:(double)arg0;
- (struct CGPoint { double x0; double x1; })containerLastOffset;
- (void)setContainerLastOffset:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)isSliding;
- (void)setIsSliding:(BOOL)arg0;
- (BOOL)isCastViewShowing;
- (BOOL)isInLVScreenCasting;
- (void)setIsFromPush:(BOOL)arg0;
- (BOOL)preferDarkTheme;
- (BOOL)isEnteringLandscape;
- (void)setIsEnteringLandscape:(BOOL)arg0;
- (BOOL)isShowingInputView;
- (void)selectAlbum:(id)arg0;
- (BOOL)isFromMVChannelOuter;
- (BOOL)isFromMVChannel;
- (BOOL)isFromFeedShare;
- (BOOL)isScreenCastLoading;
- (void)setIsScreenCastLoading:(BOOL)arg0;
- (BOOL)isReminderShowing;
- (BOOL)isFailedMode;
- (id)adLongVideoContainerViewController;
- (id)paramsForTrackLongVideo;
- (void)setAdLongVideoContainerViewController:(id)arg0;
- (BOOL)isPortraitVideo:(id)arg0;
- (BOOL)enableWaterFlow;
- (void)setCurrentPlayModel:(id)arg0;
- (void)setIsOnFeedShare:(BOOL)arg0;
- (void)setIsFromFeedShare:(BOOL)arg0;
- (BOOL)selectEpisode:(id)arg0;
- (void)selectLanguage:(id)arg0;
- (void)setBeforeLongPressPlayBackRate:(double)arg0;
- (double)beforeLongPressPlayBackRate;
- (id)resolutionSelectPopover;
- (void)setIsImmersionMode:(BOOL)arg0;
- (void)setIsFailedMode:(BOOL)arg0;
- (void)setIsShowingFullPlayerReminderView:(BOOL)arg0;
- (BOOL)isShowingFullPlayerReminderView;
- (id)lvContainer;
- (BOOL)changeControllerHierarchy;
- (BOOL)commentPanelIsShowing;
- (BOOL)isImmersionMode;
- (BOOL)isOnFeedShare;
- (BOOL)awe_enableTagListUseTwoSource;
- (BOOL)isEnteringAwemeDetail;
- (BOOL)awe_enableRVInnerflowFitCache;
- (BOOL)isXiGuaVideoCrossFlow;
- (BOOL)awe_filterLabelShow;
- (id)loadRecorder;
- (long long)jumpCount;
- (BOOL)awe_enableFixMultiTab;
- (BOOL)isFromBottomBar;
- (BOOL)shouldFilterDiversionVideoWithModel:(id)arg0;
- (BOOL)shouldFilterXiGuaVideoCrossFlowVideo;
- (BOOL)isFromXiguaBottomBar;
- (id)lvPageContext;
- (id)initialShowCommentID;
- (BOOL)isShowingTabList;
- (void)setIsClickingBottomComment:(BOOL)arg0;
- (BOOL)awe_enableRecallVideo;
- (BOOL)isClickingBottomComment;
- (BOOL)awe_rvRecommendTagShowAboveTitle;
- (BOOL)awe_rvRecommendTagShowUpperLeft;
- (BOOL)awe_rvRecommendTagShow;
- (BOOL)awe_rvSingleListCoverRatioOpt;
- (BOOL)awe_enableRVListTitleDisplayOpt;
- (BOOL)isShowingTab;
- (id)mvPageContext;
- (void)setIsClickListVideo:(BOOL)arg0;
- (long long)clickRelatedCount;
- (void)setClickRelatedCount:(long long)arg0;
- (BOOL)awe_filterTabShow;
- (BOOL)awe_enableQuickLoadMoreAfterRefresh;
- (void)setIsFromeSchema:(BOOL)arg0;
- (void)setOriginRouterParams:(id)arg0;
- (void)setLongVideoParams:(id)arg0;
- (void)setMediumVideoParams:(id)arg0;
- (void)setPlayControlModel:(id)arg0;
- (void)setDefaultScrollToFeedShare:(BOOL)arg0;
- (void)setDefaultScrollToComment:(BOOL)arg0;
- (void)setInitialShowCommentID:(id)arg0;
- (void)setDefaultStratPlayTime:(id)arg0;
- (void)setNeedPauseWhenFirstAppear:(BOOL)arg0;
- (void)setParentGroupId:(id)arg0;
- (void)setParentAuthorId:(id)arg0;
- (void)setDanmakuConfigDict:(id)arg0;
- (void)buildPageConfig:(id)arg0 params:(id)arg1;
- (void)setIsUseAwemeModelEnter:(BOOL)arg0;
- (void)setIsBottomBarPreRequest:(BOOL)arg0;
- (void)setOriginAwemeModel:(id)arg0;
- (void)setIsFromLongVideoBottomBar:(BOOL)arg0;
- (BOOL)isFromLongVideoBottomBar;
- (void)setRelatedVideoType:(unsigned long long)arg0;
- (void)setIsEnteringAwemeDetail:(BOOL)arg0;
- (id)immersionProgressSlider;
- (void)setImmersionProgressSlider:(id)arg0;
- (void)setIsShowingTab:(BOOL)arg0;
- (id)legacyAwemeModel;
- (BOOL)enableBottomBar;
- (BOOL)awe_enableRVSupportHotVideo;
- (BOOL)useNewLandscapeTransition;
- (void)setLegacyAwemeModel:(id)arg0;
- (id)originAwemeModel;
- (BOOL)needPauseWhenFirstAppear;
- (BOOL)isLongVideoPayingInProgress;
- (BOOL)defaultScrollToComment;
- (void)setJumpCount:(long long)arg0;
- (id)viewAwemeList;
- (id)viewAwemeTypeList;
- (id)parentGroupId;
- (id)parentAuthorId;
- (id)longVideoProvider;
- (BOOL)isFromComprehensionBar;
- (BOOL)isEnterPureModePage;
- (BOOL)needAutoEnterLandscapePage;
- (void)setNeedAutoEnterLandscapePage:(BOOL)arg0;
- (void)setIsShowingInputView:(BOOL)arg0;
- (void)setInnerFlowOriginalAwemeModels:(id)arg0;
- (BOOL)isFromeSchema;
- (void)pausePlayCommentAudio:(BOOL)arg0;
- (void)setPerfSession:(id)arg0;
- (void)setViewAwemeList:(id)arg0;
- (void)setViewAwemeTypeList:(id)arg0;
- (void)setInnerFlowFilterAwemeModels:(id)arg0;
- (id)innerFlowOriginalAwemeModels;
- (id)innerFlowFilterAwemeModels;
- (BOOL)isFromVideoTitle;
- (BOOL)awe_shouldFilterVideoWithSource:(id)arg0;
- (void)continuePlayCommentAudio;
- (id)nextAutoPlayModel;
- (void)setLvContainer:(id)arg0;
- (void)setIsShowingBottomLeftReminderView:(BOOL)arg0;
- (void)setLvPageContext:(id)arg0;
- (void)setMvPageContext:(id)arg0;
- (void)setIsScreenCast:(BOOL)arg0;
- (BOOL)isLagLoading;
- (void)setIsLagLoading:(BOOL)arg0;
- (BOOL)isShowingBottomLeftReminderView;
- (BOOL)userCancelMixVideoAutoPlay;
- (void)setUserCancelMixVideoAutoPlay:(BOOL)arg0;
- (BOOL)morePanelShowing;
- (void)setMorePanelShowing:(BOOL)arg0;
- (id)playerVC;
- (void)setPlayerVC:(id)arg0;
- (double)hotZoneWidth;
- (void)setHotZoneWidth:(double)arg0;
- (id)danmakuConfigDict;
- (void)setLoadRecorder:(id)arg0;
- (long long)awe_filterSecondPosTab;
- (BOOL)isLongPressSpeeding;
- (id)nextEpisodeID;
- (id)nextSeriesAlbumID;
- (id)nextEpisodeTitle;
- (id)nextSeriesAlbumTitle;
- (BOOL)awe_enableFixNextMixVideoToast;
- (void)setLastVideoWatchProgress:(double)arg0;
- (BOOL)awe_enableRVTitleAndCaptionDisplayOpt;
- (BOOL)awe_rvBarSingleListCoverRatioOpt;
- (BOOL)awe_rvChannelSingleListCoverRatioOpt;
- (BOOL)awe_enableFixLandingCommentTab;
- (BOOL)awe_useComplexTransition;
- (BOOL)awe_enableFixControlViewReset;
- (long long)getCurrentEpisodeRank;
- (BOOL)enableTabStyleExp;
- (long long)recommendListStyle;
- (id)perfSession;
- (id)getCurrentEpisodeID;
- (id)qingTaoFlowGuideStep;
- (id)qingTaoFlowGuideStart;
- (BOOL)shouldEnterScreenCast;
- (id)originRouterParams;
- (void)setIsLongVideoPayingInProgress:(BOOL)arg0;
- (id)defaultStratPlayTime;
- (BOOL)defaultScrollToFeedShare;
- (id)playControlModel;
- (BOOL)isShowingTag;
- (void)setIsShowingTag:(BOOL)arg0;
- (void)setCommentPanelIsShowing:(BOOL)arg0;
- (id)chooseRelatedModel;
- (void)setChooseRelatedModel:(id)arg0;
- (double)lastVideoWatchProgress;
- (unsigned long long)relatedVideoType;
- (void)setIsEnterPureModePage:(BOOL)arg0;
- (void)setIsLongPressSpeeding:(BOOL)arg0;
- (void)setEnableWaterFlow:(BOOL)arg0;
- (void)setChangeControllerHierarchy:(BOOL)arg0;
- (void)setIsShowingTabList:(BOOL)arg0;
- (void)setResolutionSelectPopover:(id)arg0;
- (id)mediumVideoParams;
- (id)longVideoParams;
- (void)setQingTaoFlowGuideStep:(id)arg0;
- (void)setQingTaoFlowGuideStart:(id)arg0;
- (BOOL)isClickListVideo;
- (void)setLongVideoProvider:(id)arg0;
- (BOOL)isUseAwemeModelEnter;
- (BOOL)isBottomBarPreRequest;
- (id)dataManager;
- (BOOL)shouldAutorotate;
- (id)tracker;
- (void)setLoading:(BOOL)arg0;
- (void)setTracker:(id)arg0;
- (id)init;
- (double)totalTime;
- (id)playerViewController;
- (void)setScene:(id)arg0;
- (long long)cacheSize;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setBottomBar:(id)arg0;
- (void)setCacheSize:(long long)arg0;
- (id)scheduler;
- (void)setDataManager:(id)arg0;
- (BOOL)loading;
- (void)setScheduler:(id)arg0;
- (BOOL)isPlaying;
- (id)bottomBar;
- (void)setIsPlaying:(BOOL)arg0;
- (void)setTotalTime:(double)arg0;
- (id)scene;
- (long long)tabIndex;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg0;
- (void)setPlayerViewController:(id)arg0;
- (id)progressBar;
- (long long)themeStyle;
- (void)setProgressBar:(id)arg0;
- (BOOL)isFirstAppear;
- (void)setRelatedModels:(id)arg0;
- (id)relatedModels;
- (id)progressSlider;
- (void)setProgressSlider:(id)arg0;
- (id)pageConfig;
- (void)setPageConfig:(id)arg0;
- (void)setTabIndex:(long long)arg0;
- (id)fromPage;
- (id)qualityMonitor;
- (void)setQualityMonitor:(id)arg0;
- (void)setPlayMode:(id)arg0;
- (id)playMode;

@end
