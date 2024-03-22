//
//     Generated by private class-dump
//

@class NSString, VEMVPRenderer, IESMMEffectStickerInfo, HTSGLFramebuffer, IESMMEffectConfig;

@interface IESMMEffectTwoInputFilter : HTSGLFilterTwoInput <IESMMEffectResourceProtocol, IESMMEffectBGMProtocol, IESMMARProtocol, IVEEffectFilterProtocol> {
    BOOL slamWithoutExtraDeviceMotionData;
    BOOL mimoMode;
    BOOL _isFrontCamera;
    BOOL _enableFakeFace;
    int _noNeedEffectPorcessCount;
    unsigned long long _usedEffect;
    id /* block */ _getEffectPathBlock;
    id /* block */ _getOutputSizeChangeBlock;
    void *_renderMangerHandle;
    IESMMEffectConfig *_config;
    id /* block */ _musicTimeLineBLock;
    double _timeStamp;
    NSString *_currentGroupPath;
    IESMMEffectStickerInfo *_currentGroupInfo;
    VEMVPRenderer *_pixelBufferRenderer;
    HTSGLFramebuffer *_videoFramebuffer;
    struct CGSize { double width; double height; } _outputSize;
}

@property (nonatomic) void *renderMangerHandle;
@property (retain, nonatomic) IESMMEffectConfig *config;
@property (copy, nonatomic) id /* block */ musicTimeLineBLock;
@property (nonatomic) int noNeedEffectPorcessCount;
@property (nonatomic) double timeStamp;
@property (retain, nonatomic) NSString *currentGroupPath;
@property (retain, nonatomic) IESMMEffectStickerInfo *currentGroupInfo;
@property (retain, nonatomic) VEMVPRenderer *pixelBufferRenderer;
@property (retain, nonatomic) HTSGLFramebuffer *videoFramebuffer;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic) unsigned long long usedEffect;
@property (nonatomic) BOOL isFrontCamera;
@property (nonatomic) BOOL enableFakeFace;
@property (copy, nonatomic) id /* block */ getEffectPathBlock;
@property (copy, nonatomic) id /* block */ getOutputSizeChangeBlock;
@property (copy, nonatomic) id /* block */ playTimeCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL slamWithoutExtraDeviceMotionData;

