//
//     Generated by private class-dump
//

@protocol IESLiveGameOpenPlatformSEIServiceInterface <NSObject>

- (void)startSendingShareScreenSEIWithStatus:(BOOL)arg0 timeIntervalInSeconds:(unsigned long long)arg1;
- (void)stopSendingShareScreenSEI;
- (void)startSendingSEIHeartbeat:(id)arg0 forApp:(id)arg1 timeIntervalInSeconds:(unsigned long long)arg2;
- (void)stopSendingSEIHeartbeatForApp:(id)arg0;

@end
