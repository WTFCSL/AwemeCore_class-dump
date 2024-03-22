//
//     Generated by private class-dump
//

@class VEColorSpaceInfo, VEAmazingEffectRenderer, IESMMEffectStickerInfo, VEHdrEffectOptFilter, AVAsset, IESEffectVideoAnimatedRenderer, NSMutableArray, HTSGLFilterGroup, IESHSLAdjustFilter, FilterManagerConfig, IESMMCanvasConfig, IESEffectTransitionRenderer, NSArray, NSMutableDictionary, IESImageAnimationStickerFilter, HTSGLContext, NSString, VEAmazingEffectFilter, VELensHdrAlgorithm, HTSGLFilter, HTSEffectManager, HTSRawDataOutputRender, IESMediaFilterInfo, IESKeyframeTimeAndCountInfo, VESegmentedComposerManager, IESMMMVEffectFilter;
@protocol IESVideoEngineEffectProtocol, IESMMEffectGroupProtocol;

@interface IESFiltersManager : IESMMObject {
    BOOL _transFilterDidChanged;
    BOOL _needResetFilters;
    BOOL _needResetCanvasGroups;
    BOOL _needCurrentFrame;
    BOOL _needResetFilterInfo;
    BOOL _enableLensHdr2Sdr;
    BOOL _useZoomFilter;
    BOOL _enableImageReuse;
    BOOL _abHdrEffectOptimization;
    BOOL _enable10bitRtRender;
    BOOL _hasGlobalEffectInfoTimeIrrelevant;
    BOOL _canSkipEffectForLVExport;
    float _colorFilterIntensity;
    int _playerStatus;
    HTSRawDataOutputRender *_rawDataOutput;
    NSMutableDictionary *_inputFilters;
    HTSGLFilter *_transFilter;
    IESMediaFilterInfo *_transFilterInfo;
    struct __CVBuffer { } *_destPixelBuffer;
    HTSGLFilter<IESVideoEngineEffectProtocol> *_engineFilter;
    IESEffectTransitionRenderer *_transitionRenderer;
    IESEffectVideoAnimatedRenderer *_videoAnimatedRenderer;
    IESEffectVideoAnimatedRenderer *_multiTrackAnimatedRenderer;
    NSArray *_filterTimeLine;
    NSArray *_filterZoom;
    IESMMCanvasConfig *_preferCanvasConfig;
    HTSEffectManager *_effectOperationManager;
    unsigned long long _outputRotationMode;
    NSString *_lensHdrModelPath;
    VELensHdrAlgorithm *_lensHdrAlgorithm;
    id /* block */ _canvasObservableEvent;
    id /* block */ _stickerRecoverEvent;
    id /* block */ _faceDetectEvent;
    AVAsset *_stillImageAsset;
    id /* block */ _keyFrameJsonBlock;
    long long _effectMaxMemCache;
    id /* block */ _getCurrentImageBlock;
    id /* block */ _effectFilterPathBlock;
    NSString *_colorFilterPath;
    IESMMEffectStickerInfo *_HDREffectInfo;
    IESMMEffectStickerInfo *_currentEffectInfo;
    NSString *_effectFontPath;
    long long _effectFaceIndex;
    struct IESSrtDdata { struct IESSrtLine *x0; int x1; } *_effctSrtData;
    id /* block */ _srtBitmapBlock;
    id /* block */ _srtBitmapUtf32Block;
    id /* block */ _playTimeCallback;
    VEColorSpaceInfo *_colorSpaceInfo;
    long long _colorSpaceCalcType;
    HTSGLContext *_context;
    NSMutableDictionary *_imageInputFilters;
    NSMutableDictionary *_beautyEffectGroup;
    NSMutableDictionary *_effectGroups;
    HTSGLFilterGroup<IESMMEffectGroupProtocol> *_globalEffectGroup;
    NSMutableDictionary *_currentEffectOneInputFilter;
    NSMutableDictionary *_effectInfo;
    NSMutableDictionary *_featuresInfo;
    NSArray *_globalFeaturesInfo;
    NSMutableDictionary *_effectFilters;
    VEAmazingEffectRenderer *_mainTrackFeatureRender;
    NSMutableDictionary *_canvasInfo;
    NSMutableDictionary *_textureVerticesMap;
    NSMutableDictionary *_assetMattingInfos;
    NSMutableDictionary *_videoPtsMap;
    NSMutableDictionary *_videoStabMatrixMap;
    NSMutableDictionary *_stabSizeMap;
    VEAmazingEffectFilter *_globalAmazingFilter;
    NSMutableDictionary *_assetAnimateInfos;
    NSMutableDictionary *_assetLayers;
    NSMutableDictionary *_colorFilterDict;
    NSMutableDictionary *_extractorFilters;
    NSMutableDictionary *_zoomTransforms;
    NSArray *_composerInfo;
    NSMutableDictionary *_segmentedComposerManagers;
    VESegmentedComposerManager *_globalSegmentedComposerManager;
    NSMutableDictionary *_lensHdrFilterDict;
    NSMutableDictionary *_stabFilterDict;
    NSMutableDictionary *_mattingFilters;
    FilterManagerConfig *_managerConfig;
    NSMutableDictionary *_extractFrameDrivers;
    IESImageAnimationStickerFilter *_imageStickerFilter;
    NSMutableDictionary *_canvasGroups;
    HTSGLFilter *_multiTrackFilter;
    NSMutableDictionary *_canvasConfigsMap;
    IESMMMVEffectFilter *_mvEffectFilter;
    NSMutableArray *_currentTrackInfos;
    IESKeyframeTimeAndCountInfo *_keyFrameTimeAndCountInfo;
    VEHdrEffectOptFilter *_hdrEffectOptFilter;
    NSMutableDictionary *_cannotSkipEffectAssetDic;
    IESHSLAdjustFilter *_globalHslAjustFilter;
    NSMutableDictionary *_videoHslFilters;
    NSMutableDictionary *_hslFeatures;
    NSMutableArray *_globalHSLFeatures;
    struct CGSize { double width; double height; } _canvasSize;
    struct IESIndensityParam_t { float indensity; float smoothIndensity; float brightIndensity; float sharpIndensity; float eyeIndensity; float cheekIndensity; float fareyeIndensity; float zoomeyeIndensity; float rotateeyeIndensity; float zoomnoseIndensity; float movnoseIndensity; float movmouthIndensity; float zoommouthIndensity; float movchinIndensity; float zoomforeheadIndensity; float zoomfaceIndensity; float cutfaceIndensity; float smallfaceIndensity; float zoomjawboneIndensity; float zoomcheekboneIndensity; float draglipsIndensity; float cornereyeIndensity; float lipenhanceIndensity; float pointychinIndensity; float facesmoothIndensity; float skinDarkIntensity; float nightGamma; float nightContrastK; float nightContrastB; float lipIndensity; float blusherIndensity; float decreeIndensity; float pouchIndensity; } _HDRIndensity;
}

