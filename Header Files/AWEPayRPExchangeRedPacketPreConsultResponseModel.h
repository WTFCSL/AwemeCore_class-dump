//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPayRPExchangeRedPacketPreConsultResponseModel : AWEBaseApiModel {
    BOOL _showInflatedFunds;
    BOOL _canUseDeductionAmount;
    BOOL _hasGetDeductionAmount;
    BOOL _hasPaidExchangeRedPacket;
    NSString *_promotionsInfo;
    long long _bizCode;
    NSString *_continueQuery;
    long long _promotionsAmount;
    NSString *_promotionsInfoV2;
    NSString *_btnTitle;
    long long _deductionAmount;
    NSString *_deductionAmountWalletUrl;
    NSString *_rpSendPageContent;
    long long _payAmount;
    NSString *_defaultTitle;
    NSString *_sendExchangeRPLynxViewSchema;
}

@property (copy, nonatomic) NSString *promotionsInfo;
@property (nonatomic) long long bizCode;
@property (copy, nonatomic) NSString *continueQuery;
@property (nonatomic) long long promotionsAmount;
@property (copy, nonatomic) NSString *promotionsInfoV2;
@property (copy, nonatomic) NSString *btnTitle;
@property (nonatomic) long long deductionAmount;
@property (copy, nonatomic) NSString *deductionAmountWalletUrl;
@property (nonatomic) BOOL showInflatedFunds;
@property (copy, nonatomic) NSString *rpSendPageContent;
@property (nonatomic) long long payAmount;
@property (copy, nonatomic) NSString *defaultTitle;
@property (copy, nonatomic) NSString *sendExchangeRPLynxViewSchema;
@property (nonatomic) BOOL canUseDeductionAmount;
@property (nonatomic) BOOL hasGetDeductionAmount;
@property (nonatomic) BOOL hasPaidExchangeRedPacket;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)bizCode;
- (void)setBizCode:(long long)arg0;
- (long long)payAmount;
- (void)setPayAmount:(long long)arg0;
- (id)continueQuery;
- (id)sendExchangeRPLynxViewSchema;
- (id)btnTitle;
- (void)setBtnTitle:(id)arg0;
- (id)promotionsInfo;
- (long long)promotionsAmount;
- (long long)deductionAmount;
- (void)setContinueQuery:(id)arg0;
- (void)setPromotionsInfo:(id)arg0;
- (void)setPromotionsAmount:(long long)arg0;
- (id)promotionsInfoV2;
- (void)setPromotionsInfoV2:(id)arg0;
- (void)setDeductionAmount:(long long)arg0;
- (id)deductionAmountWalletUrl;
- (void)setDeductionAmountWalletUrl:(id)arg0;
- (BOOL)showInflatedFunds;
- (void)setShowInflatedFunds:(BOOL)arg0;
- (id)rpSendPageContent;
- (void)setRpSendPageContent:(id)arg0;
- (void)setSendExchangeRPLynxViewSchema:(id)arg0;
- (BOOL)canUseDeductionAmount;
- (void)setCanUseDeductionAmount:(BOOL)arg0;
- (BOOL)hasGetDeductionAmount;
- (void)setHasGetDeductionAmount:(BOOL)arg0;
- (BOOL)hasPaidExchangeRedPacket;
- (void)setHasPaidExchangeRedPacket:(BOOL)arg0;
- (void).cxx_destruct;
- (id)defaultTitle;
- (void)setDefaultTitle:(id)arg0;

@end