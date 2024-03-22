//
//     Generated by private class-dump
//

@class LynxURL, NSMutableDictionary, UIColor, UIImage, NSDate, BDWebImageRequest, NSString;

@interface LynxUIImage : LynxUI <LynxMeasureDelegate> {
    NSString *_preSrc;
    BOOL _coverStart;
    BOOL _freed;
    BOOL _downsampling;
    BOOL _autoSize;
    BOOL _isOffScreen;
    BOOL _deferSrcInvalidation;
    BOOL _useNewImage;
    BOOL _autoPlay;
    BOOL _enableExtraLoadInfo;
    BOOL _skipRedirection;
    BOOL _enableFadeIn;
    BDWebImageRequest *_customImageRequest;
    NSMutableDictionary *_resLoaderInfo;
    long long _requestOptions;
    long long _resizeMode;
    LynxURL *_src;
    LynxURL *_placeholder;
    double _blurRadius;
    double _capInsetsScale;
    UIImage *_image;
    NSMutableDictionary *_cancelBlocks;
    long long _loopCount;
    double _preFetchWidth;
    double _preFetchHeight;
    long long _redBoxSizeWarningThreshold;
    NSDate *_startRequestTime;
    NSDate *_finishRequestTime;
    UIColor *_tintColor;
    struct CGSize { double width; double height; } _prevSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _capInsets;
}

@property (nonatomic) long long resizeMode;
@property (nonatomic) BOOL coverStart;
@property (nonatomic) BOOL freed;
@property (retain, nonatomic) LynxURL *src;
@property (retain, nonatomic) LynxURL *placeholder;
@property (nonatomic) double blurRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } capInsets;
@property (nonatomic) double capInsetsScale;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSMutableDictionary *cancelBlocks;
@property (nonatomic) long long loopCount;
@property (nonatomic) double preFetchWidth;
@property (nonatomic) double preFetchHeight;
@property (nonatomic) BOOL downsampling;
@property (nonatomic) BOOL autoSize;
@property (nonatomic) BOOL isOffScreen;
@property (nonatomic) BOOL deferSrcInvalidation;
@property (nonatomic) long long redBoxSizeWarningThreshold;
@property (nonatomic) struct CGSize { double width; double height; } prevSize;
@property (retain, nonatomic) NSDate *startRequestTime;
@property (nonatomic) BOOL useNewImage;
@property (retain, nonatomic) NSDate *finishRequestTime;
@property (nonatomic) BOOL autoPlay;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) BOOL enableExtraLoadInfo;
@property (nonatomic) BOOL skipRedirection;
@property (nonatomic) BOOL enableFadeIn;
@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (retain, nonatomic) BDWebImageRequest *customImageRequest;
@property (retain, nonatomic) NSMutableDictionary *resLoaderInfo;
@property (readonly, nonatomic) long long requestOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 withParameters:(id)arg1;
+ (id)__lynx_prop_config__8502;
+ (id)__lynx_prop_config__8753;
+ (id)__lynx_prop_config__8984;
+ (id)__lynx_prop_config__9055;
+ (id)__lynx_prop_config__9156;
+ (id)__lynx_prop_config__9257;
+ (id)__lynx_prop_config__9338;
+ (id)__lynx_prop_config__9429;
+ (id)__lynx_prop_config__95910;
+ (id)__lynx_prop_config__97611;
+ (id)__lynx_prop_config__98012;
+ (id)__lynx_prop_config__98813;
+ (id)__lynx_prop_config__99514;
+ (id)__lynx_prop_config__101015;
+ (id)__lynx_prop_config__102416;
+ (id)__lynx_prop_config__103117;
+ (id)__lynx_prop_config__103818;
+ (id)__lynx_prop_config__105219;
+ (id)__lynx_prop_config__107020;
+ (id)__lynx_prop_config__108821;
+ (id)__lynx_prop_config__110622;
+ (id)__lynx_prop_config__112423;
+ (id)__lynx_prop_config__114324;
+ (id)__lynx_prop_config__115825;
+ (id)__lynx_prop_config__117326;
+ (id)__lynx_ui_method_config__118227;
+ (id)__lynx_ui_method_config__118928;
+ (id)__lynx_ui_method_config__119329;
+ (id)__lynx_ui_method_config__119730;

