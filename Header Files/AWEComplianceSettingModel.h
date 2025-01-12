//
//     Generated by private class-dump
//

@class AWEU18VerificationV2Model, NSString, NSArray, AWETeenAbParamModel, AWECertificationModel, AWEMinorStatusModel, AWEUnloginTeenmodeModel, AWETeenRecommendModel, AWELegalEntityInfo;

@interface AWEComplianceSettingModel : AWEBaseApiModel <AWEComplianceModelProtocol> {
    BOOL enableImpressum;
    BOOL forcePrivateAccount;
    BOOL isTeenProtector;
    BOOL policyNoticeEnable;
    BOOL parentalChildTeenMode;
    NSArray *blackList;
    NSString *impressumUrl;
    NSString *aboutPrivacyPolicyUrl;
    AWELegalEntityInfo *legalEntityInfo;
    long long TeenModeAlertCount;
    NSString *teensModeAlertRedirectUrl;
    AWEUnloginTeenmodeModel *didTeenStatusModel;
    AWEMinorStatusModel *minorStatus;
    long long parentalGuardianMode;
    AWETeenAbParamModel *teenAbParam;
    AWECertificationModel *certModel;
    AWEU18VerificationV2Model *u18VerificationV2Model;
    long long businessErrorCode;
    AWETeenRecommendModel *teenRecommend;
}

@property (nonatomic) BOOL enableImpressum;
@property (copy, nonatomic) NSString *impressumUrl;
@property (retain, nonatomic) NSArray *blackList;
@property (nonatomic) long long TeenModeAlertCount;
@property (copy, nonatomic) NSString *teensModeAlertRedirectUrl;
@property (copy, nonatomic) NSString *aboutPrivacyPolicyUrl;
@property (nonatomic) BOOL policyNoticeEnable;
@property (nonatomic) BOOL forcePrivateAccount;
@property (nonatomic) BOOL isTeenProtector;
@property (retain) AWEMinorStatusModel *minorStatus;
@property (retain, nonatomic) AWETeenAbParamModel *teenAbParam;
@property (retain, nonatomic) AWELegalEntityInfo *legalEntityInfo;
@property (retain, nonatomic) AWEUnloginTeenmodeModel *didTeenStatusModel;
@property (nonatomic) long long parentalGuardianMode;
@property (nonatomic) BOOL parentalChildTeenMode;
@property (retain, nonatomic) AWECertificationModel *certModel;
@property (retain, nonatomic) AWEU18VerificationV2Model *u18VerificationV2Model;
@property (nonatomic) long long businessErrorCode;
@property (retain, nonatomic) AWETeenRecommendModel *teenRecommend;

+ (id)legalEntityInfoJSONTransformer;
+ (id)didTeenStatusModelJSONTransformer;
+ (id)minorStatusJSONTransformer;
+ (id)teenAbParamJSONTransformer;
+ (id)certModelJSONTransformer;
+ (id)AWEU18VerificationV2ModelModelJSONTransformer;
+ (id)teenRecommendJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)blackList;
- (void)setBlackList:(id)arg0;
- (id)didTeenStatusModel;
- (void)setDidTeenStatusModel:(id)arg0;
- (id)minorStatus;
- (id)certModel;
- (long long)businessErrorCode;
- (long long)TeenModeAlertCount;
- (long long)parentalGuardianMode;
- (void)setMinorStatus:(id)arg0;
- (id)teensModeAlertRedirectUrl;
- (BOOL)isEmptyOfTeensModeAlertRedirectUrl;
- (BOOL)enableImpressum;
- (void)setEnableImpressum:(BOOL)arg0;
- (id)impressumUrl;
- (void)setImpressumUrl:(id)arg0;
- (void)setTeenModeAlertCount:(long long)arg0;
- (void)setTeensModeAlertRedirectUrl:(id)arg0;
- (id)aboutPrivacyPolicyUrl;
- (void)setAboutPrivacyPolicyUrl:(id)arg0;
- (BOOL)policyNoticeEnable;
- (void)setPolicyNoticeEnable:(BOOL)arg0;
- (BOOL)forcePrivateAccount;
- (void)setForcePrivateAccount:(BOOL)arg0;
- (BOOL)isTeenProtector;
- (void)setIsTeenProtector:(BOOL)arg0;
- (id)teenAbParam;
- (void)setTeenAbParam:(id)arg0;
- (id)legalEntityInfo;
- (void)setLegalEntityInfo:(id)arg0;
- (void)setParentalGuardianMode:(long long)arg0;
- (BOOL)parentalChildTeenMode;
- (void)setParentalChildTeenMode:(BOOL)arg0;
- (void)setCertModel:(id)arg0;
- (id)u18VerificationV2Model;
- (void)setU18VerificationV2Model:(id)arg0;
- (void)setBusinessErrorCode:(long long)arg0;
- (id)teenRecommend;
- (void)setTeenRecommend:(id)arg0;
- (void).cxx_destruct;

@end
