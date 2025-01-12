//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, UICollectionView, NSIndexPath, LOTAnimationView, NSMutableSet, NSMutableArray, UIPanGestureRecognizer, IESECQualityInfoV2, CALayer, IESECHybridParamsVerifyHelper, UIStackView, IESECGoodsInternalFeedCustomNavigationBar, IESECUserTrackerPageContext, IGListAdapter, UIViewController, IESECGoodsInternalFeedHeaderBannerView, IESECInternalFeedStyleModel, IESECGoodsBottomActionHelper, IESECOnceHelper, NSNumber, IESECGoodsInternalFeedViewControllerConfiguration, IESECGoodFeedMallCardStorage, IESECGoodsFeedGradientView, IESECGCDTimer, UIView, IESECFeedRecommendItemModel, IESECHighlightButton, IESECGoodsInternalFeedDataSource, NSMutableDictionary, NSString, IESECDurationHelper, IESECFeedSearchWordModel, UILabel, IESECGradientView, IESECGoodsDetailTracker, IESECGoodsDetailParameters, IESECGoodsInternalFeedCouponBannerView, IESECGoodsFeedLargeCardNewCollectionViewCell, IESECGoodsFeedLargeCardCollectionViewCell, IESECXBridgeEventSubscriber;
@protocol IESECSKUViewControllerProtocol, IESECGoodsDetailPopoverContentProtocol;

