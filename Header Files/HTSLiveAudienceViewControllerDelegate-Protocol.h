//
//     Generated by private class-dump
//

@protocol HTSLiveAudienceViewControllerDelegate <NSObject>

@optional

- (void)didEnterRoom:(id)arg0;
- (void)viewWillTransition;
- (void)viewDidTransition;
- (void)viewWillBeginRotating;
- (void)viewDidEndRotating;
- (void)closeWithRoom:(id)arg0 closeType:(unsigned long long)arg1;
- (BOOL)canCloseWithRoom:(id)arg0 closeType:(unsigned long long)arg1;
- (void)willCloseWithRoom:(id)arg0 closeType:(unsigned long long)arg1;
- (BOOL)unwindToAudienceController:(id)arg0 animated:(BOOL)arg1;
- (void)didCloseRoom:(id)arg0 closeType:(unsigned long long)arg1;
- (void)audienceViewControllerVideoPlayerDidLoadFirstFrame:(id)arg0;
- (id)promptWithEnterRoomFail:(id)arg0 closeType:(unsigned long long)arg1;
- (BOOL)isSlideViewController;
- (void)closeDeallocWithRoom:(id)arg0;

@end