//
//     Generated by private class-dump
//

@class NSString, CJPaySubPayTypeData, CJPayDefaultChannelShowConfig;

@interface CJPaySubPayTypeInfoModel : CJPayChannelModel <CJPayRequestParamsProtocol> {
    BOOL _isChoosed;
    NSString *_subPayType;
    NSString *_subTitle;
    NSString *_descTitle;
    long long _way;
    NSString *_homePageShow;
    CJPaySubPayTypeData *_payTypeData;
    CJPayDefaultChannelShowConfig *_currentShowConfig;
    NSString *_tradeConfirmButtonText;
    NSString *_extParamStr;
}

@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *subPayType;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *descTitle;
@property (nonatomic) long long way;
@property (nonatomic) BOOL isChoosed;
@property (copy, nonatomic) NSString *homePageShow;
@property (retain, nonatomic) CJPaySubPayTypeData *payTypeData;
@property (weak, nonatomic) CJPayDefaultChannelShowConfig *currentShowConfig;
@property (readonly, nonatomic, getter=channelType) unsigned long long channelType;
@property (readonly, nonatomic) BOOL isCombinePay;
@property (copy, nonatomic) NSString *tradeConfirmButtonText;
@property (copy, nonatomic) NSString *extParamStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)buildParams;
- (void)setWay:(long long)arg0;
- (void)setDescTitle:(id)arg0;
- (id)descTitle;
- (BOOL)isChoosed;
- (void)setIsChoosed:(BOOL)arg0;
- (id)payTypeData;
- (id)requestNeedParams;
- (id)buildShowConfig;
- (BOOL)isCombinePay;
- (id)subPayType;
- (void)setPayTypeData:(id)arg0;
- (id)extParamStr;
- (void)setExtParamStr:(id)arg0;
- (void)setSubPayType:(id)arg0;
- (void)setCurrentShowConfig:(id)arg0;
- (id)tradeConfirmButtonText;
- (void)setTradeConfirmButtonText:(id)arg0;
- (id)currentShowConfig;
- (id)p_identifyWithPayType:(id)arg0;
- (id)homePageShow;
- (void)setHomePageShow:(id)arg0;
- (unsigned long long)channelType;
- (void).cxx_destruct;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (long long)way;

@end