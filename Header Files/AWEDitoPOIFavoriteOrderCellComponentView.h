//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWEPOITagsView, UILabel, AWEDitoPOIFavoriteOrderCellViewModel;

@interface AWEDitoPOIFavoriteOrderCellComponentView : DitoComponentView {
    AWEDitoPOIFavoriteOrderCellViewModel *_viewModel;
    NSString *_POINameString;
    UIImageView *_iconView;
    UILabel *_poiNameLabel;
    UIImageView *_rightIcon;
    UILabel *_stateLabel;
    UIImageView *_coverImageView;
    UILabel *_orderNameLabel;
    UILabel *_singlePriceLabel;
    UILabel *_validDateLabel;
    UILabel *_countLabel;
    AWEPOITagsView *_labelsView;
    UILabel *_pricePrefixLabel;
    UILabel *_pricePrefixSymbolLabel;
    UILabel *_totalPriceLabel;
}

@property (weak, nonatomic) AWEDitoPOIFavoriteOrderCellViewModel *viewModel;
@property (retain, nonatomic) NSString *POINameString;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *poiNameLabel;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *orderNameLabel;
@property (retain, nonatomic) UILabel *singlePriceLabel;
@property (retain, nonatomic) UILabel *validDateLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) AWEPOITagsView *labelsView;
@property (retain, nonatomic) UILabel *pricePrefixLabel;
@property (retain, nonatomic) UILabel *pricePrefixSymbolLabel;
@property (retain, nonatomic) UILabel *totalPriceLabel;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)updateViewModel:(id)arg0;
- (id)pricePrefixLabel;
- (void)setPricePrefixLabel:(id)arg0;
- (void)setPoiNameLabel:(id)arg0;
- (id)poiNameLabel;
- (void)setRightIcon:(id)arg0;
- (id)pricePrefixSymbolLabel;
- (void)handleTapContainerView:(id)arg0;
- (void)handleTapPoiName:(id)arg0;
- (id)getPoiNameLabelTextWith:(id)arg0 text2:(id)arg1 text3:(id)arg2;
- (id)priceString:(long long)arg0;
- (void)setLabelsView:(id)arg0;
- (void)setPricePrefixSymbolLabel:(id)arg0;
- (id)orderNameLabel;
- (id)singlePriceLabel;
- (id)validDateLabel;
- (id)totalPriceLabel;
- (id)priceStringWithPrefix:(long long)arg0;
- (id)POINameString;
- (void)setPOINameString:(id)arg0;
- (void)setOrderNameLabel:(id)arg0;
- (void)setSinglePriceLabel:(id)arg0;
- (void)setValidDateLabel:(id)arg0;
- (void)setTotalPriceLabel:(id)arg0;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)updateWithItem:(id)arg0;
- (id)labelsView;
- (void)setupUI;
- (id)countLabel;
- (void)setCountLabel:(id)arg0;
- (id)rightIcon;
- (double)moduleHeight;
- (id)stateLabel;
- (void)setStateLabel:(id)arg0;

@end