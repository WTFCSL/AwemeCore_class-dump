//
//     Generated by private class-dump
//

@class NSString;

@interface TMNetworkBaseSubscriber : NSObject <TMNetworkSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)subscriberEnable;
- (id)handleEventWithContext:(id)arg0;
- (unsigned long long)priorityNumber;
- (id)identifier;
- (unsigned long long)subscriberType;

@end