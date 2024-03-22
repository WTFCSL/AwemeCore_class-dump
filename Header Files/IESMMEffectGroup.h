//
//     Generated by private class-dump
//

@class IESMMEffectConnector, IESMMEffectTwoInputFilter, IESMMEffectAlgorithmFilter, IESMMEffectConfig, HTSGLFramebuffer, NSString, NSObject, IESMMEffectAlgorithmTwoInputFilter, IESMMAudioProcessor, IESMMEffectFilter, NSNumber;
@protocol OS_dispatch_semaphore;

@interface IESMMEffectGroup : HTSGLFilterGroup <IESMMEffectConnectorDelegate, IESMMEffectGroupProtocol> {
    BOOL _isFrontCamera;
    BOOL _enableFakeFace;
    BOOL _effectTrackStarted;
    BOOL _isFilterAudoRecommendEnable;
    BOOL _isSceneAutoRecommendEnable;
    BOOL _maleMakeUpState;
    BOOL _hasSetVideoFactory;
    int _renderEffectColorSpace;
    IESMMEffectConfig *_config;
    unsigned long long _usedEffect;
    struct __CVBuffer { } *_currentPixelBuffer;
    IESMMEffectConnector *_effectConnector;
    id /* block */ _effectBitmapRequestBlock;
    id /* block */ _genBitmapBlock;
    id /* block */ _genBitmapUTF32Block;
    IESMMEffectAlgorithmTwoInputFilter *_twoInputAlgorithm;
    IESMMEffectTwoInputFilter *_multiInputProcess;
    IESMMEffectAlgorithmFilter *_oneInputAlgorithm;
    IESMMEffectFilter *_oneInputEffectFilter;
    IESMMAudioProcessor *_audioProcessor;
    void *_renderMangerHandle;
    NSObject<OS_dispatch_semaphore> *_operateSemaphore;
    NSNumber *_effectResourceLoadTimeout;
    HTSGLFramebuffer *_inputFrameBuffer;
    id /* block */ _audioManagerCallback;
}

@property (retain, nonatomic) IESMMEffectConfig *config;
@property (retain, nonatomic) IESMMEffectAlgorithmFilter *oneInputAlgorithm;
@property (retain, nonatomic) IESMMEffectFilter *oneInputEffectFilter;
@property (retain, nonatomic) IESMMAudioProcessor *audioProcessor;
@property (nonatomic) void *renderMangerHandle;
@property (nonatomic) BOOL effectTrackStarted;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *operateSemaphore;
@property (nonatomic) BOOL isFilterAudoRecommendEnable;
@property (nonatomic) BOOL isSceneAutoRecommendEnable;
@property (retain, nonatomic) NSNumber *effectResourceLoadTimeout;
@property (weak, nonatomic) HTSGLFramebuffer *inputFrameBuffer;
@property (nonatomic) BOOL maleMakeUpState;
@property (nonatomic) int renderEffectColorSpace;
@property (copy, nonatomic) id /* block */ audioManagerCallback;
@property (nonatomic) BOOL hasSetVideoFactory;
@property (nonatomic) unsigned long long usedEffect;
@property (nonatomic) BOOL isFrontCamera;
@property (nonatomic) struct __CVBuffer { } *currentPixelBuffer;
@property (nonatomic) BOOL enableFakeFace;
@property (copy, nonatomic) id /* block */ getEffectPathBlock;
@property (retain, nonatomic) IESMMEffectConnector *effectConnector;
@property (copy, nonatomic) id /* block */ effectBitmapRequestBlock;
@property (copy, nonatomic) id /* block */ genBitmapBlock;
@property (copy, nonatomic) id /* block */ genBitmapUTF32Block;
@property (retain, nonatomic) IESMMEffectAlgorithmTwoInputFilter *twoInputAlgorithm;
@property (retain, nonatomic) IESMMEffectTwoInputFilter *multiInputProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL disableEffects;
@property (copy, nonatomic) id /* block */ playTimeCallback;
@property (copy, nonatomic) id /* block */ messageHandler;
@property (nonatomic) BOOL slamWithoutExtraDeviceMotionData;
@property (nonatomic) BOOL useAudioEffectSticker;
@property (nonatomic) BOOL effectNodeInAudioChainIsOn;
@property (nonatomic) BOOL useAudioBackend;

