//
//     Generated by private class-dump
//

@class IESMMEffectConfig, NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESMMAudioProcessor : NSObject <IESMMAudioProcessProtocol> {
    BOOL useAudioEffectSticker;
    BOOL effectNodeInAudioChainIsOn;
    BOOL useAudioBackend;
    int _audioSamplerate;
    int _audioChannels;
    IESMMEffectConfig *_config;
    void *_renderHandle;
    NSObject<OS_dispatch_semaphore> *_sem_lock;
}

@property (nonatomic) int audioSamplerate;
@property (nonatomic) int audioChannels;
@property (retain, nonatomic) IESMMEffectConfig *config;
@property (nonatomic) void *renderHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem_lock;
@property (nonatomic) BOOL useAudioEffectSticker;
@property (nonatomic) BOOL effectNodeInAudioChainIsOn;
@property (nonatomic) BOOL useAudioBackend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)effectNodeInAudioChainIsOn;
- (void)setEffectNodeInAudioChainIsOn:(BOOL)arg0;
- (BOOL)setMusicPlayMode:(long long)arg0;
- (BOOL)useAudioEffectSticker;
- (BOOL)useAudioBackend;
- (void)setAudioSampleRate:(int)arg0 channel:(int)arg1;
- (BOOL)needProcessAudio;
- (void)processAudio:(struct opaqueCMSampleBuffer { } *)arg0;
- (void)finishAudioProcess;
- (BOOL)needResolveAudio;
- (void)resolveAudio:(struct opaqueCMSampleBuffer { } *)arg0;
- (void)finishAudioResolve;
- (void)sendAudioBuffer:(struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; })arg0;
- (void)setUseAudioEffectSticker:(BOOL)arg0;
- (void)setUseAudioBackend:(BOOL)arg0;
- (void)destory;
- (id)initWithConfig:(id)arg0 effectHandle:(void *)arg1;
- (id)sem_lock;
- (void)setRenderHandle:(void *)arg0;
- (void *)renderHandle;
- (BOOL)enableCher;
- (void)setAudioSamplerate:(int)arg0;
- (int)audioSamplerate;
- (BOOL)enableAudioReco;
- (void)setSem_lock:(id)arg0;
- (void)setAudioChannels:(int)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (int)audioChannels;

@end
