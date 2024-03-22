//
//     Generated by private class-dump
//

@protocol IESLiveInteractSmallWindowDelegate;

@protocol IESLiveInteractSmallWindowRouter <NSObject>

@property (readonly, nonatomic) long long currentWindowType;
@property (readonly, nonatomic) BOOL hasSwitchAudioAudioScenarioToCommunication;
@property (weak, nonatomic) id<IESLiveInteractSmallWindowDelegate> currentWindowDelegate;

- (BOOL)canOpenWaitingLinkSmallWindow;
- (BOOL)canOpenLinkMicSmallWindow;
- (BOOL)abEnableWaitingLinkSmallWindow;
- (BOOL)abEnableLinkMicSmallWindow;
- (BOOL)autoOpenInteractSmallWindow;
- (BOOL)isLinkMicSmallWindowShowing;
- (BOOL)isWaitingSmallWindowShowing;
- (long long)permitReceiveEnterRoomTime;
- (id)allMemberList;
- (id)paidLinkProgress;
- (void)updateLimitProgress:(id)arg0 WithUser:(id)arg1;
- (id)smallWindowRoomId;
- (void)currentWindowTypeSwitchTo:(long long)arg0 isReturnRoom:(BOOL)arg1;
- (BOOL)liveInteractSmallWinCloseButtonAbTest;
- (void)showToastWhenCloseSmallWinIfNeeded;
- (BOOL)smallWindowExistBeforeEnterRoom;
- (long long)currentWindowType;
- (BOOL)hasSwitchAudioAudioScenarioToCommunication;
- (id)currentWindowDelegate;
- (void)setCurrentWindowDelegate:(id)arg0;
- (id)linkStatus;

@end