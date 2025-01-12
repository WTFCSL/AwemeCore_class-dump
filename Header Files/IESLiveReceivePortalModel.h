//
//     Generated by private class-dump
//

@class HTSLiveUser;

@interface IESLiveReceivePortalModel : IESLiveDynamicModel {
    int _userType;
}

@property (retain, nonatomic) HTSLiveUser *sugarDaddy;
@property (retain, nonatomic) HTSLiveUser *anchor;
@property (nonatomic) int userType;
@property (nonatomic) long long portalID;
@property (nonatomic) long long startTime;
@property (nonatomic) long long waitDuration;
@property (nonatomic) long long rewardDuration;
@property (nonatomic) long long remainTime;
@property (nonatomic) long long rewardAmount;
@property (nonatomic) long long roomLuckyMoneyAmount;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) long long countDown;

- (id)initWithPortalMessage:(id)arg0;
- (id)initWithSendPortalModel:(id)arg0;
- (int)userType;
- (unsigned long long)state;
- (long long)countDown;
- (void)setUserType:(int)arg0;

@end
