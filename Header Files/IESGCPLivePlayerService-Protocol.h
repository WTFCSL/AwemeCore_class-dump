//
//     Generated by private class-dump
//

@protocol IESGCPLivePlayerService <NSObject>

- (void)setPowerSaveClearType:(unsigned long long)arg0;
- (id)getLiveVideoPlayerController;
- (void)setLiveMute:(BOOL)arg0;
- (void)setLivePlay;
- (void)setLivePause;
- (BOOL)liveIsPause;
- (id)currentLiveResolutionType;
- (id)currentLiveAudioStreamKey;
- (void)resumeCurrentMedia;
- (void)pauseCurrentMedia;
- (BOOL)isSceneClear;

@end