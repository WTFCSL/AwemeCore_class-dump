//
//     Generated by private class-dump
//

@class BDUIStatusBarStyleParam, NSString, NSURL, NSArray, BDXLaunchModeParam, BDStringParam, NSNumber, UIColor;

@interface BDXContainerModel : NSObject <BDSchemaModelProtocol> {
    BOOL _showLoading;
    BOOL _forceH5;
    BOOL _prerender;
    BOOL _showError;
    BOOL _shouldSendClearTopEvent;
    BOOL _enableTrack;
    BOOL _enableAdvancedMonitor;
    BOOL _enbalePadAdapter;
    BOOL _enableNewPrefetch;
    BOOL _disablePrefetch;
    BOOL _enableFluencyCollection;
    BOOL _useLastStatusBarStyle;
    BOOL _screenSizeAdaptation;
    BOOL _showBack;
    UIColor *_containerBgColor;
    UIColor *_loadingBgColor;
    NSString *_url;
    NSString *_title;
    NSURL *_fallbackUrl;
    double _fontScale;
    double _viewZoom;
    NSNumber *_enableAppViewZoom;
    NSNumber *_enableAppFontScale;
    long long _loadUrlDelayTime;
    long long _loadingDuration;
    NSString *_viewTag;
    BDStringParam *_bdxTag;
    NSString *_prefetchBusiness;
    BDXLaunchModeParam *_launchMode;
    NSNumber *_iPadRatio;
    NSArray *_storageKeys;
    NSArray *_userDomainStorageKey;
    NSArray *_bulletDefaultDomainStorageKeys;
    double _loadingCenter;
    NSArray *_nativeTriggerShowHideEvent;
    BDUIStatusBarStyleParam *_statusFontMode;
    NSString *_monitorReportPerf;
    NSNumber *_openAnimate;
    NSString *_padAdapter;
    UIColor *_contentBgColor;
    UIColor *_containerLightBgColor;
    UIColor *_containerDarkBgColor;
}

@property (retain, nonatomic) UIColor *containerBgColor;
@property (retain, nonatomic) UIColor *loadingBgColor;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL showLoading;
@property (retain, nonatomic) NSURL *fallbackUrl;
@property (nonatomic) double fontScale;
@property (nonatomic) double viewZoom;
@property (retain, nonatomic) NSNumber *enableAppViewZoom;
@property (retain, nonatomic) NSNumber *enableAppFontScale;
@property (nonatomic) BOOL forceH5;
@property (nonatomic) long long loadUrlDelayTime;
@property (nonatomic) long long loadingDuration;
@property (nonatomic) BOOL prerender;
@property (nonatomic) BOOL showError;
@property (copy, nonatomic) NSString *viewTag;
@property (retain, nonatomic) BDStringParam *bdxTag;
@property (copy, nonatomic) NSString *prefetchBusiness;
@property (retain, nonatomic) BDXLaunchModeParam *launchMode;
@property (nonatomic) BOOL shouldSendClearTopEvent;
@property (nonatomic) BOOL enableTrack;
@property (nonatomic) BOOL enableAdvancedMonitor;
@property (nonatomic) BOOL enbalePadAdapter;
@property (retain, nonatomic) NSNumber *iPadRatio;
@property (nonatomic) BOOL enableNewPrefetch;
@property (nonatomic) BOOL disablePrefetch;
@property (nonatomic) BOOL enableFluencyCollection;
@property (copy, nonatomic) NSArray *storageKeys;
@property (copy, nonatomic) NSArray *userDomainStorageKey;
@property (copy, nonatomic) NSArray *bulletDefaultDomainStorageKeys;
@property (nonatomic) double loadingCenter;
@property (copy, nonatomic) NSArray *nativeTriggerShowHideEvent;
@property (retain, nonatomic) BDUIStatusBarStyleParam *statusFontMode;
@property (nonatomic) BOOL useLastStatusBarStyle;
@property (nonatomic) BOOL screenSizeAdaptation;
@property (copy, nonatomic) NSString *monitorReportPerf;
@property (retain, nonatomic) NSNumber *openAnimate;
@property (retain, nonatomic) NSString *padAdapter;
@property (retain, nonatomic) UIColor *contentBgColor;
@property (retain, nonatomic) UIColor *containerLightBgColor;
@property (retain, nonatomic) UIColor *containerDarkBgColor;
@property (nonatomic) BOOL showBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)modelWithSchemaData:(id)arg0;

