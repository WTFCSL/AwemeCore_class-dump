//
//     Generated by private class-dump
//

@protocol TMAPIControlService <NSObject>

- (id)createTaskWithBroker:(id)arg0 andContext:(id)arg1 taskType:(unsigned long long)arg2;
- (id)handleTask:(id)arg0;
- (void)registerTaskBroker:(id)arg0;
- (void)registerSubscriber:(id)arg0 onEventType:(id)arg1;
- (void)unregisterSubscriber:(id)arg0 onEventType:(id)arg1;
- (BOOL)serviceEnabled;
- (void)setupEnabled:(BOOL)arg0;

@end