@property (retain, nonatomic) HTSGLContext *context;
@property (retain, nonatomic) HTSRawDataOutputRender *rawDataOutput;
@property (retain, nonatomic) NSMutableDictionary *inputFilters;
@property (retain, nonatomic) NSMutableDictionary *imageInputFilters;
@property (retain, nonatomic) NSMutableDictionary *beautyEffectGroup;
@property (retain, nonatomic) NSMutableDictionary *effectGroups;
@property (retain, nonatomic) HTSGLFilterGroup<IESMMEffectGroupProtocol> *globalEffectGroup;
@property (retain, nonatomic) NSMutableDictionary *currentEffectOneInputFilter;
@property (retain, nonatomic) HTSGLFilter *transFilter;
@property (retain, nonatomic) IESMediaFilterInfo *transFilterInfo;
@property (nonatomic) BOOL transFilterDidChanged;
@property (retain, nonatomic) NSMutableDictionary *effectInfo;
@property (retain, nonatomic) NSMutableDictionary *featuresInfo;
@property (retain, nonatomic) NSArray *globalFeaturesInfo;
@property (retain, nonatomic) NSMutableDictionary *effectFilters;
@property (retain, nonatomic) VEAmazingEffectRenderer *mainTrackFeatureRender;
@property (retain, nonatomic) NSMutableDictionary *canvasInfo;
@property (retain, nonatomic) NSMutableDictionary *textureVerticesMap;
@property (retain, nonatomic) NSMutableDictionary *assetMattingInfos;
@property (retain, nonatomic) NSMutableDictionary *videoPtsMap;
@property (retain, nonatomic) NSMutableDictionary *videoStabMatrixMap;
@property (retain, nonatomic) NSMutableDictionary *stabSizeMap;
@property (retain, nonatomic) VEAmazingEffectFilter *globalAmazingFilter;
@property (retain, nonatomic) NSMutableDictionary *assetAnimateInfos;
@property (retain, nonatomic) NSMutableDictionary *assetLayers;
@property (retain, nonatomic) NSMutableDictionary *colorFilterDict;
@property (retain, nonatomic) NSMutableDictionary *extractorFilters;
@property (retain, nonatomic) NSMutableDictionary *zoomTransforms;
@property (retain, nonatomic) NSArray *composerInfo;
@property (retain, nonatomic) NSMutableDictionary *segmentedComposerManagers;
@property (retain, nonatomic) VESegmentedComposerManager *globalSegmentedComposerManager;
@property (retain, nonatomic) NSMutableDictionary *lensHdrFilterDict;
@property (retain, nonatomic) NSMutableDictionary *stabFilterDict;
@property (retain, nonatomic) NSMutableDictionary *mattingFilters;
@property (nonatomic) BOOL useZoomFilter;
@property (retain, nonatomic) FilterManagerConfig *managerConfig;
@property (retain, nonatomic) NSMutableDictionary *extractFrameDrivers;
@property (retain, nonatomic) IESImageAnimationStickerFilter *imageStickerFilter;
@property (retain, nonatomic) NSMutableDictionary *canvasGroups;
@property (retain, nonatomic) HTSGLFilter *multiTrackFilter;
@property (retain, nonatomic) NSMutableDictionary *canvasConfigsMap;
@property (retain, nonatomic) IESMMMVEffectFilter *mvEffectFilter;
@property (retain, nonatomic) NSMutableArray *currentTrackInfos;
@property (retain, nonatomic) IESKeyframeTimeAndCountInfo *keyFrameTimeAndCountInfo;
@property (nonatomic) BOOL enableImageReuse;
@property (retain, nonatomic) VEHdrEffectOptFilter *hdrEffectOptFilter;
@property (nonatomic) BOOL abHdrEffectOptimization;
@property (nonatomic) BOOL enable10bitRtRender;
@property (retain, nonatomic) NSMutableDictionary *cannotSkipEffectAssetDic;
@property (nonatomic) BOOL hasGlobalEffectInfoTimeIrrelevant;
@property (nonatomic) BOOL canSkipEffectForLVExport;
@property (retain, nonatomic) IESHSLAdjustFilter *globalHslAjustFilter;
@property (retain, nonatomic) NSMutableDictionary *videoHslFilters;
@property (retain, nonatomic) NSMutableDictionary *hslFeatures;
@property (retain, nonatomic) NSMutableArray *globalHSLFeatures;
@property (readonly, nonatomic) struct __CVBuffer { } *destPixelBuffer;
@property (retain, nonatomic) HTSGLFilter<IESVideoEngineEffectProtocol> *engineFilter;
@property (retain, nonatomic) IESEffectTransitionRenderer *transitionRenderer;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) BOOL needResetFilters;
@property (retain, nonatomic) IESEffectVideoAnimatedRenderer *videoAnimatedRenderer;
@property (retain, nonatomic) IESEffectVideoAnimatedRenderer *multiTrackAnimatedRenderer;
@property (retain, nonatomic) NSArray *filterTimeLine;
@property (retain, nonatomic) NSArray *filterZoom;
@property (nonatomic) BOOL needResetCanvasGroups;
@property (retain, nonatomic) IESMMCanvasConfig *preferCanvasConfig;
@property (retain, nonatomic) HTSEffectManager *effectOperationManager;
@property (nonatomic) unsigned long long outputRotationMode;
@property (retain, nonatomic) NSString *lensHdrModelPath;
@property (retain, nonatomic) VELensHdrAlgorithm *lensHdrAlgorithm;
@property (copy, nonatomic) id /* block */ canvasObservableEvent;
@property (copy, nonatomic) id /* block */ stickerRecoverEvent;
@property (copy, nonatomic) id /* block */ faceDetectEvent;
@property (nonatomic) BOOL needCurrentFrame;
@property (retain, nonatomic) AVAsset *stillImageAsset;
@property (copy, nonatomic) id /* block */ keyFrameJsonBlock;
@property (nonatomic) long long effectMaxMemCache;
@property (copy, nonatomic) id /* block */ getCurrentImageBlock;
@property (copy, nonatomic) id /* block */ effectFilterPathBlock;
@property (copy, nonatomic) NSString *colorFilterPath;
@property (nonatomic) float colorFilterIntensity;
@property (retain, nonatomic) IESMMEffectStickerInfo *HDREffectInfo;
@property (nonatomic) struct IESIndensityParam_t { float indensity; float smoothIndensity; float brightIndensity; float sharpIndensity; float eyeIndensity; float cheekIndensity; float fareyeIndensity; float zoomeyeIndensity; float rotateeyeIndensity; float zoomnoseIndensity; float movnoseIndensity; float movmouthIndensity; float zoommouthIndensity; float movchinIndensity; float zoomforeheadIndensity; float zoomfaceIndensity; float cutfaceIndensity; float smallfaceIndensity; float zoomjawboneIndensity; float zoomcheekboneIndensity; float draglipsIndensity; float cornereyeIndensity; float lipenhanceIndensity; float pointychinIndensity; float facesmoothIndensity; float skinDarkIntensity; float nightGamma; float nightContrastK; float nightContrastB; float lipIndensity; float blusherIndensity; float decreeIndensity; float pouchIndensity; } HDRIndensity;
@property (retain, nonatomic) IESMMEffectStickerInfo *currentEffectInfo;
@property (nonatomic) BOOL needResetFilterInfo;
@property (retain, nonatomic) NSString *effectFontPath;
@property (nonatomic) long long effectFaceIndex;
@property (nonatomic) struct IESSrtDdata { struct IESSrtLine *x0; int x1; } *effctSrtData;
@property (copy, nonatomic) id /* block */ srtBitmapBlock;
@property (copy, nonatomic) id /* block */ srtBitmapUtf32Block;
@property (copy, nonatomic) id /* block */ playTimeCallback;
@property (nonatomic) BOOL enableLensHdr2Sdr;
@property (retain, nonatomic) VEColorSpaceInfo *colorSpaceInfo;
@property (nonatomic) long long colorSpaceCalcType;
@property (nonatomic) int playerStatus;

