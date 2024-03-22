//
//     Generated by private class-dump
//

@protocol RTVPiPControllerDelegate <NSObject>

@optional

- (void)PiPControllerWillStartPiP:(id)arg0;
- (void)PiPControllerDidStartPiP:(id)arg0;
- (void)PiPController:(id)arg0 failedToStartPiPWithError:(id)arg1;
- (void)PiPController:(id)arg0 restoreUserInterfaceForPiPStopWithCompletionHandler:(id /* block */)arg1;
- (void)PiPController:(id)arg0 setPlaying:(BOOL)arg1 whileSeeking:(BOOL)arg2;
- (void)PiPController:(id)arg0 skipByInterval:(double)arg1 currentPlaybackTime:(double)arg2 duration:(double)arg3;
- (id)contentViewForPiPController:(id)arg0;
- (BOOL)isPlayingForPiPController:(id)arg0;
- (double)rateForPiPController:(id)arg0;
- (double)durationForPiPController:(id)arg0;
- (double)currentPlaybackTimeForPiPController:(id)arg0;
- (struct CGSize { double x0; double x1; })videoFrameSizeForPiPController:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoPlaceholderFrameForPiPController:(id)arg0;
- (id)captureControllerForPiPController:(id)arg0;
- (void)PiPController:(id)arg0 setPlaying:(BOOL)arg1;
- (void)PiPController:(id)arg0 seekToTime:(double)arg1 completion:(id /* block */)arg2;
- (void)PiPController:(id)arg0 restoreContentView:(id)arg1;
- (void)PiPControllerWillStopPiP:(id)arg0;
- (void)PiPControllerDidStopPiP:(id)arg0;

@end