- (void)setMaxStickerMemoryCache:(unsigned long long)arg0;
- (BOOL)switchColorFilterIntensity:(id)arg0 inFilterPath:(id)arg1 inPosition:(float)arg2 inLeftIntensity:(float)arg3 inRightIntensity:(float)arg4;
- (int)setColorFilterIntensity:(id)arg0 inIntensity:(float)arg1;
- (BOOL)getColorFilterIntensity:(id)arg0 outIntensity:(float *)arg1;
- (void)applyReshape:(id)arg0 withIndensity:(struct IESIndensityParam_t { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; })arg1;
- (int)applyEffectWithInfo:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
- (int)applyEffectKey:(id)arg0 image:(id)arg1;
- (void)applyIndensity:(struct IESIndensityParam_t { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; })arg0 type:(long long)arg1;
- (void)enableBGM:(BOOL)arg0;
- (void)muteBGM:(BOOL)arg0;
- (void)amazingMuteBGM:(BOOL)arg0;
- (void)applyMusicNodes:(id)arg0;
- (BOOL)handleBeginManipulate3DObject;
- (BOOL)handleManipulate3DObject;
- (BOOL)handleEndManipulate3DObject;
- (BOOL)handleFinishManipulate3DObject;
- (BOOL)save3DObjectMeshToFile:(id)arg0;
- (void)setRenderMangerHandle:(void *)arg0;
- (void *)renderMangerHandle;
- (unsigned long long)usedEffect;
- (void)setUsedEffect:(unsigned long long)arg0;
- (void)setIsFrontCamera:(BOOL)arg0;
- (BOOL)enableFakeFace;
- (int)switchFilterWithPathOne:(id)arg0 pathTwo:(id)arg1 progress:(double)arg2;
- (void)setEnableFakeFace:(BOOL)arg0;
- (void)renderToTextureWithVertices:(const float *)arg0 textureCoordinates:(const float *)arg1;
- (struct CGSize { double x0; double x1; })sizeOfFBO;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 atIndex:(long long)arg1 exceptionBlock:(id /* block */)arg2;
- (void)setEffectSrtData:(const struct IESSrtDdata { struct IESSrtLine *x0; int x1; } *)arg0;
- (void)setEffectFontPath:(id)arg0 faceIndex:(long long)arg1;
- (void)setPlayTimeCallback:(id /* block */)arg0;
- (id /* block */)playTimeCallback;
- (BOOL)mimoMode;
- (void)setMimoMode:(BOOL)arg0;
- (id /* block */)getEffectPathBlock;
- (void)setRealPlayCallback:(void /* function */ *)arg0 userdata:(void *)arg1;
- (void)applyEffectKey:(id)arg0 pixelBuffer:(struct __CVBuffer { } *)arg1;
- (void)setEffectFaceMakeupOpacity:(id)arg0 maleOpacity:(double)arg1 femaleOpacity:(double)arg2 completion:(id /* block */)arg3;
- (void)updateEntityWithAnchor:(id)arg0;
- (void)updateEnvironmentCubeWithName:(id)arg0 datas:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (void)setARSyncData:(id)arg0;
- (id)getARSyncData;
- (void)setARMeshSyncData:(id)arg0;
- (id)getARMeshSyncData;
- (id)getARRootEntityTransformData;
- (void)onReceiveEventData:(id)arg0;
- (void)setAmbientLightIntensity:(double)arg0;
- (void)setAmbientLightColorTemperature:(double)arg0;
- (BOOL)slamWithoutExtraDeviceMotionData;
- (void)setSlamWithoutExtraDeviceMotionData:(BOOL)arg0;
- (void)setGetEffectPathBlock:(id /* block */)arg0;
- (void)setFirstEffectRenderBlock:(id /* block */)arg0;
- (void)getTC21RedpakageRecordInfo:(id /* block */)arg0;
- (id)currentGroupInfo;
- (void)setCurrentGroupInfo:(id)arg0;
- (id)currentGroupPath;
- (void)setCurrentGroupPath:(id)arg0;
- (void)setVideoFramebuffer:(id)arg0;
- (id)videoFramebuffer;
- (id)pixelBufferRenderer;
- (id /* block */)getOutputSizeChangeBlock;
- (int)noNeedEffectPorcessCount;
- (void)p_skipFrameProcess;
- (void)setNoNeedEffectPorcessCount:(int)arg0;
- (void)p_checkEffectPathChange;
- (int)p_processFakeFace;
- (int)p_processFrameForAlgorithmWithFrameBuffers:(id)arg0 timeStamp:(double)arg1 outputFrameBuffer:(id)arg2;
- (void)p_getProcessInfo:(id)arg0;
- (BOOL)renderTextureWithEffect;
- (void)setGetOutputSizeChangeBlock:(id /* block */)arg0;
- (void)setEffectIsRecording:(BOOL)arg0;
- (void)enableTC21RedpackageFramebuffer:(id)arg0;
- (void)getTC21RedpakageTracker:(id)arg0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 vePathmapArray:(id)arg2;
- (id)initWithConfig:(id)arg0 effectHandle:(void *)arg1 context:(id)arg2;
- (id /* block */)musicTimeLineBLock;
- (void)setMusicTimeLineBLock:(id /* block */)arg0;
- (void)setPixelBufferRenderer:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)start:(unsigned long long)arg0;
- (double)timeStamp;
- (id)config;
- (struct CGSize { double x0; double x1; })outputSize;
- (void)dealloc;
- (void)pause:(unsigned long long)arg0;
- (void)setTimeStamp:(double)arg0;
- (void)setOutputSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)isFrontCamera;

@end