- (void)propsDidUpdate;
- (BOOL)updateLayerMaskOnFrameChanged;
- (BOOL)enableAsyncDisplay;
- (void)onNodeReady;
- (id)drawParameter;
- (BOOL)enableAccessibilityByDefault;
- (unsigned long long)accessibilityTraitsByDefault;
- (void)targetOnScreen;
- (void)targetOffScreen;
- (void)freeMemoryCache;
- (void)setSrc:(id)arg0 requestReset:(BOOL)arg1;
- (id)startRequestTime;
- (void)setStartRequestTime:(id)arg0;
- (void)requestImage:(id)arg0;
- (void)requestImage;
- (void)resetImage;
- (void)addErrorInfo:(id)arg0;
- (struct CGSize { double x0; double x1; })measureNode:(id)arg0 withWidth:(double)arg1 widthMode:(long long)arg2 height:(double)arg3 heightMode:(long long)arg4;
- (BOOL)shouldUseNewImage;
- (double)toCapInsetValue:(id)arg0;
- (id)illegalUrlHandler:(id)arg0;
- (void)setMode:(long long)arg0 requestReset:(BOOL)arg1;
- (void)setBlurRadius:(id)arg0 requestReset:(BOOL)arg1;
- (void)freeImageCache;
- (BOOL)freed;
- (void)setIsOffScreen:(BOOL)arg0;
- (void)setFreed:(BOOL)arg0;
- (BOOL)enableFadeIn;
- (BOOL)autoSize;
- (BOOL)isLayoutFlick;
- (void)setPrevSize:(struct CGSize { double x0; double x1; })arg0;
- (void)onImageReady:(id)arg0 withRequest:(id)arg1;
- (BOOL)updateLayerMaskOnFrameChangedInner:(BOOL)arg0 URL:(id)arg1;
- (void)addExposure;
- (BOOL)getTrailUseNewImage;
- (BOOL)getSetUseNewImage;
- (BOOL)getPageConfigEnableNewImage;
- (long long)getRedBoxSizeWarningThreshold;
- (void)setRedBoxSizeWarningThreshold:(long long)arg0;
- (long long)redBoxSizeWarningThreshold;
- (void)redScreenReporter:(id)arg0;
- (id)cancelBlocks;
- (BOOL)useNewImage;
- (void)setCustomImageRequest:(id)arg0;
- (BOOL)superUpdateLayerMaskOnFrameChanged;
- (void)addReportInfo:(id)arg0;
- (BOOL)enableExtraLoadInfo;
- (void)reportURLSrcError:(id)arg0 type:(long long)arg1 source:(id)arg2;
- (void)monitorReporter:(id)arg0;
- (BOOL)getEnableImageDownsampling;
- (void)initResourceLoaderInformation;
- (id /* block */)loadNewImageFromURL:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 contextInfo:(id)arg2 processors:(id)arg3 completed:(id /* block */)arg4;
- (id)resLoaderInfo;
- (void)setResLoaderInfo:(id)arg0;
- (void)reportImageInfo:(id)arg0;
- (void)setInnerCapInsets:(id)arg0 requestReset:(BOOL)arg1;
- (void)setPlaceholder:(id)arg0 requestReset:(BOOL)arg1;
- (void)setDeferSrcInvalidation:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setTintColor:(id)arg0 requestReset:(BOOL)arg1;
- (void)setAutoPlay:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setCoverStart:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setCapInsets:(id)arg0 requestReset:(BOOL)arg1;
- (void)setCapInsetsScale:(id)arg0 requestReset:(BOOL)arg1;
- (void)setLoopCount:(long long)arg0 requestReset:(BOOL)arg1;
- (void)setPreFetchWidth:(id)arg0 requestReset:(BOOL)arg1;
- (void)setPreFetchHeight:(id)arg0 requestReset:(BOOL)arg1;
- (void)setDownsampling:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setUseNewImage:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setAutoSize:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setIgnoreCDNDowngradeCachePolicy:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setIgnoreMemoryCache:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setIgnoreDiskCache:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setNotCacheToMemory:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setNotCacheToDisk:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setBindLoadExtraInfo:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setSkipRedirection:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setTransitionStyle:(id)arg0 requestReset:(BOOL)arg1;
- (void)startAnimate:(id)arg0 withResult:(id /* block */)arg1;
- (void)pauseAnimation:(id)arg0 withResult:(id /* block */)arg1;
- (void)resumeAnimation:(id)arg0 withResult:(id /* block */)arg1;
- (void)stopAnimation:(id)arg0 withResult:(id /* block */)arg1;
- (id)customImageRequest;
- (BOOL)coverStart;
- (void)setCoverStart:(BOOL)arg0;
- (double)capInsetsScale;
- (void)setCapInsetsScale:(double)arg0;
- (void)setCancelBlocks:(id)arg0;
- (double)preFetchWidth;
- (void)setPreFetchWidth:(double)arg0;
- (double)preFetchHeight;
- (void)setPreFetchHeight:(double)arg0;
- (void)setAutoSize:(BOOL)arg0;
- (BOOL)deferSrcInvalidation;
- (void)setDeferSrcInvalidation:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })prevSize;
- (void)setUseNewImage:(BOOL)arg0;
- (id)finishRequestTime;
- (void)setFinishRequestTime:(id)arg0;
- (void)setEnableExtraLoadInfo:(BOOL)arg0;
- (BOOL)skipRedirection;
- (void)setSkipRedirection:(BOOL)arg0;
- (void)setEnableFadeIn:(BOOL)arg0;
- (void)startAnimating;
- (id)init;
- (BOOL)isAnimated;
- (void)setTintColor:(id)arg0;
- (void).cxx_destruct;
- (id)image;
- (double)blurRadius;
- (void)setBlurRadius:(double)arg0;
- (id)tintColor;
- (void)setImage:(id)arg0;
- (void)setPlaceholder:(id)arg0;
- (void)setResizeMode:(long long)arg0;
- (id)placeholder;
- (long long)requestOptions;
- (BOOL)isOffScreen;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })capInsets;
- (long long)resizeMode;
- (id)src;
- (void)setSrc:(id)arg0;
- (struct CGSize { double x0; double x1; })frameSize;
- (long long)loopCount;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg0;
- (id)createView;
- (BOOL)downsampling;
- (void)setDownsampling:(BOOL)arg0;
- (void)restartAnimation;
- (void)setLoopCount:(long long)arg0;
- (void)setCapInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;

@end
