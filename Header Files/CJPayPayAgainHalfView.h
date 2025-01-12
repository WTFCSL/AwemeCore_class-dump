//
//     Generated by private class-dump
//

@class CJPayPayAgainOldCardCommonView, CJPayHintInfo, UILabel, CJPayButton, CJPayAccountInsuranceTipView, CJPayStyleButton, UIView, CJPayPayAgainNewCardCommonView, NSString, CJPayPayAgainCreditPayView, CJPayCombineDetailView, NSAttributedString, CJPayPayAgainDiscountView, UIImageView;

@interface CJPayPayAgainHalfView : UIView {
    BOOL _isSuperPay;
    CJPayStyleButton *_confirmPayBtn;
    CJPayButton *_otherPayMethodButton;
    NSString *_creditInstallment;
    NSAttributedString *_skipPwdTitle;
    unsigned long long _showStyle;
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    UILabel *_discountLabel;
    UIView *_oldCardContentView;
    CJPayPayAgainNewCardCommonView *_newCardContentView;
    CJPayPayAgainOldCardCommonView *_oldCardView;
    UILabel *_addNewCardHintInfoLabel;
    UILabel *_oldCardBankTailLabel;
    UIView *_bgCardView;
    UIView *_voucherTipsView;
    UILabel *_voucherTipsLabel;
    CJPayAccountInsuranceTipView *_safeGuideView;
    UILabel *_payTypeLabel;
    CJPayPayAgainCreditPayView *_creditPayView;
    CJPayPayAgainDiscountView *_discountView;
    CJPayCombineDetailView *_combineDetailView;
    UIView *_lineView;
    UIImageView *_infoImgView;
    CJPayHintInfo *_hintInfo;
    NSString *_discountStr;
}

@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) UIView *oldCardContentView;
@property (retain, nonatomic) CJPayPayAgainNewCardCommonView *newCardContentView;
@property (retain, nonatomic) CJPayPayAgainOldCardCommonView *oldCardView;
@property (retain, nonatomic) UILabel *addNewCardHintInfoLabel;
@property (retain, nonatomic) UILabel *oldCardBankTailLabel;
@property (retain, nonatomic) CJPayStyleButton *confirmPayBtn;
@property (retain, nonatomic) CJPayButton *otherPayMethodButton;
@property (retain, nonatomic) UIView *bgCardView;
@property (retain, nonatomic) UIView *voucherTipsView;
@property (retain, nonatomic) UILabel *voucherTipsLabel;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuideView;
@property (retain, nonatomic) UILabel *payTypeLabel;
@property (retain, nonatomic) CJPayPayAgainCreditPayView *creditPayView;
@property (retain, nonatomic) CJPayPayAgainDiscountView *discountView;
@property (copy, nonatomic) NSString *creditInstallment;
@property (retain, nonatomic) CJPayCombineDetailView *combineDetailView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *infoImgView;
@property (retain, nonatomic) CJPayHintInfo *hintInfo;
@property (copy, nonatomic) NSString *discountStr;
@property (copy, nonatomic) NSAttributedString *skipPwdTitle;
@property (nonatomic) unsigned long long showStyle;
@property (nonatomic) BOOL isSuperPay;

- (unsigned long long)showStyle;
- (void)setDiscountLabel:(id)arg0;
- (id)discountLabel;
- (id)discountView;
- (void)setDiscountView:(id)arg0;
- (void)p_setupUI;
- (void)setShowStyle:(unsigned long long)arg0;
- (void)setDiscountStr:(id)arg0;
- (id)discountStr;
- (id)confirmPayBtn;
- (void)setConfirmPayBtn:(id)arg0;
- (id)hintInfo;
- (void)setHintInfo:(id)arg0;
- (void)setCreditInstallment:(id)arg0;
- (id)creditInstallment;
- (id)combineDetailView;
- (void)setCombineDetailView:(id)arg0;
- (void)refreshWithHintInfo:(id)arg0;
- (void)refreshNewHalfWithHintInfo:(id)arg0;
- (void)refreshWithNewHalfV2HintInfo:(id)arg0;
- (void)refreshWithDiscountNotAvilableHintInfo:(id)arg0;
- (void)refreshWithNewHalfV3HintInfo:(id)arg0;
- (id)p_getTitleText:(id)arg0;
- (id)otherPayMethodButton;
- (id)creditPayView;
- (id)infoImgView;
- (id)oldCardContentView;
- (id)newCardContentView;
- (id)addNewCardHintInfoLabel;
- (id)oldCardView;
- (id)p_voucherMsgList:(unsigned long long)arg0;
- (BOOL)isSuperPay;
- (id)p_attrStringWithPrefix:(id)arg0 Text:(id)arg1 suffix:(id)arg2;
- (id)p_getConfirmTitleV2Style;
- (void)p_setupNewHalfNewCardConstraintsWithHintInfo:(id)arg0;
- (void)p_asyncRefreshLabelWithHintInfoModel:(id)arg0 prefixStr:(id)arg1 suffixStr:(id)arg2;
- (void)p_setupCreditPayConstraints;
- (void)p_setupUISuperPay;
- (void)p_setupVoucherHalfV2Style;
- (void)p_setupUICombineV2Style;
- (void)p_setupUICardV2Style;
- (void)p_setupUICreditV2Style;
- (void)p_setupUIBalanceV2Style;
- (id)p_getBtnPayAmountWithVoucher:(long long)arg0;
- (id)skipPwdTitle;
- (void)setSkipPwdTitle:(id)arg0;
- (id)p_changeCreditPayAmount;
- (id)p_attrStringWithPrefix:(id)arg0 Text:(id)arg1 suffix:(id)arg2 imageStr:(id)arg3 placeholderImg:(id)arg4;
- (id)p_shortHandWithBankName:(id)arg0;
- (id)oldCardBankTailLabel;
- (id)safeGuideView;
- (id)bgCardView;
- (id)voucherTipsView;
- (id)voucherTipsLabel;
- (id)payTypeLabel;
- (void)p_aboutButtonClick;
- (void)refreshWithNotSufficientHintInfo:(id)arg0;
- (id)getDiscount;
- (void)p_setupUIFundPayV2Style;
- (void)setOtherPayMethodButton:(id)arg0;
- (void)setIsSuperPay:(BOOL)arg0;
- (void)setOldCardContentView:(id)arg0;
- (void)setNewCardContentView:(id)arg0;
- (void)setOldCardView:(id)arg0;
- (void)setAddNewCardHintInfoLabel:(id)arg0;
- (void)setOldCardBankTailLabel:(id)arg0;
- (void)setBgCardView:(id)arg0;
- (void)setVoucherTipsView:(id)arg0;
- (void)setVoucherTipsLabel:(id)arg0;
- (void)setSafeGuideView:(id)arg0;
- (void)setPayTypeLabel:(id)arg0;
- (void)setCreditPayView:(id)arg0;
- (void)setInfoImgView:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (id)logoImageView;
- (void)setLogoImageView:(id)arg0;

@end
