//
//     Generated by private class-dump
//

@class UILabel, YYLabel, UIView;
@protocol AWENearbyPOIInfoCardModel;

@interface AWENearbyPOIAddressView : UIView {
    id<AWENearbyPOIInfoCardModel> _model;
    UILabel *_poiDistantLabel;
    YYLabel *_poiAddressLabel;
    UIView *_line;
}

@property (retain, nonatomic) id<AWENearbyPOIInfoCardModel> model;
@property (retain, nonatomic) UILabel *poiDistantLabel;
@property (retain, nonatomic) YYLabel *poiAddressLabel;
@property (retain, nonatomic) UIView *line;

- (void)configViews;
- (void)configViewsWithModel:(id)arg0;
- (id)poiDistantLabel;
- (id)poiAddressLabel;
- (void)setPoiDistantLabel:(id)arg0;
- (void)setPoiAddressLabel:(id)arg0;
- (void)setModel:(id)arg0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)line;
- (void)setLine:(id)arg0;

@end