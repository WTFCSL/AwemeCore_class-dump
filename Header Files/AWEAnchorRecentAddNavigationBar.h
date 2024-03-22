//
//     Generated by private class-dump
//

@class UIButton, UILabel;

@interface AWEAnchorRecentAddNavigationBar : UIView {
    id /* block */ _leftTappedBlock;
    id /* block */ _rightTappedBlock;
    UILabel *_titleLabel;
    UIButton *_leftButton;
    UIButton *_rightButton;
}

@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (copy, nonatomic) id /* block */ leftTappedBlock;
@property (copy, nonatomic) id /* block */ rightTappedBlock;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)leftBtnTapped:(id)arg0;
- (void)rightBtnTapped:(id)arg0;
- (id /* block */)leftTappedBlock;
- (id /* block */)rightTappedBlock;
- (void)updateEditMode:(BOOL)arg0;
- (void)setLeftTappedBlock:(id /* block */)arg0;
- (void)setRightTappedBlock:(id /* block */)arg0;
- (void)setLeftButton:(id)arg0;
- (id)leftButton;
- (id)rightButton;
- (void).cxx_destruct;
- (void)setRightButton:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;

@end