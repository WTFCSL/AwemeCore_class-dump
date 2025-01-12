//
//     Generated by private class-dump
//

@class NSDictionary, CJPaySuggestAddCardView, CJPayVerifyPasswordViewModel, UILabel, NSMutableArray, CJPayButton, CJPayChoosedPayMethodViewV3, CJPayAccountInsuranceTipView, NSString, CJPayDynamicLayoutView, CJPayMarketingMsgView, CJPayErrorInfoActionView, CJPayDeductDetailView, UIView, CJPayGuideWithConfirmView, CJPayStyleButton, MASConstraint, UIStackView, UIImageView, CJPaySafeInputView, UIScrollView;

@interface CJPayPasswordContentViewV3 : UIView <CJPaySafeInputViewDelegate, CJPayDynamicLayoutViewDelegate, CJPayPasswordViewProtocol> {
    BOOL _isPasswordVerifyStyle;
    BOOL _isOnlySHowPasswordStyle;
    id /* block */ _clickedAmountAreaTipBlock;
    id /* block */ _clickedPayMethodBlock;
    id /* block */ _clickedCombinedPayBankPayMethodBlock;
    id /* block */ _otherVerifyPayBlock;
    id /* block */ _inputCompleteBlock;
    id /* block */ _confirmBtnClickBlock;
    id /* block */ _clickedGuideCheckboxBlock;
    id /* block */ _clickProtocolViewBlock;
    id /* block */ _forgetPasswordBtnBlock;
    id /* block */ _dynamicViewFrameChangeBlock;
    id /* block */ _didClickedMoreBankBlock;
    id /* block */ _didSelectedNewSuggestBankBlock;
    CJPayMarketingMsgView *_marketingMsgView;
    CJPayDeductDetailView *_deductDetailView;
    CJPayChoosedPayMethodViewV3 *_choosedPayMethodView;
    UILabel *_inputPasswordTitle;
    CJPaySafeInputView *_inputPasswordView;
    CJPayErrorInfoActionView *_errorInfoActionView;
    CJPayGuideWithConfirmView *_guideView;
    CJPayStyleButton *_confirmButton;
    unsigned long long _status;
    NSDictionary *_voucherSwell;
    UIStackView *_amountAreaListView;
    UIView *_scrollContentView;
    UIScrollView *_scrollView;
    UIImageView *_scrollViewImageView;
    CJPaySuggestAddCardView *_suggestAddCardView;
    CJPayVerifyPasswordViewModel *_viewModel;
    CJPayAccountInsuranceTipView *_safeGuardTipView;
    CJPayButton *_forgetPasswordBtn;
    UILabel *_merchantNameLabel;
    MASConstraint *_passwordViewZoneBottomBaseInputviewConstraint;
    MASConstraint *_passwordViewZoneBottomBaseForgetBtnConstraint;
    CJPayDynamicLayoutView *_dynamicContentView;
    UIView *_inputPasswordViewZone;
    UIView *_confirmButtonViewZone;
    NSMutableArray *_dynamicViewList;
    NSString *_merchantVoucher;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastFrame;
}

