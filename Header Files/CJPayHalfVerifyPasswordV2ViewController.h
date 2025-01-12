//
//     Generated by private class-dump
//

@class CJPayDefaultChannelShowConfig, NSString, NSArray, CJPayPasswordContentViewV2, CJPayChooseDyPayMethodManager, CJPayVerifyPasswordViewModel, CJPayBDCreateOrderResponse, CJPayPasswordContentViewV3, NSDictionary, CJPayBaseVerifyManager, CJPayButton, CJPayBioVerifyToPasswordUtil;
@protocol CJPayChooseDyPayMethodDelegate;

@interface CJPayHalfVerifyPasswordV2ViewController : CJPayHalfPageBaseViewController <CJPayChooseDyPayMethodDelegate> {
    BOOL _isChoosePayTypeDataReady;
    BOOL _nonFirstAppear;
    BOOL _isFixedContainerHeight;
    CJPayVerifyPasswordViewModel *_viewModel;
    CJPayPasswordContentViewV2 *_passwordContentView;
    CJPayPasswordContentViewV3 *_commonPasswordContentView;
    CJPayButton *_otherVerifyButton;
    id /* block */ _otherVerifyPayBlock;
    id /* block */ _forgetPasswordBtnBlock;
    id /* block */ _inputCompleteBlock;
    CJPayBDCreateOrderResponse *_response;
    CJPayBaseVerifyManager *_verifyManager;
    id<CJPayChooseDyPayMethodDelegate> _changeMethodDelegate;
    long long _otherVerifyType;
    NSString *_bioDowngradeToPassscodeReason;
    NSDictionary *_voucherSwell;
    CJPayChooseDyPayMethodManager *_chooseDyPayMethodManager;
    NSArray *_groupModel;
    CJPayDefaultChannelShowConfig *_combinedPayBankCard;
    CJPayDefaultChannelShowConfig *_combinedPayBalance;
    CJPayBioVerifyToPasswordUtil *_bioVerifyUtil;
}

