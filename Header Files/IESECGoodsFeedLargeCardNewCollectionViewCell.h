//
//     Generated by private class-dump
//

@class IESECGoodsFeedActionButton, IESECGoodsPriceInfoModel, IESECVideoFeedCommentView, IESECGoodsMessageDisplayViewController, IESECGoodsFeedLargeCardNewViewModel, UILabel, NSMutableArray, IESECGoodsFeedPopoverView, NSString, IESECGradientView, NSTimer, IESECAutoPageButton, NSMutableDictionary, IESECGoodsFeedTitleView, IESECButton, IESECPageControl, IESECLLView, UIButton, IESECGoodsFeedLargeCardNewSkeletonView, IESECGoodsFeedImageLoadMoreView, UIView, IESECGoodsFeedTagView, CADisplayLink, IESECGoodsFeedSkuView, IESECInternalFeedContentCarouseView, UIImageView, IESECGalleryBar, IESECGoodsCardMiniActivityPriceView;
@protocol IESECGoodsFeedLargeCardCellContentProtocol, IESECGoodsFeedLargeCardCellOperationProtocol;

@interface IESECGoodsFeedLargeCardNewCollectionViewCell : UICollectionViewCell <IESECInternalFeedCarouseViewDelegate, IESECGoodsDetailInfoViewEventDelegate, IESECGoodsMessageDisplayViewControllerDelegate, IESECGalleryBarDelegate, IESECGoodsFeedSkuViewDelegate, UIGestureRecognizerDelegate, IESECGoodsFeedPopoverViewDelegate, IESECGoodsFeedLargeCardCollectionViewCellProtocol> {
    CADisplayLink *_displayLink;
    BOOL _hookClickArea;
    BOOL _isGoodMessageShowed;
    IESECGoodsFeedLargeCardNewViewModel *_viewModel;
    id<IESECGoodsFeedLargeCardCellContentProtocol, IESECGoodsFeedLargeCardCellOperationProtocol> _delegate;
    long long _currentIndex;
    UIView *_recommendTagView;
    IESECGoodsMessageDisplayViewController *_messageDisplayViewController;
    UIView *_couponInfoView;
    IESECInternalFeedContentCarouseView *_carouselView;
    IESECAutoPageButton *_commentButton;
    long long _clickArea;
    IESECLLView *_llView;
    IESECGradientView *_gradientBackgroundView;
    IESECGoodsFeedLargeCardNewSkeletonView *_skeletonView;
    IESECGoodsFeedSkuView *_skuView;
    UIView *_skuTitleView;
    UILabel *_skuTitleLabel;
    UIView *_priceView;
    IESECGoodsCardMiniActivityPriceView *_miniActivityPriceView;
    IESECGoodsPriceInfoModel *_priceInfo;
    long long _indicatorStyle;
    IESECGoodsFeedTagView *_tagView;
    IESECPageControl *_pageControl;
    UIView *_pageControlContainer;
    UIView *_indexIndicatorView;
    UILabel *_indexIndicatorLabel;
    IESECGalleryBar *_galleryBar;
    IESECGradientView *_titleEntry;
    IESECGoodsFeedImageLoadMoreView *_imageLoadMoreView;
    UIButton *_sameGoodsEntrance;
    UIView *_searchSameGoodsEntrance;
    IESECGoodsFeedTitleView *_goodsTitleView;
    UIView *_mainImageSearchSameGoodsEntrance;
    IESECVideoFeedCommentView *_videoFeedCommentView;
    long long _currentCommentIdx;
    double _currentGalleryBarProgress;
    IESECGoodsFeedActionButton *_buyButton;
    IESECGoodsFeedActionButton *_buyButtonInde;
    IESECButton *_addCartButton;
    IESECButton *_enterMemberButton;
    UIView *_separatorInRecommendTag;
    long long _section;
    UIView *_windowEntryView;
    UILabel *_windowGuideLabel;
    UILabel *_windowAuthorNameLabel;
    UIImageView *_windowGuideImageView;
    NSMutableDictionary *_relatedComponentViews;
    UIView *_rightContainer;
    UIView *_topDragView;
    UIView *_instructionView;
    NSMutableArray *_subscribers;
    IESECGoodsFeedPopoverView *_popoverView;
    NSTimer *_dismisssPopoverViewTimer;
}

