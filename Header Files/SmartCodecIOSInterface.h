//
//     Generated by private class-dump
//

@class PreTransform, NSString, NSArray, SceneCut, GroupFeature, ASCSharpenFilter, FeatureGLCMGPU, VFMetalContext;
@protocol MTLTexture, MTLDevice;

@interface SmartCodecIOSInterface : NSObject {
    struct { float width; float height; float fps; } totalstatics;
    void *model;
    struct vector<CodecFeatureZipID, std::allocator<CodecFeatureZipID>> { struct *__begin_; struct *__end_; struct __compressed_pair<CodecFeatureZipID *, std::allocator<CodecFeatureZipID>> { struct *__value_; } __end_cap_; } Cfzip;
    struct vector<VideoFeatureZipID, std::allocator<VideoFeatureZipID>> { struct *__begin_; struct *__end_; struct __compressed_pair<VideoFeatureZipID *, std::allocator<VideoFeatureZipID>> { struct *__value_; } __end_cap_; } Vfzip;
    struct vector<SceneCutZipID, std::allocator<SceneCutZipID>> { struct *__begin_; struct *__end_; struct __compressed_pair<SceneCutZipID *, std::allocator<SceneCutZipID>> { struct *__value_; } __end_cap_; } Szip;
    struct vector<PtsTimeZipID, std::allocator<PtsTimeZipID>> { struct *__begin_; struct *__end_; struct __compressed_pair<PtsTimeZipID *, std::allocator<PtsTimeZipID>> { struct *__value_; } __end_cap_; } Ptszip;
    struct vector<BitrateZipID, std::allocator<BitrateZipID>> { struct *__begin_; struct *__end_; struct __compressed_pair<BitrateZipID *, std::allocator<BitrateZipID>> { struct *__value_; } __end_cap_; } Ratezip;
    int lastscenecut;
    int lastcodecframe;
    int lastvideoframe;
    float data[20];
    struct __CVBuffer { } *lastframe;
    id<MTLTexture> lastframe_text;
    id<MTLTexture> curframe_text;
    struct { float bitRate; float quality; BOOL useI; float averageComplexity; float maxComplexity; float minComplexity; } lastparm;
    unsigned int pixelformat;
    int originalbitrate;
    float m_moving_bitrate;
    struct __CVMetalTextureCache { } *textureCache;
    struct __CVBuffer { } *y_texture;
    int RType;
    NSString *defaultSettings;
    struct { float target_vmaf; NSArray *support_resolution; float ratelimit_low; float ratelimit_high; int frame_skip_video; int predict_interval; NSArray *need_adjustrate; float adjustratio; int useFilter; float enhRatio; int enable_adjust; float pre_adjust_threshold; float pre_adjust_factor; int pre_adjust_framenum; int glcm_advanceframe; } configParm;
    float internal_accComplexity;
    float internal_maxComplexity;
    float internal_minComplexity;
    NSArray *feature_glcm_cache;
    struct ASCSharpen_CPU { float x0; int x1; int x2; char *x3; char *x4; char *x5; short *x6; int *x7; short *x8; int *x9; char *x10[8]; } *sharpenFilter_cpu;
    int mQueryFrameIdx;
    BOOL _bFilterCPU;
    BOOL _bFilterProcessYUV;
    FeatureGLCMGPU *_GLCM;
    GroupFeature *_Group;
    VFMetalContext *_context;
    SceneCut *_Scene;
    PreTransform *_TRANS;
    id<MTLDevice> _device;
    ASCSharpenFilter *_sharpenFilter;
}

@property (retain, nonatomic) FeatureGLCMGPU *GLCM;
@property (retain, nonatomic) GroupFeature *Group;
@property (retain, nonatomic) VFMetalContext *context;
@property (retain, nonatomic) SceneCut *Scene;
@property (retain, nonatomic) PreTransform *TRANS;
@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) ASCSharpenFilter *sharpenFilter;
@property (nonatomic) BOOL bFilterCPU;
@property (nonatomic) BOOL bFilterProcessYUV;

