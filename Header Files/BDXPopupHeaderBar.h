//
//     Generated by private class-dump
//

@class UIFont, NSString, UIImage, UIView, UIButton, UIViewController, UILabel, UIColor;
@protocol BDXContainerProtocol;

@interface BDXPopupHeaderBar : UIView <BDXNavigationBarProtocol> {
    UIViewController<BDXContainerProtocol> *container;
    id /* block */ onLeftButtonClick;
    id /* block */ onRightButtonClick;
    double _bottomLineHeight;
    UIImage *_closeButtonImage;
    UIImage *_closeButtonBackgroundImage;
    NSString *_closeButtonTitle;
    UIFont *_closeButtonFont;
    UIColor *_closeButtonTitleColor;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    UIView *_sepLine;
}

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *sepLine;
@property (nonatomic) double bottomLineHeight;
@property (retain, nonatomic) UIColor *bottomLineColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIButton *closeHBarButton;
@property (retain, nonatomic) UIImage *closeButtonImage;
@property (retain, nonatomic) UIImage *closeButtonBackgroundImage;
@property (retain, nonatomic) NSString *closeButtonTitle;
@property (retain, nonatomic) UIFont *closeButtonFont;
@property (retain, nonatomic) UIColor *closeButtonTitleColor;
@property (weak, nonatomic) UIViewController<BDXContainerProtocol> *container;
@property (copy, nonatomic) id /* block */ onLeftButtonClick;
@property (copy, nonatomic) id /* block */ onRightButtonClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithTarget:(id)arg0 action:(SEL)arg1;

- (void)setSepLine:(id)arg0;
- (id)sepLine;
- (id)closeButtonImage;
- (void)setCloseButtonImage:(id)arg0;
- (void)attachToContainerWithParams:(id)arg0 context:(id)arg1;
- (id /* block */)onLeftButtonClick;
- (void)setOnLeftButtonClick:(id /* block */)arg0;
- (id /* block */)onRightButtonClick;
- (void)setOnRightButtonClick:(id /* block */)arg0;
- (double)bottomLineHeight;
- (id)closeButtonTitle;
- (id)closeButtonBackgroundImage;
- (id)closeButtonFont;
- (id)closeButtonTitleColor;
- (void)handleCloseButton:(id)arg0;
- (void)setBottomLineHeight:(double)arg0;
- (void)setCloseButtonTitle:(id)arg0;
- (void)setCloseButtonBackgroundImage:(id)arg0;
- (void)setCloseButtonFont:(id)arg0;
- (void)setCloseButtonTitleColor:(id)arg0;
- (void)__layOutSubViews;
- (id)closeHBarButton;
- (id)container;
- (id)init;
- (void).cxx_destruct;
- (void)commonInit;
- (void)setContainer:(id)arg0;
- (id)titleLabel;
- (id)titleColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (id)initWithCoder:(id)arg0;
- (void)setTitleColor:(id)arg0;
- (id)titleFont;
- (void)setTitleLabel:(id)arg0;
- (void)setTitleFont:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)bottomLineColor;
- (void)setBottomLineColor:(id)arg0;

@end
