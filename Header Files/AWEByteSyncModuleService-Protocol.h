//
//     Generated by private class-dump
//

@protocol AWEByteSyncModuleService <HTSService>

- (void)registerBusinessId:(int)arg0 handleMessageBlock:(id /* block */)arg1;
- (void)unregisterBusinessId:(int)arg0;
- (void)registerCommonParamsBlock:(id /* block */)arg0;
- (void)uploadMessageData:(id)arg0 forBusinessId:(int)arg1;
- (void)trySyncDataFromServer;

@end
