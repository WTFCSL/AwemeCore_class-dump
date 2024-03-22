//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface CJPayMarketingMsgView : UIView {
    BOOL _isShowVoucherMsg;
    UIView *_priceView;
    UILabel *_priceLabel;
    UILabel *_discountLabel;
    UILabel *_unitLabel;
    long long _viewStyle;
}

@property (retain, nonatomic) UILabel *unitLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UIView *priceView;
@property (retain, nonatomic) UILabel *discountLabel;
@property (nonatomic) BOOL isShowVoucherMsg;
@property (nonatomic) long long viewStyle;

- (void)setDiscountLabel:(id)arg0;
- (id)discountLabel;
- (void)setPriceView:(id)arg0;
- (id)priceView;
- (void)p_setupUI;
- (void)updateWithPayAmount:(id)arg0 voucherMsg:(id)arg1;
- (id)initWithViewStyle:(long long)arg0 isShowVoucherMsg:(BOOL)arg1;
- (void)updatePriceColor:(id)arg0;
- (void)p_setupUIForNormal;
- (void)setIsShowVoucherMsg:(BOOL)arg0;
- (void)p_setupUIForCompact;
- (void)p_setupUIForDenoiseV2;
- (void)p_setupUIForMacro;
- (void)updateWithModel:(id)arg0 isFromSkipPwdConfirm:(BOOL)arg1;
- (void)p_setupUIForSkipPwdHalfPageConfirm;
- (void)p_updateUIForVoucherTypeNone:(id)arg0;
- (void)p_updateUIForVoucherTypeImmediatelyDiscount:(id)arg0;
- (void)p_updateUIForVoucherTypeRandomDiscount:(id)arg0;
- (void)p_updateUIForVoucherTypeFreeCharge:(id)arg0;
- (void)p_updateUIForVoucherTypeChargeDiscount:(id)arg0;
- (void)p_updateUIForVoucherTypeChargeNoDiscount:(id)arg0;
- (void)p_updateUIForVoucherTypeStagingWithDiscount:(id)arg0;
- (void)p_updateUIForVoucherTypeStagingWithRandomDiscount:(id)arg0;
- (void)p_updateUIForVoucherTypeNoneWithPayAfterUse:(id)arg0;
- (void)p_setupPriceAttributeWithText:(id)arg0;
- (void)p_updateVoucherMsg:(id)arg0;
- (id)p_discountStringWithModel:(id)arg0;
- (BOOL)isShowVoucherMsg;
- (id)p_buildMarketingString:(id)arg0;
- (void)hideDiscountLabel;
- (void)setMinHeightForDiscountLabel;
- (id)init;
- (void).cxx_destruct;
- (long long)viewStyle;
- (void)dealloc;
- (void)setViewStyle:(long long)arg0;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (void)updateWithModel:(id)arg0;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;
- (id)unitLabel;
- (void)setUnitLabel:(id)arg0;
- (id)initWithViewStyle:(long long)arg0;

@end
