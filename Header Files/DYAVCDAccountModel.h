//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface DYAVCDAccountModel : DYAPassportResponseModel {
    long long _appID;
    NSString *_userID;
    NSString *_secUserID;
    NSString *_screenName;
    NSArray *_avatarURLs;
    NSArray *_urlLists;
    NSString *_nickName;
    long long _fansCount;
    long long _friendsCount;
    long long _secret;
    NSString *_customVerify;
    NSString *_enterpriseVerify;
    long long _verificationType;
}

@property (nonatomic) long long appID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *screenName;
@property (copy, nonatomic) NSArray *avatarURLs;
@property (copy, nonatomic) NSArray *urlLists;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) long long fansCount;
@property (nonatomic) long long friendsCount;
@property (nonatomic) long long secret;
@property (copy, nonatomic) NSString *customVerify;
@property (copy, nonatomic) NSString *enterpriseVerify;
@property (nonatomic) long long verificationType;

+ (id)userIDJSONTransformer;
+ (id)avatarURLsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (id)avatarURLs;
- (void)setFansCount:(long long)arg0;
- (void)setFriendsCount:(long long)arg0;
- (void)setUrlLists:(id)arg0;
- (id)urlLists;
- (id)customVerify;
- (void)setCustomVerify:(id)arg0;
- (long long)fansCount;
- (void)setAvatarURLs:(id)arg0;
- (void)setEnterpriseVerify:(id)arg0;
- (id)enterpriseVerify;
- (id)userID;
- (void)setNickName:(id)arg0;
- (void)setAppID:(long long)arg0;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (long long)friendsCount;
- (long long)appID;
- (id)nickName;
- (long long)verificationType;
- (void)setVerificationType:(long long)arg0;
- (id)screenName;
- (void)setScreenName:(id)arg0;
- (long long)secret;
- (void)setSecret:(long long)arg0;

@end