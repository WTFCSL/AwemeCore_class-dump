//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveGameCPPlayerServiceImpl : NSObject <IESGCPLivePlayerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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