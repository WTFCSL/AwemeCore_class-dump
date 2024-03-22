//
//     Generated by private class-dump
//

@class NSArray, BDPAlertSpringAnimator, NSString, NSError, BDPUniqueID, BDPDetentionHelper;

@interface BDPIdentityAuthenticationAlertViewController : UIViewController <BDPIdentityAuthenticationAlertViewDelegate, BDPGuardianResultViewDelegate, BDPGuardianVerifyViewDelegate, BDPGuardianConfirmViewDelegate> {
    BOOL _isShowGiftPackage;
    BOOL _isShown;
    BOOL _fromDetention;
    NSArray *_giftImageInfo;
    BDPUniqueID *_uniqueID;
    unsigned long long _alertType;
    id /* block */ _dismissCallBack;
    BDPDetentionHelper *_detentionHelper;
    NSError *_lastRequestError;
    NSString *_name;
    NSString *_idNumber;
    NSString *_guardianName;
    BDPAlertSpringAnimator *_animator;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPAlertSpringAnimator *animator;
@property (nonatomic) BOOL isShowGiftPackage;
@property (retain, nonatomic) NSArray *giftImageInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUniqueID:(id)arg0 alertType:(unsigned long long)arg1 fromDetention:(BOOL)arg2 dismissCallBack:(id /* block */)arg3;
- (void)setIsShowGiftPackage:(BOOL)arg0;
- (void)setGiftImageInfo:(id)arg0;
- (void)showFromParentController:(id)arg0 completion:(id /* block */)arg1;
- (void)alertViewDidConfirm:(id)arg0 withName:(id)arg1 identityCard:(id)arg2;
- (void)alertViewDidCheckFAQ:(id)arg0;
- (void)didCheckAuthentication:(id)arg0;
- (void)didCheckPrivacy:(id)arg0;
- (void)didCheckService:(id)arg0;
- (void)didHaveKnow:(id)arg0;
- (void)didExitGame:(id)arg0;
- (void)didConfirmForGuardianVerifyView:(id)arg0 withName:(id)arg1 identityCard:(id)arg2;
- (void)didCancelForGuardianVerifyView:(id)arg0;
- (void)didCheckChildPrivacy:(id)arg0;
- (void)didAgree:(id)arg0;
- (void)didDisagree:(id)arg0;
- (BOOL)isShowGiftPackage;
- (id)giftImageInfo;
- (id)animator;
- (BOOL)shouldAutorotate;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)setAnimator:(id)arg0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)navigationBarHidden;
- (void)_setupUI;
- (void)alertViewDidCancel:(id)arg0;

@end
