//
//     Generated by private class-dump
//

@class NSError, AVAssetReader, AVAssetReaderOutput, VEPlayerMattingManager, UIImage, NSString, VEConfigData, VEVideoReaderUnit, NSObject, VEAudioReaderUnit, VEInsertFrameReader, VETransData;
@protocol OS_dispatch_queue;

@interface VECompileReaderUnit : VEUnitObject <IVECompileReader> {
    BOOL _exportReaptErrorOpt;
    BOOL _enable10BitSDR;
    int detectPendingCount;
    NSString *_route;
    long long _curVideoStage;
    long long _curAudioStage;
    id /* block */ _completeBlock;
    NSError *_error;
    UIImage *_waterMarkImage;
    id /* block */ faceDetectEvent;
    NSError *_readerError;
    unsigned long long _pixelFormat;
    VETransData *_transData;
    AVAssetReader *_reader;
    AVAssetReaderOutput *_videoOutput;
    AVAssetReaderOutput *_audioOutput;
    NSObject<OS_dispatch_queue> *_videoDecodeQueue;
    NSObject<OS_dispatch_queue> *_audioDecodeQueue;
    unsigned long long _transStatus;
    unsigned long long _videoTransStatus;
    unsigned long long _audioTransStatus;
    struct opaqueCMSampleBuffer { } *_lastSampleBuffer;
    VEInsertFrameReader *_insertReader;
    VEAudioReaderUnit *_audioReaderUnit;
    VEVideoReaderUnit *_videoReaderUnit;
    VEConfigData *_configData;
    VEPlayerMattingManager *_mattingManager;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _previousVideoFrameTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _previousAudioFrameTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _latestVideoSampleTime;
}

@property (retain, nonatomic) NSError *readerError;
@property (nonatomic) unsigned long long pixelFormat;
@property (retain, nonatomic) VETransData *transData;
@property (retain, nonatomic) AVAssetReader *reader;
@property (retain, nonatomic) AVAssetReaderOutput *videoOutput;
@property (retain, nonatomic) AVAssetReaderOutput *audioOutput;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *videoDecodeQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioDecodeQueue;
@property (nonatomic) unsigned long long transStatus;
@property (nonatomic) unsigned long long videoTransStatus;
@property (nonatomic) unsigned long long audioTransStatus;
@property (nonatomic) struct opaqueCMSampleBuffer { } *lastSampleBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } latestVideoSampleTime;
@property (retain, nonatomic) VEInsertFrameReader *insertReader;
@property (retain, nonatomic) VEAudioReaderUnit *audioReaderUnit;
@property (retain, nonatomic) VEVideoReaderUnit *videoReaderUnit;
@property (retain, nonatomic) VEConfigData *configData;
@property (nonatomic) BOOL exportReaptErrorOpt;
@property (retain, nonatomic) VEPlayerMattingManager *mattingManager;
@property (nonatomic) BOOL enable10BitSDR;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (copy, nonatomic) id /* block */ faceDetectEvent;
@property (retain, nonatomic) UIImage *waterMarkImage;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } previousVideoFrameTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } previousAudioFrameTime;
@property (nonatomic) int detectPendingCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *route;
@property (nonatomic) long long curVideoStage;
@property (nonatomic) long long curAudioStage;

- (void)setConfigData:(id)arg0;
- (id)configData;
- (void)setReaderError:(id)arg0;
- (void)setLatestVideoSampleTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (BOOL)initVideoReader:(id)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })latestVideoSampleTime;
- (id)readerError;
- (id)videoDecodeQueue;
- (void)setVideoDecodeQueue:(id)arg0;
- (struct opaqueCMSampleBuffer { } *)lastSampleBuffer;
- (void)setLastSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg0;
- (id)audioReaderUnit;
- (void)setAudioReaderUnit:(id)arg0;
- (id /* block */)faceDetectEvent;
- (void)setFaceDetectEvent:(id /* block */)arg0;
- (id)getReaderError;
- (void)setCompleteBlock:(id /* block */)arg0;
- (id /* block */)completeBlock;
- (void)setAudioOutput:(id)arg0;
- (void)setCurVideoStage:(long long)arg0;
- (void)setCurAudioStage:(long long)arg0;
- (id)initWithVideoData:(id)arg0 outUrl:(id)arg1 usenewModule:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)initAssetReader;
- (void)cancelReader;
- (id)videoReaderOutput;
- (id)audioReaderOutput;
- (BOOL)exportReaptErrorOpt;
- (void)logAssets:(id)arg0 additionInfo:(id)arg1;
- (void)logVolumeInfoInMap:(id)arg0 additionInfo:(id)arg1;
- (BOOL)initAudioReader:(id)arg0;
- (BOOL)enable10BitSDR;
- (void)setVideoTransStatus:(unsigned long long)arg0;
- (unsigned long long)videoTransStatus;
- (id)insertReader;
- (void)setAudioTransStatus:(unsigned long long)arg0;
- (void)logVideoCompositionInvalidReason;
- (unsigned long long)audioTransStatus;
- (void)cancelReaderWithError:(id)arg0;
- (id)waterMarkImage;
- (void)setWaterMarkImage:(id)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })previousVideoFrameTime;
- (void)setPreviousVideoFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })previousAudioFrameTime;
- (void)setPreviousAudioFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setDetectPendingCount:(int)arg0;
- (id)audioDecodeQueue;
- (void)setAudioDecodeQueue:(id)arg0;
- (void)setInsertReader:(id)arg0;
- (void)setExportReaptErrorOpt:(BOOL)arg0;
- (id)mattingManager;
- (void)setMattingManager:(id)arg0;
- (void)setEnable10BitSDR:(BOOL)arg0;
- (BOOL)getVideoWriterFinish;
- (BOOL)getAudioWriterFinish;
- (long long)curVideoStage;
- (long long)curAudioStage;
- (long long)getReaderStatus;
- (int)detectPendingCount;
- (void)pauseForBackground;
- (void)resumeForBackground;
- (id)transData;
- (void)setTransData:(id)arg0;
- (id)initWithVideoData:(id)arg0 outUrl:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setTransStatus:(unsigned long long)arg0;
- (unsigned long long)transStatus;
- (BOOL)processSampleData:(id)arg0;
- (id)requstSampleData:(unsigned long long)arg0;
- (id)videoReaderUnit;
- (void)setVideoReaderUnit:(id)arg0;
- (BOOL)setConfig:(id)arg0;
- (void)setStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setPixelFormat:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)route;
- (id)videoOutput;
- (void)setVideoOutput:(id)arg0;
- (void)setRoute:(id)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })startTime;
- (id)audioOutput;
- (id)reader;
- (void)setError:(id)arg0;
- (unsigned long long)pixelFormat;
- (void)dealloc;
- (id)error;
- (BOOL)videoComposition:(id)arg0 shouldContinueValidatingAfterFindingInvalidValueForKey:(id)arg1;
- (BOOL)videoComposition:(id)arg0 shouldContinueValidatingAfterFindingEmptyTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1;
- (BOOL)videoComposition:(id)arg0 shouldContinueValidatingAfterFindingInvalidTimeRangeInInstruction:(id)arg1;
- (BOOL)videoComposition:(id)arg0 shouldContinueValidatingAfterFindingInvalidTrackIDInInstruction:(id)arg1 layerInstruction:(id)arg2 asset:(id)arg3;
- (void)setReader:(id)arg0;
- (BOOL)startReader;
- (void)stopReader;

@end
