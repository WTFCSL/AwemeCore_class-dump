//
//     Generated by private class-dump
//

@protocol RTVFeedSharePIPControllerProtocol <NSObject>

- (void)playerIsPaused;
- (void)stopWaitingForAutomaticInlinePiP;
- (void)stopPiP;
- (void)videoBeginPlayWithModel:(id)arg0;
- (void)playerStartPlay;
- (void)setFeedShareContentViewController:(id)arg0;
- (void)setNeedRestoreUserInterface:(BOOL)arg0;
- (BOOL)pipIsActive;
- (void)startPIP;
- (void)restoreFeedContentInterfaceWhilePiPStop;
- (void)viewDidAppear:(BOOL)arg0;
- (void)setCanStartPictureInPictureAutomaticallyFromInline:(BOOL)arg0;
- (void)viewDidLoad;
- (void)invalidateContext;
- (BOOL)willStop;

@end
