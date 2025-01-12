//
//     Generated by private class-dump
//

@class NSString;

@interface VEAudioCaptureAndPlayUnit : NSObject <VEAudioCaptureProtocol, VEAudioPlayerProtocol> {
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } m_unitLock;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } m_stateLock;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } m_isCapturingLock;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } m_outputCbLock;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } m_recordCbLock;
    BOOL m_unitCapturing;
    BOOL m_unitPlaying;
    BOOL _needConvert;
    BOOL isPlaying;
    BOOL _isHeadphonesPort;
    BOOL _isCapturing;
    BOOL _waitingForFirstPlayCallback;
    unsigned int _recordBufferSize;
    int _kSourceBytesPerPacket;
    id /* block */ audioCaptureBlock;
    id /* block */ audioConvertCallback;
    id /* block */ audioBGMOutputCallback;
    id /* block */ audioBGMResultCallback;
    id /* block */ audioBGMStatusCallback;
    id /* block */ getNextBufferBlock;
    id /* block */ playDidStartBlock;
    id /* block */ getUnitNextBufferBlock;
    struct OpaqueAudioComponentInstance { } *_outputUnit;
    unsigned long long _status;
    struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *_renderBufferList;
    struct OpaqueAudioConverter { } *_audioConverter;
    struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } *_convertBuffer;
    id _privacyCert;
    struct AudioBufferList { unsigned int mNumberBuffers; struct AudioBuffer { unsigned int mNumberChannels; unsigned int mDataByteSize; void *mData; } mBuffers[1]; } _bufferList;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _asbd;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _playAsbd;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _convertDesc;
    struct IESRecorderDescription { float musicPitch; float musicVolume; float recordVolume; double startTime; double timeOffset; double recordStartTime; float accompanyVolume; float originalSingVolume; } _currentFormat;
}

@property (nonatomic) struct OpaqueAudioComponentInstance { } *outputUnit;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } playAsbd;
@property (nonatomic) BOOL isHeadphonesPort;
@property (nonatomic) unsigned long long status;
@property (nonatomic) struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *renderBufferList;
@property (nonatomic) unsigned int recordBufferSize;
@property (nonatomic) struct IESRecorderDescription { float musicPitch; float musicVolume; float recordVolume; double startTime; double timeOffset; double recordStartTime; float accompanyVolume; float originalSingVolume; } currentFormat;
@property (nonatomic) BOOL isCapturing;
@property (nonatomic) BOOL waitingForFirstPlayCallback;
@property (nonatomic) int kSourceBytesPerPacket;
@property (nonatomic) struct OpaqueAudioConverter { } *audioConverter;
@property (nonatomic) struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } *convertBuffer;
@property (nonatomic) struct AudioBufferList { unsigned int mNumberBuffers; struct AudioBuffer { unsigned int mNumberChannels; unsigned int mDataByteSize; void *mData; } mBuffers[1]; } bufferList;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } convertDesc;
@property (retain, nonatomic) id privacyCert;
@property (copy, nonatomic) id /* block */ audioCaptureBlock;
@property (copy, nonatomic) id /* block */ audioConvertCallback;
@property (copy, nonatomic) id /* block */ audioBGMOutputCallback;
@property (copy, nonatomic) id /* block */ audioBGMResultCallback;
@property (copy, nonatomic) id /* block */ audioBGMStatusCallback;
@property (nonatomic) BOOL needConvert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ getNextBufferBlock;
@property (copy, nonatomic) id /* block */ getUnitNextBufferBlock;
@property (copy, nonatomic) id /* block */ playDidStartBlock;
@property (nonatomic) BOOL isPlaying;

+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioPlayDescription;
+ (void)updateCurrrentSampleRate;
+ (id)sharedInstance;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioDescription;

