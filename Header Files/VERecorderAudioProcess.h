//
//     Generated by private class-dump
//

@class VEAudioInputUnit, NSMutableDictionary, NSString, VEAudioOutputUnit, NSObject;
@protocol VEAudioPlayerProtocol, OS_dispatch_queue;

@interface VERecorderAudioProcess : IESMMObject {
    BOOL _enableBalance;
    BOOL _enableNewBalance;
    BOOL _enableAEC;
    BOOL _enableNewAEC;
    BOOL _enableTimeAlign;
    BOOL _hasMic;
    BOOL _hasBGM;
    BOOL _useOutput;
    BOOL _isProcessing;
    BOOL _isNeedWaitBgm;
    BOOL _needProcessData;
    BOOL _needNullMicData;
    BOOL _needNullBgmData;
    BOOL _needWriteFile;
    float _target_lufs;
    float _loudness_results;
    float _peak_results;
    float _timeAlign;
    float _syncInputCount;
    NSString *_aecModelPath;
    NSString *_timeAlignModelPath;
    long long _backendMode;
    id /* block */ _timeAlignCallback;
    id /* block */ _newBalanceCallback;
    id /* block */ _syncStatusCallBack;
    id /* block */ _fileResultCallBack;
    VEAudioOutputUnit *_timeAlignOutputUnit;
    VEAudioOutputUnit *_bgmOutputUnit;
    VEAudioOutputUnit *_micOutputUnit;
    VEAudioInputUnit *_bgmInputUnit;
    VEAudioInputUnit *_micInputUnit;
    NSMutableDictionary *_processUnits;
    id<VEAudioPlayerProtocol> _audioQueueUnit;
    NSObject<OS_dispatch_queue> *_processBgmQueue;
    NSObject<OS_dispatch_queue> *_processMicQueue;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _asbd;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _bgmAsbd;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _micAsbd;
}

@property (retain, nonatomic) VEAudioOutputUnit *timeAlignOutputUnit;
@property (retain, nonatomic) VEAudioOutputUnit *bgmOutputUnit;
@property (retain, nonatomic) VEAudioOutputUnit *micOutputUnit;
@property (retain, nonatomic) VEAudioInputUnit *bgmInputUnit;
@property (retain, nonatomic) VEAudioInputUnit *micInputUnit;
@property (retain, nonatomic) NSMutableDictionary *processUnits;
@property (nonatomic) float loudness_results;
@property (nonatomic) float peak_results;
@property (nonatomic) float timeAlign;
@property (nonatomic) float syncInputCount;
@property (retain, nonatomic) id<VEAudioPlayerProtocol> audioQueueUnit;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } bgmAsbd;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } micAsbd;
@property (nonatomic) BOOL needNullMicData;
@property (nonatomic) BOOL needNullBgmData;
@property (nonatomic) BOOL needWriteFile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processBgmQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processMicQueue;
@property (nonatomic) BOOL enableBalance;
@property (nonatomic) BOOL enableNewBalance;
@property (nonatomic) float target_lufs;
@property (nonatomic) BOOL enableAEC;
@property (nonatomic) BOOL enableNewAEC;
@property (retain, nonatomic) NSString *aecModelPath;
@property (nonatomic) BOOL enableTimeAlign;
@property (retain, nonatomic) NSString *timeAlignModelPath;
@property (nonatomic) long long backendMode;
@property (copy, nonatomic) id /* block */ timeAlignCallback;
@property (copy, nonatomic) id /* block */ newBalanceCallback;
@property (copy, nonatomic) id /* block */ syncStatusCallBack;
@property (copy, nonatomic) id /* block */ fileResultCallBack;
@property (nonatomic) BOOL hasMic;
@property (nonatomic) BOOL hasBGM;
@property (nonatomic) BOOL useOutput;
@property (nonatomic) BOOL isProcessing;
@property (nonatomic) BOOL isNeedWaitBgm;
@property (nonatomic) BOOL needProcessData;

+ (id)aecModelName;
+ (id)aecModelrequeirements;

