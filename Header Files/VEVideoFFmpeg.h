//
//     Generated by private class-dump
//

@class NSError, NSString, VECurveTransUtils, VEFFmpegReaderUnit, NSCondition, VEVideoPlayAsyncQueue, NSObject, VECompileVTDecoderUnit, VEVideoConfig;
@protocol OS_dispatch_queue;

@interface VEVideoFFmpeg : VEVideoReader <VEAppStatusProtocol> {
    BOOL _seekReq;
    BOOL _isPreSeek;
    BOOL _isFastSeeking;
    BOOL _isPlaying;
    BOOL _needForceSeek;
    BOOL _enableSeekOpt;
    BOOL _enableSeekOpt2;
    BOOL _isAppActive;
    BOOL _enableDecoderPreReleaseOpt;
    BOOL _isPrepared;
    NSError *_error;
    VEFFmpegReaderUnit *_readerUnit;
    VECompileVTDecoderUnit *_decodeUnit;
    unsigned long long _asyncThreadStatus;
    VEVideoPlayAsyncQueue *_videoAyncQue;
    struct __CVBuffer { } *_lastPixelBuffer;
    long long _lastBufferSrcPts;
    double _lastSysTemTime;
    VEVideoConfig *_config;
    NSObject<OS_dispatch_queue> *_decodeQueue;
    long long _seekReqCount;
    long long _seekCacheCount;
    long long _maxCacheCount;
    NSCondition *_condition;
    struct opaqueCMFormatDescription { } *_vtDesc;
    double _lastSeekTimestamp;
    VECurveTransUtils *_curveTransUtils;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastReturnVideoTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _seekTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastSeekTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastRequestTime;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) VEFFmpegReaderUnit *readerUnit;
@property (retain, nonatomic) VECompileVTDecoderUnit *decodeUnit;
@property (nonatomic) unsigned long long asyncThreadStatus;
@property (retain, nonatomic) VEVideoPlayAsyncQueue *videoAyncQue;
@property (nonatomic) struct __CVBuffer { } *lastPixelBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastTime;
@property (nonatomic) long long lastBufferSrcPts;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastReturnVideoTime;
@property (nonatomic) double lastSysTemTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastDuration;
@property (retain, nonatomic) VEVideoConfig *config;
@property BOOL seekReq;
@property (nonatomic) BOOL isPreSeek;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } seekTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastSeekTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *decodeQueue;
@property (nonatomic) long long seekReqCount;
@property (nonatomic) long long seekCacheCount;
@property (nonatomic) long long maxCacheCount;
@property (retain, nonatomic) NSCondition *condition;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastRequestTime;
@property (nonatomic) struct opaqueCMFormatDescription { } *vtDesc;
@property (nonatomic) BOOL isFastSeeking;
@property (nonatomic) double lastSeekTimestamp;
@property (retain, nonatomic) VECurveTransUtils *curveTransUtils;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL needForceSeek;
@property (nonatomic) BOOL enableSeekOpt;
@property (nonatomic) BOOL enableSeekOpt2;
@property (nonatomic) BOOL isAppActive;
@property (nonatomic) BOOL enableDecoderPreReleaseOpt;
@property (nonatomic) BOOL isPrepared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastRequestTime;
- (void)setLastRequestTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (long long)maxCacheCount;
- (void)setMaxCacheCount:(long long)arg0;
- (struct __CVBuffer { } *)lastPixelBuffer;
- (void)setLastPixelBuffer:(struct __CVBuffer { } *)arg0;
- (id)readerUnit;
- (void)setReaderUnit:(id)arg0;
- (void)startThread;
- (void)processTask;
- (void)setCurveTransUtils:(id)arg0;
- (id)curveTransUtils;
- (void)updateSampleDataPts:(id)arg0;
- (unsigned long long)asyncThreadStatus;
- (void)setAsyncThreadStatus:(unsigned long long)arg0;
- (void)setVideoAyncQue:(id)arg0;
- (id)videoAyncQue;
- (void)setLastSeekTimestamp:(double)arg0;
- (void)unPrepare;
- (BOOL)enableSeekOpt;
- (BOOL)seekReq;
- (BOOL)needSeekFlush;
- (BOOL)isHitCache:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)decodeUnit;
- (void)seekToTimeProcess:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setSeekReq:(BOOL)arg0;
- (void)setNeedForceSeek:(BOOL)arg0;
- (void)setLastReturnVideoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (double)lastSysTemTime;
- (void)setLastSysTemTime:(double)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })p_convertTimeLineToVideoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })p_convertVideoTimeToTimeLine:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastReturnVideoTime;
- (double)lastSeekTimestamp;
- (void)setIsFastSeeking:(BOOL)arg0;
- (long long)seekReqCount;
- (void)setSeekReqCount:(long long)arg0;
- (long long)seekCacheCount;
- (void)setSeekCacheCount:(long long)arg0;
- (void)p_releaseVtDesc;
- (void)p_setVtDesc:(struct opaqueCMFormatDescription { } *)arg0;
- (void)setDecodeUnit:(id)arg0;
- (BOOL)needForceSeek;
- (void)setVtDesc:(struct opaqueCMFormatDescription { } *)arg0;
- (BOOL)isFastSeeking;
- (void)setEnableSeekOpt:(BOOL)arg0;
- (void)setDecodeQueue:(id)arg0;
- (id)decodeQueue;
- (void)setLastDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setLastBufferSrcPts:(long long)arg0;
- (long long)lastBufferSrcPts;
- (void)p_updateLastPixelBuffer:(id)arg0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (void)p_updateVideoBufferWithLast:(id)arg0;
- (void)setIsPreSeek:(BOOL)arg0;
- (void)setLastSeekTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setEnableDecoderPreReleaseOpt:(BOOL)arg0;
- (BOOL)enableDecoderPreReleaseOpt;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastSeekTime;
- (BOOL)isPreSeek;
- (void)setEnableSeekOpt2:(BOOL)arg0;
- (BOOL)enableSeekOpt2;
- (struct opaqueCMFormatDescription { } *)vtDesc;
- (id)getAllIFrameTimeStamp;
- (double)getAvgFrameRate;
- (void)becomeActive;
- (id)condition;
- (void)setLastTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setSeekTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)resignActive;
- (id)config;
- (void)stop;
- (void)enterBackground;
- (id)initWithConfig:(id)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastTime;
- (void)prepare;
- (void)enterForeground;
- (BOOL)isPlaying;
- (void)setError:(id)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })seekTime;
- (void)setCondition:(id)arg0;
- (BOOL)isPrepared;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)setIsPlaying:(BOOL)arg0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)error;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastDuration;
- (void)setIsAppActive:(BOOL)arg0;
- (BOOL)isAppActive;
- (void)stopThread;
- (void)updateVideoConfig:(id)arg0;
- (void)memoryWarning;
- (id)copySampleBufferAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setIsPrepared:(BOOL)arg0;

@end