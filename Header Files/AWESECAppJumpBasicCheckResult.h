//
//     Generated by private class-dump
//

@interface AWESECAppJumpBasicCheckResult : NSObject {
    unsigned long long _riskLevel;
    unsigned long long _timeCost;
    unsigned long long _startTime;
}

@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long riskLevel;
@property (nonatomic) unsigned long long timeCost;

- (void)setRiskLevel:(unsigned long long)arg0;
- (unsigned long long)timeCost;
- (void)setTimeCost:(unsigned long long)arg0;
- (void)end;
- (id)init;
- (void)setStartTime:(unsigned long long)arg0;
- (unsigned long long)startTime;
- (void)start;
- (unsigned long long)riskLevel;

@end