- (void)setColorFilterIntensity:(float)arg0;
- (void)switchColorFilterIntensity:(id)arg0 inFilterPath:(id)arg1 inPosition:(float)arg2 inLeftIntensity:(float)arg3 inRightIntensity:(float)arg4;
- (BOOL)updateComposerNode:(id)arg0 key:(id)arg1 value:(double)arg2;
- (BOOL)updateMutipleComposerNodes:(id)arg0 keys:(id)arg1 values:(id)arg2;
- (float)getValueForComposerNode:(id)arg0 key:(id)arg1;
- (id)getCurrentComposerNodes;
- (id)judgeComposerPriority:(id)arg0 oldNodePath:(id)arg1 tag:(id)arg2;
- (id)judgeComposerPriority:(id)arg0 tag:(id)arg1;
- (BOOL)dumpComposerNodes:(id)arg0;
- (id)dumpComposerNodes;
- (void)setEffectSrtData:(const struct IESSrtDdata { struct IESSrtLine *x0; int x1; } *)arg0;
- (void)setEffectFontPath:(id)arg0 faceIndex:(long long)arg1;
- (void)setEffectGenBitmap:(id /* block */)arg0 utf32Gen:(id /* block */)arg1;
- (void)setPlayTimeCallback:(id /* block */)arg0;
- (id /* block */)playTimeCallback;
- (unsigned long long)outputRotationMode;
- (void)setOutputRotationMode:(unsigned long long)arg0;
- (BOOL)operateComposerNodesWithTags:(id)arg0 operation:(long long)arg1;
- (void)setEffectInfo:(id)arg0;
- (id)effectInfo;
- (id)getAllKeyFramesAtPts:(unsigned long long)arg0;
- (id)preferCanvasConfig;
- (void)setPreferCanvasConfig:(id)arg0;
- (id)canvasConfigsMap;
- (id /* block */)effectFilterPathBlock;
- (id)canvasInfo;
- (id)assetAnimateInfos;
- (id)assetLayers;
- (void)updateVideoTextureVertices:(id)arg0 forKey:(id)arg1;
- (void)refreshCanvasGroupsWithKey:(id)arg0 config:(id)arg1;
- (void)updateAssetBlendMode:(id)arg0 blendMode:(id)arg1;
- (void)updateAssetAnimateInfo:(id)arg0 animateInfo:(id)arg1;
- (id /* block */)keyFrameJsonBlock;
- (id)effectOperationManager;
- (id)colorSpaceInfo;
- (void)setKeyFrameJsonBlock:(id /* block */)arg0;
- (void)setStickerRecoverEvent:(id /* block */)arg0;
- (void)setAbHdrEffectOptimization:(BOOL)arg0;
- (void)setEnable10bitRtRender:(BOOL)arg0;
- (void)setEnableImageReuse:(BOOL)arg0;
- (void)setImageInputFilters:(id)arg0;
- (void)setBeautyEffectGroup:(id)arg0;
- (void)setEffectGroups:(id)arg0;
- (void)setAssetAnimateInfos:(id)arg0;
- (void)setCanvasInfo:(id)arg0;
- (void)setTextureVerticesMap:(id)arg0;
- (void)setEffectFilters:(id)arg0;
- (void)setExtractorFilters:(id)arg0;
- (void)setFeaturesInfo:(id)arg0;
- (void)setZoomTransforms:(id)arg0;
- (void)setCurrentEffectOneInputFilter:(id)arg0;
- (void)setExtractFrameDrivers:(id)arg0;
- (void)setCanvasGroups:(id)arg0;
- (void)setAssetLayers:(id)arg0;
- (void)setCanvasConfigsMap:(id)arg0;
- (void)setMattingFilters:(id)arg0;
- (void)setAssetMattingInfos:(id)arg0;
- (void)setVideoPtsMap:(id)arg0;
- (void)setVideoStabMatrixMap:(id)arg0;
- (void)setStabSizeMap:(id)arg0;
- (void)setStabFilterDict:(id)arg0;
- (void)setLensHdrFilterDict:(id)arg0;
- (void)setVideoHslFilters:(id)arg0;
- (void)setHslFeatures:(id)arg0;
- (void)setCannotSkipEffectAssetDic:(id)arg0;
- (void)setCanSkipEffectForLVExport:(BOOL)arg0;
- (void)p_printConfig:(id)arg0;
- (void)setRawDataOutput:(id)arg0;
- (id)rawDataOutput;
- (id /* block */)stickerRecoverEvent;
- (void)p_createEffectRenderIfNeed:(id)arg0;
- (void)setVideoAnimatedRenderer:(id)arg0;
- (void)setEffectOperationManager:(id)arg0;
- (void)setEffectFilterPathBlock:(id /* block */)arg0;
- (long long)effectMaxMemCache;
- (void)setGlobalEffectGroup:(id)arg0;
- (id)managerConfig;
- (id)engineFilter;
- (void)setColorSpaceInfo:(id)arg0;
- (void)createStickerEngineFilter;
- (void)p_restoreInfostickers:(id)arg0;
- (long long)getSubTrackNums:(id)arg0;
- (void)p_createMultiTrackRender;
- (void)p_createTransitionRenderer;
- (void)setLensHdrModelPath:(id)arg0;
- (id)lensHdrAlgorithm;
- (void)setLensHdrAlgorithm:(id)arg0;
- (void)setEngineFilter:(id)arg0;
- (id)multiTrackAnimatedRenderer;
- (void)setMultiTrackAnimatedRenderer:(id)arg0;
- (void)setTransitionRenderer:(id)arg0;
- (void)releaseFilters;
- (long long)colorSpaceCalcType;
- (void)setColorSpaceCalcType:(long long)arg0;
- (id)mvEffectFilter;
- (void)setMvEffectFilter:(id)arg0;
- (id)textureVerticesMap;
- (id)assetMattingInfos;
- (void)setEffectMaxMemCache:(long long)arg0;
- (void)setUseZoomFilter:(BOOL)arg0;
- (id)filterTimeLine;
- (void)setFilterTimeLine:(id)arg0;
- (id)filterZoom;
- (void)setFilterZoom:(id)arg0;
- (id)featuresInfo;
- (id)hslFeatures;
- (id)globalFeaturesInfo;
- (void)setGlobalFeaturesInfo:(id)arg0;
- (id)globalHSLFeatures;
- (void)setGlobalHSLFeatures:(id)arg0;
- (id)effectFilters;
- (void)setGlobalAmazingFilter:(id)arg0;
- (id)globalAmazingFilter;
- (void)setGlobalHslAjustFilter:(id)arg0;
- (BOOL)enableLensHdr2Sdr;
- (void)setEnableLensHdr2Sdr:(BOOL)arg0;
- (id)colorFilterPath;
- (void)setColorFilterPath:(id)arg0;
- (float)colorFilterIntensity;
- (id)composerInfo;
- (void)setComposerInfo:(id)arg0;
- (void)setGlobalSegmentedComposerManager:(id)arg0;
- (void)setSegmentedComposerManagers:(id)arg0;
- (id)segmentedComposerManagers;
- (id)videoPtsMap;
- (id)videoStabMatrixMap;
- (id)stabSizeMap;
- (id)imageInputFilters;
- (id)lensHdrFilterDict;
- (id)mattingFilters;
- (id)videoHslFilters;
- (id)extractorFilters;
- (id)stabFilterDict;
- (id)beautyEffectGroup;
- (id)effectGroups;
- (id)currentEffectOneInputFilter;
- (id)canvasGroups;
- (void)setNeedResetFilters:(BOOL)arg0;
- (id)globalEffectGroup;
- (id)extractFrameDrivers;
- (id)zoomTransforms;
- (id)currentTrackInfos;
- (BOOL)canSkipEffectForLVExport;
- (id)cannotSkipEffectAssetDic;
- (BOOL)isEffectPassThough;
- (void)p_updateHSLFilter:(id)arg0 features:(id)arg1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2;
- (id)globalHslAjustFilter;
- (void)updateGlobalEffectGroup:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)updateZoomFilterTransform:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 withTrackInfo:(id)arg1;
- (void)p_updateHSLFilterParam:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 withTrackInfo:(id)arg1;
- (void)updateEffectGroupPath:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 WithAsset:(id)arg1;
- (void)p_updateCanvasGroup:(id)arg0;
- (void)p_updateAmazaingFilter:(id)arg0;
- (void)p_updateStabFilterMatrix:(id)arg0 videoSrcPts:(long long)arg1;
- (void)p_updateLensHdrFilter:(id)arg0 pixelBuffer:(struct __CVBuffer { } *)arg1;
- (BOOL)p_updateHdrEffectOptFilter:(id)arg0 pixelBuffer:(struct __CVBuffer { } *)arg1 asset:(id)arg2;
- (id)stillImageAsset;
- (void)updateStillFrame:(struct __CVBuffer { } *)arg0 trackInfo:(id)arg1;
- (id)buildSampleBufferInfo:(id)arg0 sampleData:(id)arg1 isPassThrough:(BOOL)arg2;
- (id)transFilter;
- (void)caculateKeyframesWithTrackInfo:(id)arg0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 allkeyframes:(id)arg2;
- (void)selectTargetType:(id)arg0;
- (BOOL)enable10bitRtRender;
- (BOOL)hasGlobalEffectInfoTimeIrrelevant;
- (id)multiTrackFilter;
- (id /* block */)getCurrentImageBlock;
- (BOOL)needCurrentFrame;
- (void)setGetCurrentImageBlock:(id /* block */)arg0;
- (void)setStillImageAsset:(id)arg0;
- (void)setNeedCurrentFrame:(BOOL)arg0;
- (void)removeCanvasGroup;
- (void)p_updateTrackInfoLayer:(id)arg0;
- (void)setCurrentTrackInfos:(id)arg0;
- (BOOL)checkPixelSizeEqualsNaturalSize:(id)arg0 samples:(id)arg1;
- (BOOL)canSkipFilterInputColorTransfer:(id)arg0 samples:(id)arg1;
- (void)addInterfaceFilter:(id)arg0 inArray:(id)arg1 naturalSize:(struct CGSize { double x0; double x1; })arg2 canskipFilterInput:(BOOL)arg3;
- (void)addStabFilterIfNeed:(id)arg0 inArray:(id)arg1;
- (void)addLensHdrFilter:(id)arg0 inArray:(id)arg1;
- (void)addMattingMaskFilterIfNeed:(id)arg0 inArray:(id)arg1;
- (void)addTransformFilterIfNeed:(id)arg0 inArray:(id)arg1;
- (void)addOutputRotateFilterIfNeed:(id)arg0 inArray:(id)arg1;
- (void)addCropFilterIfNeed:(id)arg0 inArray:(id)arg1;
- (void)addFillModeFilter:(id)arg0 inArray:(id)arg1;
- (void)addMaskLayerFilter:(id)arg0 inArray:(id)arg1;
- (void)addMirrorFilter:(id)arg0 inArray:(id)arg1;
- (void)addHSLAjustFilter:(id)arg0 inArray:(id)arg1;
- (void)addZoomTransformFilter:(id)arg0 inArray:(id)arg1;
- (void)addBeautyEffectFiter:(id)arg0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 inArray:(id)arg2 isPlaying:(BOOL)arg3;
- (void)addFrameExtractFilter:(id)arg0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 inArray:(id)arg2;
- (void)addAmazingEffectFilter:(id)arg0 inArray:(id)arg1;
- (void)addEffectGroupFiter:(id)arg0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 inArray:(id)arg2 isPlaying:(BOOL)arg3;
- (void)addCanvasGroupIfNeed:(id)arg0 inArray:(id)arg1;
- (void)setGlobalFilterAlgoParamsIfNeeded:(id)arg0;
- (id)buildPostFilterArrays;
- (void)setTransFilter:(id)arg0;
- (id)transFilterInfo;
- (void)setMultiTrackFilter:(id)arg0;
- (id)newTransFilterInfoAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setTransFilterDidChanged:(BOOL)arg0;
- (void)setTransFilterInfo:(id)arg0;
- (id)filterForTrackInfo:(id)arg0;
- (id)buildInputFilter:(id)arg0;
- (void)checkCanSkipEffectForLVExport:(id)arg0 naturalSize:(struct CGSize { double x0; double x1; })arg1;
- (id)lensHdrModelPath;
- (BOOL)createLensHdrEngine:(id)arg0;
- (id)getAmazingFilterConfig;
- (id)mainTrackFeatureRender;
- (void)setMainTrackFeatureRender:(id)arg0;
- (BOOL)enableImageReuse;
- (void)addGlobalHSLAjustFIlterIfNeeded:(id)arg0;
- (void)addGlobalAmazingFilterIfNeeded:(id)arg0;
- (void)addGlobalEffectGroup:(id)arg0;
- (void)addInfoStickerEngineFilter:(id)arg0;
- (void)addWatermarkFilter:(id)arg0;
- (void)addGlobalOutputRotateMode:(id)arg0;
- (void)addHdrEffectOptimization:(id)arg0;
- (void)setHasGlobalEffectInfoTimeIrrelevant:(BOOL)arg0;
- (id)updateTransform:(id)arg0 withAVAsset:(id)arg1;
- (BOOL)p_needTransformFilter:(id)arg0;
- (void)setEffctSrtData:(struct IESSrtDdata { struct IESSrtLine *x0; int x1; } *)arg0;
- (void)setEffectFontPath:(id)arg0;
- (void)setEffectFaceIndex:(long long)arg0;
- (void)setSrtBitmapBlock:(id /* block */)arg0;
- (void)setSrtBitmapUtf32Block:(id /* block */)arg0;
- (BOOL)useZoomFilter;
- (id)imageStickerFilter;
- (id)newZoomFilterInfoAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)currentEffectInfo;
- (BOOL)needResetFilterInfo;
- (void)setNeedResetFilterInfo:(BOOL)arg0;
- (void)p_UpdateSegmentedComposer:(id)arg0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (id)HDREffectInfo;
- (struct IESIndensityParam_t { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; })HDRIndensity;
- (id)effectFontPath;
- (long long)effectFaceIndex;
- (struct IESSrtDdata { struct IESSrtLine *x0; int x1; } *)effctSrtData;
- (id /* block */)srtBitmapBlock;
- (id /* block */)srtBitmapUtf32Block;
- (BOOL)appendSegmentedComposerTimeRange:(id)arg0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1;
- (id /* block */)canvasObservableEvent;
- (id)videoAnimatedRenderer;
- (id)makeCanvasGroupWithConfig:(id)arg0 observable:(id /* block */)arg1 canvasSize:(struct CGSize { double x0; double x1; })arg2 renderer:(id)arg3 context:(id)arg4;
- (void)setNeedResetCanvasGroups:(BOOL)arg0;
- (BOOL)canNotSkipCanvasGroup:(id)arg0 source:(id)arg1;
- (BOOL)needResetCanvasGroups;
- (void)setImageStickerFilter:(id)arg0;
- (id)globalSegmentedComposerManager;
- (id)p_getSegmentedComposerManager:(id)arg0;
- (id)getSegmentedComposerTimeRange:(id)arg0;
- (id)initWith:(id)arg0 config:(id)arg1 context:(id)arg2;
- (void)updateWithMediaInfo:(id)arg0;
- (void)updateWithVideoData:(id)arg0 withConfigData:(id)arg1;
- (void)updateColorInfo:(id)arg0;
- (void)resetEffectOperationManager:(id)arg0;
- (void)updateEffetContext:(id)arg0 forAsset:(id)arg1;
- (void)updateCanvasSource:(id)arg0 forAsset:(id)arg1;
- (void)updateVideoPts:(id)arg0 matrixArray:(id)arg1 stabSizeArray:(id)arg2 forKey:(id)arg3;
- (void)updateFeatureInfo:(id)arg0 forAsset:(id)arg1 type:(unsigned long long)arg2;
- (BOOL)StartMattingDetect:(id)arg0 WithMattingInfo:(id)arg1;
- (void)CancelMattingDetect:(id)arg0;
- (void)deleteFeatureKeyFrame:(id)arg0 forAsset:(id)arg1;
- (id)p_scaleMatrix:(id)arg0 scale:(double)arg1;
- (void)renderSampleBuffers:(id)arg0 tracks:(id)arg1;
- (BOOL)canSkipEffectProcess:(id)arg0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (void)rebuildFiltersWithTrackInfos:(id)arg0 samples:(id)arg1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2 isPlaying:(BOOL)arg3;
- (void)updateTransFilterInfo:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 trackInfos:(id)arg1;
- (void)updateTransFilterProgressAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)updateFiltersInRenderPipelineAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 inTrack:(id)arg1;
- (void)removeFiltersIn:(id)arg0;
- (void)addFiltersIn:(id)arg0;
- (void)updateTrackFilterInfos:(id)arg0;
- (void)updateSubTrackAssetLayer:(id)arg0 layer:(long long)arg1;
- (void)addImageSticker:(id)arg0;
- (void)removeImageStickerWithKey:(id)arg0;
- (void)addFrameExtractDriver:(id)arg0 asset:(id)arg1;
- (BOOL)replaceComposerNodesWithTags:(id)arg0 old:(id)arg1;
- (BOOL)operateSegmentedComposer:(id)arg0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1 action:(id)arg2 forceDetect:(BOOL)arg3;
- (BOOL)removeSegmentedComposerTimeRange:(id)arg0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1;
- (id)getAllSegmentedComposerTimeRange;
- (id)getSegmentedComposerQueueAtTime:(id)arg0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (id)getSegmentedComposerQueue:(id)arg0;
- (id)getAllSegmentedComposerQueue;
- (BOOL)transFilterDidChanged;
- (struct __CVBuffer { } *)destPixelBuffer;
- (BOOL)needResetFilters;
- (void)setCanvasObservableEvent:(id /* block */)arg0;
- (id /* block */)faceDetectEvent;
- (void)setFaceDetectEvent:(id /* block */)arg0;
- (void)setHDREffectInfo:(id)arg0;
- (void)setHDRIndensity:(struct IESIndensityParam_t { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; })arg0;
- (void)setCurrentEffectInfo:(id)arg0;
- (id)colorFilterDict;
- (void)setColorFilterDict:(id)arg0;
- (void)setManagerConfig:(id)arg0;
- (id)keyFrameTimeAndCountInfo;
- (void)setKeyFrameTimeAndCountInfo:(id)arg0;
- (id)hdrEffectOptFilter;
- (void)setHdrEffectOptFilter:(id)arg0;
- (BOOL)abHdrEffectOptimization;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setCanvasSize:(struct CGSize { double x0; double x1; })arg0;
- (id)context;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })canvasSize;
- (int)playerStatus;
- (void)setPlayerStatus:(int)arg0;
- (id)transitionRenderer;
- (id)inputFilters;
- (void)setInputFilters:(id)arg0;

@end