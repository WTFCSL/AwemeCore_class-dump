//
//     Generated by private class-dump
//

@interface TMExemptionRequestSubscriber : TMNetworkBaseSubscriber

- (BOOL)subscriberEnable;
- (id)handleEventWithContext:(id)arg0;
- (unsigned long long)priorityNumber;
- (BOOL)isExemptedByPureModeWithHeaders:(id)arg0;
- (BOOL)isExemptedWithPath:(id)arg0 host:(id)arg1;
- (BOOL)isExemptedWithPath:(id)arg0;
- (BOOL)isExemptedWithHost:(id)arg0;
- (id)identifier;
- (unsigned long long)subscriberType;

@end