- (void)stopAudioCapture:(id)arg0;
- (void)startAudioCapture:(id /* block */)arg0 withPrivacyCert:(id)arg1;
- (void)initAudioConvert;
- (id /* block */)audioConvertCallback;
- (void)releaseAudioCapture;
- (id /* block */)audioCaptureBlock;
- (void)setAudioCaptureBlock:(id /* block */)arg0;
- (void)setAudioConvertCallback:(id /* block */)arg0;
- (id /* block */)audioBGMOutputCallback;
- (void)setAudioBGMOutputCallback:(id /* block */)arg0;
- (id /* block */)audioBGMResultCallback;
- (void)setAudioBGMResultCallback:(id /* block */)arg0;
- (id /* block */)audioBGMStatusCallback;
- (void)setAudioBGMStatusCallback:(id /* block */)arg0;
- (BOOL)needConvert;
- (void)setNeedConvert:(BOOL)arg0;
- (void)setRecordVolume:(double)arg0;
- (double)recordVolume;
- (void)setMusicVolume:(double)arg0;
- (void)setAccompanyVolume:(double)arg0;
- (double)accompanyVolume;
- (void)setOriginalSingVolume:(double)arg0;
- (double)originalSingVolume;
- (void)setEnableEarBack:(BOOL)arg0;
- (void)echoEnable:(BOOL)arg0;
- (void)seekToAccompanyTime:(double)arg0 accompanyStartWritingTime:(double)arg1 originalSingTime:(double)arg2 originalSingStartWritingTime:(double)arg3;
- (void)accompanySeekToTime:(double)arg0;
- (void)originalSingSeekToTime:(double)arg0;
- (void)seekDuetKaraokeModeToTime:(double)arg0;
- (void)setDuetKaraokeModeMusic:(id)arg0 fromTime:(double)arg1;
- (void)setAccompanyMusicFile:(id)arg0 fromTime:(double)arg1 OriginalSingMusicFile:(id)arg2 startTime:(double)arg3;
- (double)getDuetKaraokeModeCurrentTime;
- (double)getAccompanyCurrentTime;
- (double)getOriginalSingCurrentTime;
- (void)mutedOrignalSing:(BOOL)arg0;
- (void)mutedAccompany:(BOOL)arg0;
- (void)routeChanged;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })convertDesc;
- (void)setConvertDesc:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0;
- (void)setIsCapturing:(BOOL)arg0;
- (BOOL)isHeadphoneOutput;
- (BOOL)isAudioCaptureRunning;
- (void)setDuetKaraokeModeMusicReader:(id)arg0 fromTime:(double)arg1;
- (void)processExternalAudioInput:(struct opaqueCMSampleBuffer { } *)arg0;
- (void)routeChanged:(id)arg0;
- (void)startAudioUnitCapture:(id /* block */)arg0 withPrivacyCert:(id)arg1;
- (void)startAudioUnitCaptureSync:(id /* block */)arg0 withPrivacyCert:(id)arg1;
- (void)stopAudioUnitCapture:(id)arg0;
- (struct OpaqueAudioConverter { } *)audioConverter;
- (void)setAudioConverter:(struct OpaqueAudioConverter { } *)arg0;
- (struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; })bufferList;
- (void)setBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; })arg0;
- (BOOL)initUnit;
- (BOOL)unitExist;
- (void)trackMicStart;
- (BOOL)isRunning:(int)arg0;
- (void)stopUnitWithPrivacyCert:(id)arg0 formCaptureAPI:(BOOL)arg1;
- (void)enablePlay:(unsigned int)arg0;
- (void)enableCapture:(unsigned int)arg0;
- (int)startUnitWithPrivacyCert:(id)arg0 error:(id *)arg1 completeBlock:(id /* block */)arg2;
- (void)processUnitStartResultWithStatus:(int)arg0 andErr:(id)arg1 completeBlock:(id /* block */)arg2 formCaptureAPI:(BOOL)arg3;
- (void)trackMicDidStartWithStatus:(int)arg0;
- (void)configOutputUnit;
- (void)destroyUnit;
- (void)p_destroyUnit;
- (struct opaqueCMSampleBuffer { } *)sampleBufferFromAudioBuffer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 inTimeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)arg1 inNumberFrames:(unsigned int)arg2 asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)arg3;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })playAsbd;
- (void)setPlayAsbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0;
- (id)privacyCert;
- (void)setPrivacyCert:(id)arg0;
- (id)initWithAudioFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0;
- (id /* block */)playDidStartBlock;
- (void)setPlayDidStartBlock:(id /* block */)arg0;
- (void)setGetUnitNextBufferBlock:(id /* block */)arg0;
- (void)setGetNextBufferBlock:(id /* block */)arg0;
- (void)resetAudioQueue;
- (void)initAudioUnit;
- (void)setupAudioSessonWithCompletion:(id /* block */)arg0;
- (void)recreateGraphIfNeeded;
- (void)setWaitingForFirstPlayCallback:(BOOL)arg0;
- (void)setConvertBuffer:(struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } *)arg0;
- (void)resetAudioQueueBufferArray;
- (id /* block */)getNextBufferBlock;
- (id /* block */)getUnitNextBufferBlock;
- (void)setOutPutVolume:(double)arg0;
- (void)convertAudioBuffer:(struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; })arg0;
- (BOOL)isHeadphonesPort;
- (void)setIsHeadphonesPort:(BOOL)arg0;
- (struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)renderBufferList;
- (void)setRenderBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0;
- (unsigned int)recordBufferSize;
- (void)setRecordBufferSize:(unsigned int)arg0;
- (void)setCurrentFormat:(struct IESRecorderDescription { float x0; float x1; float x2; double x3; double x4; double x5; float x6; float x7; })arg0;
- (BOOL)waitingForFirstPlayCallback;
- (int)kSourceBytesPerPacket;
- (void)setKSourceBytesPerPacket:(int)arg0;
- (struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } *)convertBuffer;
- (void)resetState;
- (double)musicVolume;
- (void).cxx_destruct;
- (void)flush;
- (unsigned long long)status;
- (void)stop;
- (BOOL)isCapturing;
- (void)setStatus:(unsigned long long)arg0;
- (BOOL)isPlaying;
- (void)setVolume:(float)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)setIsPlaying:(BOOL)arg0;
- (id).cxx_construct;
- (double)getCurrentTime;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })asbd;
- (void)setAsbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0;
- (float)getVolume;
- (struct OpaqueAudioComponentInstance { } *)outputUnit;
- (void)setOutputUnit:(struct OpaqueAudioComponentInstance { } *)arg0;
- (void)audioSessionWasInterrupted:(id)arg0;
- (struct IESRecorderDescription { float x0; float x1; float x2; double x3; double x4; double x5; float x6; float x7; })currentFormat;

@end
