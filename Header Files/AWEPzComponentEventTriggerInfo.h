//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEPzComponentEventTriggerInfo : NSObject <AWEPzComponentEventTriggerInfoProtocol> {
    NSString *_strategyType;
    NSString *_strategyID;
    NSDictionary *_customParams;
}

@property (copy, nonatomic) NSString *strategyType;
@property (copy, nonatomic) NSString *strategyID;
@property (copy, nonatomic) NSDictionary *customParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStrategyType:(id)arg0;
- (void)setCustomParams:(id)arg0;
- (id)customParams;
- (id)strategyType;
- (id)strategyID;
- (void)setStrategyID:(id)arg0;
- (void).cxx_destruct;
- (id)description;

@end
