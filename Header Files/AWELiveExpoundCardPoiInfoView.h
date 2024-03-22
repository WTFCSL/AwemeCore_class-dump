//
//     Generated by private class-dump
//

@class UILabel, UIView, UIStackView;

@interface AWELiveExpoundCardPoiInfoView : UIView {
    UIStackView *_poiDetailView;
    UILabel *_distanceLabel;
    UILabel *_poiTextLabel;
    UIView *_line;
}

@property (retain, nonatomic) UIStackView *poiDetailView;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UILabel *poiTextLabel;
@property (retain, nonatomic) UIView *line;

- (id)poiDetailView;
- (id)poiTextLabel;
- (void)configWithDistance:(id)arg0 poiText:(id)arg1;
- (id)currentShowPoiName;
- (void)setPoiDetailView:(id)arg0;
- (void)setPoiTextLabel:(id)arg0;
- (void).cxx_destruct;
- (id)distanceLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)line;
- (void)setLine:(id)arg0;
- (void)setDistanceLabel:(id)arg0;
- (void)setupUI;

@end
