//
//     Generated by private class-dump
//

@class IESECLivePromotionCardView, IESECLiveGoodsListItemViewModel, UILabel, IESECLiveReplayDataStore, IESECLivePromotionCard, IESECGCDTimer, UIView, IESECLiveGoodsViewModel, IESECButton, IESECLiveGoodsInfoViewV2, NSString, UIStackView, IESECLiveSKUView, LOTAnimationView, IESECLiveGoodsModel, UIImageView;
@protocol IESECLiveReplayGradientProtocol, IESECLiveReplayInteractionViewProtocol;

@interface IESECLiveReplayLiveCardView : UIView <IESECLiveGoodsInfoViewV2Delegate, IESECLiveGoodsJumpHandlerDelegate, IESECLivePromotionCardBusinessDelegate, IESECLivePromotionCardBusinessParamsDelegate, IESECLiveReplayComponentViewProtocol> {
    BOOL _backGuideShown;
    BOOL _hasShrinked;
    IESECLiveReplayDataStore *_dataStore;
    id<IESECLiveReplayGradientProtocol> _gradient;
    UIView<IESECLiveReplayInteractionViewProtocol> *_interaction;
    IESECLiveGoodsModel *_model;
    IESECLiveGoodsViewModel *_goodsViewModel;
    IESECLiveGoodsListItemViewModel *_itemViewModel;
    UIView *_largeCardView;
    IESECLiveGoodsInfoViewV2 *_goodsInfoView;
    UIImageView *_shrinkImageView;
    UIImageView *_legacyCloseImageView;
    UIView *_smallCardView;
    UIImageView *_coverImageView;
    UIStackView *_goodsStackView;
    IESECButton *_infoButton;
    LOTAnimationView *_animationView;
    UILabel *_priceLabel;
    UIImageView *_closeImageView;
    UIView *_statusView;
    UILabel *_statusLabel;
    IESECGCDTimer *_skillTimer;
    IESECLiveSKUView *_skuView;
    IESECLivePromotionCard *_promotionCard;
    IESECLivePromotionCardView *_promotionCardView;
}

@property (retain, nonatomic) IESECLiveGoodsModel *model;
@property (retain, nonatomic) IESECLiveGoodsViewModel *goodsViewModel;
@property (retain, nonatomic) IESECLiveGoodsListItemViewModel *itemViewModel;
@property (nonatomic) BOOL backGuideShown;
@property (nonatomic) BOOL hasShrinked;
@property (retain, nonatomic) UIView *largeCardView;
@property (retain, nonatomic) IESECLiveGoodsInfoViewV2 *goodsInfoView;
@property (retain, nonatomic) UIImageView *shrinkImageView;
@property (retain, nonatomic) UIImageView *legacyCloseImageView;
@property (retain, nonatomic) UIView *smallCardView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIStackView *goodsStackView;
@property (retain, nonatomic) IESECButton *infoButton;
@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIView *statusView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) IESECGCDTimer *skillTimer;
@property (retain, nonatomic) IESECLiveSKUView *skuView;
@property (retain, nonatomic) IESECLivePromotionCard *promotionCard;
@property (retain, nonatomic) IESECLivePromotionCardView *promotionCardView;
@property (retain, nonatomic) IESECLiveReplayDataStore *dataStore;
@property (weak, nonatomic) id<IESECLiveReplayGradientProtocol> gradient;
@property (weak, nonatomic) UIView<IESECLiveReplayInteractionViewProtocol> *interaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewDidAppear:(BOOL)arg0;
- (void)shrink;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)removeTimer;
- (void)dataStoreChanged;
- (void)videoDidFinishPlay;
- (id)ecomEntranceForm;
- (void)setGoodsInfoView:(id)arg0;
- (id)goodsInfoView;
- (void)setGoodsViewModel:(id)arg0;
- (BOOL)goodsJumpHandler:(id)arg0 shouldJump:(id)arg1;
- (void)didClickGoodsInfoView:(id)arg0 areaType:(long long)arg1 extraInfo:(id)arg2;
- (id)skuView;
- (void)setSkuView:(id)arg0;
- (id)goodsViewModel;
- (id)promotionCardView;
- (id)promotionCard;
- (void)setPromotionCard:(id)arg0;
- (void)setPromotionCardView:(id)arg0;
- (void)didClickPromotionCardView:(id)arg0 areaType:(long long)arg1 extraInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)reportEventWithName:(id)arg0 params:(id)arg1 callback:(id /* block */)arg2;
- (BOOL)useBizCardAction;
- (id)promotionCardEcomEntranceForm;
- (id)promotionCardPanelSize;
- (id)getSkuFrom;
- (id)p_getCardConfigModel;
- (void)backGuideDidAppear;
- (void)backGuideDidDisappear;
- (id)largeCardView;
- (BOOL)p_useNewPromotionCard;
- (id)shrinkImageView;
- (id)legacyCloseImageView;
- (id)smallCardView;
- (id)goodsStackView;
- (id)p_btmModelWithHost:(id)arg0 btm:(id)arg1;
- (BOOL)showProductDetailCondition;
- (void)p_jumpWithClickStyle:(long long)arg0 btmModel:(id)arg1;
- (BOOL)supportSmallCard;
- (void)setHasShrinked:(BOOL)arg0;
- (void)updateSmallCardInfo;
- (void)shrinkLayout;
- (void)setBackGuideShown:(BOOL)arg0;
- (void)afterShrink;
- (void)showProductDetailPageIfNeed;
- (BOOL)backGuideShown;
- (BOOL)hasShrinked;
- (void)expandWithAnimation:(BOOL)arg0;
- (id)skillTimer;
- (void)setSkillTimer:(id)arg0;
- (id)itemViewModel;
- (void)setItemViewModel:(id)arg0;
- (void)setupGoodsInfoView:(id)arg0;
- (void)skillCountDown:(id)arg0;
- (long long)smallCardStyle;
- (void)updateSmallCardPlayingStyle;
- (void)updateSmallCardSellingStyle;
- (long long)smallCardClickAction;
- (void)routeToGoodsDetailWithCardStatus:(long long)arg0 btmModel:(id)arg1;
- (void)routeToCheckoutWithCardStatus:(long long)arg0 btmModel:(id)arg1;
- (BOOL)p_currentShouldJump;
- (void)p_openSKUWithGoodsModel:(id)arg0 extraParams:(id)arg1;
- (void)didClickBlankWithExtraInfo:(id)arg0;
- (void)didClickBuyButtonWithExtraInfo:(id)arg0;
- (void)shrinkButtonTapped;
- (void)legacyCloseButtonTapped;
- (void)smallCardDidTap:(id)arg0;
- (void)setLargeCardView:(id)arg0;
- (void)setShrinkImageView:(id)arg0;
- (void)setLegacyCloseImageView:(id)arg0;
- (void)setSmallCardView:(id)arg0;
- (void)setGoodsStackView:(id)arg0;
- (void)update:(id)arg0;
- (void)setModel:(id)arg0;
- (id)interaction;
- (void)setGradient:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setDataStore:(id)arg0;
- (id)gradient;
- (void)setInteraction:(id)arg0;
- (id)dataStore;
- (void)dealloc;
- (id)infoButton;
- (void)setupUI;
- (void)setInfoButton:(id)arg0;
- (id)animationView;
- (void)setAnimationView:(id)arg0;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg0;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;
- (void)closeButtonTapped;
- (id)statusView;
- (void)setStatusView:(id)arg0;
- (id)closeImageView;
- (void)setCloseImageView:(id)arg0;

@end
