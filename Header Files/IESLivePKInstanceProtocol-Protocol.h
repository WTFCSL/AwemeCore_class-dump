//
//     Generated by private class-dump
//

@protocol IESLivePKInstanceProtocol <NSObject>

- (void)onPKFinish;
- (void)endLiveWithScource:(unsigned long long)arg0;

@optional

- (void)sendEffectRenderInfo;
- (void)notifyPKLynxEvent:(long long)arg0 extraParams:(id)arg1;
- (void)endConnectionWithConfirm:(BOOL)arg0 source:(unsigned long long)arg1;
- (void)updateStreamBackgroundIfNeed;
- (id)emojiContainerForUserID:(id)arg0 isInteractiveEmoji:(BOOL)arg1;
- (void)handleBattleBg:(id)arg0 topImage:(id)arg1 bottomImage:(id)arg2;
- (void)onBusinessPrepare;
- (void)screenOrientationChanged:(long long)arg0;
- (void)onRTCPrepare;
- (void)stopForwardStream;
- (void)resumeForwardStream;
- (void)unloadGuestInstance;

@end
