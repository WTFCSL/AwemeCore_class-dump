//
//     Generated by private class-dump
//

@class VEVideoExportAsyncQueue, VECurveTransUtils, VEFFmpegReaderUnit, NSString, NSCondition, VEVideoConfig, VECompileVTDecoderUnit, NSObject, VEffmpegReader;
@protocol OS_dispatch_queue;

@interface VEVideoFFmpegExportor : VEVideoReader <VEAppStatusProtocol> {
    BOOL _seekReq;
    BOOL _suspendForBackground;
    BOOL _enableOptFill;
    BOOL _isDecoding;
    VEffmpegReader *_ffmepgeReader;
    VEFFmpegReaderUnit *_readerUnit;
    VECompileVTDecoderUnit *_decodeUnit;
    unsigned long long _asyncThreadStatus;
    VEVideoExportAsyncQueue *_videoAyncQue;
    VEVideoConfig *_config;
    struct opaqueCMFormatDescription { } *_vtDesc;
    VECurveTransUtils *_curveTransUtils;
    NSCondition *_stateReadyCond;
    NSObject<OS_dispatch_queue> *_decodeQueue;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastValidTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _seekTime;
}

@property (retain, nonatomic) VEffmpegReader *ffmepgeReader;
@property (retain, nonatomic) VEFFmpegReaderUnit *readerUnit;
@property (retain, nonatomic) VECompileVTDecoderUnit *decodeUnit;
@property (nonatomic) unsigned long long asyncThreadStatus;
@property (retain, nonatomic) VEVideoExportAsyncQueue *videoAyncQue;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastValidTime;
@property (retain, nonatomic) VEVideoConfig *config;
@property BOOL seekReq;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } seekTime;
@property (nonatomic) struct opaqueCMFormatDescription { } *vtDesc;
@property (retain, nonatomic) VECurveTransUtils *curveTransUtils;
@property BOOL suspendForBackground;
@property (retain, nonatomic) NSCondition *stateReadyCond;
@property (nonatomic) BOOL enableOptFill;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *decodeQueue;
@property (nonatomic) BOOL isDecoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)readerUnit;
- (void)setReaderUnit:(id)arg0;
- (void)setIsDecoding:(BOOL)arg0;
- (void)setCurveTransUtils:(id)arg0;
- (id)curveTransUtils;
- (unsigned long long)asyncThreadStatus;
- (void)setAsyncThreadStatus:(unsigned long long)arg0;
- (void)setVideoAyncQue:(id)arg0;
- (id)videoAyncQue;
- (void)unPrepare;
- (BOOL)seekReq;
- (id)decodeUnit;
- (void)seekToTimeProcess:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setSeekReq:(BOOL)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })p_convertTimeLineToVideoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)p_releaseVtDesc;
- (void)p_setVtDesc:(struct opaqueCMFormatDescription { } *)arg0;
- (void)setDecodeUnit:(id)arg0;
- (void)setVtDesc:(struct opaqueCMFormatDescription { } *)arg0;
- (BOOL)enableOptFill;
- (void)setSuspendForBackground:(BOOL)arg0;
- (BOOL)suspendForBackground;
- (void)setLastValidTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)ffmepgeReader;
- (void)setFfmepgeReader:(id)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastValidTime;
- (id)stateReadyCond;
- (void)setStateReadyCond:(id)arg0;
- (void)setEnableOptFill:(BOOL)arg0;
- (void)setDecodeQueue:(id)arg0;
- (id)decodeQueue;
- (struct opaqueCMFormatDescription { } *)vtDesc;
- (void)becomeActive;
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
- (struct { long long x0; int x1; unsigned int x2; long long x3; })seekTime;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (BOOL)isDecoding;
- (id)copyNextSampleBuffer;
- (void)memoryWarning;
- (id)copySampleBufferAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;

@end
