//
//     Generated by private class-dump
//

@protocol IESLiveKTVStreaming <NSObject>

@property (retain, nonatomic) id livecore;
@property (nonatomic) float musicVolume;
@property (nonatomic) float voiceVolume;
@property (nonatomic) double toneVolume;
@property (nonatomic) float musicPlayVolume;

- (void)setMusicVolume:(float)arg0;
- (double)musicDuration;
- (double)currentPlayTime;
- (void)setEnableAudioPitchShifter:(BOOL)arg0;
- (BOOL)isEnableAudioPitchShifter;
- (void)setReverberationEnabled:(BOOL)arg0;
- (BOOL)isEnableLoudNorm;
- (BOOL)ktvAllowed;
- (void)stopBgMusic;
- (void)playBgMusicWithConfig:(id)arg0 createPlayerCompletion:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)playBgMusicWithURL:(id)arg0 loop:(BOOL)arg1 volume:(float)arg2 createPlayerCompletion:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (void)pauseBgMusic;
- (void)resumeBgMusic;
- (BOOL)musicIsPlaying;
- (void)setEnableLoudNorm:(BOOL)arg0;
- (void)setLoudNormParams:(id)arg0;
- (void)forceMediaMode:(BOOL)arg0;
- (BOOL)reverberationEnabled;
- (void)setEnableExternalSoundCard:(BOOL)arg0;
- (void)setHeadphonesMonitoringEnabled:(BOOL)arg0;
- (void)startScore;
- (void)stopScore;
- (void)sendLyricLInfo:(id)arg0 withKey:(id)arg1;
- (id)livecore;
- (void)setLivecore:(id)arg0;
- (id)headphonesMonitoringOperationRecords;
- (double)toneVolume;
- (BOOL)headphonesMonitoringEnabled;
- (id)rtcSEIInfo;
- (void)setSingScoreWithMidiFilePath:(id)arg0 lyricFilePath:(id)arg1;
- (id)getMidiDataArray;
- (id)getScoreRealtimeInfo;
- (void)switchKtvEffectWithSourcePath:(id)arg0 enableEarMonitor:(BOOL)arg1;
- (void)startEffectWithEarMonitorEnable:(BOOL)arg0;
- (void)stopEffectWithEarMonitorEnable:(BOOL)arg0;
- (void)exitKTVMode;
- (void)enablePipelineKTVCamera:(BOOL)arg0;
- (void)setToneVolume:(double)arg0;
- (float)musicPlayVolume;
- (void)setMusicPlayVolume:(float)arg0;
- (float)musicVolume;
- (float)voiceVolume;
- (void)setVoiceVolume:(float)arg0;
- (void)seek:(double)arg0;

@optional

- (id)getBgmStateSignal;

@end