@property (retain, nonatomic) CJPayButton *otherVerifyButton;
@property (nonatomic) BOOL nonFirstAppear;
@property (nonatomic) BOOL isFixedContainerHeight;
@property (retain, nonatomic) CJPayVerifyPasswordViewModel *viewModel;
@property (retain, nonatomic) CJPayChooseDyPayMethodManager *chooseDyPayMethodManager;
@property (copy, nonatomic) NSArray *groupModel;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *combinedPayBankCard;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *combinedPayBalance;
@property (retain, nonatomic) CJPayBioVerifyToPasswordUtil *bioVerifyUtil;
@property (retain, nonatomic) CJPayPasswordContentViewV2 *passwordContentView;
@property (retain, nonatomic) CJPayPasswordContentViewV3 *commonPasswordContentView;
@property (copy, nonatomic) id /* block */ otherVerifyPayBlock;
@property (copy, nonatomic) id /* block */ forgetPasswordBtnBlock;
@property (copy, nonatomic) id /* block */ inputCompleteBlock;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *response;
@property (weak, nonatomic) CJPayBaseVerifyManager *verifyManager;
@property (weak, nonatomic) id<CJPayChooseDyPayMethodDelegate> changeMethodDelegate;
@property (nonatomic) long long otherVerifyType;
@property (nonatomic) BOOL isChoosePayTypeDataReady;
@property (copy, nonatomic) NSString *bioDowngradeToPassscodeReason;
@property (copy, nonatomic) NSDictionary *voucherSwell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (void)p_setupUI;
- (void)setGroupModel:(id)arg0;
- (id)groupModel;
- (id)verifyManager;
- (void)setVerifyManager:(id)arg0;
- (void)closeWithAnimation:(BOOL)arg0 comletion:(id /* block */)arg1;
- (void)setOtherVerifyPayBlock:(id /* block */)arg0;
- (void)setForgetPasswordBtnBlock:(id /* block */)arg0;
- (void)setInputCompleteBlock:(id /* block */)arg0;
- (void)changePayMethod:(id)arg0 loadingView:(id)arg1;
- (void)pushChoosePayMethodVC:(id)arg0 animated:(BOOL)arg1;
- (void)changeCombinedBankPayMethod:(id)arg0 loadingView:(id)arg1;
- (id)payContextExtParams;
- (id)getPayDisabledReasonMap;
- (void)p_screenShotDetected;
- (id)voucherSwell;
- (void)setVoucherSwell:(id)arg0;
- (void)showKeyBoardView;
- (id)passwordContentView;
- (double)loadingShowheight;
- (id)p_defaultDisplayConfigs;
- (id)combinedPayBankCard;
- (void)setCombinedPayBankCard:(id)arg0;
- (id)chooseDyPayMethodManager;
- (void)setChooseDyPayMethodManager:(id)arg0;
- (void)updateErrorText:(id)arg0;
- (id /* block */)inputCompleteBlock;
- (void)p_clearPasswordInput;
- (void)setNonFirstAppear:(BOOL)arg0;
- (id)p_pageTitleStr;
- (void)p_setupOtherVerifyBtn;
- (void)p_screenCaptureDetected:(id)arg0;
- (BOOL)nonFirstAppear;
- (id)otherVerifyButton;
- (BOOL)p_isShowBioVerify;
- (BOOL)p_isBioPayAvailable;
- (id)bioVerifyUtil;
- (void)showPasswordVerifyKeyboard;
- (void)setBioVerifyUtil:(id)arg0;
- (void)p_updateDefaultConfig:(id)arg0;
- (void)setIsChoosePayTypeDataReady:(BOOL)arg0;
- (id)getPasswordContentView;
- (id)p_downgradeReason;
- (void)retractKeyBoardView;
- (void)setOtherVerifyType:(long long)arg0;
- (BOOL)p_matchPayMethod:(unsigned long long)arg0 bankCardId:(id)arg1 channelConfig:(id)arg2;
- (void)p_showChoosePayMethodViewWithPayType:(unsigned long long)arg0;
- (id)commonPasswordContentView;
- (void)p_setupUIForDynamicLayout;
- (void)p_containerViewLayoutDynamically;
- (void)setIsFixedContainerHeight:(BOOL)arg0;
- (double)p_getPasswordContentViewBottomMargin;
- (void)setCombinedPayBalance:(id)arg0;
- (void)p_containerViewLayoutFixedHeight:(double)arg0;
- (BOOL)isFixedContainerHeight;
- (id)bioDowngradeToPassscodeReason;
- (double)p_fixedContainerHeight;
- (id)changeMethodDelegate;
- (BOOL)p_isNeedUpdateShowConfigWithSelectedShowConfig:(id)arg0;
- (id)combinedPayBalance;
- (void)updateOtherVerifyType:(long long)arg0 btnText:(id)arg1;
- (id /* block */)otherVerifyPayBlock;
- (long long)otherVerifyType;
- (void)p_renewChooseMethodManager;
- (id /* block */)forgetPasswordBtnBlock;
- (void)p_completeInputWithContent:(id)arg0;
- (void)p_comfirmButtonClickWithContent:(id)arg0;
- (void)p_dynamicViewFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)changePayMethodWithPayType:(unsigned long long)arg0 bankCardId:(id)arg1;
- (void)setPasswordContentView:(id)arg0;
- (void)setCommonPasswordContentView:(id)arg0;
- (void)setOtherVerifyButton:(id)arg0;
- (void)setChangeMethodDelegate:(id)arg0;
- (BOOL)isChoosePayTypeDataReady;
- (void)setBioDowngradeToPassscodeReason:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setResponse:(id)arg0;
- (id)initWithViewModel:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)response;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;
- (double)containerHeight;
- (void)back;

@end
