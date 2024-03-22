//
//     Generated by private class-dump
//

@class HTSGLFramebuffer, VEMattingAlphaData, NSArray, NSString, IESTrackInfo, VEVideoConfig, NSError;

@interface VEVideoSampleBuffer : NSObject {
    BOOL _isDifferentVideoAsset;
    BOOL _isLatestFrame;
    BOOL _packetFlagDiscard;
    struct __CVBuffer { } *_pixelBuffer;
    struct opaqueCMSampleBuffer { } *_sampleBuffer;
    long long _srcPtsUs;
    IESTrackInfo *_trackInfo;
    VEVideoConfig *_config;
    NSError *_error;
    long long _sampleFlag;
    HTSGLFramebuffer *_frameBuffer;
    long long _videoDataType;
    VEMattingAlphaData *_mattingMaskData;
    NSArray *_matting_rect;
    NSString *_segmentID;
    struct __CVBuffer { } *_originalPixelBuffer;
    struct CGSize { double width; double height; } _mattingMaskImageSize;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _pts;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _dts;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _duration;
}

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } pts;
@property (nonatomic) long long srcPtsUs;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } dts;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) BOOL isDifferentVideoAsset;
@property (retain, nonatomic) IESTrackInfo *trackInfo;
@property (retain, nonatomic) VEVideoConfig *config;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long sampleFlag;
@property (retain, nonatomic) HTSGLFramebuffer *frameBuffer;
@property (nonatomic) long long videoDataType;
@property (nonatomic) BOOL isLatestFrame;
@property (retain, nonatomic) VEMattingAlphaData *mattingMaskData;
@property (nonatomic) struct CGSize { double width; double height; } mattingMaskImageSize;
@property (retain, nonatomic) NSArray *matting_rect;
@property (retain, nonatomic) NSString *segmentID;
@property (nonatomic) BOOL packetFlagDiscard;
@property (nonatomic) struct __CVBuffer { } *originalPixelBuffer;

- (void)setMattingMaskImageSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setMatting_rect:(id)arg0;
- (void)setSampleFlag:(long long)arg0;
- (long long)sampleFlag;
- (long long)srcPtsUs;
- (long long)videoDataType;
- (void)setSegmentID:(id)arg0;
- (id)mattingMaskData;
- (void)setMattingMaskData:(id)arg0;
- (struct CGSize { double x0; double x1; })mattingMaskImageSize;
- (id)matting_rect;
- (void)setDts:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (BOOL)packetFlagDiscard;
- (void)setPacketFlagDiscard:(BOOL)arg0;
- (BOOL)isDifferentVideoAsset;
- (void)setVideoDataType:(long long)arg0;
- (void)setSrcPtsUs:(long long)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })dts;
- (BOOL)isLatestFrame;
- (void)setIsLatestFrame:(BOOL)arg0;
- (void)setIsDifferentVideoAsset:(BOOL)arg0;
- (void)setOriginalPixelBuffer:(struct __CVBuffer { } *)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })pts;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (struct __CVBuffer { } *)pixelBuffer;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)setError:(id)arg0;
- (struct opaqueCMSampleBuffer { } *)sampleBuffer;
- (struct __CVBuffer { } *)originalPixelBuffer;
- (void)dealloc;
- (id)error;
- (void)setDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg0;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;
- (void)setPixelBuffer:(struct __CVBuffer { } *)arg0;
- (id)segmentID;
- (id)frameBuffer;
- (void)setFrameBuffer:(id)arg0;
- (void)releasePixelBuffer;
- (void)setPts:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;

@end