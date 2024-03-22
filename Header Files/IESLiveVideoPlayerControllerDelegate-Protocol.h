//
//     Generated by private class-dump
//

@protocol IESLiveVideoPlayerControllerDelegate <NSObject>

@optional

- (void)playerController:(id)arg0 currentPlayTime:(double)arg1 playableTime:(double)arg2 duration:(double)arg3;
- (void)onStalledStart:(id)arg0 actionType:(long long)arg1 reason:(unsigned long long)arg2;
- (void)onStalledEnd:(id)arg0;
- (void)suggestReduceResolution:(id)arg0;
- (void)videoReadyToDisPlayOfPlayerController:(id)arg0;
- (void)playerController:(id)arg0 updateCacheProgress:(double)arg1;
- (void)playerController:(id)arg0 updateProgress:(double)arg1 duration:(double)arg2;
- (void)playerController:(id)arg0 updateCurrent:(double)arg1 duration:(double)arg2;
- (void)playerController:(id)arg0 loadStateDidChange:(unsigned long long)arg1;
- (void)playerController:(id)arg0 playbackStateDidChange:(unsigned long long)arg1;
- (void)playerController:(id)arg0 playerDidFinishError:(id)arg1;
- (void)playerController:(id)arg0 userStop:(id)arg1;
- (void)playerController:(id)arg0 videoBitrateDidChangeResolution:(unsigned long long)arg1 bitrate:(long long)arg2;
- (void)playerController:(id)arg0 onMaskInfoCallBack:(id)arg1 pts:(unsigned long long)arg2;
- (void)playerController:(id)arg0 onEffectInfoCallBack:(id)arg1 pts:(unsigned long long)arg2;

@end