- (id)createTexWithWidth:(int)arg0 andHeight:(int)arg1 withPixelFormat:(unsigned long long)arg2 storageMode:(unsigned long long)arg3;
- (id)createTexWithWidth:(int)arg0 andHeight:(int)arg1 withPixelFormat:(unsigned long long)arg2;
- (void)Release;
- (void)InitVariables;
- (void)ParseResolution:(int)arg0 height:(int)arg1;
- (void)ParseSettingsFromString:(id)arg0;
- (BOOL)isResolutionSupport;
- (void)ResetCodecFeature;
- (void)ResetVideoFeature;
- (void)ResetBitrateVector;
- (struct { float x0; float x1; BOOL x2; float x3; float x4; float x5; })InitCodecParm:(int)arg0;
- (void)GetDefaultSettings;
- (BOOL)NeedAdjustFirstFrameRate;
- (BOOL)Buffer2Texture_Prefilter:(struct __CVBuffer { } *)arg0 lastFrame:(struct __CVBuffer { } *)arg1;
- (id)Transfrom:(struct __CVBuffer { } *)arg0 source:(id)arg1;
- (struct __CVBuffer { } *)SharpenFrameRGBALastBuffer:(struct __CVBuffer { } *)arg0 currBuffer:(struct __CVBuffer { } *)arg1;
- (struct __CVBuffer { } *)SharpenFrameYUVLastBuffer:(struct __CVBuffer { } *)arg0 currBuffer:(struct __CVBuffer { } *)arg1;
- (struct { float x0; float x1; BOOL x2; float x3; float x4; float x5; })InternalPredictCodecParam:(unsigned int)arg0;
- (void)AdjustPrevParam;
- (float)GetCachedBitrate;
- (struct { float x0; float x1; BOOL x2; float x3; float x4; float x5; })UpdateInternalStatics:(struct { float x0; float x1; BOOL x2; float x3; float x4; float x5; })arg0 unboundBitrate:(float)arg1 frameid:(unsigned int)arg2;
- (struct { struct { float x0[1]; float x1[4]; } x0; struct { float x0[1]; float x1[1]; float x2[5]; } x1; })ComputeAverageVideoFeature:(unsigned int)arg0;
- (float)ComputeFps:(unsigned int)arg0;
- (struct { struct { float x0[1]; float x1[4]; } x0; struct { float x0[1]; float x1[1]; float x2[5]; } x1; })ComputeNearestVideoFeature:(unsigned int)arg0;
- (void)FlattenStruct:(struct { struct { float x0; float x1; float x2; } x0; float x1; struct { float x0[3]; float x1[3]; float x2[3]; } x2; struct { struct { float x0[1]; float x1[4]; } x0; struct { float x0[1]; float x1[1]; float x2[5]; } x1; } x3; struct { struct { float x0[1]; float x1[4]; } x0; struct { float x0[1]; float x1[1]; float x2[5]; } x1; } x4; })arg0;
- (void)adjustVideoSize;
- (id)sharpenFilter;
- (id)Buffer2Texture:(struct __CVBuffer { } *)arg0 source:(id)arg1;
- (id)Initwithparm:(struct { int x0; int x1; int x2; int x3; char *x4; char *x5; BOOL x6; } *)arg0 withError:(int *)arg1;
- (void)GetVideoFeature:(unsigned int)arg0 buffers:(struct __CVBuffer { } *)arg1;
- (float)get_average_runingtime:(int)arg0 block:(id /* block */)arg1;
- (void)GetCodecFeature:(unsigned int)arg0 feature:(struct { int x0; int x1; float x2; })arg1;
- (void)ComputeCodecParam:(unsigned int)arg0;
- (struct { float x0; float x1; BOOL x2; float x3; float x4; float x5; })GetFinalParam;
- (void)ResetSceneCut;
- (struct { float x0[3]; float x1[3]; float x2[3]; })ComputeCodecFeature:(unsigned int)arg0;
- (id)GLCM;
- (void)setGLCM:(id)arg0;
- (id)Group;
- (id)Scene;
- (id)TRANS;
- (void)setTRANS:(id)arg0;
- (void)setSharpenFilter:(id)arg0;
- (BOOL)bFilterCPU;
- (void)setBFilterCPU:(BOOL)arg0;
- (BOOL)bFilterProcessYUV;
- (void)setBFilterProcessYUV:(BOOL)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)setDevice:(id)arg0;
- (id).cxx_construct;
- (void)setGroup:(id)arg0;
- (id)device;

@end
