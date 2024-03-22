//
//     Generated by private class-dump
//

@class BDPShortTermSubscribeFooterView, NSString, BDPPermissionAlertBaseButtonView, BDPPermissionAlertView, UIView, BDPUniqueID, BDPPrivacyRegulationView;

@interface BDPPermissionAlertController : UIViewController <BDPPermissionViewDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, BDPPrivacyRegulationViewDelegate> {
    BOOL _shouldRunDisplayAnimation;
    id /* block */ _cancelButtonClickCompletion;
    id /* block */ _confirmButtonClickCompletion;
    id /* block */ _protocolButtonClickCompletion;
    id /* block */ _viewDidAppearBlock;
    id /* block */ _viewDidDisappearBlock;
    UIView *_footerView;
    UIView *_contentView;
    BDPPermissionAlertView *_permissionView;
    UIView *_bottomView;
    NSString *_desc;
    NSString *_additionalDesc;
    NSString *_iconURL;
    NSString *_cancelText;
    NSString *_confirmText;
    UIView *_containerView;
    BDPUniqueID *_uniqueID;
    BDPPermissionAlertBaseButtonView *_buttonView;
    BDPPrivacyRegulationView *_privacyView;
    BDPShortTermSubscribeFooterView *_feedCardView;
}

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *additionalDesc;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *cancelText;
@property (copy, nonatomic) NSString *confirmText;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL shouldRunDisplayAnimation;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) BDPPermissionAlertBaseButtonView *buttonView;
@property (retain, nonatomic) BDPPrivacyRegulationView *privacyView;
@property (retain, nonatomic) BDPPermissionAlertView *permissionView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) BDPShortTermSubscribeFooterView *feedCardView;
@property (copy, nonatomic) id /* block */ cancelButtonClickCompletion;
@property (copy, nonatomic) id /* block */ confirmButtonClickCompletion;
@property (copy, nonatomic) id /* block */ protocolButtonClickCompletion;
@property (copy, nonatomic) id /* block */ viewDidAppearBlock;
@property (copy, nonatomic) id /* block */ viewDidDisappearBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)awe_shouldBypassPresentationHook;
- (void)setCancelText:(id)arg0;
- (id)cancelText;
- (id)permissionView;
- (void)setCancelButtonClickCompletion:(id /* block */)arg0;
- (void)setConfirmButtonClickCompletion:(id /* block */)arg0;
- (void)onContainerTouched:(id)arg0;
- (void)setPermissionView:(id)arg0;
- (id /* block */)cancelButtonClickCompletion;
- (id /* block */)confirmButtonClickCompletion;
- (void)makePermissionViewUnderScreen;
- (void)makePermissionViewOverScreen;
- (void)permissionViewDidCancel:(id)arg0;
- (void)permissionViewDidConfirm:(id)arg0;
- (void)showViewControllerCompletion:(id /* block */)arg0;
- (void)setViewDidDisappearBlock:(id /* block */)arg0;
- (id /* block */)viewDidDisappearBlock;
- (id)initWithDescription:(id)arg0 iconURL:(id)arg1 contentView:(id)arg2 buttonView:(id)arg3 footerView:(id)arg4 feedCardView:(id)arg5 privacyView:(id)arg6 uniqueID:(id)arg7;
- (void)clickPrivacyViewWithType:(unsigned long long)arg0;
- (void)clickPrivacyViewWithPersonalizedURL:(id)arg0;
- (id)initWithDescription:(id)arg0 iconURL:(id)arg1 contentView:(id)arg2 buttonView:(id)arg3 footerView:(id)arg4 feedCardView:(id)arg5 privacyView:(id)arg6 bottomView:(id)arg7 uniqueID:(id)arg8 additionalDesc:(id)arg9;
- (void)setFeedCardView:(id)arg0;
- (void)setAdditionalDesc:(id)arg0;
- (id)feedCardView;
- (id)additionalDesc;
- (id)getDismissViewController;
- (void)showViewControllerWithNavigation:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)confirmButtonDidClickedWhileNotAllowed;
- (void)showViewControllerOnTopWithCompletion:(id /* block */)arg0;
- (id /* block */)protocolButtonClickCompletion;
- (void)setProtocolButtonClickCompletion:(id /* block */)arg0;
- (BOOL)shouldRunDisplayAnimation;
- (void)setShouldRunDisplayAnimation:(BOOL)arg0;
- (id)desc;
- (id)buttonView;
- (BOOL)shouldAutorotate;
- (id)footerView;
- (void)viewDidAppear:(BOOL)arg0;
- (void)setFooterView:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setIconURL:(id)arg0;
- (id)iconURL;
- (void)setUniqueID:(id)arg0;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (void)setContainerView:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)contentView;
- (id)containerView;
- (id)animationControllerForDismissedController:(id)arg0;
- (void)viewDidLoad;
- (void)setButtonView:(id)arg0;
- (void)setDesc:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)bottomView;
- (void)setupUI;
- (void)setBottomView:(id)arg0;
- (id)privacyView;
- (void)setPrivacyView:(id)arg0;
- (id)confirmText;
- (void)setConfirmText:(id)arg0;
- (id /* block */)viewDidAppearBlock;
- (void)setViewDidAppearBlock:(id /* block */)arg0;

@end