@property (retain, nonatomic) IESECLLView *llView;
@property (retain, nonatomic) IESECGradientView *gradientBackgroundView;
@property (retain, nonatomic) IESECGoodsFeedLargeCardNewSkeletonView *skeletonView;
@property (retain, nonatomic) IESECGoodsFeedSkuView *skuView;
@property (retain, nonatomic) UIView *skuTitleView;
@property (retain, nonatomic) UILabel *skuTitleLabel;
@property (retain, nonatomic) UIView *priceView;
@property (retain, nonatomic) IESECGoodsCardMiniActivityPriceView *miniActivityPriceView;
@property (retain, nonatomic) IESECGoodsPriceInfoModel *priceInfo;
@property (nonatomic) long long indicatorStyle;
@property (retain, nonatomic) IESECGoodsFeedTagView *tagView;
@property (retain, nonatomic) IESECPageControl *pageControl;
@property (retain, nonatomic) UIView *pageControlContainer;
@property (retain, nonatomic) UIView *indexIndicatorView;
@property (retain, nonatomic) UILabel *indexIndicatorLabel;
@property (retain, nonatomic) IESECGalleryBar *galleryBar;
@property (retain, nonatomic) IESECGradientView *titleEntry;
@property (retain, nonatomic) IESECGoodsFeedImageLoadMoreView *imageLoadMoreView;
@property (retain, nonatomic) UIButton *sameGoodsEntrance;
@property (retain, nonatomic) UIView *searchSameGoodsEntrance;
@property (retain, nonatomic) IESECGoodsFeedTitleView *goodsTitleView;
@property (retain, nonatomic) UIView *mainImageSearchSameGoodsEntrance;
@property (nonatomic) BOOL isGoodMessageShowed;
@property (retain, nonatomic) IESECVideoFeedCommentView *videoFeedCommentView;
@property (nonatomic) long long currentCommentIdx;
@property (nonatomic) double currentGalleryBarProgress;
@property (retain, nonatomic) IESECGoodsFeedActionButton *buyButton;
@property (retain, nonatomic) IESECGoodsFeedActionButton *buyButtonInde;
@property (retain, nonatomic) IESECButton *addCartButton;
@property (retain, nonatomic) IESECButton *enterMemberButton;
@property (nonatomic) long long clickArea;
@property (retain, nonatomic) UIView *separatorInRecommendTag;
@property (nonatomic) long long section;
@property (retain, nonatomic) UIView *windowEntryView;
@property (retain, nonatomic) UILabel *windowGuideLabel;
@property (retain, nonatomic) UILabel *windowAuthorNameLabel;
@property (retain, nonatomic) UIImageView *windowGuideImageView;
@property (retain, nonatomic) NSMutableDictionary *relatedComponentViews;
@property (retain, nonatomic) UIView *rightContainer;
@property (retain, nonatomic) UIView *topDragView;
@property (retain, nonatomic) UIView *instructionView;
@property (retain, nonatomic) NSMutableArray *subscribers;
@property (weak, nonatomic) IESECGoodsFeedPopoverView *popoverView;
@property (retain, nonatomic) NSTimer *dismisssPopoverViewTimer;
@property (retain, nonatomic) IESECGoodsFeedLargeCardNewViewModel *viewModel;
@property (weak, nonatomic) id<IESECGoodsFeedLargeCardCellContentProtocol, IESECGoodsFeedLargeCardCellOperationProtocol> delegate;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) UIView *recommendTagView;
@property (retain, nonatomic) IESECGoodsMessageDisplayViewController *messageDisplayViewController;
@property (retain, nonatomic) UIView *couponInfoView;
@property (retain, nonatomic) IESECInternalFeedContentCarouseView *carouselView;
@property (retain, nonatomic) IESECAutoPageButton *commentButton;
@property (nonatomic) BOOL hookClickArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (void)trackEvent:(id)arg0 withParams:(id)arg1;
- (void)setGradientBackgroundView:(id)arg0;
- (id)rightContainer;
- (void)setRightContainer:(id)arg0;
- (void)setPriceView:(id)arg0;
- (id)priceView;
- (void)setClickArea:(long long)arg0;
- (long long)clickArea;
- (id)commentButton;
- (id)buyButton;
- (void)setBuyButton:(id)arg0;
- (id)skeletonView;
- (void)setSkeletonView:(id)arg0;
- (void)setCommentButton:(id)arg0;
- (id)priceInfo;
- (void)setPriceInfo:(id)arg0;
- (void)showGestureInstruction;
- (void)setPopoverView:(id)arg0;
- (id)recommendTagView;
- (void)setRecommendTagView:(id)arg0;
- (void)openScheme:(id)arg0;
- (id)skuView;
- (void)setSkuView:(id)arg0;
- (BOOL)getIsMemberShip;
- (id)addCartButton;
- (void)setAddCartButton:(id)arg0;
- (void)configClickAreaWithPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)imageLoadMoreView;
- (void)carouselView:(id)arg0 didClickContentAt:(long long)arg1;
- (void)carouselView:(id)arg0 didScrollToIndex:(long long)arg1;
- (void)carouselView:(id)arg0 willScrollToIndex:(long long)arg1 withVelocity:(struct CGPoint { double x0; double x1; })arg2;
- (void)carouselView:(id)arg0 didScrollToIndexWithAccessibility:(long long)arg1;
- (void)carouselViewWillBeginDragging:(id)arg0;
- (void)carouselView:(id)arg0 willDisplayAtIndex:(long long)arg1;
- (void)setImageLoadMoreView:(id)arg0;
- (id)galleryBar;
- (double)galleryBar:(id)arg0 progressForItemAtIndex:(long long)arg1;
- (void)setGalleryBar:(id)arg0;
- (void)updateWithViewModel:(id)arg0 atIndex:(long long)arg1;
- (void)setHookClickArea:(BOOL)arg0;
- (double)heightForParameters:(id)arg0 withLayoutSize:(struct CGSize { double x0; double x1; })arg1 isLargerCard:(BOOL)arg2;
- (void)openRankingList:(id)arg0;
- (id)couponInfoView;
- (void)setCouponInfoView:(id)arg0;
- (void)setCurrentCommentIdx:(long long)arg0;
- (BOOL)hookClickArea;
- (id)messageDisplayViewController;
- (id)llView;
- (id)sameGoodsEntrance;
- (void)setupPriceInfoWithParams:(id)arg0;
- (void)handleClickExchangeCouponView;
- (void)handleShowExchangeCouponViewWithDidClick:(BOOL)arg0;
- (id)titleEntry;
- (void)trackSearchSameGoodsEntranceShow;
- (id)searchSameGoodsEntrance;
- (void)setupWindowEntryViewWithAuthorName:(id)arg0;
- (void)handleShowWindowEntryViewWithDidClick:(BOOL)arg0;
- (id)windowEntryView;
- (void)handleStoreComment;
- (id)videoFeedCommentView;
- (void)handleShopButton:(id)arg0;
- (void)handleShowCommentButton:(id)arg0;
- (void)handleServiceButton:(id)arg0;
- (void)handleWantButton:(id)arg0;
- (void)handleBuyButton:(id)arg0;
- (id)getMemberButton;
- (void)setEnterMemberButton:(id)arg0;
- (void)updateMemberButtonWithParameters:(id)arg0;
- (void)handleAddCartButton:(id)arg0;
- (id)pageControlContainer;
- (id)indexIndicatorView;
- (id)skuTitleView;
- (void)setupPageControl;
- (id)skuTitleLabel;
- (id)indexIndicatorLabel;
- (id)mainImageSearchSameGoodsEntrance;
- (id)enterMemberButton;
- (void)handleEnterMemberButton:(id)arg0;
- (id /* block */)cellBuilderWithParams:(id)arg0 isFirstCard:(BOOL)arg1 forceHideShopButton:(BOOL)arg2;
- (void)bindDataWithSection:(long long)arg0;
- (void)setWindowAuthorNameLabel:(id)arg0;
- (id)windowAuthorNameLabel;
- (void)setWindowGuideLabel:(id)arg0;
- (id)windowGuideLabel;
- (void)setWindowGuideImageView:(id)arg0;
- (id)windowGuideImageView;
- (void)handleClickWindowEntryView;
- (long long)currentCommentIdx;
- (void)updatePriceViewWithSkuInfo:(id)arg0;
- (void)dismissMessageDisplayViewController:(long long)arg0;
- (BOOL)shouldShowMessageDisplay;
- (id)separatorInRecommendTag;
- (void)dismissCouponInfo:(long long)arg0;
- (void)setMessageDisplayViewController:(id)arg0;
- (void)handleVideoComment;
- (void)customActionWhenScrollingToMore;
- (void)handleTagViewDidClick:(id)arg0;
- (void)setSeparatorInRecommendTag:(id)arg0;
- (void)handleSameGoodsEntrance:(id)arg0;
- (void)handleSearchSameGoodsEntrance:(id)arg0;
- (double)currentGalleryBarProgress;
- (void)updateSelectSkuAtIndex:(long long)arg0;
- (void)trackClickSku;
- (void)hasScorllToBottomOfTableView:(id)arg0;
- (void)willDisplayedTableViewCell:(id)arg0 forRowAtIndexPath:(id)arg1;
- (void)selectSkuAtIndex:(long long)arg0;
- (void)showTagViewIfNeeded;
- (void)updateWithPercent:(double)arg0;
- (void)timerFire;
- (void)setLlView:(id)arg0;
- (void)setSkuTitleView:(id)arg0;
- (void)setSkuTitleLabel:(id)arg0;
- (void)setPageControlContainer:(id)arg0;
- (void)setIndexIndicatorView:(id)arg0;
- (void)setIndexIndicatorLabel:(id)arg0;
- (void)setTitleEntry:(id)arg0;
- (void)setSameGoodsEntrance:(id)arg0;
- (void)setSearchSameGoodsEntrance:(id)arg0;
- (void)setMainImageSearchSameGoodsEntrance:(id)arg0;
- (BOOL)isGoodMessageShowed;
- (void)setIsGoodMessageShowed:(BOOL)arg0;
- (void)setVideoFeedCommentView:(id)arg0;
- (void)setCurrentGalleryBarProgress:(double)arg0;
- (void)setWindowEntryView:(id)arg0;
- (void)compareDealsBarClick:(id)arg0;
- (void)trackCompareDealsBar:(id)arg0;
- (id)componentViewWithClass:(Class)arg0;
- (id)goodsTitleView;
- (id)relatedComponentViews;
- (void)builderCarouselWithStackBuilder:(id)arg0 params:(id)arg1 isFirstCard:(BOOL)arg2;
- (void)builderCommonGirdleWithStackBuilder:(id)arg0 params:(id)arg1;
- (void)builderPriceWithStackBuilder:(id)arg0 params:(id)arg1;
- (void)builderDiversionBannerWithVerticalBuilder:(id)arg0 params:(id)arg1;
- (void)buildTitleWithVerticalBuilder:(id)arg0 params:(id)arg1;
- (void)buildSellingPointsWithVerticalBuilder:(id)arg0 params:(id)arg1;
- (id)buyButtonInde;
- (void)setRelatedComponentViews:(id)arg0;
- (id)topDragView;
- (void)subscribeViewModel:(id)arg0 eventNamed:(id)arg1 callback:(id /* block */)arg2;
- (void)handleLongPressImage:(id)arg0;
- (void)handleLongPressTitle:(id)arg0;
- (void)trackPopoverWithAction:(id)arg0 location:(id)arg1 btm:(id)arg2;
- (void)showPopoverView:(id)arg0 location:(id)arg1 btm:(id)arg2;
- (id)dismisssPopoverViewTimer;
- (void)setDismisssPopoverViewTimer:(id)arg0;
- (void)popoverViewDidDismiss:(id)arg0;
- (void)setShowY:(double)arg0;
- (id)miniActivityPriceView;
- (void)setMiniActivityPriceView:(id)arg0;
- (void)setGoodsTitleView:(id)arg0;
- (void)setBuyButtonInde:(id)arg0;
- (void)setTopDragView:(id)arg0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)popoverView;
- (void).cxx_destruct;
- (long long)currentIndex;
- (void)setPageControl:(id)arg0;
- (void)didMoveToSuperview;
- (void)setSection:(long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setCurrentIndex:(long long)arg0;
- (id)subscribers;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setIndicatorStyle:(long long)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (long long)section;
- (id)pageControl;
- (long long)indicatorStyle;
- (void)setupSubviews;
- (id)carouselView;
- (void)setCarouselView:(id)arg0;
- (void)updateWithViewModel:(id)arg0;
- (id)gradientBackgroundView;
- (void)setSubscribers:(id)arg0;
- (id)instructionView;
- (void)setInstructionView:(id)arg0;
- (void)tapGestureHandler:(id)arg0;
- (id)tagView;
- (void)setTagView:(id)arg0;
- (void)handleShareButton:(id)arg0;

@end