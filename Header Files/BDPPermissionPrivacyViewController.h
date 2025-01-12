//
//     Generated by private class-dump
//

@class NSString, UIView, BDPPrivacyRegulationAlertView, UIViewController;

@interface BDPPermissionPrivacyViewController : UIViewController <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, BDPPrivacyRegulationAlertViewDelegate> {
    BOOL _shouldUseUnionPrivacy;
    id /* block */ _privacyAnimationBlock;
    UIView *_contentView;
    UIView *_containerView;
    UIViewController *_alertViewController;
    BDPPrivacyRegulationAlertView *_privacyView;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIViewController *alertViewController;
@property (retain, nonatomic) BDPPrivacyRegulationAlertView *privacyView;
@property (nonatomic) BOOL shouldUseUnionPrivacy;
@property (copy, nonatomic) id /* block */ privacyAnimationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)privacyOnclickClose:(id)arg0;
- (void)setPrivacyAnimationBlock:(id /* block */)arg0;
- (void)showViewControllerCompletion:(id /* block */)arg0;
- (BOOL)shouldUseUnionPrivacy;
- (void)setShouldUseUnionPrivacy:(BOOL)arg0;
- (id /* block */)privacyAnimationBlock;
- (BOOL)shouldAutorotate;
- (id)initWithContentView:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (void)setContainerView:(id)arg0;
- (void)setAlertViewController:(id)arg0;
- (id)contentView;
- (id)containerView;
- (id)animationControllerForDismissedController:(id)arg0;
- (void)viewDidLoad;
- (id)alertViewController;
- (void)setContentView:(id)arg0;
- (id)privacyView;
- (void)setPrivacyView:(id)arg0;

@end
