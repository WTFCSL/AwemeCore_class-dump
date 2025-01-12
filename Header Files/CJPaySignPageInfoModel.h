//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;
@protocol CJPayMemAgreementModel;

@interface CJPaySignPageInfoModel : JSONModel {
    NSString *_merchantName;
    NSString *_serviceName;
    NSString *_icon;
    NSString *_serviceDesc;
    NSString *_templateId;
    NSString *_tradeAmount;
    NSString *_realTradeAmount;
    NSString *_promotionDesc;
    NSString *_nextDeductDate;
    NSArray<CJPayMemAgreementModel> *_protocolInfo;
    NSDictionary *_protocolGroupNames;
    NSString *_paySignSwitch;
    NSString *_paySignSwitchInfo;
    NSString *_deductMethodSubDesc;
    NSString *_buttonAction;
    NSString *_buttonDesc;
    NSString *_signPageURL;
}

@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *serviceDesc;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *tradeAmount;
@property (copy, nonatomic) NSString *realTradeAmount;
@property (copy, nonatomic) NSString *promotionDesc;
@property (copy, nonatomic) NSString *nextDeductDate;
@property (copy, nonatomic) NSArray<CJPayMemAgreementModel> *protocolInfo;
@property (copy, nonatomic) NSDictionary *protocolGroupNames;
@property (copy, nonatomic) NSString *paySignSwitch;
@property (copy, nonatomic) NSString *paySignSwitchInfo;
@property (copy, nonatomic) NSString *deductMethodSubDesc;
@property (copy, nonatomic) NSString *buttonAction;
@property (copy, nonatomic) NSString *buttonDesc;
@property (copy, nonatomic) NSString *signPageURL;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (void)setTradeAmount:(id)arg0;
- (id)tradeAmount;
- (id)promotionDesc;
- (void)setPromotionDesc:(id)arg0;
- (id)buttonDesc;
- (void)setButtonDesc:(id)arg0;
- (id)serviceDesc;
- (void)setServiceDesc:(id)arg0;
- (id)protocolInfo;
- (void)setProtocolInfo:(id)arg0;
- (id)protocolGroupNames;
- (void)setProtocolGroupNames:(id)arg0;
- (id)realTradeAmount;
- (id)deductMethodSubDesc;
- (void)setDeductMethodSubDesc:(id)arg0;
- (id)signPageURL;
- (id)paySignSwitch;
- (void)setRealTradeAmount:(id)arg0;
- (id)nextDeductDate;
- (void)setNextDeductDate:(id)arg0;
- (void)setPaySignSwitch:(id)arg0;
- (id)paySignSwitchInfo;
- (void)setPaySignSwitchInfo:(id)arg0;
- (void)setSignPageURL:(id)arg0;
- (id)icon;
- (void).cxx_destruct;
- (id)serviceName;
- (void)setIcon:(id)arg0;
- (void)setServiceName:(id)arg0;
- (id)buttonAction;
- (void)setButtonAction:(id)arg0;
- (id)templateId;
- (void)setTemplateId:(id)arg0;
- (id)merchantName;
- (void)setMerchantName:(id)arg0;

@end
