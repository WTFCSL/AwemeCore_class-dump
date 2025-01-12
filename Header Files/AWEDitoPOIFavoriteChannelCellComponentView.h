//
//     Generated by private class-dump
//

@class UIView, NSString, UIImageView, CAShapeLayer, YYLabel, AWEDitoPOIFavoritePageContext, AWEDitoPOIFavoriteChannelCellComponentViewModel, AWEDitoPOIFavoriteRankLabel, UILabel;

@interface AWEDitoPOIFavoriteChannelCellComponentView : DitoComponentView <CAAnimationDelegate> {
    AWEDitoPOIFavoriteChannelCellComponentViewModel *_viewModel;
    UIImageView *_coverImageView;
    UIImageView *_playIcon;
    UIView *_rightItemsContainer;
    UILabel *_titleLabel;
    UIView *_subTextContainer;
    UILabel *_categoryLabel;
    UILabel *_priceLabel;
    UILabel *_districtLabel;
    UILabel *_distanceLabel;
    UIView *_tagImgCollectInfoContainer;
    AWEDitoPOIFavoriteRankLabel *_rankLabel;
    YYLabel *_popularityLabel;
    YYLabel *_recommendCountLabel;
    UIView *_spuContainer;
    UIImageView *_spuHeadImageView;
    UILabel *_spuNameLabel;
    UILabel *_spuPriceLabel;
    UILabel *_collectTimeLabel;
    YYLabel *_cornerLabel;
    YYLabel *_arrivedLabel;
    YYLabel *_priceReductionLabel;
    CAShapeLayer *_bgShapeLayer;
}

@property (weak, nonatomic) AWEDitoPOIFavoriteChannelCellComponentViewModel *viewModel;
@property (weak, nonatomic) AWEDitoPOIFavoritePageContext *context;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIcon;
@property (retain, nonatomic) UIView *rightItemsContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *subTextContainer;
@property (retain, nonatomic) UILabel *categoryLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *districtLabel;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UIView *tagImgCollectInfoContainer;
@property (retain, nonatomic) AWEDitoPOIFavoriteRankLabel *rankLabel;
@property (retain, nonatomic) YYLabel *popularityLabel;
@property (retain, nonatomic) YYLabel *recommendCountLabel;
@property (retain, nonatomic) UIView *spuContainer;
@property (retain, nonatomic) UIImageView *spuHeadImageView;
@property (retain, nonatomic) UILabel *spuNameLabel;
@property (retain, nonatomic) UILabel *spuPriceLabel;
@property (retain, nonatomic) UILabel *collectTimeLabel;
@property (retain, nonatomic) YYLabel *cornerLabel;
@property (retain, nonatomic) YYLabel *arrivedLabel;
@property (retain, nonatomic) YYLabel *priceReductionLabel;
@property (retain, nonatomic) CAShapeLayer *bgShapeLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rankAndRecommendLabelFont;
+ (double)insetOfImageAndContainer;
+ (id)subTextFont;
+ (double)imageWidth;

- (id)cornerLabel;
- (void)setCornerLabel:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)updateViewModel:(id)arg0;
- (id)playIcon;
- (void)setPlayIcon:(id)arg0;
- (id)bgShapeLayer;
- (void)setBgShapeLayer:(id)arg0;
- (void)coverTapped:(id)arg0;
- (id)districtLabel;
- (id)recommendCountLabel;
- (id)popularityLabel;
- (id)collectTimeLabel;
- (id)spuNameLabel;
- (id)spuHeadImageView;
- (id)spuPriceLabel;
- (void)updatePriceReductionTag;
- (void)updateArrivedTag;
- (void)discriminateProfileScene;
- (id)rightItemsContainer;
- (id)arrivedLabel;
- (id)subTextContainer;
- (id)tagImgCollectInfoContainer;
- (id)spuContainer;
- (id)priceReductionLabel;
- (BOOL)tapGesture:(id)arg0 inView:(id)arg1;
- (void)didSelectedWithAreaString:(id)arg0;
- (void)startBackgroundAnimation;
- (void)openPOIDetailWithAreaString:(id)arg0;
- (id)spuTextColor;
- (void)componentViewDidCompleteShow;
- (void)setRightItemsContainer:(id)arg0;
- (void)setSubTextContainer:(id)arg0;
- (void)setDistrictLabel:(id)arg0;
- (void)setTagImgCollectInfoContainer:(id)arg0;
- (void)setPopularityLabel:(id)arg0;
- (void)setRecommendCountLabel:(id)arg0;
- (void)setSpuContainer:(id)arg0;
- (void)setSpuHeadImageView:(id)arg0;
- (void)setSpuNameLabel:(id)arg0;
- (void)setSpuPriceLabel:(id)arg0;
- (void)setCollectTimeLabel:(id)arg0;
- (void)setArrivedLabel:(id)arg0;
- (void)setPriceReductionLabel:(id)arg0;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)distanceLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (void)layoutSublayersOfLayer:(id)arg0;
- (id)viewModel;
- (void)prepareForReuse;
- (void)setTitleLabel:(id)arg0;
- (void)setDistanceLabel:(id)arg0;
- (void)setupUI;
- (id)categoryLabel;
- (void)setCategoryLabel:(id)arg0;
- (id)rankLabel;
- (void)setRankLabel:(id)arg0;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;

@end
