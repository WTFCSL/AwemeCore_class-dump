//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEAntiAddictStrategyThresholdUnitProtocol;

@interface AWEAntiAddictForceMaskStrategy : NSObject <AWEAntiAddictStrategy> {
    long long _satisfiedStrategyIndex;
    id<AWEAntiAddictStrategyThresholdUnitProtocol> _satisfiedStrategy;
}

@property long long satisfiedStrategyIndex;
@property (retain) id<AWEAntiAddictStrategyThresholdUnitProtocol> satisfiedStrategy;
@property (readonly, copy, nonatomic) NSString *strategyName;
@property (readonly, nonatomic) long long triggerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)satisfiedWithPreparedData:(id)arg0;
- (id)getActionWithPreparedData:(id)arg0;
- (long long)satisfiedStrategyIndex;
- (id)satisfiedStrategy;
- (void)setSatisfiedStrategyIndex:(long long)arg0;
- (void)setSatisfiedStrategy:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)triggerType;
- (id)strategyName;

@end
