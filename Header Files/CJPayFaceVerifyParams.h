//
//     Generated by private class-dump
//

@class NSString, CJPayFaceVerifyFullLeadPageConfiguration;

@interface CJPayFaceVerifyParams : JSONModel {
    NSString *_isSigned;
    NSString *_memberBizOrderNo;
    NSString *_liveRoute;
    NSString *_source;
    NSString *_appId;
    NSString *_merchantId;
    NSString *_riskSource;
    NSString *_configParamsStr;
    CJPayFaceVerifyFullLeadPageConfiguration *_leadPageConfiguration;
}

@property (copy, nonatomic) NSString *isSigned;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (copy, nonatomic) NSString *liveRoute;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *riskSource;
@property (copy, nonatomic) NSString *configParamsStr;
@property (retain, nonatomic) CJPayFaceVerifyFullLeadPageConfiguration *leadPageConfiguration;
@property (readonly, nonatomic) BOOL isVerifyParamsValid;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)memberBizOrderNo;
- (void)setMemberBizOrderNo:(id)arg0;
- (id)riskSource;
- (BOOL)isVerifyParamsValid;
- (id)leadPageConfiguration;
- (void)setRiskSource:(id)arg0;
- (id)liveRoute;
- (void)setLeadPageConfiguration:(id)arg0;
- (id)configParamsStr;
- (void)setLiveRoute:(id)arg0;
- (void)setConfigParamsStr:(id)arg0;
- (void)setAppId:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (id)isSigned;
- (void)setSource:(id)arg0;
- (id)appId;
- (id)merchantId;
- (void)setMerchantId:(id)arg0;
- (void)setIsSigned:(id)arg0;

@end
