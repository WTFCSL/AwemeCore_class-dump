//
//     Generated by private class-dump
//

@protocol AWEPictureInPicturePlayerViewDelegate <NSObject>

- (void)pictureInPicturePlayerViewReadyToPlay;
- (void)pictureInPicturePlayerViewFailed:(id)arg0;
- (void)pictureInPicturePlayerViewPlaying:(BOOL)arg0;
- (void)pictureInPicturePlayerViewSeekToTime:(double)arg0 completion:(id /* block */)arg1;
- (void)pictureInPictureDidTransToNewSize:(struct { int x0; int x1; })arg0;
- (double)currentTimeOfPictureInPicturePlayerView;

@end
