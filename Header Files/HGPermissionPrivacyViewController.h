//
//     Generated by private class-dump
//

@class NSString, HGPrivacyRegulationAlertView, UIView;

@interface HGPermissionPrivacyViewController : UIViewController <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, HGPrivacyRegulationAlertViewDelegate> {
    id /* block */ _PrivacyAnimationBlock;
    UIView *_containerView;
    UIView *_contentView;
    HGPrivacyRegulationAlertView *_privacyView;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) HGPrivacyRegulationAlertView *privacyView;
@property (copy, nonatomic) id /* block */ PrivacyAnimationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)PrivacyAnimationBlock;
- (void)privacyOnclickClose:(id)arg0;
- (void)setPrivacyAnimationBlock:(id /* block */)arg0;
- (void)showViewControllerCompletion:(id /* block */)arg0;
- (BOOL)shouldAutorotate;
- (id)initWithContentView:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (void)setContainerView:(id)arg0;
- (id)contentView;
- (id)containerView;
- (id)animationControllerForDismissedController:(id)arg0;
- (void)viewDidLoad;
- (void)setContentView:(id)arg0;
- (id)privacyView;
- (void)setPrivacyView:(id)arg0;

@end
