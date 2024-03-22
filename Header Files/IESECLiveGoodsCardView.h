//
//     Generated by private class-dump
//

@class IESECLiveGoodsCardEntranceView, UILabel, NSString, IESECGCDTimer, IESECLiveTracker, NSMutableDictionary, IESECLiveGoodsStatusMaskView, IESECLivePriceLabel, IESECLiveAvatarsContentGroupView, NSArray, UIButton, IESECLiveSKUView, UIView, IESECLiveComboBuyView, LOTAnimationView, IESECLiveCardViewConfig, IESECLiveAnimateImageView, IESECLiveGoodsJumpHandler, IESECLiveHotSaleView, UIImageView, IESECXBridgeEventSubscriber, IESECLiveAccessibilityLabelGenerator, IESECLiveGoodsTitleLabel;

@interface IESECLiveGoodsCardView : IESECLiveBaseCardView <IESECLiveGoodsCardAtomicProtocol, IESECLiveGoodsJumpHandlerDelegate, IESECLiveGoodsTitleLabelDelegate> {
    BOOL _everTrackedFirstClick;
    BOOL _everTrackedDuration;
    BOOL _buyButtonAnimated;
    BOOL _everTrackedRealBao;
    BOOL _showCompleted;
    BOOL _hasTrackGoodsCover;
    BOOL _landscapeWhenClick;
    BOOL _buyButtonEnabeled;
    IESECLiveCardViewConfig *_config;
    IESECLiveGoodsJumpHandler *_jumpHandler;
    IESECLiveTracker *_tracker;
    IESECLiveHotSaleView *_hotSaleView;
    UIImageView *_topIconView;
    UIView *_containerView;
    UIView *_backgroundLayer;
    UIImageView *_vibeLayer;
    UIView *_goodsInfoViewLayer;
    UIView *_userActionLayer;
    UIView *_buyButtonClickAreaView;
    UIView *_priceBGView;
    UIView *_comboBuyClickAreaView;
    UIView *_entranceClickAreaView;
    UIImageView *_buyImageView;
    UIButton *_closeButton;
    IESECLiveGoodsStatusMaskView *_statusMaskView;
    IESECLiveGoodsTitleLabel *_titleLabel;
    IESECLiveAvatarsContentGroupView *_subtitleContainer;
    UIImageView *_coverImageView;
    IESECLivePriceLabel *_priceLabel;
    IESECLivePriceLabel *_originPriceLabel;
    IESECLiveComboBuyView *_comboBuyView;
    IESECLiveGoodsCardEntranceView *_entranceView;
    UIImageView *_tagImageView;
    IESECLiveAnimateImageView *_stateTagImageView;
    UILabel *_subTitleLabel;
    UIView *_extraInfoMaskView;
    UILabel *_extraInfoLabel;
    LOTAnimationView *_lottieView;
    IESECGCDTimer *_timer;
    IESECGCDTimer *_userRitTagsTimer;
    double _showTime;
    NSArray *_previousTagsInfo;
    long long _stashClickStyle;
    double _coverBeginLoadTime;
    double _coverEndLoadTime;
    NSMutableDictionary *_coverLoadTrackParams;
    IESECLiveSKUView *_skuView;
    IESECXBridgeEventSubscriber *_subscriber;
    IESECLiveAccessibilityLabelGenerator *_accessibilityLabelGenerator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECLiveCardViewConfig *config;
@property (retain, nonatomic) IESECLiveGoodsJumpHandler *jumpHandler;
@property (retain, nonatomic) IESECLiveTracker *tracker;
@property (retain, nonatomic) IESECLiveHotSaleView *hotSaleView;
@property (retain, nonatomic) UIImageView *topIconView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundLayer;
@property (retain, nonatomic) UIImageView *vibeLayer;
@property (retain, nonatomic) UIView *goodsInfoViewLayer;
@property (retain, nonatomic) UIView *userActionLayer;
@property (retain, nonatomic) UIView *buyButtonClickAreaView;
@property (retain, nonatomic) UIView *priceBGView;
@property (retain, nonatomic) UIView *comboBuyClickAreaView;
@property (retain, nonatomic) UIView *entranceClickAreaView;
@property (retain, nonatomic) UIImageView *buyImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) IESECLiveGoodsStatusMaskView *statusMaskView;
@property (retain, nonatomic) IESECLiveGoodsTitleLabel *titleLabel;
@property (retain, nonatomic) IESECLiveAvatarsContentGroupView *subtitleContainer;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) IESECLivePriceLabel *priceLabel;
@property (retain, nonatomic) IESECLivePriceLabel *originPriceLabel;
@property (retain, nonatomic) IESECLiveComboBuyView *comboBuyView;
@property (retain, nonatomic) IESECLiveGoodsCardEntranceView *entranceView;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) IESECLiveAnimateImageView *stateTagImageView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *extraInfoMaskView;
@property (retain, nonatomic) UILabel *extraInfoLabel;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) IESECGCDTimer *timer;
@property (retain, nonatomic) IESECGCDTimer *userRitTagsTimer;
@property (nonatomic) double showTime;
@property (nonatomic) BOOL everTrackedFirstClick;
@property (nonatomic) BOOL everTrackedDuration;
@property (nonatomic) BOOL buyButtonAnimated;
@property (nonatomic) BOOL everTrackedRealBao;
@property (nonatomic) BOOL showCompleted;
@property (retain, nonatomic) NSArray *previousTagsInfo;
@property (nonatomic) BOOL hasTrackGoodsCover;
@property (nonatomic) long long stashClickStyle;
@property (nonatomic) double coverBeginLoadTime;
@property (nonatomic) double coverEndLoadTime;
@property (retain, nonatomic) NSMutableDictionary *coverLoadTrackParams;
@property (retain, nonatomic) IESECLiveSKUView *skuView;
@property (nonatomic) BOOL landscapeWhenClick;
@property (nonatomic) BOOL buyButtonEnabeled;
@property (retain, nonatomic) IESECXBridgeEventSubscriber *subscriber;
@property (retain, nonatomic) IESECLiveAccessibilityLabelGenerator *accessibilityLabelGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardViewWithModel:(id)arg0;
+ (id)cardViewWithParams:(id)arg0;
+ (id)emptyCardView;

