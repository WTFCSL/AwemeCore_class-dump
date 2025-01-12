//
//     Generated by private class-dump
//

@class NSString;

@interface DYAPassportConnectModel : DYAPassportResponseModel {
    NSString *_platformString;
    NSString *_profileURL;
    long long _expiredTime;
    NSString *_platformScreenName;
    NSString *_platformUid;
    NSString *_userID;
}

@property (readonly, nonatomic) unsigned long long platformEnumValue;
@property (copy, nonatomic) NSString *platformString;
@property (copy, nonatomic) NSString *profileURL;
@property (nonatomic) long long expiredTime;
@property (copy, nonatomic) NSString *platformScreenName;
@property (copy, nonatomic) NSString *platformUid;
@property (copy, nonatomic) NSString *userID;

+ (id)JSONKeyPathsByPropertyKey;

- (id)platformScreenName;
- (long long)expiredTime;
- (void)setExpiredTime:(long long)arg0;
- (void)setPlatformScreenName:(id)arg0;
- (unsigned long long)platformEnumValue;
- (id)profileURL;
- (void)setProfileURL:(id)arg0;
- (id)platformUid;
- (void)setPlatformUid:(id)arg0;
- (id)userID;
- (id)platformString;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (void)setPlatformString:(id)arg0;

@end
