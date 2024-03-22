//
//     Generated by private class-dump
//

@class UIColor, UIVisualEffectView, UILabel, UIView;

@interface IESLiveProgressHUD : UIView {
    UILabel *_label;
    UIView *_customView;
    UIColor *_backgroundColor;
    double _margin;
    double _cornerRadius;
    UIView *_backgroundView;
    UIVisualEffectView *_effectView;
    UIView *_indicator;
    UIView *_topSpacer;
    UIView *_bottomSpacer;
    double _padding;
    struct CGSize { double width; double height; } _minSize;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *indicator;
@property (retain, nonatomic) UIView *topSpacer;
@property (retain, nonatomic) UIView *bottomSpacer;
@property (nonatomic) double padding;
@property (readonly, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (nonatomic) double margin;
@property (nonatomic) double cornerRadius;

+ (id)HUDForView:(id)arg0;
+ (id)showHUDAddedTo:(id)arg0;
+ (BOOL)hideHUDForView:(id)arg0;
+ (void)hideHUDForView:(id)arg0 afterDelay:(double)arg1;

- (void)hideAfterDelay:(double)arg0;
- (id)bottomSpacer;
- (void)updatePaddingConstraints:(id)arg0 With:(id)arg1;
- (void)setBottomSpacer:(id)arg0;
- (id)initWithView:(id)arg0;
- (double)margin;
- (void)setPadding:(double)arg0;
- (struct CGSize { double x0; double x1; })minSize;
- (id)backgroundView;
- (id)effectView;
- (void).cxx_destruct;
- (void)commonInit;
- (double)cornerRadius;
- (void)setIndicator:(id)arg0;
- (id)indicator;
- (void)setEffectView:(id)arg0;
- (void)setMargin:(double)arg0;
- (void)hide;
- (id)customView;
- (id)backgroundColor;
- (void)updateConstraints;
- (double)padding;
- (void)setMinSize:(struct CGSize { double x0; double x1; })arg0;
- (id)label;
- (void)setCornerRadius:(double)arg0;
- (void)setCustomView:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (void)setupViews;
- (id)topSpacer;
- (void)setTopSpacer:(id)arg0;

@end
