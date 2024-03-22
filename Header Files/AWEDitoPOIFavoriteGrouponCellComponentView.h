//
//     Generated by private class-dump
//

@class AWEDitoPOIFavoriteGrouponCellViewModel, UIImageView, AWEPOITagsView, UILabel;

@interface AWEDitoPOIFavoriteGrouponCellComponentView : DitoComponentView {
    AWEDitoPOIFavoriteGrouponCellViewModel *_viewModel;
    UIImageView *_iconView;
    UILabel *_poiNameLabel;
    UIImageView *_rightIcon;
    UILabel *_distanceLabel;
    UIImageView *_coverImageView;
    UILabel *_grouponNameLabel;
    AWEPOITagsView *_labelsView;
    UILabel *_pricePrefixLabel;
    UILabel *_pricePrefixSymbolLabel;
    UILabel *_priceLabel;
    UILabel *_timesLabel;
    UILabel *_originPriceLabel;
    UILabel *_soldCountLabel;
}

@property (weak, nonatomic) AWEDitoPOIFavoriteGrouponCellViewModel *viewModel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *poiNameLabel;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *grouponNameLabel;
@property (retain, nonatomic) AWEPOITagsView *labelsView;
@property (retain, nonatomic) UILabel *pricePrefixLabel;
@property (retain, nonatomic) UILabel *pricePrefixSymbolLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *timesLabel;
@property (retain, nonatomic) UILabel *originPriceLabel;
@property (retain, nonatomic) UILabel *soldCountLabel;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)updateViewModel:(id)arg0;
- (void)setOriginPriceLabel:(id)arg0;
- (id)originPriceLabel;
- (id)pricePrefixLabel;
- (void)setPricePrefixLabel:(id)arg0;
- (void)setPoiNameLabel:(id)arg0;
- (id)poiNameLabel;
- (void)setRightIcon:(id)arg0;
- (id)grouponNameLabel;
- (id)pricePrefixSymbolLabel;
- (id)timesLabel;
- (id)soldCountLabel;
- (void)handleTapContainerView:(id)arg0;
- (void)handleTapPoiName:(id)arg0;
- (id)getPoiNameLabelTextWith:(id)arg0 text2:(id)arg1 text3:(id)arg2;
- (id)priceString:(long long)arg0;
- (void)setupWithItem:(id)arg0;
- (void)setGrouponNameLabel:(id)arg0;
- (void)setLabelsView:(id)arg0;
- (void)setPricePrefixSymbolLabel:(id)arg0;
- (void)setTimesLabel:(id)arg0;
- (void)setSoldCountLabel:(id)arg0;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)distanceLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)prepareForReuse;
- (id)labelsView;
- (void)setDistanceLabel:(id)arg0;
- (void)setupUI;
- (id)rightIcon;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;
- (double)moduleHeight;

@end