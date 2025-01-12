//
//     Generated by private class-dump
//

@class UIView;

@interface AWEIMActiveUserIndicativeView : UIView {
    BOOL _isGreenDotColorChanged;
    BOOL _isFromSharePanel;
    UIView *_greenDot;
    double _outerW;
    double _innerW;
}

@property (retain, nonatomic) UIView *greenDot;
@property (nonatomic) double outerW;
@property (nonatomic) double innerW;
@property (nonatomic) BOOL isGreenDotColorChanged;
@property (nonatomic) BOOL isFromSharePanel;

+ (id)greenDotDefaultColor;

- (void)setGreenDotColor:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 innerW:(double)arg1 outerW:(double)arg2;
- (double)outerW;
- (double)innerW;
- (void)setOuterW:(double)arg0;
- (void)setInnerW:(double)arg0;
- (BOOL)isFromSharePanel;
- (void)setIsFromSharePanel:(BOOL)arg0;
- (id)greenDot;
- (void)setGreenDot:(id)arg0;
- (void)updateUIStyle;
- (void)resetGreenDotColor;
- (void)setIsGreenDotColorChanged:(BOOL)arg0;
- (void)setGreenDotBackGroundColor:(id)arg0;
- (void)resetGreenDotFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isGreenDotColorChanged;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
