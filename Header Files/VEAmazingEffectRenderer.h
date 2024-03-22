//
//     Generated by private class-dump
//

@class NSMutableDictionary, VEAmazingEffectConfig, VEBitsRTTransUtil, HTSGLContext, NSString;

@interface VEAmazingEffectRenderer : NSObject <IVEAmazingEffectProtocol> {
    BOOL _enableOrientation;
    BOOL _enableFeatureEngineReuseOpt;
    BOOL _isInitedSuccess;
    BOOL _isHDR;
    BOOL _enable10bitRT;
    BOOL _useEffectSensor;
    int _sourceVideoType;
    int _playerStatus;
    int _renderEffectColorSpace;
    int _engineSeekStatus;
    void *_engine;
    NSMutableDictionary *_mFeatures;
    VEAmazingEffectConfig *_config;
    HTSGLContext *_context;
    NSMutableDictionary *_algorithmParams;
    VEBitsRTTransUtil *_bitsRTTransUtil;
    struct CGSize { double width; double height; } _canvasSize;
}

@property (nonatomic) void *engine;
@property (retain, nonatomic) NSMutableDictionary *mFeatures;
@property (retain, nonatomic) VEAmazingEffectConfig *config;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (retain, nonatomic) HTSGLContext *context;
@property (nonatomic) int renderEffectColorSpace;
@property (nonatomic) BOOL enableFeatureEngineReuseOpt;
@property (readonly, nonatomic) BOOL isInitedSuccess;
@property (nonatomic) int engineSeekStatus;
@property (retain, nonatomic) NSMutableDictionary *algorithmParams;
@property (retain, nonatomic) VEBitsRTTransUtil *bitsRTTransUtil;
@property (nonatomic) BOOL isHDR;
@property (nonatomic) BOOL enable10bitRT;
@property (nonatomic) BOOL useEffectSensor;
@property (nonatomic) int sourceVideoType;
@property (nonatomic) int playerStatus;
@property (nonatomic) BOOL enableOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)configAnimSeqCacheLimit:(float)arg0;
+ (BOOL)checkError:(int)arg0 msg:(id)arg1;

- (void)refreshEffectColorSpace:(id)arg0;
- (int)renderEffectColorSpace;
- (void)setRenderEffectColorSpace:(int)arg0;
- (BOOL)checkInitSuccessed;
- (BOOL)isInitedSuccess;
- (id)bitsRTTransUtil;
- (void)setBitsRTTransUtil:(id)arg0;
- (BOOL)enable10bitRT;
- (void)setEnable10bitRT:(BOOL)arg0;
- (id)initWithCanvasSize:(struct CGSize { double x0; double x1; })arg0 config:(id)arg1 context:(id)arg2;
- (void)setSourceVideoType:(int)arg0;
- (void)setAlgoParamsAndApplyForKey:(id)arg0 value:(id)arg1;
- (void)innerInit:(id)arg0;
- (void)setMFeatures:(id)arg0;
- (id)jsonFrom:(id)arg0;
- (void)setFeature:(id)arg0 enable:(BOOL)arg1;
- (BOOL)enableFeatureEngineReuseOpt;
- (id)mFeatures;
- (void)destroyUselessFeatures;
- (BOOL)useEffectSensor;
- (BOOL)enableOrientation;
- (int)engineSeekStatus;
- (void)setEngineSeekStatus:(int)arg0;
- (int)sourceVideoType;
- (void)p_updateEngineMode;
- (void)addFeatureWithParameters:(id)arg0;
- (void)setFeature:(id)arg0 order:(int)arg1;
- (BOOL)setFeature:(id)arg0 startTime:(double)arg1 endTime:(double)arg2;
- (void)setFeature:(id)arg0 subStartTime:(double)arg1 subEndTime:(double)arg2 params:(id)arg3;
- (void)setFeature:(id)arg0 scaleX:(double)arg1 scaleY:(double)arg2 scaleZ:(double)arg3 params:(id)arg4;
- (void)setRenderCanvasSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setFeature:(id)arg0 subfabDir:(id)arg1 params:(id)arg2;
- (void)processAlgorithmWithTexture:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 time:(double)arg2;
- (void)setCurrentInputTexture:(id)arg0 outputTexture:(id)arg1 time:(double)arg2;
- (void)setFeature:(id)arg0 params:(id)arg1;
- (void)setFeatures:(id)arg0 enable:(BOOL)arg1;
- (void)markNeedDestroyFeature:(id)arg0;
- (void)setFeatureKeyFrameInfo:(id)arg0 pts:(unsigned long long)arg1 FeatureIdentifier:(id)arg2;
- (void)removeFeaturePts:(unsigned long long)arg0 FeatureIdentifier:(id)arg1;
- (void)removeAllFeatureKeyFrames:(id)arg0;
- (id)getFeatureKeyFrameInfo:(unsigned long long)arg0 FeatureIdentifier:(id)arg1;
- (void)disableAllFeatures;
- (void)setFeaturesOrder:(id)arg0;
- (void)setAlgorithmeBuffer:(void *)arg0 isSlameBuffer:(BOOL)arg1;
- (void)setAlgorithmeBuffer:(char **)arg0 bufferSize:(int)arg1 stopMotionBuffer:(void **)arg2;
- (void)deleteStopmotionbuffer:(void *)arg0;
- (unsigned long long)getshadoCountWithPath:(id)arg0;
- (void)setEnableOrientation:(BOOL)arg0;
- (void)setEnableFeatureEngineReuseOpt:(BOOL)arg0;
- (void)setIsHDR:(BOOL)arg0;
- (void)setUseEffectSensor:(BOOL)arg0;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)config;
- (void *)engine;
- (void)setCanvasSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)isHDR;
- (id)context;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })canvasSize;
- (void)setEngine:(void *)arg0;
- (int)playerStatus;
- (void)setPlayerStatus:(int)arg0;
- (void)removeFeature:(id)arg0;
- (id)algorithmParams;
- (void)setAlgorithmParams:(id)arg0;

@end
