//
//     Generated by private class-dump
//

@protocol RTVEffectGamePlayAudioWrapper

- (void)notifyChangeActive:(BOOL)arg0;
- (id)preloadWithFilePaths:(id)arg0;
- (id)playAudioWithFilePath:(id)arg0 loop:(BOOL)arg1 volume:(id)arg2;
- (id)replayAudioWithFilePath:(id)arg0 loop:(BOOL)arg1;
- (id)stopAudioWithFilePath:(id)arg0;
- (id)pauseAudioWithFilePath:(id)arg0;
- (id)resumeAudioWithFilePath:(id)arg0;
- (id)unloadAllEffects;
- (id)adjustGameAudioVolume:(long long)arg0;
- (id)stopAllEffects;

@end
