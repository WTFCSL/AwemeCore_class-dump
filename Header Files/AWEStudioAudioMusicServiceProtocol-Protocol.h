//
//     Generated by private class-dump
//

@protocol AWEStudioAudioMusicServiceProtocol <NSObject>

- (void)setMusicModels:(id)arg0 current:(id)arg1 queueId:(id)arg2;
- (void)appendMusicModels:(id)arg0;
- (id)currentPlayModel;
- (void)setFadeInOutEnable:(BOOL)arg0;
- (long long)playStatus;
- (id)lastPlayModel;
- (void)setLoopModeDefault;
- (id)getPlayModelWithMusicModel:(id)arg0 queueName:(id)arg1;
- (void)stop;
- (void)addObserver:(id)arg0;
- (BOOL)isPlaying;
- (void)clear;
- (void)play;
- (void)pause;
- (void)removeObserver:(id)arg0;

@end
