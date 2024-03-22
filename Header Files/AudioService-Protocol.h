//
//     Generated by private class-dump
//

@protocol AudioService

- (long long)playBitrate;
- (id)currentPlayModel;
- (long long)playStatus;
- (BOOL)updateCurrentModel:(id)arg0;
- (BOOL)canGoPrev;
- (BOOL)canGoNext;
- (void)goPrev;
- (void)goNext;
- (double)playableTime;
- (void)appendAudioModels:(id)arg0;
- (void)setAudioModels:(id)arg0 current:(id)arg1 queueId:(id)arg2;
- (void)stop;
- (double)duration;
- (void)addObserver:(id)arg0;
- (BOOL)isPlaying;
- (double)playbackTime;
- (void)clear;
- (id)queue;
- (void)play;
- (void)pause;
- (void)seekToTime:(double)arg0;
- (void)setQueue:(id)arg0;
- (void)removeObserver:(id)arg0;
- (void)prepareToPlay;
- (void)setIsLooping:(BOOL)arg0;

@end
