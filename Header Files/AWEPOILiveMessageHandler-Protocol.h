//
//     Generated by private class-dump
//

@protocol AWEPOILiveMessageHandler <NSObject>

@optional

- (void)handleRegisterMsgSubscriber:(id)arg0;
- (void)handleUnRegisterMsgSubscriber:(id)arg0;
- (void)handleReleaseMsgCenter:(unsigned long long)arg0 extra:(id)arg1;
- (BOOL)handlePostMessage:(id)arg0 withSubscriber:(id)arg1;

@end
