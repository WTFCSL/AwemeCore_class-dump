//
//     Generated by private class-dump
//

@class NSString;

@interface TMBPEACollectionEventReporter : NSObject <BDPolicyEventSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventName:(id)arg0;
- (id)subscriberUid;
- (BOOL)_shouldHandleEvent:(id)arg0;
- (void)alogEvent:(id)arg0;
- (void)reportEvent:(id)arg0;
- (void)handleEvent:(id)arg0;

@end
