//
//     Generated by private class-dump
//

@class UIView, AWESkylightUnreadTipView, AWELiveSkylightCatchView, AWEConcernSkylightCapsuleView, AWELiveSkylightViewModel, AWELiveSkylightSideRefreshView, NSString, UIPanGestureRecognizer, UICollectionView, UIViewController, UILabel, UICollectionViewLayout;
@protocol AWEFollowContainerLayoutProtocol;

@interface AWENewLiveSkylightViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AWEConcernSkylightContainerProtocol, UIGestureRecognizerDelegate, AWELiveSkylightViewControllerProtocol> {
    BOOL _isShowingPinedUserPopover;
    BOOL _isLeftRefreshOperation;
    BOOL _isSkylightShowing;
    BOOL _isViewAppearing;
    BOOL _isFirstAppear;
    BOOL _isRefreshGuideViewShowing;
    BOOL _isSkylightShowOnTop;
    BOOL _isScrollUpToDismissCapsuleViewSkylight;
    BOOL _scrollSkylight;
    id /* block */ _silentRefreshBlock;
    UICollectionView *_collectionView;
    double _skylightHeight;
    AWEConcernSkylightCapsuleView *_capsuleView;
    AWELiveSkylightCatchView *_skylightCatchView;
    unsigned long long _displayStageStatus;
    AWELiveSkylightViewModel *_viewModel;
    UIViewController<AWEFollowContainerLayoutProtocol> *_followContainer;
    UIPanGestureRecognizer *_skylightPanGestureRecognizer;
    long long _liveScrollOffsetIndex;
    UILabel *_noLivingEmptyLabel;
    UICollectionViewLayout *_normalLayout;
    AWELiveSkylightSideRefreshView *_leftRefreshView;
    UIView *_leftRefreshGuideView;
    AWELiveSkylightSideRefreshView *_rightLoadMoreView;
    AWESkylightUnreadTipView *_unreadTipView;
    UIViewController *_containerVC;
    UIView *_separateLine;
    double _openSkylightTime;
}

@property (retain, nonatomic) UIView *skylightTabbarView;
@property (retain, nonatomic) UIView *skylightUnfoldedBottomMaskView;
@property (nonatomic) BOOL shouldIgnoreSkylightUnfolded;
@property (readonly, nonatomic) BOOL accessoriesHidden;
@property (retain, nonatomic) AWELiveSkylightViewModel *viewModel;
@property (weak, nonatomic) UIViewController<AWEFollowContainerLayoutProtocol> *followContainer;
@property (retain, nonatomic) AWELiveSkylightCatchView *skylightCatchView;
@property (retain, nonatomic) UIPanGestureRecognizer *skylightPanGestureRecognizer;
@property (retain, nonatomic) AWEConcernSkylightCapsuleView *capsuleView;
@property (nonatomic) BOOL isSkylightShowing;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL isViewAppearing;
@property (nonatomic) long long liveScrollOffsetIndex;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) UILabel *noLivingEmptyLabel;
@property (retain, nonatomic) UICollectionViewLayout *normalLayout;
@property (retain, nonatomic) AWELiveSkylightSideRefreshView *leftRefreshView;
@property (nonatomic) BOOL isLeftRefreshOperation;
@property (retain, nonatomic) UIView *leftRefreshGuideView;
@property (nonatomic) BOOL isRefreshGuideViewShowing;
@property (retain, nonatomic) AWELiveSkylightSideRefreshView *rightLoadMoreView;
@property (retain, nonatomic) AWESkylightUnreadTipView *unreadTipView;
@property (nonatomic) double skylightHeight;
@property (weak, nonatomic) UIViewController *containerVC;
@property (nonatomic) BOOL isSkylightShowOnTop;
@property (nonatomic) BOOL isScrollUpToDismissCapsuleViewSkylight;
@property (retain, nonatomic) UIView *separateLine;
@property (nonatomic) double openSkylightTime;
@property (nonatomic) BOOL scrollSkylight;
@property (readonly, nonatomic) BOOL isShowingPinedUserPopover;
@property (nonatomic) unsigned long long displayStageStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UICollectionView *skylightCollectionView;
@property (readonly, nonatomic) UIView *skylightUnreadTipView;
@property (copy, nonatomic) id /* block */ silentRefreshBlock;

