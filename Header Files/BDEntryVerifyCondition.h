//
//     Generated by private class-dump
//

@class NSSet;

@interface BDEntryVerifyCondition : BDCertCondition {
    NSSet *_allowList;
}

@property (copy, nonatomic) NSSet *allowList;

- (id)validateCertUnit:(id)arg0;
- (void)parseParams:(id)arg0;
- (id)extractConfigParams;
- (id)methodNameWithCertUnit:(id)arg0;
- (void).cxx_destruct;
- (id)allowList;
- (id)error;
- (void)setAllowList:(id)arg0;

@end