//
//     Generated by private class-dump
//

@class IESLiveImage, HTSLiveUser;

@interface IESLiveInvitePortalModel : IESLiveDynamicModel {
    long long _distributeStrategy;
}

@property (nonatomic) long long portalID;
@property (nonatomic) long long roomID;
@property (nonatomic) long long countDown;
@property (retain, nonatomic) HTSLiveUser *anchor;
@property (retain, nonatomic) HTSLiveUser *sugarDaddy;
@property (retain, nonatomic) IESLiveImage *cover;
@property (nonatomic) long long rewardAmount;
@property (nonatomic) long long distributeStrategy;

- (long long)distributeStrategy;
- (void)setDistributeStrategy:(long long)arg0;
- (id)initWithPortalMessage:(id)arg0;

@end
