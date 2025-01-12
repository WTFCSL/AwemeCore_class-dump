//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface TTADataAccountValueModel : TTADataRespModel {
    long long _userType;
    long long _authType;
    NSArray *_oauthPlatforms;
    NSString *_valueTicket;
}

@property (nonatomic) long long userType;
@property (nonatomic) long long authType;
@property (copy, nonatomic) NSArray *oauthPlatforms;
@property (copy, nonatomic) NSString *valueTicket;

+ (id)tta_modelCustomPropertyMapper;

- (id)oauthPlatforms;
- (void)setOauthPlatforms:(id)arg0;
- (id)valueTicket;
- (void)setValueTicket:(id)arg0;
- (long long)userType;
- (void).cxx_destruct;
- (long long)authType;
- (void)setAuthType:(long long)arg0;
- (void)setUserType:(long long)arg0;

@end