@property (retain, nonatomic) CJPayMarketingMsgView *marketingMsgView;
@property (retain, nonatomic) UIStackView *amountAreaListView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *scrollViewImageView;
@property (retain, nonatomic) CJPayDeductDetailView *deductDetailView;
@property (retain, nonatomic) CJPayChoosedPayMethodViewV3 *choosedPayMethodView;
@property (retain, nonatomic) CJPaySuggestAddCardView *suggestAddCardView;
@property (retain, nonatomic) CJPaySafeInputView *inputPasswordView;
@property (retain, nonatomic) CJPayErrorInfoActionView *errorInfoActionView;
@property (retain, nonatomic) CJPayGuideWithConfirmView *guideView;
@property (retain, nonatomic) UILabel *inputPasswordTitle;
@property (retain, nonatomic) CJPayVerifyPasswordViewModel *viewModel;
@property (retain, nonatomic) CJPayStyleButton *confirmButton;
@property (nonatomic) BOOL isPasswordVerifyStyle;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) CJPayButton *forgetPasswordBtn;
@property (retain, nonatomic) UILabel *merchantNameLabel;
@property (retain, nonatomic) MASConstraint *passwordViewZoneBottomBaseInputviewConstraint;
@property (retain, nonatomic) MASConstraint *passwordViewZoneBottomBaseForgetBtnConstraint;
@property (retain, nonatomic) CJPayDynamicLayoutView *dynamicContentView;
@property (retain, nonatomic) UIView *inputPasswordViewZone;
@property (retain, nonatomic) UIView *confirmButtonViewZone;
@property (retain, nonatomic) NSMutableArray *dynamicViewList;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastFrame;
@property (copy, nonatomic) NSString *merchantVoucher;
@property (copy, nonatomic) id /* block */ clickedAmountAreaTipBlock;
@property (copy, nonatomic) id /* block */ clickedPayMethodBlock;
@property (copy, nonatomic) id /* block */ clickedCombinedPayBankPayMethodBlock;
@property (copy, nonatomic) id /* block */ otherVerifyPayBlock;
@property (copy, nonatomic) id /* block */ inputCompleteBlock;
@property (copy, nonatomic) id /* block */ confirmBtnClickBlock;
@property (copy, nonatomic) id /* block */ clickedGuideCheckboxBlock;
@property (copy, nonatomic) id /* block */ clickProtocolViewBlock;
@property (copy, nonatomic) id /* block */ forgetPasswordBtnBlock;
@property (copy, nonatomic) id /* block */ dynamicViewFrameChangeBlock;
@property (copy, nonatomic) id /* block */ didClickedMoreBankBlock;
@property (copy, nonatomic) id /* block */ didSelectedNewSuggestBankBlock;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL isOnlySHowPasswordStyle;
@property (copy, nonatomic) NSDictionary *voucherSwell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (void)setMerchantNameLabel:(id)arg0;
- (id)merchantNameLabel;
- (void)setConfirmBtnClickBlock:(id /* block */)arg0;
- (id /* block */)confirmBtnClickBlock;
- (id)safeGuardTipView;
- (void)setSafeGuardTipView:(id)arg0;
- (id)marketingMsgView;
- (void)setMarketingMsgView:(id)arg0;
- (id)inputPasswordView;
- (void)setOtherVerifyPayBlock:(id /* block */)arg0;
- (void)setForgetPasswordBtnBlock:(id /* block */)arg0;
- (void)setInputCompleteBlock:(id /* block */)arg0;
- (id /* block */)clickedPayMethodBlock;
- (void)setClickedPayMethodBlock:(id /* block */)arg0;
- (id)voucherSwell;
- (void)updateExpandCombineMsgFirst:(id)arg0 second:(id)arg1;
- (void)setVoucherSwell:(id)arg0;
- (void)showKeyBoardView;
- (BOOL)isPasswordVerifyStyle;
- (void)dynamicViewFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)choosedPayMethodView;
- (id)suggestAddCardView;
- (void)setDidClickedMoreBankBlock:(id /* block */)arg0;
- (void)setDidSelectedNewSuggestBankBlock:(id /* block */)arg0;
- (void)setChoosedPayMethodView:(id)arg0;
- (void)setSuggestAddCardView:(id)arg0;
- (id)dynamicViewList;
- (void)setDynamicViewList:(id)arg0;
- (void)updateErrorText:(id)arg0;
- (id /* block */)inputCompleteBlock;
- (id)errorInfoActionView;
- (void)retractKeyBoardView;
- (void)clearPasswordInput;
- (void)updateChoosedPayMethodViewHiddenStatus:(BOOL)arg0;
- (void)p_setupUIForDynamicLayout;
- (void)setPasswordInputAllow:(BOOL)arg0;
- (double)getMarketViewBottomMargin;
- (void)updatePayConfigContent:(id)arg0;
- (id /* block */)otherVerifyPayBlock;
- (id)forgetPasswordBtn;
- (id /* block */)forgetPasswordBtnBlock;
- (id)initWithViewModel:(id)arg0 originStatus:(unsigned long long)arg1;
- (void)setClickedCombinedPayBankPayMethodBlock:(id /* block */)arg0;
- (void)setClickedGuideCheckboxBlock:(id /* block */)arg0;
- (void)setClickProtocolViewBlock:(id /* block */)arg0;
- (void)setDynamicViewFrameChangeBlock:(id /* block */)arg0;
- (void)setIsPasswordVerifyStyle:(BOOL)arg0;
- (id)inputPasswordTitle;
- (void)refreshDynamicViewContent;
- (void)usePasswordVerifyStyle:(BOOL)arg0;
- (id)deductDetailView;
- (void)deductDetailViewNeedScroll:(BOOL)arg0 deductDetailHeight:(double)arg1;
- (void)switchPasswordViewStatus:(unsigned long long)arg0;
- (void)updateDeductViewWhenNewCustomer:(id)arg0;
- (void)updateAmountAreaViewWithShowConfig:(id)arg0;
- (void)setClickedAmountAreaTipBlock:(id /* block */)arg0;
- (void)inputView:(id)arg0 completeInputWithCurrentInput:(id)arg1;
- (void)inputView:(id)arg0 textDidChangeWithCurrentInput:(id)arg1;
- (BOOL)hasInputHistory;
- (id)buildProtocolModelBySkippwdGuide;
- (void)p_comfirmInputComplete;
- (id)buildProtocolModelByBioGuide;
- (void)setInputPasswordView:(id)arg0;
- (void)setErrorInfoActionView:(id)arg0;
- (void)setForgetPasswordBtn:(id)arg0;
- (void)p_updateDeductViewWithMerchantVoucher:(id)arg0;
- (id)amountAreaListView;
- (id)dynamicContentView;
- (id /* block */)clickedAmountAreaTipBlock;
- (void)p_setupUIForSuggestCard;
- (id)p_createDynamicLayoutList;
- (id)p_createInputPasswordViewZone;
- (void)setInputPasswordViewZone:(id)arg0;
- (id)inputPasswordViewZone;
- (double)p_inputPasswordViewWidth;
- (id)p_createConfirmButtonZone;
- (void)setConfirmButtonViewZone:(id)arg0;
- (id)confirmButtonViewZone;
- (void)p_updatePasswordViewStatus:(unsigned long long)arg0;
- (double)p_getPasswordItemWidth;
- (void)setPasswordViewZoneBottomBaseInputviewConstraint:(id)arg0;
- (void)setPasswordViewZoneBottomBaseForgetBtnConstraint:(id)arg0;
- (void)p_updatePasswordZoneConstraint;
- (id)passwordViewZoneBottomBaseInputviewConstraint;
- (id)passwordViewZoneBottomBaseForgetBtnConstraint;
- (id)p_updateSignPayMarketingAmount:(id)arg0;
- (id)p_updateSignPayMarketingVoucher:(id)arg0;
- (void)p_updateDeductDetailView:(id)arg0 defaultConfig:(id)arg1;
- (id)merchantVoucher;
- (void)setMerchantVoucher:(id)arg0;
- (id)scrollViewImageView;
- (void)p_removeDeductDetailViewComponent;
- (void)p_refreshGuideView;
- (BOOL)p_needShowBioSystemAuthority;
- (void)p_resetGuideViewBtnTextWithChoose:(BOOL)arg0;
- (id)p_getGuideSelectedBtnText;
- (id /* block */)dynamicViewFrameChangeBlock;
- (id /* block */)didClickedMoreBankBlock;
- (id /* block */)didSelectedNewSuggestBankBlock;
- (id /* block */)clickedCombinedPayBankPayMethodBlock;
- (void)p_clickBioAuthorityButton;
- (id /* block */)clickProtocolViewBlock;
- (id /* block */)clickedGuideCheckboxBlock;
- (void)setDeductDetailView:(id)arg0;
- (void)setInputPasswordTitle:(id)arg0;
- (BOOL)isOnlySHowPasswordStyle;
- (void)setIsOnlySHowPasswordStyle:(BOOL)arg0;
- (void)setAmountAreaListView:(id)arg0;
- (void)setScrollViewImageView:(id)arg0;
- (void)setDynamicContentView:(id)arg0;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)scrollContentView;
- (void)setViewModel:(id)arg0;
- (void)setStatus:(unsigned long long)arg0;
- (id)viewModel;
- (void)dealloc;
- (id)scrollView;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (void)setScrollContentView:(id)arg0;
- (void)setLastFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lastFrame;
- (void)setGuideView:(id)arg0;
- (id)guideView;

@end
