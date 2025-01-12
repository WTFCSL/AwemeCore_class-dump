//
//     Generated by private class-dump
//

@class NSString, AWELandingMemoStrategyDict;

@interface AWELandingMemoStrategyConfig : NSObject {
    NSString *_settingsID;
    long long _strategyActivateTime;
    AWELandingMemoStrategyDict *_positive;
    AWELandingMemoStrategyDict *_negative;
}

@property (nonatomic) long long strategyActivateTime;
@property (retain, nonatomic) AWELandingMemoStrategyDict *positive;
@property (retain, nonatomic) AWELandingMemoStrategyDict *negative;
@property (retain, nonatomic) NSString *settingsID;

- (long long)strategyActivateTime;
- (void)setStrategyActivateTime:(long long)arg0;
- (void)setNegative:(id)arg0;
- (void).cxx_destruct;
- (id)settingsID;
- (void)setSettingsID:(id)arg0;
- (id)negative;
- (void)setPositive:(id)arg0;
- (id)positive;

@end
