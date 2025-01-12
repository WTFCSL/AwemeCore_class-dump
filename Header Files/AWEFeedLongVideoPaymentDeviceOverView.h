//
//     Generated by private class-dump
//

@class UILabel, UIVisualEffectView, UIStackView;

@interface AWEFeedLongVideoPaymentDeviceOverView : UIView {
    UILabel *_mainTipLabel;
    UILabel *_subTipLabel;
    UIVisualEffectView *_blurView;
    UIStackView *_centerTipStack;
}

@property (retain, nonatomic) UILabel *mainTipLabel;
@property (retain, nonatomic) UILabel *subTipLabel;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIStackView *centerTipStack;

- (id)centerTipStack;
- (id)mainTipLabel;
- (id)subTipLabel;
- (void)setMainTipLabel:(id)arg0;
- (void)setSubTipLabel:(id)arg0;
- (void)setCenterTipStack:(id)arg0;
- (void)setBlurView:(id)arg0;
- (void).cxx_destruct;
- (id)blurView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;

@end
