//
//     Generated by private class-dump
//

@class UIFont, NSString, UIView, UIImage, UIButton, BDXNavigationBarButton, UILabel, UIColor;

@interface BDXNavigationBar : UIView {
    BOOL _immersiveMode;
    double _bottomLineHeight;
    UIImage *_leftButtonImage;
    NSString *_leftButtonAccessibilityLabel;
    UIImage *_leftButtonBackgroundImage;
    NSString *_leftButtonTitle;
    UIFont *_leftButtonFont;
    UIColor *_leftButtonTitleColor;
    UIImage *_closeButtonImage;
    UIImage *_closeButtonBackgroundImage;
    NSString *_closeButtonTitle;
    UIFont *_closeButtonFont;
    UIColor *_closeButtonTitleColor;
    UIImage *_rightButtonImage;
    UIImage *_rightButtonBackgroundImage;
    NSString *_rightButtonTitle;
    UIFont *_rightButtonFont;
    UIColor *_rightButtonTitleColor;
    double _fontScale;
    UILabel *_titleLabel;
    BDXNavigationBarButton *_leftButton;
    UIButton *_closeButton;
    BDXNavigationBarButton *_rightButton;
    UIView *_sepLine;
    id /* block */ _leftButtonAction;
    id /* block */ _closeButtonAction;
    id /* block */ _rightButtonAction;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) BDXNavigationBarButton *leftButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) BDXNavigationBarButton *rightButton;
@property (retain, nonatomic) UIView *sepLine;
@property (copy, nonatomic) id /* block */ leftButtonAction;
@property (copy, nonatomic) id /* block */ closeButtonAction;
@property (copy, nonatomic) id /* block */ rightButtonAction;
@property (nonatomic) BOOL immersiveMode;
@property (nonatomic) double bottomLineHeight;
@property (retain, nonatomic) UIColor *bottomLineColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIButton *leftNaviButton;
@property (retain, nonatomic) UIImage *leftButtonImage;
@property (copy, nonatomic) NSString *leftButtonAccessibilityLabel;
@property (retain, nonatomic) UIImage *leftButtonBackgroundImage;
@property (copy, nonatomic) NSString *leftButtonTitle;
@property (retain, nonatomic) UIFont *leftButtonFont;
@property (retain, nonatomic) UIColor *leftButtonTitleColor;
@property (readonly, nonatomic) UIButton *closeNaviButton;
@property (retain, nonatomic) UIImage *closeButtonImage;
@property (retain, nonatomic) UIImage *closeButtonBackgroundImage;
@property (copy, nonatomic) NSString *closeButtonTitle;
@property (retain, nonatomic) UIFont *closeButtonFont;
@property (retain, nonatomic) UIColor *closeButtonTitleColor;
@property (readonly, nonatomic) UIButton *rightNaviButton;
@property (retain, nonatomic) UIImage *rightButtonImage;
@property (retain, nonatomic) UIImage *rightButtonBackgroundImage;
@property (copy, nonatomic) NSString *rightButtonTitle;
@property (retain, nonatomic) UIFont *rightButtonFont;
@property (retain, nonatomic) UIColor *rightButtonTitleColor;
@property (nonatomic) double fontScale;

+ (id)defaultNavigationBar;
+ (id)buttonWithTarget:(id)arg0 action:(SEL)arg1;
+ (double)topMargin;

- (void)setSepLine:(id)arg0;
- (id)sepLine;
- (id)closeButtonImage;
- (void)setCloseButtonImage:(id)arg0;
- (id)rightButtonTitle;
- (void)setRightButtonTitle:(id)arg0;
- (void)setImmersiveMode:(BOOL)arg0;
- (BOOL)immersiveMode;
- (id)leftButtonTitle;
- (void)setLeftButtonTitle:(id)arg0;
- (void)setLeftButtonImage:(id)arg0;
- (void)setLeftButtonActionBlock:(id /* block */)arg0;
- (id /* block */)rightButtonAction;
- (void)setRightButtonAction:(id /* block */)arg0;
- (id /* block */)leftButtonAction;
- (double)bottomLineHeight;
- (id)leftButtonImage;
- (id)leftButtonBackgroundImage;
- (id)leftButtonFont;
- (id)leftButtonAccessibilityLabel;
- (id)leftButtonTitleColor;
- (id)closeButtonTitle;
- (id)closeButtonBackgroundImage;
- (id)closeButtonFont;
- (id)closeButtonTitleColor;
- (id)rightButtonImage;
- (id)rightButtonBackgroundImage;
- (id)rightButtonFont;
- (id)rightButtonTitleColor;
- (void)setLeftButtonAction:(id /* block */)arg0;
- (void)handleLeftButton:(id)arg0;
- (void)handleCloseButton:(id)arg0;
- (void)handleRightButton:(id)arg0;
- (void)setCloseButtonActionBlock:(id /* block */)arg0;
- (void)setRightButtonActionBlock:(id /* block */)arg0;
- (void)setBottomLineHeight:(double)arg0;
- (id)leftNaviButton;
- (id)closeNaviButton;
- (id)rightNaviButton;
- (void)setLeftButtonFont:(id)arg0;
- (void)setLeftButtonTitleColor:(id)arg0;
- (void)setLeftButtonBackgroundImage:(id)arg0;
- (void)setCloseButtonTitle:(id)arg0;
- (void)setCloseBButtonFont:(id)arg0;
- (void)setCloseBButtonTitleColor:(id)arg0;
- (void)setCloseBButtonImage:(id)arg0;
- (void)setCloseBButtonBackgroundImage:(id)arg0;
- (void)setRightButtonFont:(id)arg0;
- (void)setRightButtonTitleColor:(id)arg0;
- (void)setRightButtonImage:(id)arg0;
- (void)setRightButtonBackgroundImage:(id)arg0;
- (void)setLeftButtonAccessibilityLabel:(id)arg0;
- (void)setCloseButtonBackgroundImage:(id)arg0;
- (void)setCloseButtonFont:(id)arg0;
- (void)setCloseButtonTitleColor:(id)arg0;
- (void)setLeftButton:(id)arg0;
- (id)leftButton;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (double)navigationBarHeight;
- (id)rightButton;
- (void).cxx_destruct;
- (double)topMargin;
- (void)commonInit;
- (void)setRightButton:(id)arg0;
- (id)titleLabel;
- (id)titleColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (id)initWithCoder:(id)arg0;
- (void)setTitleColor:(id)arg0;
- (id)titleFont;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)setTitleFont:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (double)fontScale;
- (void)setFontScale:(double)arg0;
- (void)setCloseButtonAction:(id /* block */)arg0;
- (id /* block */)closeButtonAction;
- (id)bottomLineColor;
- (void)setBottomLineColor:(id)arg0;

@end
