//
//     Generated by private class-dump
//

@class UIButton, UIView;

@interface AWEProfileEditMainNavView : UIView {
    id /* block */ _backButtonBlock;
    id /* block */ _changeBackgroundButtonBlock;
    UIView *_backgroundView;
    UIButton *_backButton;
    UIView *_backBackgroundView;
    UIButton *_changeBackgroundButton;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *backBackgroundView;
@property (retain, nonatomic) UIButton *changeBackgroundButton;
@property (copy, nonatomic) id /* block */ backButtonBlock;
@property (copy, nonatomic) id /* block */ changeBackgroundButtonBlock;

- (void)configWithViewModel:(id)arg0;
- (void)p_setupSubviews;
- (id /* block */)backButtonBlock;
- (void)setBackButtonBlock:(id /* block */)arg0;
- (void)observerScrollWith:(id)arg0;
- (id)changeBackgroundButton;
- (id)backBackgroundView;
- (id /* block */)changeBackgroundButtonBlock;
- (void)changeBackgroundButtonTapped:(id)arg0;
- (void)setChangeBackgroundButtonBlock:(id /* block */)arg0;
- (void)setBackBackgroundView:(id)arg0;
- (void)setChangeBackgroundButton:(id)arg0;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)accessibilityElements;
- (id)backButton;
- (void)setBackgroundView:(id)arg0;
- (void)setBackButton:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)backButtonTapped:(id)arg0;

@end