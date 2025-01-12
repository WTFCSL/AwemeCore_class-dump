//
//     Generated by private class-dump
//

@class HTSGLContext, NSString, VELensConfig;

@interface VELensOnekeyEnhanceAlgorithm : IESMMObject {
    BOOL _isFirstFrame;
    BOOL _isLiveCore;
    BOOL _initLensHandleSuccessful;
    BOOL _shouldPost;
    BOOL _mDisableHdr;
    BOOL _mDisableDenoise;
    BOOL _mDisableAsf;
    BOOL _mOneKeyRecordHdrV2;
    BOOL _mAsyncProcess;
    BOOL _mDisableDayScene;
    BOOL _mDisableNightScene;
    float _minISO;
    float _maxISO;
    int _lastDetectResult;
    struct ILensEngineInterface { void /* function */ **x0; } *_enginePtr;
    struct ILensFlowGraphInterface { void /* function */ **x0; } *_algorithmPtr;
    struct IOneKeyGraphInterface { void /* function */ **x0; } *_oneKeyPtr;
    VELensConfig *_config;
    HTSGLContext *_context;
    struct __CVBuffer { } *_lastPixelBuffer;
    struct __CVBuffer { } *_curPixelBuffer;
    NSString *_mAlgParams;
}

@property (nonatomic) struct ILensEngineInterface { void /* function */ **x0; } *enginePtr;
@property (nonatomic) struct ILensFlowGraphInterface { void /* function */ **x0; } *algorithmPtr;
@property (nonatomic) struct IOneKeyGraphInterface { void /* function */ **x0; } *oneKeyPtr;
@property (retain, nonatomic) VELensConfig *config;
@property (readonly, nonatomic) HTSGLContext *context;
@property (nonatomic) float minISO;
@property (nonatomic) float maxISO;
@property (nonatomic) BOOL initLensHandleSuccessful;
@property (nonatomic) struct __CVBuffer { } *lastPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *curPixelBuffer;
@property (nonatomic) BOOL shouldPost;
@property (nonatomic) int lastDetectResult;
@property (nonatomic) BOOL mDisableHdr;
@property (nonatomic) BOOL mDisableDenoise;
@property (nonatomic) BOOL mDisableAsf;
@property (nonatomic) BOOL mOneKeyRecordHdrV2;
@property (nonatomic) BOOL mAsyncProcess;
@property (nonatomic) BOOL mDisableDayScene;
@property (nonatomic) BOOL mDisableNightScene;
@property (retain, nonatomic) NSString *mAlgParams;
@property (nonatomic) BOOL isFirstFrame;
@property (nonatomic) BOOL isLiveCore;

- (struct __CVBuffer { } *)curPixelBuffer;
- (void)setCurPixelBuffer:(struct __CVBuffer { } *)arg0;
- (struct __CVBuffer { } *)lastPixelBuffer;
- (void)setLastPixelBuffer:(struct __CVBuffer { } *)arg0;
- (BOOL)isLiveCore;
- (BOOL)createLensAlgorithmHandle;
- (void)releaseAllEngine:(BOOL)arg0;
- (void)p_storeBuffer:(struct __CVBuffer { } *)arg0;
- (struct IOneKeyGraphInterface { void /* function */ **x0; } *)oneKeyPtr;
- (void)checkJson:(id)arg0;
- (void)setOneKeyPtr:(struct IOneKeyGraphInterface { void /* function */ **x0; } *)arg0;
- (BOOL)initLensHandleSuccessful;
- (void)setInitLensHandleSuccessful:(BOOL)arg0;
- (BOOL)shouldPost;
- (void)setShouldPost:(BOOL)arg0;
- (int)lastDetectResult;
- (void)setLastDetectResult:(int)arg0;
- (BOOL)mDisableHdr;
- (void)setMDisableHdr:(BOOL)arg0;
- (BOOL)mDisableDenoise;
- (void)setMDisableDenoise:(BOOL)arg0;
- (BOOL)mDisableAsf;
- (void)setMDisableAsf:(BOOL)arg0;
- (BOOL)mOneKeyRecordHdrV2;
- (void)setMOneKeyRecordHdrV2:(BOOL)arg0;
- (BOOL)mAsyncProcess;
- (void)setMAsyncProcess:(BOOL)arg0;
- (BOOL)mDisableDayScene;
- (void)setMDisableDayScene:(BOOL)arg0;
- (BOOL)mDisableNightScene;
- (void)setMDisableNightScene:(BOOL)arg0;
- (id)mAlgParams;
- (void)setMAlgParams:(id)arg0;
- (struct ILensEngineInterface { void /* function */ **x0; } *)enginePtr;
- (void)setEnginePtr:(struct ILensEngineInterface { void /* function */ **x0; } *)arg0;
- (struct ILensFlowGraphInterface { void /* function */ **x0; } *)algorithmPtr;
- (void)setAlgorithmPtr:(struct ILensFlowGraphInterface { void /* function */ **x0; } *)arg0;
- (BOOL)isFirstFrame;
- (void)setIsFirstFrame:(BOOL)arg0;
- (void)setIsLiveCore:(BOOL)arg0;
- (void)setLiveCoreScenes:(BOOL)arg0;
- (BOOL)getEnableAsf;
- (struct CGSize { double x0; double x1; })getAlgorithmCurrentFrameSize;
- (void)resetOnekeyConfig:(id)arg0;
- (void)setLensDectMinISO:(float)arg0 maxISO:(float)arg1;
- (struct __CVBuffer { } *)processPixelBuffer:(struct __CVBuffer { } *)arg0 ISO:(float)arg1 faceDectResultArray:(id)arg2;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (id)context;
- (float)maxISO;
- (void)dealloc;
- (float)minISO;
- (void)setMaxISO:(float)arg0;
- (void)setMinISO:(float)arg0;

@end
