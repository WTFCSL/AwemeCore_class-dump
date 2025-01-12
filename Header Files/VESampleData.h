//
//     Generated by private class-dump
//

@class IESMMSampleBufferInfo, NSString, NSArray, NSData, HTSGLFramebuffer, NSError, IESTrackInfo;

@interface VESampleData : NSObject {
    BOOL _isFromSeek;
    BOOL _isOutRenderTime;
    BOOL _isFullRange;
    BOOL _skipFilters;
    BOOL _useOriginColorSpace;
    BOOL _flipX;
    BOOL _flipY;
    BOOL _noNeedLVProcess;
    BOOL _needResetFilterChain;
    BOOL _needReleaseCVPixelbuffer;
    float _delayTime;
    int _sampleCount;
    unsigned int _micNullDataSize;
    unsigned int _bgmNullDataSize;
    struct __CVBuffer { } *_pixelBuf;
    struct opaqueCMSampleBuffer { } *_sampleBuf;
    HTSGLFramebuffer *_frameBuffer;
    NSString *_route;
    NSArray *_vesamples;
    NSString *_desc;
    void *_pipeline;
    id _teClip;
    long long _colorPrimaries;
    long long _transferFunction;
    long long _ycbcrMatrix;
    unsigned long long _sampleType;
    long long _decodeTimeStamp;
    unsigned long long _rotationMode;
    long long _sampleFlag;
    NSError *_error;
    double _encodeBegin;
    IESMMSampleBufferInfo *_cameraBufferInfo;
    IESTrackInfo *_trackInfo;
    double _processStartTime;
    id /* block */ _completeBlock;
    id /* block */ _completeBlockWithSurffix;
    struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *_audioBufferList;
    NSData *_ambientViewingEnvironmentData;
    NSData *_masteringDisplayColorVolumeData;
    NSData *_contentLightLevelInfoData;
    unsigned long long _recordBufferType;
    struct CGSize { double width; double height; } _sampleSize;
    struct CGSize { double width; double height; } _videoSize;
    struct CGSize { double width; double height; } _screenshotFrameSize;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _frameTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _realFramePts;
}

@property (nonatomic) struct __CVBuffer { } *pixelBuf;
@property (nonatomic) struct opaqueCMSampleBuffer { } *sampleBuf;
@property (retain, nonatomic) HTSGLFramebuffer *frameBuffer;
@property (retain, nonatomic) NSString *route;
@property (retain, nonatomic) NSArray *vesamples;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) void *pipeline;
@property (retain, nonatomic) id teClip;
@property (nonatomic) BOOL isFromSeek;
@property (nonatomic) BOOL isOutRenderTime;
@property (nonatomic) long long colorPrimaries;
@property (nonatomic) long long transferFunction;
@property (nonatomic) long long ycbcrMatrix;
@property (nonatomic) BOOL isFullRange;
@property (nonatomic) BOOL skipFilters;
@property (nonatomic) BOOL useOriginColorSpace;
@property (nonatomic) BOOL flipX;
@property (nonatomic) BOOL flipY;
@property (nonatomic) unsigned long long sampleType;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } realFramePts;
@property (nonatomic) long long decodeTimeStamp;
@property (nonatomic) struct CGSize { double width; double height; } sampleSize;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) unsigned long long rotationMode;
@property (nonatomic) long long sampleFlag;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) struct CGSize { double width; double height; } screenshotFrameSize;
@property (nonatomic) double encodeBegin;
@property (retain, nonatomic) IESMMSampleBufferInfo *cameraBufferInfo;
@property (nonatomic) BOOL noNeedLVProcess;
@property (nonatomic) BOOL needResetFilterChain;
@property (retain, nonatomic) IESTrackInfo *trackInfo;
@property (nonatomic) double processStartTime;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (copy, nonatomic) id /* block */ completeBlockWithSurffix;
@property (nonatomic) float delayTime;
@property (nonatomic) struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *audioBufferList;
@property (nonatomic) int sampleCount;
@property (nonatomic) unsigned int micNullDataSize;
@property (nonatomic) unsigned int bgmNullDataSize;
@property (retain, nonatomic) NSData *ambientViewingEnvironmentData;
@property (retain, nonatomic) NSData *masteringDisplayColorVolumeData;
@property (retain, nonatomic) NSData *contentLightLevelInfoData;
@property (nonatomic) unsigned long long recordBufferType;
@property (nonatomic) BOOL needReleaseCVPixelbuffer;

