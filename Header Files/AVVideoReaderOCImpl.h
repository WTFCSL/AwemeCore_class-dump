//
//     Generated by private class-dump
//

@class AVAsset, AVAssetReader, NSError, AVAssetReaderOutput, NSObject;
@protocol OS_dispatch_queue;

@interface AVVideoReaderOCImpl : IESMMObject {
    id /* block */ _retainBlock;
    BOOL _needReencode;
    BOOL _isFullRange;
    BOOL _reachedEOF;
    int _decodePixelFmt;
    NSError *_readerError;
    AVAsset *_srcAsset;
    AVAssetReader *_reader;
    AVAssetReaderOutput *_videoOutput;
    NSObject<OS_dispatch_queue> *_videoDecodeQueue;
    struct opaqueCMSampleBuffer { } *_lastSampleBuffer;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _latestVideoSampleTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _videoDuration;
}

@property (retain, nonatomic) NSError *readerError;
@property (retain, nonatomic) AVAsset *srcAsset;
@property (retain, nonatomic) AVAssetReader *reader;
@property (retain, nonatomic) AVAssetReaderOutput *videoOutput;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *videoDecodeQueue;
@property (nonatomic) struct opaqueCMSampleBuffer { } *lastSampleBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } latestVideoSampleTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoDuration;
@property (nonatomic) BOOL needReencode;
@property (nonatomic) int decodePixelFmt;
@property (nonatomic) BOOL isFullRange;
@property (nonatomic) BOOL reachedEOF;

- (void)closeReader;
- (BOOL)openReader;
- (void)setReaderError:(id)arg0;
- (void)setReachedEOF:(BOOL)arg0;
- (void)setLatestVideoSampleTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (BOOL)initVideoReader:(id)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })latestVideoSampleTime;
- (int)seekFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (BOOL)reachedEOF;
- (id)initWithAVAsset:(void *)arg0 needReencode:(BOOL)arg1 pixFmt:(int)arg2 isFullRange:(BOOL)arg3;
- (BOOL)getMediaInfo:(unsigned int)arg0 info:(void *)arg1 codecID:(unsigned int *)arg2;
- (id)getMetaData;
- (unsigned int)getStreamCount;
- (BOOL)readerStatusFailed;
- (id)readerError;
- (void)setSrcAsset:(id)arg0;
- (id)videoDecodeQueue;
- (void)setVideoDecodeQueue:(id)arg0;
- (struct opaqueCMSampleBuffer { } *)lastSampleBuffer;
- (void)setLastSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg0;
- (BOOL)needReencode;
- (void)setNeedReencode:(BOOL)arg0;
- (int)decodePixelFmt;
- (void)setDecodePixelFmt:(int)arg0;
- (void)setIsFullRange:(BOOL)arg0;
- (id)srcAsset;
- (int)setStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void).cxx_destruct;
- (id)videoOutput;
- (void)setVideoOutput:(id)arg0;
- (id)reader;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })videoDuration;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (void)setVideoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (BOOL)atEOF;
- (void)setReader:(id)arg0;
- (BOOL)isFullRange;

@end
