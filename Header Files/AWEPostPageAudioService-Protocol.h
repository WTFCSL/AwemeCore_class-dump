//
//     Generated by private class-dump
//

@protocol AWEPostPageAudioService <AWEPostPageBaseService>

@property (readonly, nonatomic) long long changeOfflineMusicSignal;

- (void)recoverAudioFragmentIfNeeded;
- (void)fetchVoiceEffectIfNecessaryWithCallback:(id /* block */)arg0;
- (long long)changeOfflineMusicSignal;
- (id)dependencies;

@end
