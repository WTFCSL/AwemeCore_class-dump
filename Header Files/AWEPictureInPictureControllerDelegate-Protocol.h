//
//     Generated by private class-dump
//

@protocol AWEPictureInPictureControllerDelegate <NSObject>

- (id)pictureInPictureControllerRealPlayerView:(id)arg0;

@optional

- (void)pictureInPictureControllerWillStart:(id)arg0;
- (void)pictureInPictureControllerDidStart:(id)arg0;
- (void)pictureInPictureController:(id)arg0 failedToStartWithError:(id)arg1;
- (void)pictureInPictureController:(id)arg0 willStopForRestore:(BOOL)arg1;
- (void)pictureInPictureController:(id)arg0 didStopForRestore:(BOOL)arg1;
- (void)pictureInPictureController:(id)arg0 restoreFromForeground:(BOOL)arg1;
- (void)pictureInPictureController:(id)arg0 playbackStatusDidChanged:(unsigned long long)arg1;
- (void)pictureInPictureController:(id)arg0 seekToTime:(double)arg1 completion:(id /* block */)arg2;
- (double)currentPlaybackTimeOfPictureInPictureController:(id)arg0;
- (void)pictureInPictureController:(id)arg0 didTransToNewSize:(struct { int x0; int x1; })arg1;

@end