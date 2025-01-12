//
//     Generated by private class-dump
//

@class UIStackView, CAGradientLayer, UIImageView, UIView, UILabel;

@interface AWELiveShelfCellAddressView : UIView {
    id /* block */ _updateIsTextBlock;
    UIStackView *_poiDetailView;
    UIStackView *_addressStackView;
    UIView *_locationIconBackgoundView;
    UIImageView *_locationIconView;
    CAGradientLayer *_locationIconViewGradientLayer;
    CAGradientLayer *_distanceBackgroundGradientLayer;
    UILabel *_distanceLabel;
    UILabel *_addressLabel;
    UILabel *_customLabel;
    UILabel *_calculateLabel;
    UIView *_line;
    UIImageView *_arrowView;
}

@property (retain, nonatomic) UIStackView *poiDetailView;
@property (retain, nonatomic) UIStackView *addressStackView;
@property (retain, nonatomic) UIView *locationIconBackgoundView;
@property (retain, nonatomic) UIImageView *locationIconView;
@property (retain, nonatomic) CAGradientLayer *locationIconViewGradientLayer;
@property (retain, nonatomic) CAGradientLayer *distanceBackgroundGradientLayer;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UILabel *addressLabel;
@property (retain, nonatomic) UILabel *customLabel;
@property (retain, nonatomic) UILabel *calculateLabel;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIImageView *arrowView;
@property (copy, nonatomic) id /* block */ updateIsTextBlock;

- (id)locationIconView;
- (void)setLocationIconView:(id)arg0;
- (id)poiDetailView;
- (void)setPoiDetailView:(id)arg0;
- (id)addressStackView;
- (id)locationIconBackgoundView;
- (id)distanceBackgroundGradientLayer;
- (id)locationIconViewGradientLayer;
- (void)configShopCountStrategyWithShopsNumber:(long long)arg0 address:(id)arg1;
- (void)gradientLayerWithStartPointX:(double)arg0 endPointX:(double)arg1 startColor:(id)arg2 endColor:(id)arg3;
- (void)setupWithDistance:(id)arg0 address:(id)arg1 shopsNumber:(unsigned long long)arg2;
- (void)setArrowViewHidden:(BOOL)arg0;
- (void)updateLocationStyle:(unsigned long long)arg0 locationIconHiddenState:(BOOL)arg1;
- (id)calculateLabel;
- (id /* block */)updateIsTextBlock;
- (void)setUpdateIsTextBlock:(id /* block */)arg0;
- (void)setAddressStackView:(id)arg0;
- (void)setLocationIconBackgoundView:(id)arg0;
- (void)setLocationIconViewGradientLayer:(id)arg0;
- (void)setDistanceBackgroundGradientLayer:(id)arg0;
- (void)setCalculateLabel:(id)arg0;
- (id)customLabel;
- (void)setCustomLabel:(id)arg0;
- (void).cxx_destruct;
- (id)distanceLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)line;
- (void)layoutSubviews;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (void)setLine:(id)arg0;
- (void)setDistanceLabel:(id)arg0;
- (void)setupUI;
- (id)addressLabel;
- (void)setAddressLabel:(id)arg0;

@end
