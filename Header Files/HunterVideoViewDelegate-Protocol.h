//
//     Generated by private class-dump
//

@protocol HunterVideoViewDelegate <NSObject>

- (void)playerPlayTime:(double)arg0 canPlayTime:(double)arg1 totalTime:(double)arg2;
- (void)didPlayError:(id)arg0;
- (void)didBufferChangeWithInfo:(id)arg0;
- (void)didSeekEnd:(BOOL)arg0;
- (void)didReady;
- (void)didChangePlaybackRate:(double)arg0;
- (void)didEnd;
- (void)didStart;
- (void)didStop;
- (void)didPause;

@end
