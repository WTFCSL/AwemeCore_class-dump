//
//     Generated by private class-dump
//

@protocol PKPushRegistryDelegate <NSObject>

- (void)pushRegistry:(id)arg0 didUpdatePushCredentials:(id)arg1 forType:(id)arg2;

@optional

- (void)pushRegistry:(id)arg0 didReceiveIncomingPushWithPayload:(id)arg1 forType:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)pushRegistry:(id)arg0 didReceiveIncomingPushWithPayload:(id)arg1 forType:(id)arg2;
- (void)pushRegistry:(id)arg0 didInvalidatePushTokenForType:(id)arg1;

@end
