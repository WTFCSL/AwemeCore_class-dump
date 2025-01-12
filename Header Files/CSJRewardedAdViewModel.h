//
//     Generated by private class-dump
//

@interface CSJRewardedAdViewModel : NSObject {
    BOOL _useFullLinkTimer;
    BOOL _sendRewardWhenSwitchToEndcard;
    double _topBarTotoalTime;
    long long _rewardTotoalTime;
    double _rewardOriginTime;
    unsigned long long _rewardTimingPageMask;
    unsigned long long _rewardedSceneType;
}

@property (nonatomic) double topBarTotoalTime;
@property (nonatomic) long long rewardTotoalTime;
@property (nonatomic) double rewardOriginTime;
@property (nonatomic) BOOL useFullLinkTimer;
@property (nonatomic) unsigned long long rewardTimingPageMask;
@property (nonatomic) BOOL sendRewardWhenSwitchToEndcard;
@property (nonatomic) unsigned long long rewardedSceneType;

- (void)setupWithMaterial:(id)arg0;
- (BOOL)sendRewardWhenSwitchToEndcard;
- (BOOL)useFullLinkTimer;
- (void)setSendRewardWhenSwitchToEndcard:(BOOL)arg0;
- (void)setTopBarTotoalTime:(double)arg0;
- (void)setRewardedSceneType:(unsigned long long)arg0;
- (void)setUseFullLinkTimer:(BOOL)arg0;
- (void)setRewardTimingPageMask:(unsigned long long)arg0;
- (void)setRewardTotoalTime:(long long)arg0;
- (void)setRewardOriginTime:(double)arg0;
- (double)topBarTotoalTime;
- (unsigned long long)rewardedSceneType;
- (long long)rewardTotoalTime;
- (unsigned long long)rewardTimingPageMask;
- (double)rewardOriginTime;

@end
