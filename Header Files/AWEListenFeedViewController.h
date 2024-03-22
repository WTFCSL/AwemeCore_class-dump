//
//     Generated by private class-dump
//

@class AWEUILoadingView, DUXBasicSheet, UILabel, AWEFeedBackgroundPlayManager, NSDictionary, NSIndexPath, NSMutableArray, UIButton, UIView, NSString, AWEButton, AWEListDataController, AWEListenFeedContext, AWEListenFeedValueAdjustPopupView, AWEListenFeedPlayModel, AWEAwemeModel, AWEListenFeedContentFilterContainerView, NSTimer, AWEGradientView, UIImageView;

@interface AWEListenFeedViewController : AWEBaseListViewController <UICollectionViewDelegate, AWEListenFeedPlayControlViewDelegate, AWEListenFeedDrawBackCellDelegate, AWERouterViewControllerProtocol, AWEListenFeedPlayListViewControllerDelegate, AWEListenFeedContentFilterContainerDelegate, AWEListenFeedValueAdjustPopupViewDelegate, AWEFeedBackgroundPlayManagerDelegate, AWEListenFeedViewControllerProtocol, AWEListenFeedViewModelProtocol> {
    BOOL _isUsedForSecondPage;
    BOOL _shouldShowContentFilterAfterDelay;
    BOOL _isExiting;
    BOOL _pannelIsShowing;
    BOOL _addedStatusIsRequeatOnAir;
    BOOL _addedToProfileIsRequestOnAir;
    BOOL _hasShowPinchToastForSpecial;
    BOOL _willShowGestureGuide;
    BOOL _shouldDisableContentFilterAutoShow;
    BOOL _haveNoContent;
    BOOL _alreadyAutoShowContentFilter;
    BOOL _isFilterViewSliding;
    BOOL _isPlayingInterrupted;
    BOOL _isScrolling;
    BOOL _isAutoPause;
    AWEListenFeedPlayModel *_playModel;
    AWEAwemeModel *_awemeModel;
    NSString *_referString;
    NSString *_enterMethod;
    AWEListDataController *_externalDataController;
    long long _initialIndex;
    double _startTimestamp;
    AWEListenFeedContext *_context;
    unsigned long long _localPlayStyle;
    double _localSpeed;
    NSIndexPath *_currentPlayIndex;
    NSString *_secondPageName;
    NSString *_scene;
    id /* block */ _updatePlayListPlayModelBlock;
    AWEButton *_backButton;
    AWEUILoadingView *_loadingView;
    AWEListenFeedValueAdjustPopupView *_speedSheet;
    DUXBasicSheet *_sheet;
    UILabel *_noContentLabel;
    UIButton *_titleButton;
    UILabel *_titleLabel;
    UIImageView *_titleArrowImageView;
    AWEListenFeedContentFilterContainerView *_contentFilterContainerView;
    UILabel *_secondPageTitleLabel;
    NSDictionary *_paramDictionary;
    long long _dataSourceType;
    UIView *_filterAnimationMask;
    double _fromCardStartShowVideoTime;
    NSMutableArray *_cardSkipItemArray;
    NSTimer *_timer;
    AWEGradientView *_emptyGradientView;
    id /* block */ _closePlayList;
    long long _rewindTotalCount;
    long long _rewindCompletionCount;
    long long _forwardTotalCount;
    long long _forwardCompletionCount;
    double _previousTime;
    AWEFeedBackgroundPlayManager *_backgroundPlayManager;
    double _kLastTime;
    NSIndexPath *_lastPlayIndex;
}

