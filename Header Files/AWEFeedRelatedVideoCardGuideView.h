//
//     Generated by private class-dump
//

@class DUXLottieView, NSString, UIView, UILabel, UIPanGestureRecognizer;

@interface AWEFeedRelatedVideoCardGuideView : UIView {
    id /* block */ _dismissBlock;
    NSString *_title;
    UIView *_maskView;
    DUXLottieView *_lottieView;
    UILabel *_titleLabel;
    UIPanGestureRecognizer *_horizontalPan;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) DUXLottieView *lottieView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIPanGestureRecognizer *horizontalPan;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (id)lottieView;
- (void)setLottieView:(id)arg0;
- (void)addPanGestureRecognizer;
- (id)getDUXLottieName;
- (void)setHorizontalPan:(id)arg0;
- (id)horizontalPan;
- (void)disMiss;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 withTitle:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)maskView;
- (id)title;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (void)setMaskView:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setupView;
- (void)handlePanGesture:(id)arg0;
- (void)tap;
- (void)autoRemove;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
