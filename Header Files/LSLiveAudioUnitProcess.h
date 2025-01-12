//
//     Generated by private class-dump
//

@class LSLiveAudioMixerHandle, NSString, LSLiveAudioEffect, LSLiveAudioConverter, LSLiveAudioPitchShifter, LSLiveAudioUnitConfig, NSObject, AVPlayer;
@protocol OS_dispatch_queue;

@interface LSLiveAudioUnitProcess : NSObject <AVAudioPlayerDelegate, LSLiveAudioMixerProtocol> {
    LSLiveAudioMixerHandle *_mixerHandle;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _asbd;
    LSLiveAudioConverter *_musicConverter;
    LSLiveAudioConverter *_originalSingConverter;
    AVPlayer *_audioPlayer;
    double _recordVolume;
    double _musicVolume;
    long long _leftLoopCount;
    long long _curLoopCount;
    BOOL _enablePitchShifter;
    LSLiveAudioPitchShifter *_pitchShifter;
    void *LSEndLoopQueueKey;
    BOOL _playingBeforeInterruption;
    struct AudioFadingInterface { void /* function */ **x0; } *_audioFadingIns;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } fadeMutex;
    BOOL _blueToothPlayAllowed;
    BOOL _closeProcess;
    BOOL _bEnableLoudNorm;
    BOOL _isExpectedPlaying;
    LSLiveAudioEffect *_audioEffect;
    id /* block */ _musicPlayEndBlock;
    id /* block */ _loopEndBlock;
    LSLiveAudioUnitConfig *_config;
    NSObject<OS_dispatch_queue> *_loopEnd_queue;
}

@property BOOL isExpectedPlaying;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loopEnd_queue;
@property (nonatomic) BOOL blueToothPlayAllowed;
@property (retain, nonatomic) LSLiveAudioEffect *audioEffect;
@property (copy, nonatomic) id /* block */ musicPlayEndBlock;
@property (nonatomic) BOOL closeProcess;
@property (copy, nonatomic) id /* block */ loopEndBlock;
@property (retain, nonatomic) LSLiveAudioUnitConfig *config;
@property (nonatomic) BOOL bEnableLoudNorm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRecordVolume:(double)arg0;
- (void)setMusicVolume:(double)arg0;
- (double)getMusicVolume;
- (void)setMusicPlayerVolume:(double)arg0;
- (double)getMusicPlayerVolume;
- (void)setEnableAudioPitchShifter:(BOOL)arg0;
- (BOOL)isEnableAudioPitchShifter;
- (id)audioEffect;
- (void)setAudioEffect:(id)arg0;
- (void)audioRouteChangeListenerCallback:(id)arg0;
- (void)stopProcess;
- (void)checkPlayCategory;
- (id /* block */)musicPlayEndBlock;
- (void)p_playEndLoopCallback;
- (void)setMusicPlayEndBlock:(id /* block */)arg0;
- (void)handlePlayerItemDidPlayToEndTimeNotification:(id)arg0;
- (void)appBecomeActive;
- (void)appBecomeInActive;
- (void)setIsExpectedPlaying:(BOOL)arg0;
- (double)getCurrentPlayTime;
- (unsigned long long)readFirstFrameTick;
- (void)processAudioData:(short *)arg0 dataSize:(unsigned int)arg1 inNumberFrames:(unsigned int)arg2;
- (void)p_handleStopBlock:(BOOL)arg0;
- (id /* block */)loopEndBlock;
- (void)runSyncOnEndQueue:(id /* block */)arg0;
- (BOOL)isExpectedPlaying;
- (void)startProcess;
- (void)feedProcessBuffer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 sampleFrames:(long long)arg1 elementIndex:(unsigned int)arg2 withMixerHandle:(id)arg3;
- (void)replacePlayerItem:(id)arg0;
- (BOOL)isUseExternalPluggUseA2DP:(id)arg0;
- (void)pauseProcess;
- (long long)getCurLoop;
- (long long)numberOfLoop;
- (double)getRecordVolume;
- (double)getMusicDuration;
- (void)getBgmAudioData:(short *)arg0 dataSize:(unsigned int)arg1 channels:(int)arg2 inNumberFrames:(unsigned int)arg3;
- (void)processAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 inNumberFrames:(unsigned int)arg1;
- (void)setLoopEndBlock:(id /* block */)arg0;
- (BOOL)blueToothPlayAllowed;
- (void)setBlueToothPlayAllowed:(BOOL)arg0;
- (BOOL)closeProcess;
- (void)setCloseProcess:(BOOL)arg0;
- (BOOL)bEnableLoudNorm;
- (void)setBEnableLoudNorm:(BOOL)arg0;
- (id)loopEnd_queue;
- (void)setLoopEnd_queue:(id)arg0;
- (void)setPitch:(double)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (void)restart;
- (BOOL)isPlaying;
- (void)dealloc;
- (void)seekToTime:(double)arg0;
- (id).cxx_construct;

@end