@property (retain, nonatomic) AWEListenFeedPlayModel *playModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) AWEListDataController *externalDataController;
@property (nonatomic) long long initialIndex;
@property (nonatomic) double startTimestamp;
@property (retain, nonatomic) AWEListenFeedContext *context;
@property (nonatomic) unsigned long long localPlayStyle;
@property (nonatomic) double localSpeed;
@property (retain, nonatomic) AWEButton *backButton;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (weak, nonatomic) AWEListenFeedValueAdjustPopupView *speedSheet;
@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (retain, nonatomic) UILabel *noContentLabel;
@property (retain, nonatomic) UIButton *titleButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *titleArrowImageView;
@property (retain, nonatomic) AWEListenFeedContentFilterContainerView *contentFilterContainerView;
@property (retain, nonatomic) UILabel *secondPageTitleLabel;
@property (nonatomic) BOOL shouldShowContentFilterAfterDelay;
@property (nonatomic) BOOL isExiting;
@property (nonatomic) BOOL pannelIsShowing;
@property (nonatomic) BOOL addedStatusIsRequeatOnAir;
@property (nonatomic) BOOL addedToProfileIsRequestOnAir;
@property (copy, nonatomic) NSDictionary *paramDictionary;
@property (nonatomic) long long dataSourceType;
@property (nonatomic) BOOL hasShowPinchToastForSpecial;
@property (nonatomic) BOOL willShowGestureGuide;
@property (nonatomic) BOOL shouldDisableContentFilterAutoShow;
@property (nonatomic) BOOL haveNoContent;
@property (nonatomic) BOOL alreadyAutoShowContentFilter;
@property (retain, nonatomic) UIView *filterAnimationMask;
@property (nonatomic) BOOL isFilterViewSliding;
@property (nonatomic) double fromCardStartShowVideoTime;
@property (retain, nonatomic) NSMutableArray *cardSkipItemArray;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) AWEGradientView *emptyGradientView;
@property (copy, nonatomic) id /* block */ closePlayList;
@property (nonatomic) long long rewindTotalCount;
@property (nonatomic) long long rewindCompletionCount;
@property (nonatomic) long long forwardTotalCount;
@property (nonatomic) long long forwardCompletionCount;
@property (nonatomic) double previousTime;
@property (retain, nonatomic) AWEFeedBackgroundPlayManager *backgroundPlayManager;
@property (nonatomic) double kLastTime;
@property (nonatomic) BOOL isPlayingInterrupted;
@property (retain, nonatomic) NSIndexPath *lastPlayIndex;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isAutoPause;
@property (retain, nonatomic) NSIndexPath *currentPlayIndex;
@property (nonatomic) BOOL isUsedForSecondPage;
@property (copy, nonatomic) NSString *secondPageName;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) id /* block */ updatePlayListPlayModelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;
+ (Class)aAWEFeedContainerViewControllerCommonAdapterClass;

