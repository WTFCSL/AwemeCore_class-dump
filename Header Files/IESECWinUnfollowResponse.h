//
//     Generated by private class-dump
//

@class NSString;

@interface IESECWinUnfollowResponse : IESECBaseApiModel {
    NSString *_deleteFollowSuccessMsg;
    long long _followStatus;
}

@property (copy, nonatomic) NSString *deleteFollowSuccessMsg;
@property (nonatomic) long long followStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)followStatus;
- (void)setFollowStatus:(long long)arg0;
- (id)deleteFollowSuccessMsg;
- (void)setDeleteFollowSuccessMsg:(id)arg0;
- (void).cxx_destruct;

@end