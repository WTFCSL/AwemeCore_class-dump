//
//     Generated by private class-dump
//

@class UIImageView, AWEConcernGoodsCardBlurCommentView, UILabel, AWEConcernGoodsCardInsetsLabel, UIButton, UIView, NSString, AWEBlurGradientView, AWEConcernGoodsCardPriceTagView, AWEAwemeConcernGoodsCardModel, NSArray, AWEFeedConcernGoodsLocationInfoView, AWELifeCardHotView;

@interface AWEFeedConcernPOISingleOptimizedContentView : UIView {
    UIView *_goodsCardImageHolderView;
    UIImageView *_goodsCardImageView;
    UIImageView *_goodsImageLoadFailedImageView;
    AWEConcernGoodsCardBlurCommentView *_commentView;
    AWEBlurGradientView *_groundGlassView;
    AWEBlurGradientView *_horizonGradientView;
    UIView *_infoView;
    UILabel *_goodsTitleLabel;
    AWEFeedConcernGoodsLocationInfoView *_locationView;
    UILabel *_activityLabel;
    UILabel *_activePriceMarkLabel;
    UILabel *_activePriceLabel;
    UILabel *_activePriceSuffixLabel;
    AWEConcernGoodsCardPriceTagView *_originPriceTagView;
    UILabel *_originPriceMarkLabel;
    UILabel *_originPriceLabel;
    AWEConcernGoodsCardInsetsLabel *_tagLabel;
    UILabel *_hotSaleLabel;
    UIButton *_gotoButton;
    id /* block */ _loadImageBlock;
    NSArray *_saleMutiCellViews;
    UIView *_viewOtherView;
    AWELifeCardHotView *_cardHotView;
    id /* block */ _merchantDetailBlock;
    NSString *_goodsCardDetailSchema;
    AWEAwemeConcernGoodsCardModel *_goodsModel;
    id /* block */ _hotEventCallback;
}

@property (retain, nonatomic) UIView *goodsCardImageHolderView;
@property (retain, nonatomic) UIImageView *goodsCardImageView;
@property (retain, nonatomic) UIImageView *goodsImageLoadFailedImageView;
@property (retain, nonatomic) AWEConcernGoodsCardBlurCommentView *commentView;
@property (retain, nonatomic) AWEBlurGradientView *groundGlassView;
@property (retain, nonatomic) AWEBlurGradientView *horizonGradientView;
@property (retain, nonatomic) UIView *infoView;
@property (retain, nonatomic) UILabel *goodsTitleLabel;
@property (retain, nonatomic) AWEFeedConcernGoodsLocationInfoView *locationView;
@property (retain, nonatomic) UILabel *activityLabel;
@property (retain, nonatomic) UILabel *activePriceMarkLabel;
@property (retain, nonatomic) UILabel *activePriceLabel;
@property (retain, nonatomic) UILabel *activePriceSuffixLabel;
@property (retain, nonatomic) AWEConcernGoodsCardPriceTagView *originPriceTagView;
@property (retain, nonatomic) UILabel *originPriceMarkLabel;
@property (retain, nonatomic) UILabel *originPriceLabel;
@property (retain, nonatomic) AWEConcernGoodsCardInsetsLabel *tagLabel;
@property (retain, nonatomic) UILabel *hotSaleLabel;
@property (retain, nonatomic) UIButton *gotoButton;
@property (copy, nonatomic) id /* block */ loadImageBlock;
@property (copy, nonatomic) NSArray *saleMutiCellViews;
@property (retain, nonatomic) UIView *viewOtherView;
@property (retain, nonatomic) AWELifeCardHotView *cardHotView;
@property (copy, nonatomic) id /* block */ merchantDetailBlock;
@property (copy, nonatomic) NSString *goodsCardDetailSchema;
@property (retain, nonatomic) AWEAwemeConcernGoodsCardModel *goodsModel;
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
- (void)setLocationView:(id)arg0;
- (void)setActivePriceMarkLabel:(id)arg0;
- (void)setActivePriceLabel:(id)arg0;
- (void)setActivePriceSuffixLabel:(id)arg0;
- (void)setOriginPriceTagView:(id)arg0;
- (void)setOriginPriceMarkLabel:(id)arg0;
- (void)gotoPOIGoodsDetailAction:(id)arg0;
- (id)goodsCardDetailSchema;
- (void)setGoodsCardImageHolderView:(id)arg0;
- (id)goodsCardImageHolderView;
- (id)goodsImageLoadFailedImageView;
- (void)setHorizonGradientView:(id)arg0;
- (void)setGoodsImageLoadFailedImageView:(id)arg0;
- (id)horizonGradientView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)setActivityLabel:(id)arg0;
- (id)activityLabel;
- (id)locationView;
- (id)infoView;
- (void)setInfoView:(id)arg0;

@end
