//
//     Generated by private class-dump
//

@class UIButton, UILabel;

@interface AWEAnchorAdditionFakeNavBar : UIView {
    UIButton *_backButton;
    UILabel *_titleLable;
}

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLable;

- (id)titleLable;
- (void)setTitleLable:(id)arg0;
- (void)setupFakeNavBarFUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)updateTitle:(id)arg0;

@end
