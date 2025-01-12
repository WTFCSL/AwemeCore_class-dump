//
//     Generated by private class-dump
//

@class NSString;

@interface SECLynxBridgeChecker : NSObject <SECHybridAPICheckDecisionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)__preMatchRulesWithUrl:(id)arg0 containerType:(unsigned long long)arg1;
- (BOOL)__hitRuleGroup:(id)arg0 bridgeContext:(id)arg1;
- (BOOL)__isPatternMatched:(id)arg0 url:(id)arg1 type:(unsigned long long)arg2;
- (BOOL)__hitSingleRule:(id)arg0 bridgeContext:(id)arg1;
- (void)preMatchRulesWithUrl:(id)arg0 containerType:(unsigned long long)arg1;
- (id)checkBridgeCallableWithBridgeContext:(id)arg0 containerType:(unsigned long long)arg1;

@end
