//
//     Generated by private class-dump
//

@class IESMMAudioWaveformRT, IESWaveformConfig, IESExtAudioFileWriter;

@interface VEAudioRecorder : IESMMObject {
    double AUDIO_SAMPLE_RATE;
    double KPREFERRED_IO_BUFFER_DURATION;
    long long MAX_CACHE_FRAMES;
    BOOL _isRecording;
    BOOL _prepared;
    id /* block */ _waveResultBlock;
    id /* block */ _currentAudioBufferProcessBlock;
    struct OpaqueAudioComponent { } *_component;
    struct OpaqueAudioComponentInstance { } *_componetInstance;
    IESExtAudioFileWriter *_fileWriter;
    struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *_renderBufferList;
    IESMMAudioWaveformRT *_waveformRT;
    IESWaveformConfig *_waveConfig;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _asbd;
}

@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) struct OpaqueAudioComponent { } *component;
@property (nonatomic) struct OpaqueAudioComponentInstance { } *componetInstance;
@property (retain, nonatomic) IESExtAudioFileWriter *fileWriter;
@property (nonatomic) BOOL prepared;
@property (nonatomic) struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *renderBufferList;
@property (retain, nonatomic) IESMMAudioWaveformRT *waveformRT;
@property (retain, nonatomic) IESWaveformConfig *waveConfig;
@property (copy, nonatomic) id /* block */ waveResultBlock;
@property (readonly, nonatomic) BOOL isRecording;
@property (readonly, nonatomic) double recordDuration;
@property (copy, nonatomic) id /* block */ currentAudioBufferProcessBlock;

+ (BOOL)isMicAuth;

- (struct OpaqueAudioComponentInstance { } *)componetInstance;
- (void)setComponetInstance:(struct OpaqueAudioComponentInstance { } *)arg0;
- (id)stopRecord;
- (void)startRecord;
- (double)recordDuration;
- (void)resetDuration;
- (void)setupInstance;
- (void)initAudioUnitComponent;
- (void)setWaveformRT:(id)arg0;
- (void)setFileWriter:(id)arg0;
- (void)prepareSync;
- (void)startRecordWithPrivacyCert:(id)arg0;
- (id)fileWriter;
- (void)stopRecord:(id /* block */)arg0 withPrivacyCert:(id)arg1;
- (void)stopRecord:(id /* block */)arg0;
- (id)initWithWaveformConfig:(id)arg0;
- (double)getAudioSampleRate;
- (void)pauseRecord;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })queryASBD;
- (id /* block */)waveResultBlock;
- (void)setWaveResultBlock:(id /* block */)arg0;
- (id /* block */)currentAudioBufferProcessBlock;
- (void)setCurrentAudioBufferProcessBlock:(id /* block */)arg0;
- (id)waveformRT;
- (id)waveConfig;
- (void)setWaveConfig:(id)arg0;
- (void)updateCurrrentSampleRate;
- (struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)renderBufferList;
- (void)setRenderBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0;
- (BOOL)isRecording;
- (void).cxx_destruct;
- (struct OpaqueAudioComponent { } *)component;
- (void)setPrepared:(BOOL)arg0;
- (void)dealloc;
- (BOOL)prepared;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })asbd;
- (void)setAsbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0;
- (void)setComponent:(struct OpaqueAudioComponent { } *)arg0;
- (void)prepare:(id /* block */)arg0;

@end