//
//     Generated by private class-dump
//

@interface AWEECCpsTrackerParamsValidator : NSObject

- (BOOL)performSelectorWithType:(id)arg0 objects:(id)arg1;
- (BOOL)checkParamWithRegex:(id)arg0 value:(id)arg1;
- (BOOL)checkParamWithLength:(id)arg0 value:(id)arg1;
- (BOOL)checkParamWithEnum:(id)arg0 value:(id)arg1;
- (BOOL)checkParamWithNonull:(id)arg0 value:(id)arg1;
- (BOOL)validateValue:(id)arg0 config:(id)arg1;
- (SEL)selectorForType:(id)arg0;

@end
