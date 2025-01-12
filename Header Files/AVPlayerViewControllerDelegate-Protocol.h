//
//     Generated by private class-dump
//

@protocol AVPlayerViewControllerDelegate <NSObject>

@optional

- (void)playerViewController:(id)arg0 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg1;
- (void)playerViewController:(id)arg0 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg1;
- (void)playerViewController:(id)arg0 restoreUserInterfaceForFullScreenExitWithCompletionHandler:(id /* block */)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(id)arg0;
- (void)playerViewControllerDidStartPictureInPicture:(id)arg0;
- (void)playerViewController:(id)arg0 failedToStartPictureInPictureWithError:(id)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(id)arg0;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg0;
- (BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg0;
- (void)playerViewController:(id)arg0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg1;
- (void)playerViewController:(id)arg0 willPresentInterstitialTimeRange:(id)arg1;
- (void)playerViewController:(id)arg0 didPresentInterstitialTimeRange:(id)arg1;

@end