+ (id)effectVersion;
+ (id)getAlgorithmConfigsWithMultiImage:(id)arg0 andImgPaths:(id)arg1;
+ (id)getAlgorithmConfigs:(id)arg0 andImgPaths:(id)arg1;
+ (void)load;

- (void)startTracker;
- (BOOL)setScanParam:(id)arg0;
- (void)setEffectNodeInAudioChainIsOn:(BOOL)arg0;
- (id)effectFilter;
- (id /* block */)effectBitmapRequestBlock;
- (void)setEffectBitmapRequestBlock:(id /* block */)arg0;
- (void)setUseMakeupSegmentation:(BOOL)arg0;
- (void)setEffectResouceLoadTimeout:(long long)arg0;
- (void)setMaxStickerMemoryCache:(unsigned long long)arg0;
- (void)setRenderCacheStringByKey:(id)arg0 value:(id)arg1;
- (void *)getEffectHandle;
- (int)setEffectExportDestPath:(id)arg0;
- (void)reset_frame_cost_statistics;
- (struct { double x0; double x1; double x2; double x3; })get_frame_cost_statistics;
- (void)effect_reset_et_data:(unsigned int)arg0;
- (id)effect_get_et_data:(unsigned int)arg0;
- (BOOL)switchColorFilterIntensity:(id)arg0 inFilterPath:(id)arg1 inPosition:(float)arg2 inLeftIntensity:(float)arg3 inRightIntensity:(float)arg4;
- (int)setColorFilterIntensity:(id)arg0 inIntensity:(float)arg1;
- (BOOL)getColorFilterIntensity:(id)arg0 outIntensity:(float *)arg1;
- (void)applyReshape:(id)arg0 withIndensity:(struct IESIndensityParam_t { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; })arg1;
- (int)applyEffectWithInfo:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
- (int)applyEffectKey:(id)arg0 image:(id)arg1;
- (void)applyIndensity:(struct IESIndensityParam_t { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; })arg0 type:(long long)arg1;
- (int)enableFilterAutomaticRecommmand:(BOOL)arg0 type:(unsigned long long)arg1;
- (BOOL)updateComposerNode:(id)arg0 key:(id)arg1 value:(double)arg2;
- (BOOL)updateMutipleComposerNodes:(id)arg0 keys:(id)arg1 values:(id)arg2;
- (float)getValueForComposerNode:(id)arg0 key:(id)arg1;
- (id)getCurrentComposerNodes;
- (id)judgeComposerPriority:(id)arg0 oldNodePath:(id)arg1 tag:(id)arg2;
- (id)judgeComposerPriority:(id)arg0 tag:(id)arg1;
- (BOOL)dumpComposerNodes:(id)arg0;
- (BOOL)setMaleMakeupState:(BOOL)arg0;
- (BOOL)setMusicPlayMode:(long long)arg0;
- (BOOL)handleTouchDown:(struct CGPoint { double x0; double x1; })arg0 withType:(unsigned long long)arg1;
- (BOOL)handleTouchUp:(struct CGPoint { double x0; double x1; })arg0 withType:(unsigned long long)arg1;
- (BOOL)handlePanEventWithTranslation:(struct CGPoint { double x0; double x1; })arg0 location:(struct CGPoint { double x0; double x1; })arg1;
- (BOOL)handleLongPressEventWithLocation:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)handleScaleEvent:(double)arg0;
- (BOOL)handleDoubleClickEvent:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)toggleGestureRecognition:(BOOL)arg0 type:(int)arg1;
- (void)enableBGM:(BOOL)arg0;
- (void)muteBGM:(BOOL)arg0;
- (void)amazingMuteBGM:(BOOL)arg0;
- (long long)getSLAMStatus;
- (BOOL)isSLAMRunning;
- (BOOL)getSLAMPlaneDetectStatus;
- (void)sendMessageToEffect:(id)arg0;
- (void)bef_effect_clear_event;
- (id)getAuxiliaryTextureKeys;
- (void)setAuxiliaryImage:(id)arg0 withKey:(id)arg1;
- (void)deleteImageTextureForKey:(id)arg0;
- (void)removeAllAuxiliaryImages;
- (BOOL)setHandDetectLowpower:(BOOL)arg0;
- (BOOL)updatFaceDectectIntervalTime:(int)arg0;
- (void)setAlgorithmRuntimeParam:(id)arg0;
- (BOOL)setMattingDetectModel:(BOOL)arg0;
- (void)setPreferredAlgorithmSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setAlgorithmRequirement:(unsigned long long)arg0 algorithmParam:(unsigned long long)arg1 enableDetect:(BOOL)arg2;
- (void)setAlgorithmResultsRequirement:(unsigned long long)arg0 callback:(id /* block */)arg1;
- (void)forceDetectBuffer:(long long)arg0;
- (void)addBachAlgorithmName:(id)arg0 config:(id)arg1 algoType:(unsigned long long)arg2;
- (void)removeAllBachAlgorithm;
- (id)getBachAlgorithmResultWithAlgoType:(unsigned long long)arg0;
- (Class)resultClassWithAlgoType:(unsigned long long)arg0;
- (void)applyMusicNodes:(id)arg0;
- (id)getEffectCapturedImageWithKey:(id)arg0;
- (void)releaseCaptureImage:(id)arg0;
- (long long)effectTextLimit;
- (void)setEffectText:(id)arg0 arg1:(int)arg1 arg2:(int)arg2 arg3:(const char *)arg3;
- (void)setInputKeyboardHide:(BOOL)arg0;
- (id)getEffectTextArray;
- (BOOL)handleBeginManipulate3DObject;
- (BOOL)handleManipulate3DObject;
- (BOOL)handleEndManipulate3DObject;
- (BOOL)handleFinishManipulate3DObject;
- (BOOL)save3DObjectMeshToFile:(id)arg0;
- (BOOL)detectPhotoContent:(id)arg0 withAlgorithm:(id)arg1;
- (long long)detectPhoto:(id)arg0 withAlgorithm:(id)arg1;
- (void)renderPic:(id)arg0 withKey:(id)arg1;
- (void)renderPicImage:(id)arg0 withKey:(id)arg1;
- (void)setRenderMangerHandle:(void *)arg0;
- (void *)renderMangerHandle;
- (unsigned long long)usedEffect;
- (void)resetFacePointBlock:(id /* block */)arg0;
- (void)updateAlgorithmResultAccordMsg:(unsigned long long)arg0;
- (void)setUsedEffect:(unsigned long long)arg0;
- (void)setIsFrontCamera:(BOOL)arg0;
- (void)setOperateSemaphore:(id)arg0;
- (id)initWithConfig:(id)arg0 context:(id)arg1;
- (id)operateSemaphore;
- (BOOL)enableFakeFace;
- (int)switchFilterWithPathOne:(id)arg0 pathTwo:(id)arg1 progress:(double)arg2;
- (BOOL)applyComposerNodes:(id)arg0;
- (void)setEnableFakeFace:(BOOL)arg0;
- (BOOL)appendComposerNodes:(id)arg0;
- (BOOL)removeComposerNodes:(id)arg0;
- (BOOL)reloadComposerNodes:(id)arg0;
- (void)setInputFramebuffer:(id)arg0 atIndex:(long long)arg1;
- (id)inputFrameBuffer;
- (void)setInputFrameBuffer:(id)arg0;
- (void)setRenderCacheTextureByKey:(id)arg0 value:(id)arg1;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 atIndex:(long long)arg1 exceptionBlock:(id /* block */)arg2;
- (void)refreshEffectColorSpace:(id)arg0;
- (void)releaseRenderManager;
- (id)dumpComposerNodes;
- (void)setVideoTrackId:(long long)arg0;
- (void)setEffectSrtData:(const struct IESSrtDdata { struct IESSrtLine *x0; int x1; } *)arg0;
- (void)setEffectFontPath:(id)arg0 faceIndex:(long long)arg1;
- (void)setEffectGenBitmap:(id /* block */)arg0 utf32Gen:(id /* block */)arg1;
- (void)setPlayTimeCallback:(id /* block */)arg0;
- (BOOL)operateComposerNodes:(id)arg0 operation:(long long)arg1;
- (id /* block */)playTimeCallback;
- (void)forceRenderBuffer:(long long)arg0;
- (BOOL)replaceComposerNodesWithNew:(id)arg0 old:(id)arg1;
- (BOOL)operateComposerNodes:(id)arg0;
- (void)forceDrawBuffer:(long long)arg0;
- (BOOL)useAudioEffectSticker;
- (void)setAudioSampleRate:(int)arg0 channel:(int)arg1;
- (BOOL)needProcessAudio;
- (void)processAudio:(struct opaqueCMSampleBuffer { } *)arg0;
- (void)finishAudioProcess;
- (BOOL)needResolveAudio;
- (void)resolveAudio:(struct opaqueCMSampleBuffer { } *)arg0;
- (void)finishAudioResolve;
- (void)sendAudioBuffer:(struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; })arg0;
- (void)setUseAudioEffectSticker:(BOOL)arg0;
- (void)setUseAudioBackend:(BOOL)arg0;
- (void)releaseAlgorithm;
- (void)cleanPipelineProcessorTask;
- (void)setAlgorithmPreConfig:(id)arg0;
- (void)setAlgorithmExtraParam:(id)arg0;
- (void)setAlgorithmReplayMmode:(long long)arg0 filePath:(id)arg1;
- (unsigned long long)currentExtraAlgorithmRequirements;
- (void)setStickerReq:(void *)arg0;
- (void)getDistortionParam:(id /* block */)arg0;
- (void)setStyleAlgorithm:(BOOL)arg0;
- (BOOL)resetAudioManagerCallback:(id /* block */)arg0;
- (BOOL)enableAudioManager:(BOOL)arg0;
- (void)enableRefFrame:(BOOL)arg0 withFrameBuffer:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (void)detectFramewithBuffer:(struct __CVBuffer { } *)arg0;
- (void)detectFramewithImageData:(const void *)arg0 imageSize:(struct CGSize { double x0; double x1; })arg1;
- (void)resetFaceResultBlock:(id /* block */)arg0;
- (void)resetFaceResultDataBlock:(id /* block */)arg0;
- (void)diableOrientationWhenAlgorithmDetect:(BOOL)arg0;
- (BOOL)setSafeAreas:(id)arg0 type:(long long)arg1;
- (BOOL)updateTouchInfoForRecognition:(struct _VETouchInfo { unsigned int x0; struct CGPoint { double x0; double x1; } x1; float x2; float x3; int x4; long long x5; })arg0;
- (BOOL)isTouchGestureRecognitionEnabled:(int)arg0;
- (void)p_initEffectSDK;
- (void)p_initAlgorithmandEffectFilterParams;
- (void)setTimeBlock;
- (id)effectConnector;
- (id)twoInputAlgorithm;
- (id)oneInputAlgorithm;
- (id)multiInputProcess;
- (id)oneInputEffectFilter;
- (void)setOneInputAlgorithm:(id)arg0;
- (void)setTwoInputAlgorithm:(id)arg0;
- (void)setOneInputEffectFilter:(id)arg0;
- (void)setMultiInputProcess:(id)arg0;
- (id)audioProcessor;
- (void)setEffectResourceLoadTimeout:(id)arg0;
- (id)effectResourceLoadTimeout;
- (BOOL)maleMakeUpState;
- (void)setIsFilterAudoRecommendEnable:(BOOL)arg0;
- (BOOL)isSceneAutoRecommendEnable;
- (void)setIsSceneAutoRecommendEnable:(BOOL)arg0;
- (BOOL)isFilterAudoRecommendEnable;
- (void)setMaleMakeUpState:(BOOL)arg0;
- (void)asyncOperateComposerNodes:(id)arg0 operation:(long long)arg1;
- (void)asyncReplaceComposerNodesWithNew:(id)arg0 old:(id)arg1;
- (BOOL)effectTrackStarted;
- (void)setEffectTrackStarted:(BOOL)arg0;
- (void)setGenBitmapBlock:(id /* block */)arg0;
- (void)setGenBitmapUTF32Block:(id /* block */)arg0;
- (int)getEffectRotateType:(id)arg0;
- (void)messageConnector:(id)arg0 didReciveAlgorithm:(unsigned long long)arg1;
- (void)enableStickerBGM:(BOOL)arg0;
- (BOOL)disableEffects;
- (void)setDisableEffects:(BOOL)arg0;
- (void)stopTracker;
- (void)renderPicImage:(id)arg0 keys:(id)arg1;
- (id)detectPhoto:(id)arg0 withAlgorithm:(id)arg1 withAlgorithmType:(unsigned long long)arg2;
- (void)setRenderCacheTextureWithBufferByKey:(id)arg0 value:(id)arg1;
- (void)setRenderCacheTextureOrientationByKey:(id)arg0 value:(long long)arg1;
- (void)setRenderCacheIntValueByKey:(id)arg0 value:(int)arg1;
- (BOOL)getGeneralAudioStatus;
- (void)setFrameDeviceOrientation:(int)arg0;
- (void)getResourceMultiviewTag:(const char *)arg0 tag:(char *)arg1;
- (void)pauseEffectSticker:(BOOL)arg0;
- (void)setEffectClientState:(long long)arg0;
- (void)preloadEffectAlgorithm;
- (void)setEffectConnector:(id)arg0;
- (void)setupMimoMode:(BOOL)arg0;
- (void)setupSecondaryOutputSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setEffectFaceMakeupOpacity:(id)arg0 maleOpacity:(double)arg1 femaleOpacity:(double)arg2;
- (BOOL)syncOperateComposerNodes:(id)arg0 operation:(long long)arg1;
- (BOOL)syncReplaceComposerNodesWithNew:(id)arg0 old:(id)arg1;
- (id /* block */)genBitmapBlock;
- (id /* block */)genBitmapUTF32Block;
- (void)setAudioProcessor:(id)arg0;
- (int)renderEffectColorSpace;
- (void)setRenderEffectColorSpace:(int)arg0;
- (id /* block */)audioManagerCallback;
- (void)setAudioManagerCallback:(id /* block */)arg0;
- (BOOL)hasSetVideoFactory;
- (void)setHasSetVideoFactory:(BOOL)arg0;
- (id /* block */)getEffectPathBlock;
- (void)setRealPlayCallback:(void /* function */ *)arg0 userdata:(void *)arg1;
- (void)applyEffectKey:(id)arg0 pixelBuffer:(struct __CVBuffer { } *)arg1;
- (void)setEffectFaceMakeupOpacity:(id)arg0 maleOpacity:(double)arg1 femaleOpacity:(double)arg2 completion:(id /* block */)arg3;
- (void)setEffectAudioPlayerFactory:(void *)arg0;
- (void)setEffectVideoPlayerFactory:(void *)arg0;
- (void)setEffectAudioPlayerEndMessage:(long long)arg0;
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
- (void)resetFaceResultCallback:(id /* block */)arg0;
- (id /* block */)messageHandler;
- (id)algorithm;
- (void)setConfig:(id)arg0;
- (void)active;
- (void).cxx_destruct;
- (void)start:(unsigned long long)arg0;
- (id)config;
- (void)inactive;
- (BOOL)handleTouchEvent:(struct CGPoint { double x0; double x1; })arg0;
- (void)setMessageHandler:(id /* block */)arg0;
- (void)dealloc;
- (void)pause:(unsigned long long)arg0;
- (void)setInputLanguage:(id)arg0;
- (struct __CVBuffer { } *)currentPixelBuffer;
- (void)setCurrentPixelBuffer:(struct __CVBuffer { } *)arg0;
- (BOOL)handleRotationEvent:(double)arg0;
- (BOOL)isFrontCamera;

@end