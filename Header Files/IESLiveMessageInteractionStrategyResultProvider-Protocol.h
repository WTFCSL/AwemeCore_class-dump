//
//     Generated by private class-dump
//

@protocol IESLiveMessageInteractionStrategyResultProvider <NSObject>

- (void)registerStrategyModel:(id)arg0;
- (void)registerStrategyWithJSONDictionary:(id)arg0;
- (id)strategyModelWith:(id)arg0;
- (void)addSubscriber:(id)arg0 forStrategy:(id)arg1 withDefaultFactor:(id)arg2;
- (void)removeSubscriber:(id)arg0 forStrategy:(id)arg1;
- (id)factorValueWithKey:(id)arg0;
- (void)addSubscriberForPublicScreenHistoryMessageStrategy:(id)arg0;

@end