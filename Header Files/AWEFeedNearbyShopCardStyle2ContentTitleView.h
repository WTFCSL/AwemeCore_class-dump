//
//     Generated by private class-dump
//

@class UILabel;

@interface AWEFeedNearbyShopCardStyle2ContentTitleView : UIView {
    UILabel *_poiTitleLabel;
    UILabel *_poiInfoLabel;
}

@property (retain, nonatomic) UILabel *poiTitleLabel;
@property (retain, nonatomic) UILabel *poiInfoLabel;

- (void)updateWithPOIShopCardModel:(id)arg0;
- (id)poiTitleLabel;
- (id)poiInfoLabel;
- (void)setPoiTitleLabel:(id)arg0;
- (void)setPoiInfoLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (void)layoutUI;

@end
