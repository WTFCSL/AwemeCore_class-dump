//
//     Generated by private class-dump
//

@class NSString, UIImage, DUXButton, UIButton;

@interface AFDSnackBarRightView : UIView {
    double _paddingForButtons;
    NSString *_confirmButtonTitle;
    UIImage *_dismissButtonImage;
    id /* block */ _confirmBlock;
    id /* block */ _dismissBlock;
    DUXButton *_confirmButton;
    UIButton *_dismissButton;
}

@property (nonatomic) double paddingForButtons;
@property (copy, nonatomic) NSString *confirmButtonTitle;
@property (retain, nonatomic) UIImage *dismissButtonImage;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (retain, nonatomic) UIButton *dismissButton;

- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg0;
- (void)setupConstaints;
- (void)setDismissButtonImage:(id)arg0;
- (double)paddingForButtons;
- (void)setPaddingForButtons:(double)arg0;
- (id)dismissButtonImage;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)dismissButton;
- (void)setDismissButton:(id)arg0;
- (void)confirm;
- (id)confirmButtonTitle;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (void)setConfirmButtonTitle:(id)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