- (id)cardModel;
- (double)showTime;
- (void)setShowTime:(double)arg0;
- (void)setTagImageView:(id)arg0;
- (id)tagImageView;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)lottieView;
- (void)setLottieView:(id)arg0;
- (id)extraInfoLabel;
- (void)setExtraInfoLabel:(id)arg0;
- (id)entranceView;
- (void)setEntranceView:(id)arg0;
- (void)updateWithCardModel:(id)arg0;
- (void)setOriginPriceLabel:(id)arg0;
- (id)originPriceLabel;
- (id)sourceVC;
- (void)handleClose:(id)arg0;
- (id)ecomEntranceForm;
- (id)hotSaleView;
- (void)setHotSaleView:(id)arg0;
- (id)panelContainer;
- (id)businessContext;
- (void)setShowCompleted:(BOOL)arg0;
- (BOOL)showCompleted;
- (void)handleTapButton;
- (id)statusMaskView;
- (void)setStatusMaskView:(id)arg0;
- (void)cancelTimerIfNeeded;
- (void)setTopIconView:(id)arg0;
- (id)topIconView;
- (void)setupLottieView;
- (void)setupEntranceView;
- (void)setupTimerIfNeeded;
- (struct CGSize { double x0; double x1; })maskSize;
- (BOOL)p_isCurrentLandscape;
- (id)targetParentView;
- (id)getAddCartExtraInfo;
- (id)coreParams;
- (id)jumpHandler;
- (BOOL)landscapeWhenClick;
- (void)handleAddToCartWithModel:(id)arg0 extraInfo:(id)arg1;
- (BOOL)goodsJumpHandler:(id)arg0 shouldJump:(id)arg1;
- (id)panelEnvironment;
- (id)adTrackParamsWithClickStyle:(long long)arg0;
- (struct CGSize { double x0; double x1; })panelSize;
- (void)setLandscapeWhenClick:(BOOL)arg0;
- (void)setJumpHandler:(id)arg0;
- (id)skuView;
- (void)setSkuView:(id)arg0;
- (void)showOnEnter:(BOOL)arg0 followUp:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)shouldShowHotsaleWithSaleNum:(id)arg0;
- (void)handleTapWithClickStyle:(long long)arg0;
- (void)trackClickWithArea:(id)arg0;
- (BOOL)enableUpdate;
- (void)registerAtomicBasicAbility;
- (void)handleAddToCartLogicWithSKUInfo:(id)arg0 goodsModel:(id)arg1 extraInfo:(id)arg2 animationStartPoint:(struct CGPoint { double x0; double x1; })arg3 btmPageInfo:(id)arg4 cartTrackParams:(id)arg5;
- (id)p_SKUCreateInfoFromExtraInfo:(id)arg0 goodsModel:(id)arg1 liveContext:(id)arg2;
- (void)handleAddToCartLogicWithSKUInfo:(id)arg0 goodsModel:(id)arg1 extraInfo:(id)arg2 animationStartPoint:(struct CGPoint { double x0; double x1; })arg3 btmPageInfo:(id)arg4;
- (void)addLynxEventSubscriber;
- (void)closeWithReason:(long long)arg0 status:(long long)arg1 completion:(id /* block */)arg2;
- (void)showBulletScreenNoticeTextIfNeed:(id)arg0 trackEvent:(id)arg1;
- (long long)cardViewShowType;
- (void)trackBSTEvent;
- (void)liveContext:(id)arg0 addCart:(id)arg1 completion:(id /* block */)arg2;
- (void)setupDependency;
- (void)p_prepareToShow:(id)arg0;
- (void)p_prepareToShowWithCover:(id)arg0 title:(id)arg1 priceHeader:(id)arg2 price:(id)arg3;
- (void)showPrice:(id)arg0 pricePrefix:(id)arg1 andOriginPrice:(id)arg2 withGap:(BOOL)arg3;
- (void)p_preShowToRealShowIfNeeded;
- (void)remakeContainerViewUI;
- (void)setupGoodsInfo;
- (id)goodsInfoViewLayer;
- (id)buyButtonClickAreaView;
- (void)cancelUserRitTagsTimerIfNeeded;
- (void)trackShowDurationIfNeeded;
- (void)trackFirstClickIfNeededWithArea:(id)arg0;
- (void)trackCoverLoadOnEnter;
- (id)userRitTagsTimer;
- (void)setUserRitTagsTimer:(id)arg0;
- (void)setupGoodsCampaign;
- (id)trackParamsWithParams:(id)arg0;
- (void)forceLoginWithCompletion:(id /* block */)arg0;
- (id)vibeLayer;
- (id)userActionLayer;
- (void)trackHotSaleTapped;
- (id)stateTagImageView;
- (id)priceBGView;
- (id)buyImageView;
- (id)extraInfoMaskView;
- (void)p_initBuyImageView;
- (void)p_resetBuyImageConstraintWithSize:(struct CGSize { double x0; double x1; })arg0;
- (id)entranceClickAreaView;
- (id)comboBuyView;
- (id)comboBuyClickAreaView;
- (void)p_resetBuyImageConstraintWithImage:(id)arg0;
- (void)resetInitialSettings;
- (double)coverBeginLoadTime;
- (void)setCoverBeginLoadTime:(double)arg0;
- (double)coverEndLoadTime;
- (void)setCoverEndLoadTime:(double)arg0;
- (void)setCoverLoadTrackParams:(id)arg0;
- (void)setupPriceRelated:(id)arg0;
- (void)setupSubTitleTopPriority;
- (void)setupUserRitTags;
- (void)setupGoodsTitle;
- (void)setupSoldOutStatus;
- (BOOL)p_shouldDoBuyButtonAnimation;
- (void)setBuyImageWithURLString:(id)arg0;
- (void)setupUpTagImage;
- (void)setupUpTagInfo;
- (void)setupTopIcon;
- (void)setupComboBuyView;
- (void)p_accessibilityLabelTextConfiguration;
- (long long)stashClickStyle;
- (void)setStashClickStyle:(long long)arg0;
- (void)p_resetHotsaleUI:(id)arg0;
- (void)p_trackHotsaleIfNeeded;
- (void)p_setHotSaleStateToStill;
- (void)p_resetTagImageViewWithWidth:(double)arg0 height:(double)arg1;
- (void)p_trackStateTagShow;
- (void)setBuyButtonEnabeled:(BOOL)arg0;
- (void)setBuyButtonAnimated:(BOOL)arg0;
- (void)loadLottieView:(id /* block */)arg0;
- (void)doBuyButtonAnimationIfNeeded;
- (void)p_updateHotsaleInfo;
- (void)trackerShowEvents;
- (id)productTagTrackParamsWithModel:(id)arg0;
- (void)trackProductTagShowIfNeeded;
- (id)curPageName;
- (id)productTagTrackParamsForGoodsTrack;
- (BOOL)everTrackedDuration;
- (void)setEverTrackedDuration:(BOOL)arg0;
- (BOOL)everTrackedFirstClick;
- (void)setEverTrackedFirstClick:(BOOL)arg0;
- (long long)p_liveCardShowStatus;
- (BOOL)buyButtonEnabeled;
- (id)coverLoadTrackParams;
- (void)handleOrientationStatusWhenClicked;
- (id)p_cardEnvironment;
- (void)forceMainCardLoginWithCompletion:(id /* block */)arg0;
- (id)p_creatSKUViewWithExtra:(id)arg0;
- (BOOL)buyButtonAnimated;
- (void)showRitTags:(id)arg0;
- (id)previousTagsInfo;
- (void)setPreviousTagsInfo:(id)arg0;
- (id)contentTextArrWithTagModels:(id)arg0;
- (BOOL)everTrackedRealBao;
- (void)setEverTrackedRealBao:(BOOL)arg0;
- (id)accessibilityLabelGenerator;
- (void)handleTapBlank;
- (void)handleComboBuyClick;
- (void)handleEntranceViewClick:(id)arg0;
- (struct CGPoint { double x0; double x1; })pointFromString:(id)arg0;
- (void)switchListToSKUWithGoodsModel:(id)arg0 extraInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)didFinishLoadContent:(id)arg0 withTag:(BOOL)arg1;
- (BOOL)isEqualToCGZero:(struct CGPoint { double x0; double x1; })arg0;
- (void)setVibeLayer:(id)arg0;
- (void)setGoodsInfoViewLayer:(id)arg0;
- (void)setUserActionLayer:(id)arg0;
- (void)setBuyButtonClickAreaView:(id)arg0;
- (void)setPriceBGView:(id)arg0;
- (void)setComboBuyClickAreaView:(id)arg0;
- (void)setEntranceClickAreaView:(id)arg0;
- (void)setBuyImageView:(id)arg0;
- (void)setComboBuyView:(id)arg0;
- (void)setStateTagImageView:(id)arg0;
- (void)setExtraInfoMaskView:(id)arg0;
- (BOOL)hasTrackGoodsCover;
- (void)setHasTrackGoodsCover:(BOOL)arg0;
- (void)setAccessibilityLabelGenerator:(id)arg0;
- (id)timer;
- (void)removeFromSuperview;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)didMoveToWindow;
- (void)setTimer:(id)arg0;
- (id)containerView;
- (id)subscriber;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)backgroundLayer;
- (void)setBackgroundLayer:(id)arg0;
- (void)setupUI;
- (void)setupAccessibility;
- (void)setupSubTitle;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (struct CGSize { double x0; double x1; })cardSize;
- (void)setSubscriber:(id)arg0;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;
- (id)cardID;
- (id)subtitleContainer;
- (void)setSubtitleContainer:(id)arg0;

@end
