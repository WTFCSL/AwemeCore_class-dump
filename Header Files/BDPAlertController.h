//
//     Generated by private class-dump
//

@class UIFont, NSString, UIView, BDPAlertSpringAnimator, UIImage, BDPAlertView, BDPAlertControllerTheme, NSMutableArray, UIViewController, NSNumber, UIColor;

@interface BDPAlertController : UIViewController <UIViewControllerTransitioningDelegate, BDPAlertViewDelegate> {
    BOOL _actionBeforeDismiss;
    BOOL _editable;
    NSString *_title;
    UIFont *_titleFont;
    UIColor *_titleColor;
    NSString *_message;
    UIFont *_messageFont;
    UIColor *_messageColor;
    NSNumber *_cornerRadius;
    NSString *_placeholderText;
    BDPAlertSpringAnimator *_animator;
    UIImage *_image;
    BDPAlertControllerTheme *_theme;
    UIViewController *_myParentViewController;
    UIView *_coverView;
    long long _alertStyle;
    BDPAlertView *_alertView;
    NSMutableArray *_actions;
}

@property (weak, nonatomic) UIViewController *myParentViewController;
@property (retain, nonatomic) UIView *coverView;
@property (readonly, nonatomic) long long alertStyle;
@property (retain, nonatomic) BDPAlertView *alertView;
@property (retain, nonatomic) NSMutableArray *actions;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIFont *titleFont;
@property (copy, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) UIFont *messageFont;
@property (copy, nonatomic) UIColor *messageColor;
@property (copy, nonatomic) NSNumber *cornerRadius;
@property (copy, nonatomic) NSString *placeholderText;
@property (nonatomic) BOOL actionBeforeDismiss;
@property (retain, nonatomic) BDPAlertSpringAnimator *animator;
@property (nonatomic) BOOL editable;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) BDPAlertControllerTheme *theme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)themedAlertControllerWithTitle:(id)arg0 message:(id)arg1;
+ (id)alertControllerWithTitle:(id)arg0 message:(id)arg1;
+ (id)themedAlertControllerWithTitle:(id)arg0 message:(id)arg1 image:(id)arg2;
+ (id)themedAlertControllerWithTitle:(id)arg0 message:(id)arg1 image:(id)arg2 placeholderText:(id)arg3 editable:(BOOL)arg4;
+ (id)themedCalendarAlertControllerWithTitle:(id)arg0 message:(id)arg1;

- (BOOL)awe_shouldBypassPresentationHook;
- (void)showFromParentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)dismissFromParentAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)alertView:(id)arg0 tapdAction:(id)arg1;
- (id)myParentViewController;
- (void)setMyParentViewController:(id)arg0;
- (void)setMessageColor:(id)arg0;
- (void)keyBoardWillShow:(id)arg0;
- (void)keyBoardWillHide:(id)arg0;
- (id)initWithTitle:(id)arg0 message:(id)arg1 image:(id)arg2 theme:(id)arg3;
- (id)initWithTitle:(id)arg0 message:(id)arg1 image:(id)arg2 placeholderText:(id)arg3 editable:(BOOL)arg4 theme:(id)arg5;
- (void)setActionBeforeDismiss:(BOOL)arg0;
- (BOOL)actionBeforeDismiss;
- (void)alertView:(id)arg0 setMessage:(id)arg1;
- (void)setMessage:(id)arg0;
- (id)animator;
- (BOOL)shouldAutorotate;
- (void)addAction:(id)arg0;
- (void)setTheme:(id)arg0;
- (void).cxx_destruct;
- (id)theme;
- (void)setAlertView:(id)arg0;
- (unsigned long long)supportedInterfaceOrientations;
- (id)image;
- (id)actions;
- (long long)alertStyle;
- (id)cornerRadius;
- (id)titleColor;
- (id)message;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (id)title;
- (void)setImage:(id)arg0;
- (void)setActions:(id)arg0;
- (void)setTitleColor:(id)arg0;
- (id)animationControllerForDismissedController:(id)arg0;
- (id)titleFont;
- (void)setAnimator:(id)arg0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setCornerRadius:(id)arg0;
- (id)alertView;
- (void)setTitleFont:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setEditable:(BOOL)arg0;
- (BOOL)editable;
- (void)setPlaceholderText:(id)arg0;
- (id)placeholderText;
- (void)setMessageFont:(id)arg0;
- (id)messageFont;
- (id)messageColor;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end
