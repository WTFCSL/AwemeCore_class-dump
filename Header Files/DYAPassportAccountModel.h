//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, DYAAppUserInfoModel, NSNumber;

@interface DYAPassportAccountModel : DYAPassportResponseModel <DYARawDataProtocol, MTLJSONSerializing> {
    BOOL _isNewUser;
    BOOL _isEmployee;
    BOOL _isSameUid;
    BOOL _isRelationUser;
    BOOL _hasPassword;
    BOOL _needBindMobile;
    NSDictionary *rawData;
    NSString *_userID;
    NSString *_secUserID;
    NSString *_secUid;
    long long _countryCode;
    NSString *_avatarURL;
    NSString *_phoneNumber;
    NSString *_sessionKey;
    long long _userAuthStatus;
    long long _appID;
    NSArray *_thirdConnects;
    long long _recordStatus;
    unsigned long long _enterpriseUserType;
    NSString *_safeMobile;
    long long _safeMobileCountryCode;
    NSString *_email;
    long long _vcdAccoutState;
    long long _vcdRelationState;
    NSArray *_subAccounts;
    NSString *_smsCodeKey;
    DYAAppUserInfoModel *_appUserInfo;
    NSString *_relationUserToken;
    NSString *_source;
    NSNumber *_needCheckBindStatus;
    NSArray *_assistAccountInfo;
    NSString *_screenName;
}

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *secUid;
@property (nonatomic) long long countryCode;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *sessionKey;
@property (nonatomic) BOOL isNewUser;
@property (nonatomic) long long userAuthStatus;
@property (nonatomic) long long appID;
@property (copy, nonatomic) NSArray *thirdConnects;
@property (nonatomic) long long recordStatus;
@property (nonatomic) BOOL isEmployee;
@property (nonatomic) unsigned long long enterpriseUserType;
@property (nonatomic) BOOL isSameUid;
@property (copy, nonatomic) NSString *safeMobile;
@property (nonatomic) long long safeMobileCountryCode;
@property (copy, nonatomic) NSString *email;
@property (nonatomic) long long vcdAccoutState;
@property (nonatomic) long long vcdRelationState;
@property (copy, nonatomic) NSArray *subAccounts;
@property (copy, nonatomic) NSString *smsCodeKey;
@property (retain, nonatomic) DYAAppUserInfoModel *appUserInfo;
@property (copy, nonatomic) NSString *relationUserToken;
@property (nonatomic) BOOL isRelationUser;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL hasPassword;
@property (retain, nonatomic) NSNumber *needCheckBindStatus;
@property (nonatomic) BOOL needBindMobile;
@property (copy, nonatomic) NSArray *assistAccountInfo;
@property (copy, nonatomic) NSString *screenName;
@property (copy, nonatomic) NSDictionary *rawData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userIDJSONTransformer;
+ (id)thirdConnectsJSONTransformer;
+ (id)subAccountsJSONTransformer;
+ (id)appUserInfoJSONTransformer;
+ (id)assistAccountInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (id)secUid;
- (id)avatarURL;
- (void)setAvatarURL:(id)arg0;
- (void)setSecUid:(id)arg0;
- (BOOL)isHotLogin;
- (unsigned long long)enterpriseUserType;
- (BOOL)isCommercialAccount;
- (BOOL)needBindMobile;
- (void)setNeedBindMobile:(BOOL)arg0;
- (long long)userAuthStatus;
- (id)smsCodeKey;
- (id)relationUserToken;
- (BOOL)isRelationUser;
- (BOOL)isSameUid;
- (void)setRelationUserToken:(id)arg0;
- (id)safeMobile;
- (void)setSafeMobile:(id)arg0;
- (id)nhAccountUser;
- (void)setUserAuthStatus:(long long)arg0;
- (id)thirdConnects;
- (void)setThirdConnects:(id)arg0;
- (BOOL)isEmployee;
- (void)setIsEmployee:(BOOL)arg0;
- (void)setEnterpriseUserType:(unsigned long long)arg0;
- (void)setIsSameUid:(BOOL)arg0;
- (long long)safeMobileCountryCode;
- (void)setSafeMobileCountryCode:(long long)arg0;
- (long long)vcdAccoutState;
- (void)setVcdAccoutState:(long long)arg0;
- (long long)vcdRelationState;
- (void)setVcdRelationState:(long long)arg0;
- (id)subAccounts;
- (void)setSubAccounts:(id)arg0;
- (void)setSmsCodeKey:(id)arg0;
- (id)appUserInfo;
- (void)setAppUserInfo:(id)arg0;
- (void)setIsRelationUser:(BOOL)arg0;
- (id)needCheckBindStatus;
- (void)setNeedCheckBindStatus:(id)arg0;
- (id)assistAccountInfo;
- (void)setAssistAccountInfo:(id)arg0;
- (id)userID;
- (long long)countryCode;
- (void)setCountryCode:(long long)arg0;
- (void)setAppID:(long long)arg0;
- (id)source;
- (void).cxx_destruct;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg0;
- (void)setUserID:(id)arg0;
- (id)sessionKey;
- (long long)appID;
- (BOOL)hasPassword;
- (id)rawData;
- (id)email;
- (void)setRawData:(id)arg0;
- (void)setSource:(id)arg0;
- (void)setSessionKey:(id)arg0;
- (void)setEmail:(id)arg0;
- (long long)recordStatus;
- (void)setRecordStatus:(long long)arg0;
- (id)screenName;
- (void)setScreenName:(id)arg0;
- (void)setHasPassword:(BOOL)arg0;
- (void)setIsNewUser:(BOOL)arg0;
- (BOOL)isNewUser;

@end