- (void)setSampleFlag:(long long)arg0;
- (long long)sampleFlag;
- (void)setYcbcrMatrix:(long long)arg0;
- (id)vesamples;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })realFramePts;
- (void)setRealFramePts:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setIsFullRange:(BOOL)arg0;
- (void)setCompleteBlock:(id /* block */)arg0;
- (id /* block */)completeBlock;
- (BOOL)noNeedLVProcess;
- (void)setNoNeedLVProcess:(BOOL)arg0;
- (void)setAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0;
- (void)setMicNullDataSize:(unsigned int)arg0;
- (void)setSampleBuf:(struct opaqueCMSampleBuffer { } *)arg0;
- (void)setBgmNullDataSize:(unsigned int)arg0;
- (unsigned int)bgmNullDataSize;
- (unsigned int)micNullDataSize;
- (void)setMasteringDisplayColorVolumeData:(id)arg0;
- (void)setContentLightLevelInfoData:(id)arg0;
- (void)setAmbientViewingEnvironmentData:(id)arg0;
- (struct opaqueCMSampleBuffer { } *)sampleBuf;
- (struct __CVBuffer { } *)pixelBuf;
- (void)setPixelBuf:(struct __CVBuffer { } *)arg0;
- (void)setIsFromSeek:(BOOL)arg0;
- (id)cameraBufferInfo;
- (void)setRecordBufferType:(unsigned long long)arg0;
- (BOOL)needReleaseCVPixelbuffer;
- (void)restoreColorInfoToPixelBuffer:(struct __CVBuffer { } *)arg0;
- (id)ambientViewingEnvironmentData;
- (id)masteringDisplayColorVolumeData;
- (id)contentLightLevelInfoData;
- (void)setCameraBufferInfo:(id)arg0;
- (void)fetchColorInfoFromPixelBuffer:(struct __CVBuffer { } *)arg0;
- (void)setNeedResetFilterChain:(BOOL)arg0;
- (unsigned long long)recordBufferType;
- (BOOL)skipFilters;
- (void)setSkipFilters:(BOOL)arg0;
- (void)setDecodeTimeStamp:(long long)arg0;
- (double)encodeBegin;
- (void)setEncodeBegin:(double)arg0;
- (BOOL)isFromSeek;
- (BOOL)needResetFilterChain;
- (id)teClip;
- (void)setTeClip:(id)arg0;
- (BOOL)useOriginColorSpace;
- (void)setUseOriginColorSpace:(BOOL)arg0;
- (void)setNeedReleaseCVPixelbuffer:(BOOL)arg0;
- (void)fetchSEIMessageFromPixelBuffer:(struct __CVBuffer { } *)arg0;
- (void)releaseVESamples;
- (void)fetchColorInfoFromSampleBuffers:(id)arg0;
- (id)imageFromPixelBuffer:(struct __CVBuffer { } *)arg0;
- (void)fetchSEIMessageFromSampleBuffers:(id)arg0;
- (BOOL)isOutRenderTime;
- (void)setIsOutRenderTime:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })screenshotFrameSize;
- (void)setScreenshotFrameSize:(struct CGSize { double x0; double x1; })arg0;
- (id /* block */)completeBlockWithSurffix;
- (void)setCompleteBlockWithSurffix:(id /* block */)arg0;
- (void)setVesamples:(id)arg0;
- (id)desc;
- (void *)pipeline;
- (int)sampleCount;
- (id)init;
- (double)processStartTime;
- (void).cxx_destruct;
- (id)route;
- (void)setProcessStartTime:(double)arg0;
- (void)setFlipY:(BOOL)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setSampleCount:(int)arg0;
- (void)setDelayTime:(float)arg0;
- (void)setRoute:(id)arg0;
- (float)delayTime;
- (void)setFlipX:(BOOL)arg0;
- (unsigned long long)sampleType;
- (void)setError:(id)arg0;
- (BOOL)flipX;
- (BOOL)flipY;
- (void)dealloc;
- (void)setDesc:(id)arg0;
- (id)error;
- (unsigned long long)rotationMode;
- (void)setRotationMode:(unsigned long long)arg0;
- (long long)decodeTimeStamp;
- (long long)colorPrimaries;
- (void)setColorPrimaries:(long long)arg0;
- (struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)audioBufferList;
- (void)setPipeline:(void *)arg0;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;
- (long long)transferFunction;
- (void)setTransferFunction:(long long)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })frameTime;
- (void)setFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (struct CGSize { double x0; double x1; })videoSize;
- (long long)ycbcrMatrix;
- (void)setVideoSize:(struct CGSize { double x0; double x1; })arg0;
- (id)frameBuffer;
- (void)setFrameBuffer:(id)arg0;
- (BOOL)isFullRange;
- (void)setSampleType:(unsigned long long)arg0;
- (struct CGSize { double x0; double x1; })sampleSize;
- (void)setSampleSize:(struct CGSize { double x0; double x1; })arg0;

@end
