//
//     Generated by private class-dump
//

@class UIPanGestureRecognizer, UILabel, NSDate, UIVisualEffectView, UIPinchGestureRecognizer, UIView, AWEFeedDoubleColumnContext, AWEDoubleColumnShimmerView, AWEFeedDoubleColumnViewControllerManager, NSString, AWEPageContext, AWEAwemeModel, AWEGradientView, UICollectionViewCell, UIImageView;
@protocol AWEFeedDoubleColumnCellProtocol, AWEFeedDoubleColumnChannelDelegate;

@interface AWEFeedDoubleColumnViewController : AWEBaseListViewController <UIScrollViewDelegate, UICollectionViewDelegate, AWEFeedDoubleColumnActionDelegate, UIGestureRecognizerDelegate, AWEFeedDoubleColumnSectionControllerDelegate, AWEListSectionControllerDelegate, AWEFeedDBClickRecommendProtocol, AWEPlayVideoDelegate, AWEFeedTabItemViewControllerProtocol, AWEFeedDoubleColumnViewControllerProtocol> {
    BOOL didSelectedItem;
    BOOL isTransiting;
    BOOL _isPreload;
    BOOL _hasShowBackToSingleColumnFirstAppearAnimation;
    BOOL _isWaitingFeedRefreshingFinish;
    BOOL _isScrollToFirstLocateIndexFinish;
    BOOL _withinShrinkBackToSingleColumnRegion;
    BOOL _hasTrackedHangoutSlide;
    BOOL _isHorizonScrolling;
    BOOL _alreadyHandlePinch;
    long long _maxReachedIndex;
    AWEFeedDoubleColumnViewControllerManager *_controllerManager;
    AWEPageContext *_pageContext;
    UIView *_backToSingleColumnContainerView;
    UIView *_littleBackToSingleColumnContainerView;
    UIImageView *_backToSingleColumnIcon;
    UIImageView *_littleBackToSingleColumnIcon;
    UILabel *_backToSingleColumnLabel;
    long long _backButtonState;
    id<AWEFeedDoubleColumnChannelDelegate> _channelDelegate;
    AWEFeedDoubleColumnContext *_context;
    AWEAwemeModel *_selectedMdel;
    id /* block */ _animatedRefreshCompletion;
    AWEDoubleColumnShimmerView *_shimmerView;
    AWEGradientView *_topGradientView;
    UIVisualEffectView *_backToSingleColumnContainerEffectView;
    UIVisualEffectView *_littleBackToSingleColumnContainerEffectView;
    NSDate *_enterTime;
    long long _refreshState;
    UIPanGestureRecognizer *_panGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    double _shouldNotActiveHeight;
    long long _scrollType;
    UICollectionViewCell<AWEFeedDoubleColumnCellProtocol> *_currentActiveCell;
    double _lastCalculateEndTimestamp;
    double _startShowLoadMoreBallTime;
    UICollectionViewCell<AWEFeedDoubleColumnCellProtocol> *_currentPlayedCell;
    struct CGPoint { double x; double y; } _lastContentOffset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _activeRect;
}

@property (retain, nonatomic) AWEFeedDoubleColumnContext *context;
@property (retain, nonatomic) AWEAwemeModel *selectedMdel;
@property (nonatomic) BOOL isWaitingFeedRefreshingFinish;
@property (nonatomic) BOOL isScrollToFirstLocateIndexFinish;
@property (copy, nonatomic) id /* block */ animatedRefreshCompletion;
@property (nonatomic) BOOL withinShrinkBackToSingleColumnRegion;
@property (retain, nonatomic) AWEDoubleColumnShimmerView *shimmerView;
@property (retain, nonatomic) AWEGradientView *topGradientView;
@property (retain, nonatomic) UIVisualEffectView *backToSingleColumnContainerEffectView;
@property (retain, nonatomic) UIVisualEffectView *littleBackToSingleColumnContainerEffectView;
@property (retain, nonatomic) NSDate *enterTime;
@property (nonatomic) BOOL hasTrackedHangoutSlide;
@property (nonatomic) long long maxReachedIndex;
@property (nonatomic) long long refreshState;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) BOOL isHorizonScrolling;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (nonatomic) BOOL alreadyHandlePinch;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } activeRect;
@property (nonatomic) double shouldNotActiveHeight;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (nonatomic) long long scrollType;
@property (weak, nonatomic) UICollectionViewCell<AWEFeedDoubleColumnCellProtocol> *currentActiveCell;
@property (nonatomic) double lastCalculateEndTimestamp;
@property (nonatomic) double startShowLoadMoreBallTime;
@property (weak, nonatomic) UICollectionViewCell<AWEFeedDoubleColumnCellProtocol> *currentPlayedCell;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) UIView *backToSingleColumnContainerView;
@property (retain, nonatomic) UIView *littleBackToSingleColumnContainerView;
@property (retain, nonatomic) UIImageView *backToSingleColumnIcon;
@property (retain, nonatomic) UIImageView *littleBackToSingleColumnIcon;
@property (retain, nonatomic) UILabel *backToSingleColumnLabel;
@property (nonatomic) BOOL hasShowBackToSingleColumnFirstAppearAnimation;
@property (nonatomic) long long backButtonState;
@property (readonly, nonatomic) AWEFeedDoubleColumnViewControllerManager *controllerManager;
@property (readonly, nonatomic) AWEPageContext *pageContext;
@property (weak, nonatomic) id<AWEFeedDoubleColumnChannelDelegate> channelDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL didSelectedItem;
@property (nonatomic) BOOL isTransiting;
@property (readonly, nonatomic) long long type;

