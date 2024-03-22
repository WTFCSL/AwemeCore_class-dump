//
//     Generated by private class-dump
//

@protocol IESLivePlaybackRoomAction <NSObject>

@optional

- (void)updateEpisode;
- (void)updateRoom;
- (void)closeAbnormalAnchorRoom;
- (void)closeRoomToRoot:(BOOL)arg0;
- (void)writeInteractiveFanTickets:(id)arg0;
- (void)liveWillStart;
- (void)liveWillAppear;
- (void)liveWillDisappear;
- (void)liveWillSuspend;
- (void)liveWillTerminated;
- (void)liveDidEnterBackground;
- (void)liveWillEnterForground;
- (void)liveDidBecomeActive;
- (void)liveDidCloseAllRoom;
- (void)liveComponentDidLoaded;
- (void)liveWillFinished;
- (void)pauseWatchTimer;
- (void)resumeWatchTimer;
- (void)liveDidLoadFirstFrame;
- (void)kickedOutWithRoomId:(id)arg0 anchorId:(id)arg1;
- (void)onReceiveRmoteRoomData:(id)arg0;
- (void)liveComponentDistroyed;
- (void)componentsLoadDidFinish;

@end