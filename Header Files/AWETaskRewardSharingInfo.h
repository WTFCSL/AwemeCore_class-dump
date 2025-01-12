//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWETaskRewardSharingInfo : AWEBaseApiModel {
    long long _sharedPercentage;
    NSString *_descriptionString;
    NSArray *_participateUserAvatar;
    NSString *_participateUserCount;
}

@property (nonatomic) long long sharedPercentage;
@property (copy, nonatomic) NSString *descriptionString;
@property (copy, nonatomic) NSArray *participateUserAvatar;
@property (copy, nonatomic) NSString *participateUserCount;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)sharedPercentage;
- (void)setSharedPercentage:(long long)arg0;
- (id)participateUserAvatar;
- (void)setParticipateUserAvatar:(id)arg0;
- (id)participateUserCount;
- (void)setParticipateUserCount:(id)arg0;
- (id)descriptionString;
- (void).cxx_destruct;
- (void)setDescriptionString:(id)arg0;

@end
