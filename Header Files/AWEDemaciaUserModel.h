//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDemaciaUserModel : AWEBaseApiModel {
    NSString *_userID;
    long long _followStatus;
}

@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long followStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)followStatus;
- (void)setFollowStatus:(long long)arg0;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;

@end