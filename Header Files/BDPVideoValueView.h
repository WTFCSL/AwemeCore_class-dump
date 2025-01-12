//
//     Generated by private class-dump
//

@class UIImageView, NSString, UIView;

@interface BDPVideoValueView : UIView {
    NSString *_imageName;
    UIImageView *_iconView;
    UIView *_valueBgView;
    UIView *_fillView;
    double _value;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *valueBgView;
@property (retain, nonatomic) UIView *fillView;
@property (nonatomic) double value;
@property (retain, nonatomic) NSString *imageName;

- (void)setValueBgView:(id)arg0;
- (id)valueBgView;
- (void).cxx_destruct;
- (id)imageName;
- (double)value;
- (void)setImageName:(id)arg0;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)fillView;
- (void)layoutSubviews;
- (void)setValue:(double)arg0;
- (void)updateValue:(double)arg0;
- (void)setFillView:(id)arg0;

@end
