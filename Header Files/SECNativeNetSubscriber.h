//
//     Generated by private class-dump
//

@class NSString;

@interface SECNativeNetSubscriber : NSObject <TMNetworkSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)protectContext:(id)arg0 withEvent:(id)arg1;
- (void)detectWithEvent:(id)arg0;
- (id)actionResultForAction:(id)arg0;
- (BOOL)subscriberEnable;
- (id)handleEventWithContext:(id)arg0;
- (unsigned long long)priorityNumber;
- (id)identifier;
- (unsigned long long)subscriberType;

@end
