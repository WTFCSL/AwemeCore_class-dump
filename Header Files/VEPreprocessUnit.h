//
//     Generated by private class-dump
//

@class HTSGLResizeRotateFilter, VEAmazingEffectFilterConfig, NSString, HTSGLTC21RedpackageFilter, VEAmazingEffectFilter, VEPreprocessInnerUnit, HTSGLFilterCustomBlend, VEFastCropUnit, HTSGLContext, HTSGLFilterGroup;
@protocol IESMMEffectGroupProtocol;

@interface VEPreprocessUnit : VEUnitObject <VEProcessSampleDelegate> {
    BOOL _isSyncEffectLoadReady;
    BOOL _forceNoCrop;
    BOOL _needRoundEffect;
    BOOL _needProcessedBufferCallback;
    BOOL _enableTC21RedpackageRecord;
    BOOL _enableAmazingFilter;
    BOOL _isExtProcessUnitExist;
    NSString *route;
    unsigned long long _originVideoRotation;
    unsigned long long _cropType;
    unsigned long long _rotationMode;
    VEAmazingEffectFilterConfig *_amazingFilterConfig;
    VEPreprocessInnerUnit *_mainPreprocessInnerUnit;
    VEPreprocessInnerUnit *_extPreprocessInnerUnit;
    VEFastCropUnit *_fastCropUnit;
    HTSGLContext *_mainContext;
    HTSGLContext *_shareContext;
    struct CGSize { double width; double height; } _outputSize;
    struct CGSize { double width; double height; } _effectRenderSize;
}

@property (retain, nonatomic) VEFastCropUnit *fastCropUnit;
@property (nonatomic) BOOL isExtProcessUnitExist;
@property (retain, nonatomic) HTSGLContext *mainContext;
@property (retain, nonatomic) HTSGLContext *shareContext;
@property (readonly, nonatomic) HTSGLFilterGroup<IESMMEffectGroupProtocol> *effectFilter;
@property (readonly, nonatomic) HTSGLResizeRotateFilter *preRotateFilter;
@property (readonly, nonatomic) VEAmazingEffectFilter *amazingFilter;
@property (readonly, nonatomic) HTSGLResizeRotateFilter *postRotateFilter;
@property (readonly, nonatomic) HTSGLTC21RedpackageFilter *redPackageFilter;
@property (readonly, nonatomic) HTSGLFilterCustomBlend *blendFilter;
@property (readonly, nonatomic) struct __CVBuffer { } *processedPixbuf;
@property (nonatomic) BOOL isSyncEffectLoadReady;
@property (nonatomic) unsigned long long originVideoRotation;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic) struct CGSize { double width; double height; } effectRenderSize;
@property (nonatomic) unsigned long long cropType;
@property (nonatomic) BOOL forceNoCrop;
@property (nonatomic) BOOL needRoundEffect;
@property (nonatomic) BOOL needProcessedBufferCallback;
@property (nonatomic) BOOL enableTC21RedpackageRecord;
@property (nonatomic) BOOL enableAmazingFilter;
@property (nonatomic) unsigned long long rotationMode;
@property (retain, nonatomic) VEAmazingEffectFilterConfig *amazingFilterConfig;
@property (retain, nonatomic) VEPreprocessInnerUnit *mainPreprocessInnerUnit;
@property (retain, nonatomic) VEPreprocessInnerUnit *extPreprocessInnerUnit;
@property (retain, nonatomic) NSString *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setShareContext:(id)arg0;
- (id)effectFilter;
- (unsigned long long)originVideoRotation;
- (void)setOriginVideoRotation:(unsigned long long)arg0;
- (void)preloadEffectAlgorithm;
- (id)shareContext;
- (struct CGSize { double x0; double x1; })effectRenderSize;
- (void)setEffectRenderSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setNeedBlendSecond:(BOOL)arg0 pixelbuffer:(struct __CVBuffer { } *)arg1 mix:(float)arg2;
- (BOOL)processSampleData:(id)arg0;
- (void)setNeedRoundEffect:(BOOL)arg0;
- (void)setEnableTC21RedpackageRecord:(BOOL)arg0;
- (void)setEnableAmazingFilter:(BOOL)arg0;
- (void)setAmazingFilterConfig:(id)arg0;
- (id)amazingFilterConfig;
- (void)setNeedProcessedBufferCallback:(BOOL)arg0;
- (BOOL)enableTC21RedpackageRecord;
- (BOOL)enableAmazingFilter;
- (id)preRotateFilter;
- (id)postRotateFilter;
- (BOOL)needRoundEffect;
- (id)amazingFilter;
- (id)redPackageFilter;
- (id)blendFilter;
- (BOOL)needProcessedBufferCallback;
- (void)buildFilterChain;
- (void)updateCropType:(unsigned long long)arg0 andOutputSize:(struct CGSize { double x0; double x1; })arg1;
- (BOOL)getAndResetBeginOfStreamFlag;
- (void)cleanFrameBufferReference;
- (void)setDisableEffect:(BOOL)arg0;
- (void)setEffectRenderCropFillMode:(long long)arg0;
- (void)insertEncodeNodeWithPos:(unsigned long long)arg0;
- (struct __CVBuffer { } *)processedPixbuf;
- (void)setIsExtProcessUnitExist:(BOOL)arg0;
- (void)setMainPreprocessInnerUnit:(id)arg0;
- (void)setExtPreprocessInnerUnit:(id)arg0;
- (id)mainPreprocessInnerUnit;
- (BOOL)isExtProcessUnitExist;
- (id)extPreprocessInnerUnit;
- (id)fastCropUnit;
- (void)processSampleDataWithNoEffect:(id)arg0;
- (BOOL)isSyncEffectLoadReady;
- (BOOL)forceNoCrop;
- (void)setFastCropUnit:(id)arg0;
- (id)initWithEffectConfig:(id)arg0 isMultiCamMode:(BOOL)arg1 renderCtxts:(id)arg2;
- (id)initWithOutEffect:(BOOL)arg0 renderCtxts:(id)arg1;
- (void)setForceNoCrop:(BOOL)arg0;
- (void)setIsSyncEffectLoadReady:(BOOL)arg0;
- (void).cxx_destruct;
- (id)route;
- (struct CGSize { double x0; double x1; })outputSize;
- (void)setRoute:(id)arg0;
- (id)mainContext;
- (unsigned long long)rotationMode;
- (void)setRotationMode:(unsigned long long)arg0;
- (unsigned long long)cropType;
- (void)setOutputSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setCropType:(unsigned long long)arg0;
- (void)setMainContext:(id)arg0;

@end
