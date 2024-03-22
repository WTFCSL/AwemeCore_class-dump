//
//     Generated by private class-dump
//

@class NSString, CJPayOrderConfirmResponse, CJPayHalfVerifyPasswordV3ViewController, CJPayHalfVerifyPasswordV2ViewController, NSDictionary, CJPayEvent, CJPayHalfVerifyPasswordBaseViewController, CJPayVerifyPasswordViewModel;

@interface CJPayVerifyItemPassword : CJPayVerifyItem {
    BOOL _hasInputSuccess;
    BOOL _isInputPassword;
    CJPayHalfVerifyPasswordBaseViewController *_verifyPasscodeVC;
    CJPayVerifyPasswordViewModel *_viewModel;
    CJPayHalfVerifyPasswordV2ViewController *_verifyPasscodeVCv2;
    CJPayHalfVerifyPasswordV3ViewController *_verifyPasscodeVCv3;
    NSString *_recogFaceSource;
    NSString *_lastPWD;
    long long _verifyTimes;
    CJPayOrderConfirmResponse *_confirmResponse;
    CJPayEvent *_event;
    NSDictionary *_voucherSwell;
}

@property (nonatomic) BOOL hasInputSuccess;
@property (nonatomic) BOOL isInputPassword;
@property (copy, nonatomic) NSString *recogFaceSource;
@property (copy, nonatomic) NSString *lastPWD;
@property (nonatomic) long long verifyTimes;
@property (retain, nonatomic) CJPayOrderConfirmResponse *confirmResponse;
@property (retain, nonatomic) CJPayEvent *event;
@property (copy, nonatomic) NSDictionary *voucherSwell;
@property (retain, nonatomic) CJPayHalfVerifyPasswordBaseViewController *verifyPasscodeVC;
@property (retain, nonatomic) CJPayVerifyPasswordViewModel *viewModel;
@property (retain, nonatomic) CJPayHalfVerifyPasswordV2ViewController *verifyPasscodeVCv2;
@property (retain, nonatomic) CJPayHalfVerifyPasswordV3ViewController *verifyPasscodeVCv3;

- (void)event:(id)arg0 params:(id)arg1;
- (void)showLoading:(BOOL)arg0;
- (id)checkType;
- (id)getLatestCacheData;
- (void)requestVerifyWithCreateOrderResponse:(id)arg0 event:(id)arg1;
- (BOOL)shouldHandleVerifyResponse:(id)arg0;
- (void)handleVerifyResponse:(id)arg0;
- (id)checkTypeName;
- (void)setConfirmResponse:(id)arg0;
- (id)lastPWD;
- (void)setLastPWD:(id)arg0;
- (id)voucherSwell;
- (void)setVoucherSwell:(id)arg0;
- (BOOL)p_lynxRetain:(id)arg0;
- (void)createVerifyPasscodeVC;
- (id)verifyPasscodeVC;
- (id)createPassCodeViewModel;
- (BOOL)usePasswordVCWithChooseMethod;
- (void)setVerifyPasscodeVC:(id)arg0;
- (BOOL)isNeedShowOpenBioGuide;
- (BOOL)shouldShowRetainVC;
- (void)cancelFromPasswordLock;
- (void)p_voucherSwell:(id)arg0;
- (id)p_getFaceRecogScene;
- (void)p_setShowKeyBoard:(id)arg0;
- (void)p_faceVerifyVoucherSwell:(id)arg0;
- (BOOL)useV3PasswordVCWithChooseMethod;
- (void)createVerifyPasscodeVCv3WithChooseMethod;
- (void)createVerifyPasscodeVCWithChooseMethod;
- (id)verifyPasscodeVCv3;
- (id)createVerifyPasswordViewModelWithChooseMethod;
- (void)setVerifyPasscodeVCv3:(id)arg0;
- (id)p_buildEventSwitchToBio;
- (void)setHasInputSuccess:(BOOL)arg0;
- (void)setIsInputPassword:(BOOL)arg0;
- (long long)verifyTimes;
- (void)setVerifyTimes:(long long)arg0;
- (void)buildPwdParamWithCompletion:(id /* block */)arg0;
- (id)buildPwdParam;
- (void)setRecogFaceSource:(id)arg0;
- (void)p_requestVerifyItem;
- (void)forgetPasswordBtnTapped;
- (id)verifyPasscodeVCv2;
- (void)setVerifyPasscodeVCv2:(id)arg0;
- (BOOL)p_isNeedShowOpenBioGuide;
- (id)getPasswordVC;
- (id)p_guideTypeKey;
- (id)p_buildPwdParamWith:(id)arg0;
- (void)p_showPasswordViewController;
- (id)p_getGuideChoose;
- (id)p_getGuideType;
- (id)p_getIsFingerprintDefault;
- (void)p_handleSwitchPasswordEvent:(id)arg0;
- (void)p_switchOtherVerifyWithResponse:(id)arg0;
- (id)recogFaceSource;
- (void)p_verifyByRecogFaceWithVerifyInfo:(id)arg0;
- (void)p_verifyAuthWithVerifyInfo:(id)arg0;
- (void)p_confirmPayWithAuthTokenDict:(id)arg0;
- (BOOL)isInputPassword;
- (void)p_continueToPay:(id)arg0;
- (BOOL)hasInputSuccess;
- (void)p_showKeybord;
- (BOOL)p_isNeedShowSkipPwdGuide;
- (void)p_availableShowKeyBoard:(id)arg0;
- (void)setEvent:(id)arg0;
- (id)event;
- (id)init;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (void)receiveEvent:(id)arg0;
- (void)closeAction;
- (id)viewModel;
- (void)dealloc;
- (id)confirmResponse;

@end