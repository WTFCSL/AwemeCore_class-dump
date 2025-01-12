//
//     Generated by private class-dump
//

@class NSString, NSArray, NSData, LynxSSRConfig, NSNumber, NSDictionary;
@protocol LynxDynamicComponentFetcher, LynxTemplateProvider, LynxImageFetcher, LynxResourceFetcher, LynxResourceProvider;

@interface HybridLynxKitParams : HybridKitParams {
    BOOL _lockResource;
    BOOL _disableShare;
    BOOL _enableCanvas;
    BOOL _disableAutoExpose;
    BOOL _enableRadonCompatible;
    BOOL _landscapeScreenSizeAsProtrait;
    BOOL _enableJSRuntime;
    BOOL _enablePendingJsTask;
    NSString *_sourceUrl;
    NSString *_localUrl;
    NSString *_accessKey;
    NSString *_channel;
    NSString *_bundle;
    NSNumber *_useForest;
    NSString *_sessionId;
    NSNumber *_enableMemoryCache;
    NSNumber *_disableGurd;
    NSNumber *_disableBuildin;
    NSString *_groupContext;
    NSArray *_extraJSPaths;
    long long _dynamic;
    id _initialProperties;
    NSString *_initialPropertiesState;
    long long _widthMode;
    long long _heightMode;
    long long _threadStrategy;
    NSNumber *_enableSafePoint;
    NSNumber *_presetWidth;
    NSNumber *_presetHeight;
    NSData *_templateData;
    id _templateBundle;
    LynxSSRConfig *_lynxSSRConfig;
    NSDictionary *_queryItems;
    double _fontScale;
    NSNumber *_enableCanvasOptimization;
    id /* block */ _rawViewBuilderBlock;
    id<LynxTemplateProvider> _templateProvider;
    id<LynxImageFetcher> _imageFetcher;
    id<LynxResourceFetcher> _resourceFetcher;
    id<LynxDynamicComponentFetcher> _dynamicComponentFetcher;
    id<LynxResourceProvider> _i18nProvider;
}

@property (copy, nonatomic) NSString *sourceUrl;
@property (copy, nonatomic) NSString *localUrl;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSNumber *useForest;
@property (nonatomic) BOOL lockResource;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSNumber *enableMemoryCache;
@property (copy, nonatomic) NSNumber *disableGurd;
@property (copy, nonatomic) NSNumber *disableBuildin;
@property (copy, nonatomic) NSString *groupContext;
@property (retain, nonatomic) NSArray *extraJSPaths;
@property (nonatomic) long long dynamic;
@property (nonatomic) BOOL disableShare;
@property (nonatomic) BOOL enableCanvas;
@property (nonatomic) BOOL disableAutoExpose;
@property (retain, nonatomic) id initialProperties;
@property (copy, nonatomic) NSString *initialPropertiesState;
@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (nonatomic) long long threadStrategy;
@property (retain, nonatomic) NSNumber *enableSafePoint;
@property (retain, nonatomic) NSNumber *presetWidth;
@property (retain, nonatomic) NSNumber *presetHeight;
@property (nonatomic) BOOL enableRadonCompatible;
@property (retain, nonatomic) NSData *templateData;
@property (retain, nonatomic) id templateBundle;
@property (retain, nonatomic) LynxSSRConfig *lynxSSRConfig;
@property (copy, nonatomic) NSDictionary *queryItems;
@property (nonatomic) double fontScale;
@property (nonatomic) BOOL landscapeScreenSizeAsProtrait;
@property (nonatomic) NSNumber *enableCanvasOptimization;
@property (nonatomic) BOOL enableJSRuntime;
@property (nonatomic) BOOL enablePendingJsTask;
@property (copy, nonatomic) id /* block */ rawViewBuilderBlock;
@property (weak, nonatomic) id<LynxTemplateProvider> templateProvider;
@property (weak, nonatomic) id<LynxImageFetcher> imageFetcher;
@property (weak, nonatomic) id<LynxResourceFetcher> resourceFetcher;
@property (weak, nonatomic) id<LynxDynamicComponentFetcher> dynamicComponentFetcher;
@property (weak, nonatomic) id<LynxResourceProvider> i18nProvider;

- (id)templateBundle;
- (void)setWidthMode:(long long)arg0;
- (void)setHeightMode:(long long)arg0;
- (BOOL)disableShare;
- (void)setTemplateData:(id)arg0;
- (id)templateData;
- (void)setLocalUrl:(id)arg0;
- (id)localUrl;
- (id)extraJSPaths;
- (void)setExtraJSPaths:(id)arg0;
- (long long)widthMode;
- (long long)heightMode;
- (void)setImageFetcher:(id)arg0;
- (void)setResourceFetcher:(id)arg0;
- (void)setEnableMemoryCache:(id)arg0;
- (id)enableMemoryCache;
- (id)resourceFetcher;
- (void)setRawViewBuilderBlock:(id /* block */)arg0;
- (BOOL)enableCanvas;
- (void)setEnableCanvas:(BOOL)arg0;
- (void)setUseForest:(id)arg0;
- (void)setEnableRadonCompatible:(BOOL)arg0;
- (void)setDisableShare:(BOOL)arg0;
- (long long)threadStrategy;
- (BOOL)enableRadonCompatible;
- (BOOL)enableJSRuntime;
- (void)setEnableJSRuntime:(BOOL)arg0;
- (void)setThreadStrategy:(long long)arg0;
- (void)setTemplateBundle:(id)arg0;
- (id)presetHeight;
- (BOOL)disableAutoExpose;
- (void)setDisableAutoExpose:(BOOL)arg0;
- (void)setEnableSafePoint:(id)arg0;
- (void)setPresetWidth:(id)arg0;
- (void)setPresetHeight:(id)arg0;
- (id)enableCanvasOptimization;
- (id /* block */)rawViewBuilderBlock;
- (id)enableSafePoint;
- (id)presetWidth;
- (BOOL)enablePendingJsTask;
- (void)setEnablePendingJsTask:(BOOL)arg0;
- (void)setInitialPropertiesState:(id)arg0;
- (id)disableBuildin;
- (void)setDisableBuildin:(id)arg0;
- (id)disableGurd;
- (void)setDisableGurd:(id)arg0;
- (id)dynamicComponentFetcher;
- (id)initialPropertiesState;
- (void)setEnableCanvasOptimization:(id)arg0;
- (void)setDynamicComponentFetcher:(id)arg0;
- (id)useForest;
- (id)lynxSSRConfig;
- (void)setLynxSSRConfig:(id)arg0;
- (id)i18nProvider;
- (void)setI18nProvider:(id)arg0;
- (void)setLockResource:(BOOL)arg0;
- (void)setLandscapeScreenSizeAsProtrait:(BOOL)arg0;
- (BOOL)lockResource;
- (BOOL)landscapeScreenSizeAsProtrait;
- (id)queryItems;
- (id)bundle;
- (id)channel;
- (id)init;
- (void)setSessionId:(id)arg0;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (void)setBundle:(id)arg0;
- (id)sessionId;
- (id)groupContext;
- (void)setQueryItems:(id)arg0;
- (long long)dynamic;
- (void)setDynamic:(long long)arg0;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg0;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (id)initialProperties;
- (void)setInitialProperties:(id)arg0;
- (double)fontScale;
- (void)setFontScale:(double)arg0;
- (void)setGroupContext:(id)arg0;
- (id)templateProvider;
- (void)setTemplateProvider:(id)arg0;
- (id)imageFetcher;

@end