+ (Class)viewModelClass;

- (id)referString;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)customLayoutCollectionView:(id)arg0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (long long)workingRangeSize;
- (void)dataSourceDidCreateSectionController:(id)arg0 forSectionViewModel:(id)arg1;
- (void)sectionControllerWillEnterWorkingRange:(id)arg0;
- (void)pauseWithAnimation;
- (void)animatedRefreshWithCompletion:(id /* block */)arg0;
- (BOOL)currentTabIsTop;
- (BOOL)canRefresh;
- (long long)maxReachedIndex;
- (void)feedRefreshWithType:(long long)arg0 completion:(id /* block */)arg1;
- (void)awe_themeReload;
- (BOOL)isPreload;
- (void)setIsPreload:(BOOL)arg0;
- (id)controllerManager;
- (void)loadControllerManager;
- (id)enterTime;
- (void)setEnterTime:(id)arg0;
- (void)setRefreshState:(long long)arg0;
- (void)handleConnectionChanged:(id)arg0;
- (void)feedRefreshWithType:(long long)arg0 config:(id)arg1 completion:(id /* block */)arg2;
- (void)setupBinding;
- (void)windowDidBecomeKeyNotification:(id)arg0;
- (void)windowDidResignKeyNotification:(id)arg0;
- (void)enterLiveRoom:(id)arg0;
- (void)setShouldNotActiveHeight:(double)arg0;
- (double)shouldNotActiveHeight;
- (void)startShimming;
- (void)stopShimming;
- (id)currentTopGradientViewColor;
- (id)shimmerView;
- (void)handleFetchDataState:(long long)arg0;
- (void)handleRefreshFromDebug:(id)arg0;
- (void)setShimmerView:(id)arg0;
- (void)setAnimatedRefreshCompletion:(id /* block */)arg0;
- (id /* block */)animatedRefreshCompletion;
- (id)getRecentClickAndShowItems;
- (void)insertModelFromClickRecommend:(long long)arg0 model:(id)arg1 completion:(id /* block */)arg2;
- (void)setMaxReachedIndex:(long long)arg0;
- (void)willDisplayCell:(id)arg0 index:(long long)arg1;
- (void)didEndDisplayingCell:(id)arg0 index:(long long)arg1;
- (void)didSelectAwemeModel:(id)arg0;
- (void)didSelectAwemeModel:(id)arg0 sectionIndex:(long long)arg1;
- (BOOL)isTransiting;
- (id)selectedCellWithIndex:(long long)arg0;
- (long long)maxVisibleIndex;
- (id)backToSingleColumnContainerView;
- (double)awe_shrinkDuration;
- (id)littleBackToSingleColumnContainerView;
- (void)awe_cancelPreviousAnimationFinalSelectors;
- (void)setBackButtonState:(long long)arg0;
- (void)awe_addBackToSingleColumnContainerShrinkAnimation;
- (void)awe_addLittleBackToSingleColumnContainerShrinkAnimation;
- (void)awe_realShrinkToRightBackToSingleColumnView;
- (void)awe_addBackToSingleColumnContainerExpandAnimation;
- (void)awe_addLittleBackToSingleColumnContainerExpandAnimation;
- (void)awe_realAppearInMiddleBackToSingleColumnView;
- (double)awe_backToSingleColumnWidth;
- (double)awe_tabBarTopBoundY;
- (id)backToSingleColumnIcon;
- (id)backToSingleColumnLabel;
- (BOOL)hasShowBackToSingleColumnFirstAppearAnimation;
- (void)setHasShowBackToSingleColumnFirstAppearAnimation:(BOOL)arg0;
- (void)awe_addBackToSingleColumnContainerAppearAnimation;
- (void)awe_addBackToSingleColumnIconAppearAnimation;
- (void)awe_addBackToSingleColumnLabelAppearAnimation;
- (double)awe_shrinkTranslationX;
- (id)littleBackToSingleColumnIcon;
- (void)awe_realPrepareAppearBackToSingleColumnView;
- (long long)backButtonState;
- (void)awe_backToSingleColumnContainerViewShrinkToRight;
- (void)awe_backToSingleColumnContainerViewExpandToMiddle;
- (void)awe_backToSingleColumnContainerViewAppear;
- (BOOL)enableControllerKit;
- (void)controllerManagerWillAppear;
- (void)controllerManagerDidAppear;
- (void)controllerManagerWillDisappear;
- (void)controllerManagerDidDisappear;
- (void)controllerManagerDidEndDecelerating:(id)arg0;
- (void)controllerManagerWillBeginDragging:(id)arg0;
- (void)controllerManagerDidSelectCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)controllerManagerWillDisplayCell:(id)arg0 index:(long long)arg1;
- (void)controllerManagerDidEndDisplayingCell:(id)arg0 index:(long long)arg1;
- (void)preloadInnerData;
- (void)setIsWaitingFeedRefreshingFinish:(BOOL)arg0;
- (void)setIsTransiting:(BOOL)arg0;
- (void)setScrollType:(long long)arg0;
- (void)autoDecidePlayLivePreviewIfNeeded;
- (void)handlePinchExit;
- (void)syncFeedPlayTimeIfNeed;
- (void)autoPlayOuterVideo;
- (void)removeDislikeCell;
- (void)trackStayTimeEvent;
- (void)autoPauseOuterVideo;
- (void)autoPlayLivePreviewByAscending:(BOOL)arg0;
- (void)realRefreshWithConfig:(id)arg0;
- (void)setStartShowLoadMoreBallTime:(double)arg0;
- (void)trackVCRefresh;
- (void)realRefresh;
- (BOOL)withinShrinkBackToSingleColumnRegion;
- (void)setWithinShrinkBackToSingleColumnRegion:(BOOL)arg0;
- (void)calculateResignLivePreviewIfNeeded;
- (BOOL)alreadyHandlePinch;
- (void)setAlreadyHandlePinch:(BOOL)arg0;
- (void)setIsHorizonScrolling:(BOOL)arg0;
- (BOOL)isHorizonScrolling;
- (id)nextPlayCellList;
- (void)didActiveCellIfNeeded:(id)arg0;
- (void)setCurrentPlayedCell:(id)arg0;
- (void)didResignCell:(id)arg0;
- (id)currentPlayedCell;
- (id)currentActiveCell;
- (double)lastCalculateEndTimestamp;
- (void)setLastCalculateEndTimestamp:(double)arg0;
- (void)didActiveCell:(id)arg0;
- (void)setCurrentActiveCell:(id)arg0;
- (void)trackLoadMoreBallShowTime;
- (id)backToSingleColumnIconImage;
- (id)backToSingleColumnContainerEffectView;
- (id)littleBackToSingleColumnContainerEffectView;
- (void)creatPlaceHolderCache;
- (double)startShowLoadMoreBallTime;
- (void)backToSingleColumn:(id)arg0;
- (BOOL)didSelectedItem;
- (void)setDidSelectedItem:(BOOL)arg0;
- (void)setBackToSingleColumnContainerView:(id)arg0;
- (void)setLittleBackToSingleColumnContainerView:(id)arg0;
- (void)setBackToSingleColumnIcon:(id)arg0;
- (void)setLittleBackToSingleColumnIcon:(id)arg0;
- (void)setBackToSingleColumnLabel:(id)arg0;
- (id)channelDelegate;
- (void)setChannelDelegate:(id)arg0;
- (id)selectedMdel;
- (void)setSelectedMdel:(id)arg0;
- (BOOL)isWaitingFeedRefreshingFinish;
- (BOOL)isScrollToFirstLocateIndexFinish;
- (void)setIsScrollToFirstLocateIndexFinish:(BOOL)arg0;
- (void)setBackToSingleColumnContainerEffectView:(id)arg0;
- (void)setLittleBackToSingleColumnContainerEffectView:(id)arg0;
- (BOOL)hasTrackedHangoutSlide;
- (void)setHasTrackedHangoutSlide:(BOOL)arg0;
- (void)reload;
- (void)setScrollEnabled:(BOOL)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)pinchGesture;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)resignActive;
- (void)setContext:(id)arg0;
- (void)stop;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewDidScrollToTop:(id)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)enterBackground;
- (void)scrollViewDidScroll:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)context;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (long long)refreshState;
- (void)enterForeground;
- (void)setPinchGesture:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)viewDidLoad;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (struct CGPoint { double x0; double x1; })lastContentOffset;
- (void)setLastContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (long long)scrollType;
- (void)setupUI;
- (void)handlePinchGesture:(id)arg0;
- (void)setupData;
- (void)handlePanGesture:(id)arg0;
- (id)pageContext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })activeRect;
- (void)setActiveRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupCollectionView:(id)arg0;
- (id)topGradientView;
- (void)setTopGradientView:(id)arg0;

@end