@interface IESECGoodsInternalFeedViewController : UIViewController <AWEFeedPlayResultFromChildViewController, UIGestureRecognizerDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IESECGoodsFeedLargeCardCellContentProtocol, IESECGoodsFeedLargeCardCellOperationProtocol, UIScrollViewDelegate, UICollectionViewDelegate, IESECGoodsFeedResourceCardDelegate, IESECGoodsReportMessage, IESECShareGoodsResponse, IESECommerceAddGoodsToCartMessage, CAAnimationDelegate, IESECGoodsFeedTagsCellDelegate, IESECMixedFeedLayoutDelegate, IESECGoodsFeedCollectionHeaderViewDelegate, IESECGoodsFeedItemCardCellDelegate, IESECGoodsFeedSearchCardCellDelegate, IESECGoodsDetailHostInjectable, IESECGoodsDetailContainerProtocol, IESECGoodsPanelHalfToDismissProtocol> {
    IESECGoodsInternalFeedViewControllerConfiguration *_configuration;
    IESECOnceHelper *_onceHelper;
    UIView *_fullScreenBackgroundView;
    BOOL _isReturnFromOtherPages;
    NSMutableArray *_productsHaveBeenDisplayed;
    NSMutableArray *_sameGoodsHaveBeenDisplayed;
    long long _lastSectionHasBeenDisplayed;
    long long _sectionForDeduplication;
    NSString *_curEcomSceneID;
    NSString *_curGuessULikeEcomSceneID;
    long long _goodsCardCount;
    long long _resourceCardBeyondRecommendCount;
    BOOL _isSelfDisplayedOnScreen;
    NSMutableArray *_subscribers;
    BOOL _viewWillDismiss;
    BOOL _shouldRestoreFeedPlayer;
    IESECHybridParamsVerifyHelper *_verifyHelper;
    BOOL _disableLoadingOpt;
    BOOL _showBubbleComponent;
    IESECXBridgeEventSubscriber *_memberSubscriber;
    BOOL _fullMode;
    BOOL _isMemberShip;
    BOOL _showByPresent;
    BOOL _firstAppear;
    BOOL _isPresentingPopover;
    BOOL _isGoToOrderPage;
    BOOL _isWhiteGradientView;
    BOOL _headerCartDisplay;
    BOOL _shouldShowMallEntrance;
    BOOL _isLoadingSameGoodsData;
    BOOL _hasSetupUIWithStyle;
    BOOL _isMallCardShowRecord;
    BOOL _shouldPauseWithoutAnimationWhenCloseInner;
    BOOL _isAnimating;
    BOOL _isGestureInstructionShowed;
    id /* block */ willDismiss;
    UIViewController<IESECGoodsDetailPopoverContentProtocol, IESECSKUViewControllerProtocol> *skuVC;
    id /* block */ willClosePage;
    id /* block */ closeHalfPageProgress;
    NSMutableDictionary *_metricsSnapshot;
    NSMutableDictionary *_fullMetricsSnapshot;
    id /* block */ _animationDidEndCallback;
    id /* block */ _refreshLargeCardCallback;
    UICollectionView *_collectionView;
    IESECGoodsFeedLargeCardCollectionViewCell *_cellForCalculating;
    IESECGoodsFeedLargeCardNewCollectionViewCell *_cellForCalculatingNew;
    IESECInternalFeedStyleModel *_style;
    long long _pageInternalFlowStyle;
    UIViewController *_fromVC;
    IESECGoodsDetailParameters *_preloadPromotionParams;
    NSString *_feedSessionId;
    IESECGoodsDetailParameters *_goodsDetailParameter;
    NSMutableArray *_vCells;
    IGListAdapter *_listAdapter;
    IESECHighlightButton *_hoverCloseButton;
    IESECGoodsFeedGradientView *_hoverCloseButtonContainer;
    IESECGoodsFeedGradientView *_hoverImmersionCloseButtonContainer;
    IESECGoodsFeedGradientView *_hoverImmersionMallEntranceButtonContainer;
    IESECGradientView *_hoverTopGradientView;
    IESECGoodsInternalFeedCustomNavigationBar *_customNavigationBar;
    UIView *_instructionView;
    NSIndexPath *_previewIndexPath;
    IESECGoodsFeedGradientView *_gradientView;
    UIStackView *_entranceStackView;
    UIView *_backToTopView;
    UIView *_cartButtonView;
    UIView *_guideToMallView;
    long long _cartNumber;
    LOTAnimationView *_shopCartAnimationView;
    UILabel *_cartNumberLabel;
    double _messageDisplayAlpha;
    double _recommendTagViewAlpha;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_horizontalDismissPanGesture;
    IESECGoodsInternalFeedDataSource *_dataSource;
    IESECGoodsBottomActionHelper *_actionHelper;
    UIViewController<IESECGoodsDetailPopoverContentProtocol> *_popoverContent;
    UIView *_popoverBackground;
    UIView *_popoverContainer;
    UIView *_cartView;
    UIView *_searchView;
    UIView *_cartViewWrapper;
    CALayer *_animationRedPoint;
    long long _headerSearchEntranceStyle;
    long long _commentViewStyle;
    IESECGoodsDetailParameters *_currentSharingGoods;
    IESECGCDTimer *_timer;
    NSMutableSet *_slideSet;
    NSMutableSet *_activityIndexSet;
    IESECUserTrackerPageContext *_pageContext;
    IESECGoodsDetailTracker *_tracker;
    IESECDurationHelper *_stay;
    NSString *_closeMethod;
    UIView *_couponInfoView;
    unsigned long long _mallCardFrequencyMethod;
    IESECGoodFeedMallCardStorage *_mallCardStorage;
    NSMutableArray *_searchProductIds;
    NSMutableArray *_searchCardShowIndexArray;
    long long _searchCardFrequency;
    NSMutableArray *_compareDealsProductIds;
    IESECFeedRecommendItemModel *_compareDealsCardModel;
    IESECFeedRecommendItemModel *_searchCardModel;
    NSNumber *_viewdidloadTime;
    IESECQualityInfoV2 *_info;
    CALayer *_addCartAnimationWithPic;
    UIView *_addCartAnimationWithPicView;
    NSString *_currentImageUrl;
    IESECGoodsInternalFeedCouponBannerView *_topCouponPromptBanner;
    IESECGoodsInternalFeedCouponBannerView *_bottomCouponPromptBanner;
    IESECGoodsInternalFeedHeaderBannerView *_headerBanner;
    IESECFeedSearchWordModel *_searchWordModel;
    NSMutableArray *_enterDetailBackToGoodsFeedDataArray;
    long long _enterDetailCurrentIndex;
    struct CGPoint { double x; double y; } _cartStartPoint;
    struct CGPoint { double x; double y; } _addCartStartPoint;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentFrameBefore;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bottomContainerFrameBefore;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _headerBannerFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECGoodsDetailParameters *goodsDetailParameter;
@property (nonatomic, getter=isFirstAppear) BOOL firstAppear;
@property (retain, nonatomic) NSMutableArray *vCells;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESECHighlightButton *hoverCloseButton;
@property (retain, nonatomic) IESECGoodsFeedGradientView *hoverCloseButtonContainer;
@property (retain, nonatomic) IESECGoodsFeedGradientView *hoverImmersionCloseButtonContainer;
@property (retain, nonatomic) IESECGoodsFeedGradientView *hoverImmersionMallEntranceButtonContainer;
@property (retain, nonatomic) IESECGradientView *hoverTopGradientView;
@property (retain, nonatomic) IESECGoodsInternalFeedCustomNavigationBar *customNavigationBar;
@property (retain, nonatomic) UIView *instructionView;
@property (retain, nonatomic) NSIndexPath *previewIndexPath;
@property (retain, nonatomic) IESECGoodsFeedGradientView *gradientView;
@property (retain, nonatomic) UIStackView *entranceStackView;
@property (retain, nonatomic) UIView *backToTopView;
@property (retain, nonatomic) UIView *cartButtonView;
@property (retain, nonatomic) UIView *guideToMallView;
@property (nonatomic) long long cartNumber;
@property (retain, nonatomic) LOTAnimationView *shopCartAnimationView;
@property (retain, nonatomic) UILabel *cartNumberLabel;
@property (retain, nonatomic) IESECGoodsFeedLargeCardCollectionViewCell *cellForCalculating;
@property (retain, nonatomic) IESECGoodsFeedLargeCardNewCollectionViewCell *cellForCalculatingNew;
@property (nonatomic) double messageDisplayAlpha;
@property (nonatomic) double recommendTagViewAlpha;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *horizontalDismissPanGesture;
@property (retain, nonatomic) IESECGoodsInternalFeedDataSource *dataSource;
@property (retain, nonatomic) IESECGoodsBottomActionHelper *actionHelper;
@property (nonatomic) BOOL isPresentingPopover;
@property (retain, nonatomic) UIViewController<IESECGoodsDetailPopoverContentProtocol> *popoverContent;
@property (retain, nonatomic) UIView *popoverBackground;
@property (retain, nonatomic) UIView *popoverContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrameBefore;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bottomContainerFrameBefore;
@property (nonatomic) BOOL isGoToOrderPage;
@property (nonatomic) BOOL isWhiteGradientView;
@property (nonatomic) BOOL headerCartDisplay;
@property (retain, nonatomic) UIView *cartView;
@property (retain, nonatomic) UIView *searchView;
@property (weak, nonatomic) UIView *cartViewWrapper;
@property (retain, nonatomic) CALayer *animationRedPoint;
@property (nonatomic) struct CGPoint { double x; double y; } cartStartPoint;
@property (nonatomic) BOOL shouldShowMallEntrance;
@property (nonatomic) long long headerSearchEntranceStyle;
@property (nonatomic) long long commentViewStyle;
@property (retain, nonatomic) IESECGoodsDetailParameters *currentSharingGoods;
@property (retain, nonatomic) IESECGCDTimer *timer;
@property (retain, nonatomic) NSMutableSet *slideSet;
@property (nonatomic) BOOL isLoadingSameGoodsData;
@property (retain, nonatomic) NSMutableSet *activityIndexSet;
@property (retain, nonatomic) IESECUserTrackerPageContext *pageContext;
@property (nonatomic) BOOL hasSetupUIWithStyle;
@property (retain, nonatomic) IESECGoodsDetailTracker *tracker;
@property (retain, nonatomic) IESECDurationHelper *stay;
@property (copy, nonatomic) NSString *closeMethod;
@property (retain, nonatomic) UIView *couponInfoView;
@property (nonatomic) unsigned long long mallCardFrequencyMethod;
@property (nonatomic) BOOL isMallCardShowRecord;
@property (copy, nonatomic) IESECGoodFeedMallCardStorage *mallCardStorage;
@property (retain, nonatomic) NSMutableArray *searchProductIds;
@property (retain, nonatomic) NSMutableArray *searchCardShowIndexArray;
@property (nonatomic) long long searchCardFrequency;
@property (retain, nonatomic) NSMutableArray *compareDealsProductIds;
@property (retain, nonatomic) IESECFeedRecommendItemModel *compareDealsCardModel;
@property (retain, nonatomic) IESECFeedRecommendItemModel *searchCardModel;
@property (retain, nonatomic) NSNumber *viewdidloadTime;
@property (retain, nonatomic) IESECQualityInfoV2 *info;
@property (nonatomic) BOOL shouldPauseWithoutAnimationWhenCloseInner;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) CALayer *addCartAnimationWithPic;
@property (retain, nonatomic) UIView *addCartAnimationWithPicView;
@property (nonatomic) struct CGPoint { double x; double y; } addCartStartPoint;
@property (copy, nonatomic) NSString *currentImageUrl;
@property (retain, nonatomic) IESECGoodsInternalFeedCouponBannerView *topCouponPromptBanner;
@property (retain, nonatomic) IESECGoodsInternalFeedCouponBannerView *bottomCouponPromptBanner;
@property (nonatomic) BOOL isGestureInstructionShowed;
@property (retain, nonatomic) IESECGoodsInternalFeedHeaderBannerView *headerBanner;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } headerBannerFrame;
@property (retain, nonatomic) IESECFeedSearchWordModel *searchWordModel;
@property (retain, nonatomic) NSMutableArray *enterDetailBackToGoodsFeedDataArray;
@property (nonatomic) long long enterDetailCurrentIndex;
@property (retain, nonatomic) NSMutableDictionary *metricsSnapshot;
@property (retain, nonatomic) NSMutableDictionary *fullMetricsSnapshot;
@property (copy, nonatomic) id /* block */ animationDidEndCallback;
@property (copy, nonatomic) id /* block */ refreshLargeCardCallback;
@property (nonatomic, getter=isFullMode) BOOL fullMode;
@property (retain, nonatomic) IESECGoodsInternalFeedViewControllerConfiguration *configuration;
@property (retain, nonatomic) IESECInternalFeedStyleModel *style;
@property (nonatomic) long long pageInternalFlowStyle;
@property (weak, nonatomic) UIViewController *fromVC;
@property (nonatomic) BOOL isMemberShip;
@property (retain, nonatomic) IESECGoodsDetailParameters *preloadPromotionParams;
@property (nonatomic) BOOL showByPresent;
@property (retain, nonatomic) NSString *feedSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL willShowAsChildVC;
@property (copy, nonatomic) id /* block */ willDismiss;
@property (copy, nonatomic) id /* block */ didAppear;
@property (nonatomic) BOOL unPlayWhenClose;
@property (readonly, copy, nonatomic) NSString *animationType;
@property (weak, nonatomic) UIViewController<IESECGoodsDetailPopoverContentProtocol, IESECSKUViewControllerProtocol> *skuVC;
@property (nonatomic) BOOL shouldDetachLiveFloatOnTopToNextPage;
@property (copy, nonatomic) id /* block */ willClosePage;
@property (copy, nonatomic) id /* block */ closeHalfPageProgress;