+ (id)addBottomGradientViewForView:(id)arg0 FromColor:(id)arg1 toColor:(id)arg2 height:(double)arg3;
+ (Class)aAWEPadModuleAdapterClass;
+ (double)topOffset;

- (id)addBottomGradientViewForView:(id)arg0 FromColor:(id)arg1 toColor:(id)arg2 height:(double)arg3;
- (void)setContainerVC:(id)arg0;
- (void)clickNoticePush;
- (void)setAccessoriesHidden:(BOOL)arg0;
- (id)containerVC;
- (id)aAWEPadModuleAdapter;
- (id)skylightLiveRoomIds;
- (void)setIsViewAppearing:(BOOL)arg0;
- (BOOL)isShowingPinedUserPopover;
- (BOOL)isLeftRefreshOperation;
- (double)skylightHeight;
- (unsigned long long)displayStageStatus;
- (void)refreshView;
- (id /* block */)silentRefreshBlock;
- (void)setSilentRefreshBlock:(id /* block */)arg0;
- (void)willCloseSkylightWithAnimated:(BOOL)arg0 actionMethod:(unsigned long long)arg1;
- (void)willShowSkylightWithAnimated:(BOOL)arg0 actionMethod:(unsigned long long)arg1;
- (void)didShowSkylightWithAnimated:(BOOL)arg0 actionMethod:(unsigned long long)arg1;
- (void)didCloseSkylightWithAnimated:(BOOL)arg0 actionMethod:(unsigned long long)arg1;
- (void)vcdDidShow;
- (void)updateFollowFeedAccessoriesHidden:(BOOL)arg0;
- (void)showSkylightCapusleView;
- (void)dismissSkylightCapusleViewIsScrollUp:(BOOL)arg0;
- (void)updateDidScrollToConcern:(BOOL)arg0;
- (BOOL)isSkylightShowing;
- (void)updateEnterFollowWithModel:(id)arg0;
- (void)updateFollowFeedSkylightAndCapsuleLayout;
- (void)closeSkylightByClick:(BOOL)arg0;
- (id)getSkylightViewModel;
- (void)showCapusleViewAndDismissSkylight;
- (void)openSkylightAndDismissCapusleView;
- (void)setIsFirstAppear:(BOOL)arg0;
- (id)separateLine;
- (void)setSeparateLine:(id)arg0;
- (void)configureUI;
- (id)initNewSkylightWithContainerVC:(id)arg0;
- (id)skylightCollectionView;
- (void)updateElementWithType:(unsigned long long)arg0 cellType:(unsigned long long)arg1 needUpdateFoldState:(BOOL)arg2;
- (void)updateCapsuleViewLiveWithUserAvatar:(id)arg0 updateCount:(long long)arg1;
- (void)changeToIndex:(unsigned long long)arg0;
- (void)updateAccessoriesHidden:(BOOL)arg0;
- (id)initWithViewModel:(id)arg0 followContainer:(id)arg1;
- (double)getTableViewTopOffsetWhenOpenSkyLightView;
- (double)capsuleViewTopOffsetYWithSkylightClose;
- (void)updateTipViewWithType:(unsigned long long)arg0 needUpdateFoldState:(BOOL)arg1;
- (void)resortElements;
- (id)followContainer;
- (void)showSkylight:(BOOL)arg0 animated:(BOOL)arg1 actionMethod:(unsigned long long)arg2;
- (void)setShouldIgnoreSkylightUnfolded:(BOOL)arg0;
- (void)openLiveSkylightWithAnimated:(BOOL)arg0 actionMethod:(unsigned long long)arg1;
- (void)openSkylightWithAnimated:(BOOL)arg0 actionMethod:(unsigned long long)arg1;
- (void)updateCapsuleViewWithSkylightOpenStatus:(BOOL)arg0 animated:(BOOL)arg1;
- (void)closeLiveSkylightWithAnimated:(BOOL)arg0 actionMethod:(unsigned long long)arg1;
- (void)closeSkylightWithAnimated:(BOOL)arg0 actionMethod:(unsigned long long)arg1;
- (BOOL)shouldIgnoreSkylightUnfolded;
- (void)updateIsSkylightShowing:(BOOL)arg0;
- (void)updateLayoutWithOpenLiveSkylight:(BOOL)arg0 animated:(BOOL)arg1 stageStatus:(unsigned long long)arg2;
- (void)setCapsuleViewHidden:(BOOL)arg0;
- (void)setDisplayStageStatus:(unsigned long long)arg0;
- (id)skylightCatchView;
- (void)setSkylightTabbarView:(id)arg0;
- (id)skylightTabbarView;
- (id)skylightUnfoldedBottomMaskView;
- (void)setSkylightUnfoldedBottomMaskView:(id)arg0;
- (BOOL)accessoriesHidden;
- (void)updateSkylightAndCapsuleLayout;
- (void)trackWillShowSkylightWithActionMethod:(unsigned long long)arg0;
- (void)registerHeadAndFooterInCollectionView:(id)arg0;
- (void)setupCatchView;
- (void)setupCapsuleView;
- (void)onDefaultPanGesture:(id)arg0;
- (void)setSkylightPanGestureRecognizer:(id)arg0;
- (id)skylightPanGestureRecognizer;
- (void)setSkylightCatchView:(id)arg0;
- (void)tapCapsuleView:(id)arg0;
- (BOOL)isSkylightShowOnTop;
- (void)setIsSkylightShowOnTop:(BOOL)arg0;
- (void)registerCollectionViewCell;
- (id)leftRefreshView;
- (void)setIsLeftRefreshOperation:(BOOL)arg0;
- (BOOL)isScrollUpToDismissCapsuleViewSkylight;
- (id)rightLoadMoreView;
- (id)noLivingEmptyLabel;
- (void)setLiveScrollOffsetIndex:(long long)arg0;
- (void)trackSkylightNegativeFeedBackWithUserAction:(id)arg0;
- (void)setLeftRefreshView:(id)arg0;
- (void)setRightLoadMoreView:(id)arg0;
- (id)leftRefreshGuideView;
- (void)setupUnreadTipView;
- (void)setUnreadTipView:(id)arg0;
- (id)unreadTipView;
- (double)TipViewHeight;
- (double)noLivingEmptyLabelHeight;
- (void)setOpenSkylightTime:(double)arg0;
- (void)leftRefreshGuideViewStartShow;
- (double)openSkylightTime;
- (void)setIsSkylightShowing:(BOOL)arg0;
- (void)setScrollSkylight:(BOOL)arg0;
- (void)onScrollDidEnd:(id)arg0;
- (struct CGSize { double x0; double x1; })referenceSizeForHeaderInSection:(long long)arg0;
- (struct CGSize { double x0; double x1; })referenceSizeForFooterInSection:(long long)arg0;
- (void)trackSkylightCellAtIndexPath:(id)arg0 event:(id)arg1 pageType:(id)arg2 cellModel:(id)arg3;
- (BOOL)scrollSkylight;
- (long long)liveScrollOffsetIndex;
- (BOOL)isIndexPathValid:(id)arg0 inCollectionView:(id)arg1;
- (struct CGSize { double x0; double x1; })itemSizeWithWidth:(double)arg0;
- (id)jsonStringForTrackDisplayItems;
- (BOOL)hasSpecialFollow;
- (long long)cellRankForIndexPath:(id)arg0 cellModel:(id)arg1 pageType:(id)arg2;
- (long long)moduleRankForIndexPath:(id)arg0 cellModel:(id)arg1;
- (void)refreshCollectionView;
- (void)updateUnreadTipViewLayoutWithNeedReloadData:(BOOL)arg0;
- (void)updateSkylightHeight;
- (void)setSkylightHeight:(double)arg0;
- (void)refreshCollectionViewLayout;
- (void)setIsRefreshGuideViewShowing:(BOOL)arg0;
- (void)leftRefreshGuideViewEndShow;
- (void)setIsScrollUpToDismissCapsuleViewSkylight:(BOOL)arg0;
- (id)skylightUnreadTipView;
- (void)setFollowContainer:(id)arg0;
- (void)setNoLivingEmptyLabel:(id)arg0;
- (void)setLeftRefreshGuideView:(id)arg0;
- (BOOL)isRefreshGuideViewShowing;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)setScrollEnabled:(BOOL)arg0;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(long long)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setCapsuleView:(id)arg0;
- (void)setNormalLayout:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)contentView;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)capsuleView;
- (id)normalLayout;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)viewDidLoad;
- (void)setupCollectionView;
- (void)setupUI;
- (BOOL)isFirstAppear;
- (double)viewHeight;
- (BOOL)isViewAppearing;
- (void)addObservers;
- (double)collectionViewHeight;

@end