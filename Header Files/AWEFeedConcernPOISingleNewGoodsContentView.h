//
//     Generated by private class-dump
//

@class UIImageView, AWEFeedConcernGoodsTagsView, AWEConcernGoodsCardBlurCommentView, UILabel, AWEConcernGoodsLifeFeedSpu, AWEConcernGoodsCardInsetsLabel, UIButton, UIView, NSString, AWEBlurGradientView, AWEConcernGoodsCardPriceTagView, NSArray, AWEGradientView, AWELifeCardHotView;

@interface AWEFeedConcernPOISingleNewGoodsContentView : UIView {
    UIImageView *_goodsCardImageView;
    AWEGradientView *_goodsCardImageHolderView;
    AWEConcernGoodsCardBlurCommentView *_commentView;
    UIImageView *_maskBackgroundView;
    AWEBlurGradientView *_groundGlassView;
    UIView *_infoView;
    UILabel *_goodsTitleLabel;
    AWEFeedConcernGoodsTagsView *_sallTagsView;
    UILabel *_activityTextLabel;
    UILabel *_activePriceMarkLabel;
    UILabel *_activePriceLabel;
    UILabel *_activePriceSuffixLabel;
    AWEConcernGoodsCardPriceTagView *_originPriceTagView;
    UILabel *_originPriceMarkLabel;
    UILabel *_originPriceLabel;
    UILabel *_hotSaleLabel;
    AWEConcernGoodsCardInsetsLabel *_tagLabel;
    UIButton *_gotoButton;
    AWELifeCardHotView *_cardHotView;
    id /* block */ _loadImageBlock;
    NSArray *_saleMutiCellViews;
    UIView *_viewOtherView;
    id /* block */ _merchantDetailBlock;
    NSString *_goodsCardDetailSchema;
    AWEConcernGoodsLifeFeedSpu *_goodsModel;
    id /* block */ _hotEventCallback;
}

@property (retain, nonatomic) UIImageView *goodsCardImageView;
@property (retain, nonatomic) AWEGradientView *goodsCardImageHolderView;
@property (retain, nonatomic) AWEConcernGoodsCardBlurCommentView *commentView;
@property (retain, nonatomic) UIImageView *maskBackgroundView;
@property (retain, nonatomic) AWEBlurGradientView *groundGlassView;
@property (retain, nonatomic) UIView *infoView;
@property (retain, nonatomic) UILabel *goodsTitleLabel;
@property (retain, nonatomic) AWEFeedConcernGoodsTagsView *sallTagsView;
@property (retain, nonatomic) UILabel *activityTextLabel;
@property (retain, nonatomic) UILabel *activePriceMarkLabel;
@property (retain, nonatomic) UILabel *activePriceLabel;
@property (retain, nonatomic) UILabel *activePriceSuffixLabel;
@property (retain, nonatomic) AWEConcernGoodsCardPriceTagView *originPriceTagView;
@property (retain, nonatomic) UILabel *originPriceMarkLabel;
@property (retain, nonatomic) UILabel *originPriceLabel;
@property (retain, nonatomic) UILabel *hotSaleLabel;
@property (retain, nonatomic) AWEConcernGoodsCardInsetsLabel *tagLabel;
@property (retain, nonatomic) UIButton *gotoButton;
@property (retain, nonatomic) AWELifeCardHotView *cardHotView;
@property (copy, nonatomic) id /* block */ loadImageBlock;
@property (copy, nonatomic) NSArray *saleMutiCellViews;
@property (retain, nonatomic) UIView *viewOtherView;
@property (copy, nonatomic) id /* block */ merchantDetailBlock;
@property (copy, nonatomic) NSString *goodsCardDetailSchema;
@property (retain, nonatomic) AWEConcernGoodsLifeFeedSpu *goodsModel;
@property (copy, nonatomic) id /* block */ hotEventCallback;

- (void)configWithModel:(id)arg0;
- (void)__setupUI;
- (id)goodsModel;
- (void)setGoodsModel:(id)arg0;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (void)setCommentView:(id)arg0;
- (id)commentView;
- (void)setOriginPriceLabel:(id)arg0;
- (id)originPriceLabel;
- (id)goodsTitleLabel;
- (void)setGoodsTitleLabel:(id)arg0;
- (void)__buildUI;
- (void)gotoPOIGoodsDetail:(id /* block */)arg0;
- (void)setMerchantDetailBlock:(id /* block */)arg0;
- (void)gotoPOIGrouponPage:(id /* block */)arg0;
- (void)addHotEventBlock:(id /* block */)arg0;
- (id)gotoButton;
- (void)startCardAnimation;
- (id)saleMutiCellViews;
- (id)viewOtherView;
- (void)reportHotPoint:(struct CGPoint { double x0; double x1; })arg0 componetName:(id)arg1;
- (void)setLoadImageBlock:(id /* block */)arg0;
- (id)hotPageName;
- (id)goodsCardImageView;
- (void)__addAction;
- (id /* block */)merchantDetailBlock;
- (void)setSaleMutiCellViews:(id)arg0;
- (void)setViewOtherView:(id)arg0;
- (void)setCardHotView:(id)arg0;
- (id)cardHotView;
- (id /* block */)hotEventCallback;
- (void)setHotEventCallback:(id /* block */)arg0;
- (void)setGoodsCardImageView:(id)arg0;
- (id)maskBackgroundView;
- (void)setMaskBackgroundView:(id)arg0;
- (id)groundGlassView;
- (void)setGroundGlassView:(id)arg0;
- (void)setGotoButton:(id)arg0;
- (id /* block */)loadImageBlock;
- (void)setGoodsCardDetailSchema:(id)arg0;
- (id)hotSaleLabel;
- (id)activePriceMarkLabel;
- (id)activePriceLabel;
- (id)activePriceSuffixLabel;
- (id)originPriceTagView;
- (id)originPriceMarkLabel;
- (void)setHotSaleLabel:(id)arg0;
- (void)setActivePriceMarkLabel:(id)arg0;
- (void)setActivePriceLabel:(id)arg0;
- (void)setActivePriceSuffixLabel:(id)arg0;
- (void)setOriginPriceTagView:(id)arg0;
- (void)setOriginPriceMarkLabel:(id)arg0;
- (void)gotoPOIGoodsDetailAction:(id)arg0;
- (id)goodsCardDetailSchema;
- (id)sallTagsView;
- (id)activityTextLabel;
- (void)setGoodsCardImageHolderView:(id)arg0;
- (void)setSallTagsView:(id)arg0;
- (void)setActivityTextLabel:(id)arg0;
- (id)goodsCardImageHolderView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (id)infoView;
- (void)setInfoView:(id)arg0;

@end