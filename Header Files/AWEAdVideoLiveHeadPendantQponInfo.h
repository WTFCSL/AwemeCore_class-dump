//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEAdVideoLiveHeadPendantQponInfo : MTLModel <MTLJSONSerializing> {
    NSString *_counponToken;
    NSNumber *_exchangeValue;
    NSNumber *_expireTime;
    NSNumber *_qponAction;
    NSNumber *_qponThreshold;
    NSNumber *_qponType;
    NSNumber *_qponValue;
    NSString *_qponScene;
    NSNumber *_taskAwardBalanceMargin;
    NSString *_ecomLiveParams;
    NSString *_expireTimeStr;
    NSString *_validScopeText;
    NSNumber *_isCouponShorten;
}

@property (copy, nonatomic) NSString *counponToken;
@property (retain, nonatomic) NSNumber *exchangeValue;
@property (retain, nonatomic) NSNumber *expireTime;
@property (retain, nonatomic) NSNumber *qponAction;
@property (retain, nonatomic) NSNumber *qponThreshold;
@property (retain, nonatomic) NSNumber *qponType;
@property (retain, nonatomic) NSNumber *qponValue;
@property (copy, nonatomic) NSString *qponScene;
@property (retain, nonatomic) NSNumber *taskAwardBalanceMargin;
@property (copy, nonatomic) NSString *ecomLiveParams;
@property (copy, nonatomic) NSString *expireTimeStr;
@property (copy, nonatomic) NSString *validScopeText;
@property (retain, nonatomic) NSNumber *isCouponShorten;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (id)ecomLiveParams;
- (void)setEcomLiveParams:(id)arg0;
- (id)qponScene;
- (id)counponToken;
- (void)setCounponToken:(id)arg0;
- (id)exchangeValue;
- (void)setExchangeValue:(id)arg0;
- (id)qponAction;
- (void)setQponAction:(id)arg0;
- (id)qponThreshold;
- (void)setQponThreshold:(id)arg0;
- (id)qponType;
- (void)setQponType:(id)arg0;
- (id)qponValue;
- (void)setQponValue:(id)arg0;
- (void)setQponScene:(id)arg0;
- (id)taskAwardBalanceMargin;
- (void)setTaskAwardBalanceMargin:(id)arg0;
- (id)expireTimeStr;
- (void)setExpireTimeStr:(id)arg0;
- (id)validScopeText;
- (void)setValidScopeText:(id)arg0;
- (id)isCouponShorten;
- (void)setIsCouponShorten:(id)arg0;
- (void).cxx_destruct;
- (id)expireTime;
- (void)setExpireTime:(id)arg0;

@end