- (void)setEnableAEC:(BOOL)arg0;
- (BOOL)enableAEC;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })micAsbd;
- (void)setMicAsbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })bgmAsbd;
- (void)setBgmAsbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0;
- (float)target_lufs;
- (void)setTarget_lufs:(float)arg0;
- (BOOL)useOutput;
- (void)setUseOutput:(BOOL)arg0;
- (float)loudness_results;
- (void)setLoudness_results:(float)arg0;
- (float)peak_results;
- (void)setPeak_results:(float)arg0;
- (id)audioQueueUnit;
- (void)setAudioQueueUnit:(id)arg0;
- (void)setupAudioQueue;
- (id /* block */)syncStatusCallBack;
- (void)setSyncStatusCallBack:(id /* block */)arg0;
- (long long)backendMode;
- (void)setBackendMode:(long long)arg0;
- (void)setIsProcessing:(BOOL)arg0;
- (void)setProcessUnits:(id)arg0;
- (void)setProcessBgmQueue:(id)arg0;
- (void)setProcessMicQueue:(id)arg0;
- (id)processMicQueue;
- (void)stopProcessor:(BOOL)arg0;
- (id)micInputUnit;
- (id)bgmInputUnit;
- (id)micOutputUnit;
- (id)bgmOutputUnit;
- (id)processUnits;
- (void)setMicInputUnit:(id)arg0;
- (void)setBgmInputUnit:(id)arg0;
- (BOOL)enableTimeAlign;
- (BOOL)enableBalance;
- (void)setSyncInputCount:(float)arg0;
- (float)syncInputCount;
- (void)setIsNeedWaitBgm:(BOOL)arg0;
- (BOOL)enableNewBalance;
- (id)p_createSyncUnit:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0 mic:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg1 bgm:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg2 targetSampleCount:(long long)arg3;
- (id)p_createTimeAlignUnit:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0;
- (id)timeAlignOutputUnit;
- (void)setTimeAlignOutputUnit:(id)arg0;
- (void)setEnableNewAEC:(BOOL)arg0;
- (id)p_createNewAECUnit:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0;
- (id)p_createNewBlanceUnit:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0;
- (id)p_createBackendUnit:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0;
- (void)setMicOutputUnit:(id)arg0;
- (BOOL)p_micNeedOutput;
- (void)setBgmOutputUnit:(id)arg0;
- (void)setNeedProcessData:(BOOL)arg0;
- (void)setNewBalanceCallback:(id /* block */)arg0;
- (id)timeAlignModelPath;
- (id)aecModelPath;
- (BOOL)needNullBgmData;
- (id /* block */)fileResultCallBack;
- (BOOL)needNullMicData;
- (id)processBgmQueue;
- (BOOL)needWriteFile;
- (BOOL)enableNewAEC;
- (void)setTimeAlign:(float)arg0;
- (float)timeAlign;
- (id /* block */)timeAlignCallback;
- (id /* block */)newBalanceCallback;
- (void)p_checkInputAndOutput;
- (void)setFirstVideoTime:(double)arg0 firstAudioTime:(double)arg1;
- (void)setNeedNullMicData:(BOOL)arg0;
- (void)setNeedNullBgmData:(BOOL)arg0;
- (void)p_releaseAudioPlayer;
- (BOOL)hasBGM;
- (void)p_createAudioPlayer;
- (void)setNeedWriteFile:(BOOL)arg0;
- (void)getBgmData:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 useForProcessPlaying:(BOOL)arg1;
- (void)reconnectUnits:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0 mic:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg1 bgm:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg2 completion:(id /* block */)arg3;
- (id)p_createAECUnit:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0;
- (void)processMic:(struct opaqueCMSampleBuffer { } *)arg0;
- (void)processBgm:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0;
- (void)startProcessor:(BOOL)arg0;
- (float)getTimeAlignValue;
- (void)checkAsbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0 mic:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg1;
- (void)setEnableBalance:(BOOL)arg0;
- (void)setEnableNewBalance:(BOOL)arg0;
- (void)setAecModelPath:(id)arg0;
- (void)setEnableTimeAlign:(BOOL)arg0;
- (void)setTimeAlignModelPath:(id)arg0;
- (void)setTimeAlignCallback:(id /* block */)arg0;
- (void)setFileResultCallBack:(id /* block */)arg0;
- (void)setHasBGM:(BOOL)arg0;
- (BOOL)isNeedWaitBgm;
- (BOOL)needProcessData;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isProcessing;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })asbd;
- (void)setAsbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0;
- (void)setHasMic:(BOOL)arg0;
- (BOOL)hasMic;

@end