- (id)awemeModel;
- (id)referString;
- (void)customLayoutCollectionView:(id)arg0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)arg0 forSectionViewModel:(id)arg1;
- (void)listDidReloadDataWithCollectionView:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)backButtonClicked:(id)arg0;
- (id)enterMethod;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)emptySectionsPlaceholderView;
- (BOOL)isSplashShowing;
- (BOOL)isSlideEnable;
- (void)backgroundPlay;
- (id)currentPlayIndex;
- (id)currentPlayModel;
- (void)setCurrentPlayIndex:(id)arg0;
- (void)addNotifications;
- (void)resetNowPlayingInfo;
- (void)setIsPlayingInterrupted:(BOOL)arg0;
- (BOOL)isPlayingInterrupted;
- (void)handleConnectionChanged:(id)arg0;
- (void)setupBinding;
- (void)handleAudioSessionInterruptionNotification:(id)arg0;
- (void)playIndex:(id)arg0;
- (id)lastPlayIndex;
- (void)setLastPlayIndex:(id)arg0;
- (void)recallDimissNotNeedView;
- (void)handleFetchDataState:(long long)arg0;
- (void)setPlayModel:(id)arg0;
- (id)playModel;
- (void)loadMoreIfNeeded;
- (void)splashDidDisappear:(id)arg0;
- (id)currentPlayerViewController;
- (void)handleVideoSafetyCheckNotification:(id)arg0;
- (void)setupRecallRegisters;
- (void)detailDrawBackCellTimeIsOver:(id)arg0;
- (id)aAWEFeedContainerViewControllerCommonAdapter;
- (void)backgroundPause;
- (void)setExternalDataController:(id)arg0;
- (id)externalDataController;
- (BOOL)isUsedForSecondPage;
- (void)showContentFilterView:(BOOL)arg0;
- (void)initSubviews;
- (void)contentFilterDismissClicked;
- (void)playNextVideo;
- (void)awe_backgroundPlayNext;
- (BOOL)hasNextVideo;
- (void)playerWillLoopPlaying;
- (void)updateUIToPauseState;
- (void)updateProgressUI;
- (void)updateCurrentTime:(double)arg0 totalTime:(double)arg1;
- (void)updateLocalSpeed:(double)arg0;
- (unsigned long long)localPlayStyle;
- (double)localSpeed;
- (void)showLoadingView:(BOOL)arg0;
- (id /* block */)updatePlayListPlayModelBlock;
- (void)interactionViewDidUpdatePlayer;
- (void)trackDescritionLabelShow;
- (BOOL)supportFilterView;
- (BOOL)isShowingContentFilter;
- (void)hideSpeedSheetIfNeed;
- (void)realShowFilterAnimation:(BOOL)arg0;
- (void)setIsUsedForSecondPage:(BOOL)arg0;
- (void)setSecondPageName:(id)arg0;
- (void)setWithTimer:(double)arg0;
- (void)playControlView:(id)arg0 didClickPlayStyleButton:(id)arg1;
- (void)playControlView:(id)arg0 didClickSpeedButton:(id)arg1;
- (void)playControlView:(id)arg0 didClickPlayButton:(id)arg1;
- (void)playControlView:(id)arg0 sliderTouchBegan:(id)arg1;
- (void)playControlView:(id)arg0 sliderTouchEnded:(id)arg1;
- (void)playControlView:(id)arg0 sliderValueChanged:(id)arg1;
- (void)playControlView:(id)arg0 timingDidResetWithSeconds:(double)arg1;
- (void)playControlViewRewind:(id)arg0;
- (void)playControlViewForward:(id)arg0;
- (void)playControlView:(id)arg0 fastModeBeganPlaybackRate:(double)arg1;
- (void)playControlView:(id)arg0 fastModeEndedPlaybackRate:(double)arg1;
- (void)popupViewDismiss:(id)arg0;
- (void)popupViewValueChosed:(id)arg0;
- (void)scrollToTopWithIndex:(long long)arg0;
- (void)playList:(id)arg0 didSelectedIndex:(long long)arg1;
- (void)playListDidClose:(id)arg0;
- (id)backgroundPlayManager;
- (id)backgroundPlayManager;
- (BOOL)p_backgroundPlayNextByClick:(BOOL)arg0;
- (void)handleAppWillResignActive:(id)arg0;
- (id)aweme_currentIndexPathForFullScreenCell;
- (double)kLastTime;
- (BOOL)awe_backgroundScrollToNextVideoByClick:(BOOL)arg0;
- (void)setKLastTime:(double)arg0;
- (void)awe_backgroundPlay;
- (void)trackBackgroundPlayClickRight;
- (BOOL)awe_backgroundIsPlaying;
- (void)awe_backgroundPause;
- (void)showCollectGuideAlert;
- (BOOL)backgroundScrollToPreviousVideo;
- (void)trackBackgroundPlayClickLeft;
- (void)trackClickProgressBarWithExtraParams:(id)arg0;
- (void)awe_enableBackgroundPlay;
- (void)awe_disableBackgroundPlay;
- (void)awe_addNotification;
- (void)awe_backgroundPlayAutoNext;
- (id)awe_backgroundCurrentItemID;
- (BOOL)awe_backgroundCanPlayNext;
- (void)awe_backgroundPlayNextByClick:(BOOL)arg0;
- (BOOL)awe_backgroundCanPlayPrevious;
- (void)awe_backgroundPlayPrevious;
- (double)awe_backgroundVideoDuration;
- (double)awe_backgroundCurrentPlaybackTime;
- (void)awe_backgroundPlayerSeekTime:(double)arg0;
- (void)playCell:(id)arg0 withIndexPath:(id)arg1;
- (BOOL)isAutoPause;
- (void)setIsAutoPause:(BOOL)arg0;
- (void)willDisplayCell:(id)arg0 forItemAtIndexPath:(id)arg1;
- (void)didEndDisplayingCell:(id)arg0 forItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndScrollingForPlay;
- (void)autoPlayIfNeeded;
- (void)autoPauseIfNeeded;
- (void)stopCell:(id)arg0 withIndexPath:(id)arg1;
- (id)currentBaseParamsWithOtherParams:(id)arg0;
- (id)baseParamsWithOtherParams:(id)arg0;
- (void)trackEnterListenFeedPage;
- (void)trackExitListenFeedPage:(id)arg0;
- (void)trackListenAddGuideShow:(id)arg0;
- (void)trackListenAddGuideClick:(id)arg0 position:(id)arg1;
- (void)trackClickChangeSpeedEntrance;
- (void)trackChangeSpeedMode:(id)arg0;
- (void)trackClickPlayStatus:(id)arg0;
- (void)trackClickVideoPlayWithLogExtra:(id)arg0;
- (void)trackVideoPlayPause;
- (void)trackChooseListenListWithIndex:(long long)arg0;
- (void)trackListenListClick;
- (void)trackClickProgressSpeedWithMethod:(id)arg0 type:(id)arg1;
- (void)awe_trackSecondPageShowIfNeed;
- (void)setParamDictionary:(id)arg0;
- (id)initWithModel:(id)arg0 playModel:(id)arg1;
- (void)setupDatasoureType;
- (void)updateEntranceGuideKeyAndTrack;
- (void)setLocalPlayStyle:(unsigned long long)arg0;
- (void)setLocalSpeed:(double)arg0;
- (void)initCollectionFrame;
- (void)setupRegisters;
- (void)showGuideViewIfNeeded;
- (void)recordEnterTimes;
- (void)showCollectGuideViewIfNeededWithMethod:(id)arg0;
- (void)fetchListenFeedAddedStatusWithCompletion:(id /* block */)arg0;
- (void)scrollItemToInitialIndexIfNeeded;
- (void)setAccessibilityArray;
- (id)emptyGradientView;
- (void)configContext;
- (void)setupBindingSyncViewModel;
- (id)contentFilterContainerView;
- (id)titleArrowImageView;
- (id)secondPageTitleLabel;
- (id)secondPageName;
- (BOOL)pannelIsShowing;
- (BOOL)isPresentOrPushOtherViewController;
- (id)filterAnimationMask;
- (void)titleArrowRotateByShow:(BOOL)arg0;
- (void)setIsFilterViewSliding:(BOOL)arg0;
- (void)willExit:(id)arg0;
- (void)checkExternalModelCanPlay:(id)arg0;
- (BOOL)isFromListenCard;
- (void)appDidGotoBackground;
- (void)setWillShowGestureGuide:(BOOL)arg0;
- (BOOL)addedStatusIsRequeatOnAir;
- (void)setAddedStatusIsRequeatOnAir:(BOOL)arg0;
- (BOOL)addedToProfileIsRequestOnAir;
- (void)setAddedToProfileIsRequestOnAir:(BOOL)arg0;
- (void)setShouldDisableContentFilterAutoShow:(BOOL)arg0;
- (void)postListenFeedAddToProfile;
- (void)showCollectGuideCheckedView;
- (void)setPannelIsShowing:(BOOL)arg0;
- (void)dismissCollectGuideSheet;
- (void)finishScrollItemToInitialIndex;
- (BOOL)hasShowPinchToastForSpecial;
- (BOOL)willShowGestureGuide;
- (void)showRecommendToast;
- (void)updateNoContentHint;
- (void)reloadCurrentIndexPath;
- (void)dealRecallMessage:(id)arg0;
- (id)speedSheet;
- (BOOL)needCountSkipRateForListenCard;
- (void)setFromCardStartShowVideoTime:(double)arg0;
- (double)fromCardStartShowVideoTime;
- (id)cardSkipItemArray;
- (void)setCardSkipItemArray:(id)arg0;
- (void)backgroundPlayNextByClick:(BOOL)arg0;
- (void)preloadCellMixInfoIfNeeded;
- (void)startCountingTime;
- (void)endCountingTime;
- (id)currentCellControlView;
- (void)setSpeedSheet:(id)arg0;
- (BOOL)haveNoContent;
- (void)setHaveNoContent:(BOOL)arg0;
- (void)showContentFilterViewIfNeeded;
- (void)setUpdatePlayListPlayModelBlock:(id /* block */)arg0;
- (void)setClosePlayList:(id /* block */)arg0;
- (long long)rewindTotalCount;
- (long long)rewindCompletionCount;
- (void)setRewindTotalCount:(long long)arg0;
- (void)setRewindCompletionCount:(long long)arg0;
- (long long)forwardTotalCount;
- (long long)forwardCompletionCount;
- (void)setForwardTotalCount:(long long)arg0;
- (void)setForwardCompletionCount:(long long)arg0;
- (id /* block */)closePlayList;
- (void)setHasShowPinchToastForSpecial:(BOOL)arg0;
- (BOOL)shouldShowContentFilterAfterDelay;
- (void)setShouldShowContentFilterAfterDelay:(BOOL)arg0;
- (void)syncAwemeModelToFeedVCIfNeeded;
- (void)showSpeedSelector;
- (BOOL)isFilterViewSliding;
- (void)prepareFilterViewShow:(BOOL)arg0;
- (void)realShowFilterView:(BOOL)arg0;
- (void)finishFilterViewShow:(BOOL)arg0;
- (id)getAnimationMaskView;
- (void)setFilterAnimationMask:(id)arg0;
- (BOOL)shouldDisableContentFilterAutoShow;
- (BOOL)alreadyAutoShowContentFilter;
- (void)setAlreadyAutoShowContentFilter:(BOOL)arg0;
- (void)titleButtonClicked:(id)arg0;
- (void)backgroundPlayAutoNext;
- (id)backgroundCurrentItemID;
- (BOOL)backgroundCanPlayNext;
- (BOOL)backgroundCanPlayPrevious;
- (void)backgroundPlayPrevious;
- (BOOL)backgroundIsPlaying;
- (double)backgroundVideoDuration;
- (double)backgroundCurrentPlaybackTime;
- (void)backgroundPlayerSeekTime:(double)arg0;
- (void)showNoContentHint;
- (void)setTitleArrowImageView:(id)arg0;
- (void)setContentFilterContainerView:(id)arg0;
- (void)setSecondPageTitleLabel:(id)arg0;
- (id)paramDictionary;
- (void)setEmptyGradientView:(id)arg0;
- (void)setBackgroundPlayManager:(id)arg0;
- (double)startTimestamp;
- (id)timer;
- (void)setIsScrolling:(BOOL)arg0;
- (id)initWithModel:(id)arg0;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)init;
- (void)setStartTimestamp:(double)arg0;
- (void)resetTimer;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)setScene:(id)arg0;
- (void)didMoveToParentViewController:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setContext:(id)arg0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (BOOL)isScrolling;
- (id)titleLabel;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setDataSourceType:(long long)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)appDidBecomeActive:(id)arg0;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)setTimer:(id)arg0;
- (id)context;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (BOOL)isExiting;
- (void)setIsExiting:(BOOL)arg0;
- (long long)dataSourceType;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)scrollToItemAtIndexPath:(id)arg0 atScrollPosition:(unsigned long long)arg1 animated:(BOOL)arg2;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (id)scene;
- (void)exit;
- (id)noContentLabel;
- (void)setNoContentLabel:(id)arg0;
- (void)setupUI;
- (void)initConstraints;
- (id)currentCell;
- (void)setupData;
- (void)fetchFilterData;
- (id)titleButton;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)scrollViewDidEndScrolling;
- (id)currentModel;
- (void)setupCollectionView:(id)arg0;
- (void)setTitleButton:(id)arg0;
- (id)sheet;
- (double)previousTime;
- (void)setPreviousTime:(double)arg0;
- (void)seekToTime:(double)arg0 completion:(id /* block */)arg1;
- (long long)initialIndex;
- (void)setInitialIndex:(long long)arg0;
- (void)setSheet:(id)arg0;

@end
