//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOIParamExclusionRule : AWEPOIParamsRule <AWEPOIParamsRuleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)ruleName;
- (BOOL)verifyEventParam:(id)arg0 ruleItem:(id)arg1 error:(id *)arg2 failedReason:(id *)arg3;

@end