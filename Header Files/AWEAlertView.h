//
//     Generated by private class-dump
//

@class UITextView, NSArray, AWEButton, UIImageView, UIView, UILabel;

@interface AWEAlertView : UIView {
    AWEButton *_buttonDeny;
    AWEButton *_buttonAllow;
    UIView *_animationView;
    UIView *_backgroundView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UITextView *_descriptionTextView;
    NSArray *_buttons;
    NSArray *_buttonTitles;
}

@property (retain, nonatomic) AWEButton *buttonDeny;
@property (retain, nonatomic) AWEButton *buttonAllow;
@property (retain, nonatomic) UIView *animationView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *descriptionTextView;
@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) NSArray *buttonTitles;

+ (void)showAlertWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 actionButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 actionBlock:(id /* block */)arg5 cancelBlock:(id /* block */)arg6;
+ (void)showAlertWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 buttonTitles:(id)arg3 buttonBlocks:(id)arg4;

- (id)initWithButtonsTitle:(id)arg0 image:(id)arg1 buttonBlocks:(id)arg2;
- (void)__showSelfDefineAlertWithAnimation;
- (id)buttonDeny;
- (id)buttonAllow;
- (void)__showAlertWithAnimation;
- (void)loadSubviews;
- (void)loadSubviewsWithButtonTitles:(id)arg0 image:(id)arg1 buttonBlocks:(id)arg2;
- (void)dismissSelfDefineAlert;
- (void)__dismissSelfDefineAlertWithAnimation;
- (void)__dismissAlertWithAnimation;
- (void)setButtonDeny:(id)arg0;
- (void)setButtonAllow:(id)arg0;
- (id)init;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)imageView;
- (void)setButtons:(id)arg0;
- (id)buttons;
- (id)titleLabel;
- (void)setImageView:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)dismissAlert;
- (id)animationView;
- (void)setAnimationView:(id)arg0;
- (id)buttonTitles;
- (void)setButtonTitles:(id)arg0;
- (id)descriptionTextView;
- (void)setDescriptionTextView:(id)arg0;

@end