- (unsigned long long)iesec_overrideColorTheme;
- (long long)pageInternalFlowStyle;
- (void)close:(id)arg0 completion:(id /* block */)arg1;
- (id)searchCardModel;
- (id)objectsForListAdapter:(id)arg0;
- (id)listAdapter:(id)arg0 sectionControllerForObject:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg0;
- (void)listAdapter:(id)arg0 willDisplayObject:(id)arg1 atIndex:(long long)arg2;
- (void)listAdapter:(id)arg0 didEndDisplayingObject:(id)arg1 atIndex:(long long)arg2;
- (void)performUpdatesAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setFromVC:(id)arg0;
- (id)fromVC;
- (BOOL)ttHideNavigationBar;
- (id)customNavigationBar;
- (BOOL)viewControllerBasedStatusBarAppearanceEnabled;
- (id)viewModelForSection:(long long)arg0;
- (void)didReportGoodsWithPromotionID:(id)arg0 productID:(id)arg1;
- (void)registerMessages;
- (id)listAdapter;
- (void)setPopoverContent:(id)arg0;
- (id)popoverContent;
- (void)configBtmTrackerV2;
- (void)configBTMTracker;
- (long long)containerMode;
- (BOOL)presentPopover:(id)arg0;
- (BOOL)presentingPopover;
- (void)dismissCurrentPopover;
- (void)transitionToCommentViewController;
- (void)transitionToStoreCommentVC;
- (void)favoriteActionButtonDidTapWithCompletion:(id /* block */)arg0;
- (void)addToShoppingCartActionWithSKUInfo:(id)arg0;
- (void)isGoingToOrderPage:(BOOL)arg0;
- (void)isGoingToAddrBook:(BOOL)arg0;
- (void)openAddrBook;
- (id)liveBanner;
- (void)detachLiveFloatOnTopWhenBuyTouTiaoGoodsIfNeeded;
- (void)detachLiveFloatOnTop;
- (void)attachLiveFloatOnTop;
- (void)openReplayWithURLString:(id)arg0;
- (void)markNeedsStatusBarAppearanceUpdate;
- (void)goToOrderPageWithCouponId:(id)arg0 actionType:(long long)arg1 withSKUInfo:(id)arg2 onViewController:(id)arg3 entranceInfoParamsForSKU:(id)arg4 completion:(id /* block */)arg5;
- (void)dismissCurrentPopoverWithCompletion:(id /* block */)arg0;
- (void)goToNativeOrderPageWithCouponId:(id)arg0 actionType:(long long)arg1 withSKUInfo:(id)arg2 onViewController:(id)arg3 entranceInfoParamsForSKU:(id)arg4 completion:(id /* block */)arg5;
- (id)skuVC;
- (void)setSkuVC:(id)arg0;
- (void)setPageInternalFlowStyle:(long long)arg0;
- (void)setWillClosePage:(id /* block */)arg0;
- (void)setCloseHalfPageProgress:(id /* block */)arg0;
- (id)recommendTypeEventDescription;
- (id)composeEntranceInfoFormDict:(id)arg0 scene:(id)arg1;
- (void)setWillDismiss:(id /* block */)arg0;
- (void)unregisterMessages;
- (void)p_dismissCurrentPopoverWithCompletion:(id /* block */)arg0;
- (void)p_presentPopover:(id)arg0;
- (void)setIsPresentingPopover:(BOOL)arg0;
- (BOOL)isPopoverSKU;
- (void)setPopoverBackground:(id)arg0;
- (void)tapToDismissPopover;
- (void)setPopoverContainer:(id)arg0;
- (id)popoverContainer;
- (id)popoverBackground;
- (BOOL)shouldNotAutoPlay;
- (BOOL)willShowAsChildVC;
- (void)shareDidDimissPanelForGoods:(id)arg0;
- (void)hostInjectionPageWillAppearAgain;
- (void)hostInjectionDidOpenPage;
- (void)hostInjectionViewWillDisappear;
- (void)hostInjectionWillClosePage;
- (void)hostInjectionWillOpenNextPage;
- (void)showGestureInstruction;
- (void)closeButtonDidTap:(id)arg0;
- (void)setListAdapter:(id)arg0;
- (void)setCloseMethod:(id)arg0;
- (id)closeMethod;
- (void)setSearchCardModel:(id)arg0;
- (void)tapToClose;
- (void)forbidContentInteraction;
- (void)resumeContentInteraction;
- (void)updateListLayout;
- (id)parseScheme:(id)arg0;
- (void)setCustomNavigationBar:(id)arg0;
- (void)addCustomNoMoreView;
- (void)setCartView:(id)arg0;
- (void)addInfiniteScroll;
- (id)currentCenterCell;
- (void)collectionViewCell:(id)arg0 doWantWithCompletion:(id /* block */)arg1;
- (void)collectionViewCell:(id)arg0 doAddCartWithButton:(id)arg1;
- (void)setCurrentSharingGoods:(id)arg0;
- (void)collectionViewCell:(id)arg0 doActionOf:(long long)arg1;
- (id)currentSharingGoods;
- (void)collectionViewCell:(id)arg0 didTapImageAtIndex:(long long)arg1;
- (void)collectionViewCellTapEffectivePreviewArea:(id)arg0;
- (void)collectionViewCellScrollToDetails:(id)arg0;
- (void)collectionViewCell:(id)arg0 didScrollImagesToIndex:(long long)arg1;
- (void)collectionViewCell:(id)arg0 trackEvent:(id)arg1 params:(id)arg2;
- (void)collectionViewCell:(id)arg0 trackEvent:(id)arg1 additionParams:(id)arg2;
- (void)collectionViewCell:(id)arg0 didClickVideoCommentWithIndex:(long long)arg1;
- (void)collectionViewCell:(id)arg0 didSelectTagView:(id)arg1;
- (void)collectionViewCellDidClickSameGoodsEntrance:(id)arg0;
- (void)collectionViewCellDidClickSearchSameGoodsEntrance:(id)arg0;
- (void)collectionViewCellDidClickBalanceExchangeCouponView:(id)arg0;
- (void)collectionViewCellBalanceExchangeCouponViewTracker:(id)arg0 didClick:(BOOL)arg1;
- (void)collectionViewCellDidClickWindowEntryView:(id)arg0;
- (void)collectionViewCellWindowEntryViewTracker:(id)arg0 didClick:(BOOL)arg1;
- (BOOL)getIsMemberShip;
- (void)collectionViewCell:(id)arg0 doEnterMemberWithButton:(id)arg1 doActionOf:(long long)arg2;
- (id)cellForCalculating;
- (id)animationRedPoint;
- (void)setAnimationRedPoint:(id)arg0;
- (struct CGPoint { double x0; double x1; })cartStartPoint;
- (void)setCartStartPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)cartView;
- (id)backToTopView;
- (void)setBackToTopView:(id)arg0;
- (void)setupInteraction;
- (id)switchModeAction;
- (void)callWillDismiss;
- (void)horizontalDismissPanGestureHandler:(id)arg0;
- (void)setHorizontalDismissPanGesture:(id)arg0;
- (id)horizontalDismissPanGesture;
- (void)closeByMethod:(id)arg0;
- (BOOL)isFullMode;
- (void)animateFromFullToHalfWithEndingVelocity:(double)arg0 currentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)restoreToFullWithEndingVelocity:(double)arg0 currentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)animateFromHalfToFullWithEndingVelocity:(double)arg0 currentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)animateToDismissWithEndingVelocity:(double)arg0 currentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)restoreToHalfWithEndingVelocity:(double)arg0 currentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (id)stay;
- (void)setStay:(id)arg0;
- (id)goodsDetailParameter;
- (void)setGoodsDetailParameter:(id)arg0;
- (void)acceptAddCartAnimationImageCoverURL:(id)arg0 cartCount:(long long)arg1;
- (void)acceptShoppingCartNumberChanged:(id)arg0;
- (long long)commentViewStyle;
- (void)setCommentViewStyle:(long long)arg0;
- (void)startCartAnimation;
- (BOOL)isGoToOrderPage;
- (void)setIsGoToOrderPage:(BOOL)arg0;
- (id /* block */)willClosePage;
- (id /* block */)closeHalfPageProgress;
- (void)hostInjectionDidPageSwitchTo:(long long)arg0;
- (void)setContentFrameBefore:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBottomContainerFrameBefore:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrameBefore;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bottomContainerFrameBefore;
- (void)addToCartAnimationStart;
- (id)couponInfoView;
- (void)setCouponInfoView:(id)arg0;
- (void)backToTopViewDidTap;
- (double)messageDisplayAlpha;
- (void)setMessageDisplayAlpha:(double)arg0;
- (double)recommendTagViewAlpha;
- (void)setRecommendTagViewAlpha:(double)arg0;
- (long long)searchCardFrequency;
- (void)setSearchCardFrequency:(long long)arg0;
- (BOOL)isInternalFeedAD;
- (void)collectionHeaderViewStyleShouldChange:(id)arg0;
- (id)feedSessionId;
- (void)setFeedSessionId:(id)arg0;
- (void)setPreloadPromotionParams:(id)arg0;
- (id)metricsSnapshot;
- (void)setRefreshLargeCardCallback:(id /* block */)arg0;
- (id)initWithGoodsDetailParameters:(id)arg0 configuration:(id)arg1;
- (void)setAnimationDidEndCallback:(id /* block */)arg0;
- (void)setShowByPresent:(BOOL)arg0;
- (void)updateSearchBannerViewWithResponse:(id)arg0 error:(id)arg1;
- (void)updateRecommendDataWithResponse:(id)arg0 error:(id)arg1;
- (void)updateLargeCardData:(id)arg0 error:(id)arg1;
- (id)activityDetailForTrackingWithParams:(id)arg0;
- (void)itemCardCell:(id)arg0 didSelectItemWithType:(unsigned long long)arg1;
- (void)timerFire;
- (void)setFullMode:(BOOL)arg0;
- (id)cellForCalculatingNew;
- (void)trackClickResourceCard:(id)arg0;
- (void)resourceCard:(id)arg0 didClickCard:(id)arg1;
- (void)resourceCarddidClickPanelNodeChangeProduct:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)resourceCard:(id)arg0 didClickProductCellWithProduct:(id)arg1;
- (void)resourceCard:(id)arg0 didClickCellBuyButtonWithProduct:(id)arg1;
- (void)resourceCard:(id)arg0 didClickCouponViewWithSchema:(id)arg1 hasCoupon:(BOOL)arg2;
- (void)resourceCard:(id)arg0 didClickMoreProductWithSchema:(id)arg1;
- (void)resourceCard:(id)arg0 didSelectProductWithModel:(id)arg1;
- (void)resourceCard:(id)arg0 didClickWindowCardWithClickArea:(id)arg1 schema:(id)arg2;
- (void)resourceCard:(id)arg0 didClickStoreEntranceWithSchema:(id)arg1;
- (void)resourceCard:(id)arg0 didClickButtonNodeWithSchema:(id)arg1;
- (void)clickSearchCardKeyWordAtIndex:(long long)arg0 withModel:(id)arg1;
- (void)clickSearchCardImageAtIndex:(long long)arg0 withModel:(id)arg1;
- (void)tagsCell:(id)arg0 didSelectTagAtIndex:(long long)arg1 withTagModel:(id)arg2;
- (void)tagsCell:(id)arg0 tagDidDisplayAtIndex:(long long)arg1 withTagModel:(id)arg2;
- (BOOL)shouldShowMallEntrance;
- (void)setShouldShowMallEntrance:(BOOL)arg0;
- (void)setInnerFlowStyleWithParams:(id)arg0;
- (unsigned long long)currentListStyle;
- (id)searchProductIds;
- (id)compareDealsProductIds;
- (id)searchCardShowIndexArray;
- (void)setViewdidloadTime:(id)arg0;
- (void)updateTargetParametersListStyleEvent;
- (BOOL)loadingOpt;
- (void)initLoadmore;
- (double)fullScreenY;
- (void)updateCloseButtonWithPercent:(double)arg0;
- (void)updateCouponPromptWithPercent:(double)arg0;
- (void)updateCornerForView:(id)arg0 percentage:(double)arg1;
- (id)lightBackGroundEndColor;
- (void)updateGradientViewWithPercentIfNeeded:(double)arg0;
- (BOOL)isWhiteGradientView;
- (id /* block */)animationDidEndCallback;
- (void)hostInjectionPageWillSwitchTo:(long long)arg0 animationTime:(double)arg1;
- (id /* block */)refreshLargeCardCallback;
- (void)handleMoreData:(id)arg0 error:(id)arg1 statusCode:(id)arg2 requestStart:(double)arg3;
- (BOOL)checkGuideToMallViewShouldShow;
- (void)loadRecommendGoodsFailedTrack:(id)arg0 statusCode:(id)arg1;
- (void)loadCollectionCards;
- (unsigned long long)mallCardFrequencyMethod;
- (void)recordMallCardShowIfNeeded;
- (void)loadRecommendGoodsSucceededTrack;
- (id)vCells;
- (BOOL)useDelayUpdate;
- (void)setSearchWordModel:(id)arg0;
- (void)setupSearchBannerIfNeeded;
- (id)fullMetricsSnapshot;
- (void)updateInflowStyle;
- (void)trackSearchEntranceShow;
- (void)p_enterPageTrack;
- (void)setupCouponPromptBannerIfNeeded;
- (id)searchWordModel;
- (id)headerBanner;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })headerBannerFrame;
- (void)setHeaderBanner:(id)arg0;
- (void)trackSearchBannerWithActionType:(long long)arg0;
- (void)trackCouponPromptBannerWithIsShow:(BOOL)arg0;
- (void)setTopCouponPromptBanner:(id)arg0;
- (id)topCouponPromptBanner;
- (void)setBottomCouponPromptBanner:(id)arg0;
- (id)bottomCouponPromptBanner;
- (id)viewdidloadTime;
- (void)shouldUpdateWindVane;
- (void)loadMoreRecommendGoodsWithFilterString:(id)arg0;
- (void)setCartNumber:(long long)arg0;
- (long long)cartNumber;
- (void)updateShopCartWithCount:(long long)arg0 withStyle:(long long)arg1;
- (void)tryStartTimer;
- (void)hostInjectionPageWillAppearPage;
- (id)listStyleEventDescription;
- (void)hostInjectionPageWillDisappearPage;
- (void)hostInjectionPageDidDisappearPage;
- (void)skuSelectDidChange:(id)arg0;
- (void)setShouldPauseWithoutAnimationWhenCloseInner:(BOOL)arg0;
- (void)closeInner;
- (void)goodsActivityStateChanged:(id)arg0;
- (void)goodsDetailContextUpdated:(id)arg0;
- (void)handleFavouriteActionNotification:(id)arg0;
- (id)hoverCloseButtonContainer;
- (id)guideToMallView;
- (id)cartButtonView;
- (void)setupUIWithStyle;
- (id)setupHoverImmersionCloseButtonContainer;
- (id)hoverImmersionCloseButtonContainer;
- (id)hoverTopGradientView;
- (BOOL)isMemberShip;
- (BOOL)hasSetupUIWithStyle;
- (void)toastIfNeeded;
- (void)setHasSetupUIWithStyle:(BOOL)arg0;
- (void)loadMoreRecommendGoods;
- (BOOL)isGestureInstructionShowed;
- (void)setIsGestureInstructionShowed:(BOOL)arg0;
- (BOOL)insertResourceCardIfNeeded;
- (long long)p_indexOfFreshManCard;
- (void)trackSearchIconWithActionType:(long long)arg0;
- (void)hostInjectionPageDidPanToPercent:(double)arg0;
- (id)lightBackGroundStartColor;
- (BOOL)showHalfViewCart;
- (void)addCart2HalfView;
- (BOOL)headerCartDisplay;
- (id)cartViewWrapper;
- (id)cartNumberLabel;
- (void)closeInternalFeedOnly;
- (void)headerBannerTapGestureHandlerWithSourceBtmToken:(id)arg0;
- (void)searchButtonDidTap:(id)arg0 enterFromSecond:(id)arg1 sourceBtmToken:(id)arg2;
- (id)entranceStackView;
- (id)p_buildParamsForBottomActionHelperWithCellIndex:(unsigned long long)arg0;
- (BOOL)showByPresent;
- (BOOL)shouldPauseWithoutAnimationWhenCloseInner;
- (long long)p_indexWithPromotionID:(id)arg0;
- (unsigned long long)serverListStyle;
- (id)listStyleEventDescriptionWithStyle:(unsigned long long)arg0;
- (void)showStyleChangeGuidingIfNeeded;
- (void)trackADIsEmptyOpenURL:(BOOL)arg0 IsFirstCard:(BOOL)arg1;
- (id)recommendItemSchemeExpandWithOriginScheme:(id)arg0 atIndex:(long long)arg1 byMethod:(id)arg2;
- (void)verifyURLScheme:(id)arg0 withScene:(id)arg1 context:(id)arg2;
- (void)trackForOpenProductWithProductModel:(id)arg0 withRecommendItem:(id)arg1 atIndex:(long long)arg2 byMethod:(id)arg3;
- (long long)getDisplayRankWithIndex:(long long)arg0;
- (id)cardTypeTextWithItemModel:(id)arg0;
- (id)priceTypeWithPromotion:(id)arg0 atIndex:(long long)arg1;
- (id)tagCodeListWithModel:(id)arg0;
- (id)targetGoodsDetailAdSchemeExpandWithOriginScheme:(id)arg0 atIndex:(long long)arg1;
- (void)trackClickEventWithItemModel:(id)arg0 withClickArea:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)trackFirstCardADWithEvent:(id)arg0;
- (void)openTargetGoodsDetailWith:(id)arg0 byMethod:(id)arg1 atIndex:(long long)arg2;
- (void)trackRecommendListADWithModel:(id)arg0 event:(id)arg1;
- (void)openRecommendItem:(id)arg0 rankIndex:(long long)arg1 byMethod:(id)arg2;
- (id)enterDetailBackToGoodsFeedDataArray;
- (void)setEnterDetailBackToGoodsFeedDataArray:(id)arg0;
- (BOOL)shouldRequestSearchCardWithIndex:(long long)arg0;
- (BOOL)shouldDelete:(id)arg0;
- (id)shopCartAnimationView;
- (void)trackGuideToMallViewDidClick;
- (void)trackWindowCardDidClickWithAuthorID:(id)arg0 entranceLocation:(id)arg1 clickArea:(id)arg2 displayRank:(long long)arg3 productID:(id)arg4 isFollowed:(BOOL)arg5;
- (long long)headerSearchEntranceStyle;
- (id)slideSet;
- (void)p_presentPopover:(id)arg0 needCorner:(BOOL)arg1;
- (void)handleDismissPopoverForOthers;
- (void)enterProductDetailAtIndex:(long long)arg0 byMethod:(id)arg1;
- (BOOL)shouldShowShopCartGuide;
- (void)setAddCartStartPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setCurrentImageUrl:(id)arg0;
- (void)setIsMemberShip:(BOOL)arg0;
- (void)trackAutoSlide:(id)arg0 isAutoSlide:(BOOL)arg1;
- (void)trackWindowCardDidShowWithAuthorID:(id)arg0 entranceLocation:(id)arg1 isFollowed:(BOOL)arg2;
- (id)_trackParamsForTagEvents:(id)arg0 atIndex:(long long)arg1;
- (BOOL)isLoadingSameGoodsData;
- (void)setIsLoadingSameGoodsData:(BOOL)arg0;
- (void)trackSearchSameGoodsEntranceClickWithLargeCardCell:(id)arg0;
- (void)trackClickEventWithItemModel:(id)arg0 withClickArea:(id)arg1 atIndex:(unsigned long long)arg2 product:(id)arg3;
- (void)clickResourceCardProductAtCardIndex:(long long)arg0 withProductModel:(id)arg1;
- (void)trackForClickResourceCardWithCardModel:(id)arg0;
- (id)expandResourceProductSchema:(id)arg0 WithParams:(id)arg1;
- (void)trackClickEventWithItemModel:(id)arg0 withClickArea:(id)arg1 atIndex:(unsigned long long)arg2 productID:(id)arg3;
- (void)loadResourceCardPromotions:(id /* block */)arg0;
- (void)preloadNextCell;
- (id)internalFeedV2BackgroundColor;
- (void)p_reportRenderCompleteWithParams:(id)arg0;
- (void)uploadMetricsWhenFulfillingKeys:(id)arg0;
- (void)p_reportFullRenderCompleteWithParams:(id)arg0;
- (id)preloadPromotionParams;
- (id)activityIndexSet;
- (void)trackSearchSameGoodsShowWithViewModel:(id)arg0 index:(long long)arg1;
- (void)trackProductTagShow:(id)arg0 index:(long long)arg1;
- (void)trackGuideToMallViewDidShow;
- (void)setShopCartAnimationView:(id)arg0;
- (void)searchNavButtonDidTap:(id)arg0;
- (void)mallEntranceDidTap:(id)arg0;
- (void)cartEntranceDidTap:(id)arg0;
- (id)p_wrapperBarButtonViewWithConfig:(id)arg0;
- (id)p_rightHoverNavbarsConfigs;
- (void)setCartViewWrapper:(id)arg0;
- (BOOL)showHalfViewSearchIcon;
- (void)addSearch2HalfView;
- (void)setEntranceStackView:(id)arg0;
- (void)toastIfNeeded:(id)arg0;
- (id)hoverCloseButton;
- (void)guideToMallViewDidTap;
- (id)currentImageUrl;
- (id)addCartAnimationWithPic;
- (id)addCartAnimationWithPicView;
- (struct CGPoint { double x0; double x1; })addCartStartPoint;
- (long long)getPageContentMode;
- (id)commonExtra;
- (BOOL)isMallCardShowRecord;
- (void)setIsMallCardShowRecord:(BOOL)arg0;
- (id)mallCardStorage;
- (void)recordIfNeededWithCell:(id)arg0;
- (void)trackSearchSameGoodsItemShowWithModel:(id)arg0 atIndex:(long long)arg1;
- (void)enterSearchResultPageAtIndex:(long long)arg0 withModel:(id)arg1;
- (void)trackSearchSameGoodsClickWithViewModel:(id)arg0 index:(long long)arg1;
- (void)rankingCardEnterProductDetailAtIndex:(long long)arg0 withProductModel:(id)arg1;
- (id)liveSchemeByAppendingEvent:(id)arg0 atIndex:(unsigned long long)arg1;
- (id)videoSchemeByAppendingEvent:(id)arg0 atIndex:(unsigned long long)arg1;
- (void)setMetricsSnapshot:(id)arg0;
- (void)setFullMetricsSnapshot:(id)arg0;
- (void)setCellForCalculating:(id)arg0;
- (void)setCellForCalculatingNew:(id)arg0;
- (void)setVCells:(id)arg0;
- (void)setHoverCloseButton:(id)arg0;
- (void)setHoverCloseButtonContainer:(id)arg0;
- (void)setHoverImmersionCloseButtonContainer:(id)arg0;
- (id)hoverImmersionMallEntranceButtonContainer;
- (void)setHoverImmersionMallEntranceButtonContainer:(id)arg0;
- (void)setHoverTopGradientView:(id)arg0;
- (id)previewIndexPath;
- (void)setPreviewIndexPath:(id)arg0;
- (void)setCartButtonView:(id)arg0;
- (void)setGuideToMallView:(id)arg0;
- (void)setCartNumberLabel:(id)arg0;
- (void)setIsWhiteGradientView:(BOOL)arg0;
- (void)setHeaderCartDisplay:(BOOL)arg0;
- (void)setHeaderSearchEntranceStyle:(long long)arg0;
- (void)setSlideSet:(id)arg0;
- (void)setActivityIndexSet:(id)arg0;
- (void)setMallCardFrequencyMethod:(unsigned long long)arg0;
- (void)setMallCardStorage:(id)arg0;
- (void)setSearchProductIds:(id)arg0;
- (void)setSearchCardShowIndexArray:(id)arg0;
- (void)setCompareDealsProductIds:(id)arg0;
- (id)compareDealsCardModel;
- (void)setCompareDealsCardModel:(id)arg0;
- (void)setAddCartAnimationWithPic:(id)arg0;
- (void)setAddCartAnimationWithPicView:(id)arg0;
- (void)setHeaderBannerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (long long)enterDetailCurrentIndex;
- (void)setEnterDetailCurrentIndex:(long long)arg0;
- (BOOL)isClosing;
- (id)timer;
- (BOOL)isAnimating;
- (double)totalDuration;
- (BOOL)shouldAutorotate;
- (id)tracker;
- (BOOL)scrollViewShouldScrollToTop:(id)arg0;
- (id)style;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)setTracker:(id)arg0;
- (void)invalidateTimer;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (id)info;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg0;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)header;
- (void)setGradientView:(id)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)setInfo:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)tapGesture;
- (void)scrollViewDidScroll:(id)arg0;
- (id /* block */)willDismiss;
- (void)applicationDidEnterBackground:(id)arg0;
- (void)close:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setTimer:(id)arg0;
- (id)configuration;
- (id)actionHelper;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)registerNotifications;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (id)gradientView;
- (void)viewDidLoad;
- (void)setStyle:(id)arg0;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setConfiguration:(id)arg0;
- (void)setActionHelper:(id)arg0;
- (BOOL)accessibilityScroll:(long long)arg0;
- (id)bottomView;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (void)panGestureHandler:(id)arg0;
- (id)headerViewForSection:(long long)arg0;
- (void)didEndScroll;
- (void)setupUI;
- (BOOL)isFirstAppear;
- (void)setFirstAppear:(BOOL)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (void)setTapGesture:(id)arg0;
- (void)refreshCells;
- (BOOL)showingPreview;
- (id)instructionView;
- (void)setInstructionView:(id)arg0;
- (void)tapGestureHandler:(id)arg0;
- (id)searchView;
- (void)setSearchView:(id)arg0;
- (BOOL)isPresentingPopover;

@end