- (BOOL)modelCustomTransformFromDictionary:(id)arg0;
- (void)setViewTag:(id)arg0;
- (id)viewTag;
- (void)setPrefetchBusiness:(id)arg0;
- (BOOL)showBack;
- (void)updateWithSchemaData:(id)arg0;
- (void)setContainerBgColor:(id)arg0;
- (void)setLoadingBgColor:(id)arg0;
- (void)setShowLoading:(BOOL)arg0;
- (void)setBdxTag:(id)arg0;
- (void)setEnbalePadAdapter:(BOOL)arg0;
- (void)setForceH5:(BOOL)arg0;
- (BOOL)forceH5;
- (void)setViewZoom:(double)arg0;
- (id)prefetchBusiness;
- (id)bdxTag;
- (id)contentBgColor;
- (void)setContentBgColor:(id)arg0;
- (id)containerBgColor;
- (void)setEnableTrack:(BOOL)arg0;
- (BOOL)enableTrack;
- (id)loadingBgColor;
- (id)containerDarkBgColor;
- (id)containerLightBgColor;
- (id)statusFontMode;
- (void)setStatusFontMode:(id)arg0;
- (long long)loadUrlDelayTime;
- (BOOL)enableNewPrefetch;
- (double)viewZoom;
- (BOOL)prerender;
- (id)storageKeys;
- (id)userDomainStorageKey;
- (id)bulletDefaultDomainStorageKeys;
- (id)iPadRatio;
- (BOOL)enbalePadAdapter;
- (id)openAnimate;
- (BOOL)useLastStatusBarStyle;
- (BOOL)disablePrefetch;
- (id)nativeTriggerShowHideEvent;
- (BOOL)enableAdvancedMonitor;
- (id)padAdapter;
- (double)loadingCenter;
- (long long)loadingDuration;
- (BOOL)shouldSendClearTopEvent;
- (BOOL)enableFluencyCollection;
- (void)setEnableFluencyCollection:(BOOL)arg0;
- (BOOL)screenSizeAdaptation;
- (void)setScreenSizeAdaptation:(BOOL)arg0;
- (id)enableAppFontScale;
- (id)enableAppViewZoom;
- (id)monitorReportPerf;
- (void)setNativeTriggerShowHideEvent:(id)arg0;
- (void)setEnableAdvancedMonitor:(BOOL)arg0;
- (void)setStorageKeys:(id)arg0;
- (void)setUserDomainStorageKey:(id)arg0;
- (void)setBulletDefaultDomainStorageKeys:(id)arg0;
- (void)setUseLastStatusBarStyle:(BOOL)arg0;
- (void)setContainerLightBgColor:(id)arg0;
- (void)setContainerDarkBgColor:(id)arg0;
- (void)setFallbackUrl:(id)arg0;
- (void)setEnableAppViewZoom:(id)arg0;
- (void)setEnableAppFontScale:(id)arg0;
- (void)setLoadUrlDelayTime:(long long)arg0;
- (void)setLoadingDuration:(long long)arg0;
- (void)setPrerender:(BOOL)arg0;
- (void)setShouldSendClearTopEvent:(BOOL)arg0;
- (void)setIPadRatio:(id)arg0;
- (void)setEnableNewPrefetch:(BOOL)arg0;
- (void)setDisablePrefetch:(BOOL)arg0;
- (void)setLoadingCenter:(double)arg0;
- (void)setMonitorReportPerf:(id)arg0;
- (void)setOpenAnimate:(id)arg0;
- (void)setPadAdapter:(id)arg0;
- (void)setShowBack:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)title;
- (void)setLaunchMode:(id)arg0;
- (id)launchMode;
- (id)url;
- (void)setTitle:(id)arg0;
- (double)fontScale;
- (void)setFontScale:(double)arg0;
- (BOOL)showError;
- (void)setShowError:(BOOL)arg0;
- (id)fallbackUrl;
- (BOOL)showLoading;

@end