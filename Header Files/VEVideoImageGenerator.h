//
//     Generated by private class-dump
//

@class VECurveTransUtils, AVAssetReader, AVAssetReaderOutput, VEVideoConfig;

@interface VEVideoImageGenerator : VEVideoReader {
    AVAssetReader *_assetReader;
    AVAssetReaderOutput *_videoOutput;
    VEVideoConfig *_config;
    VECurveTransUtils *_curveTransUtils;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startTime;
}

@property (retain, nonatomic) AVAssetReader *assetReader;
@property (retain, nonatomic) AVAssetReaderOutput *videoOutput;
@property (retain, nonatomic) VEVideoConfig *config;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (retain, nonatomic) VECurveTransUtils *curveTransUtils;

- (void)setCurveTransUtils:(id)arg0;
- (id)curveTransUtils;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })p_convertTimeLineToVideoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)initAssetReader:(id)arg0;
- (void)setConfig:(id)arg0;
- (void)setStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void).cxx_destruct;
- (id)videoOutput;
- (id)config;
- (void)stop;
- (void)setVideoOutput:(id)arg0;
- (id)initWithConfig:(id)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })startTime;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)assetReader;
- (void)setAssetReader:(id)arg0;
- (id)copySampleBufferAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;

@end
