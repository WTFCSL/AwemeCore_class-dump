//
//     Generated by private class-dump
//

@interface AFDPitayaRegisterCenter : NSObject

+ (id)sharedInstance;

- (void)p_registerMessageHandlerWhenReady;
- (void)p_removeMessageHandler;
- (void)p_registerMessageHandler;
- (void)p_registerMessageHandlerForInnerPush;
- (void)p_registerMessageHandlerForLanding;
- (void)p_registerMessageHandlerForSnackBar;
- (void)p_pitayaQueryPackageWithBusinessName:(id)arg0;
- (id)init;
- (void)dealloc;

@end
