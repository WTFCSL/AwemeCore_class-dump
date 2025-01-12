//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, NLETrackSlot_OC;

@interface DVELongPressItemInfoView : UIView {
    UILabel *_durationLabel;
    NLETrackSlot_OC *_slot;
    UIImageView *_gradientView;
    UIView *_bgView;
}

@property (retain, nonatomic) UIImageView *gradientView;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) NLETrackSlot_OC *slot;

- (void)updateCornerMaskLayer;
- (id)slot;
- (void).cxx_destruct;
- (void)setGradientView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSlot:(id)arg0;
- (void)layoutSubviews;
- (id)gradientView;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setupUI;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg0;

@end
