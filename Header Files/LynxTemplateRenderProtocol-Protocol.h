//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, LynxDevtool, LynxTimingHandler;

@protocol LynxTemplateRenderProtocol <NSObject>

@property (nonatomic) long long layoutWidthMode;
@property (nonatomic) long long layoutHeightMode;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) double preferredMaxLayoutHeight;
@property (nonatomic) double preferredLayoutWidth;
@property (nonatomic) double preferredLayoutHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameOfLynxView;
@property (nonatomic) BOOL isDestroyed;
@property (nonatomic) BOOL hasRendered;
@property (readonly, nonatomic) NSString *url;
@property (nonatomic) BOOL enableJSRuntime;
@property (retain, nonatomic) LynxDevtool *devTool;
@property (retain, nonatomic) LynxTimingHandler *timingHandler;
@property (retain, nonatomic) NSMutableDictionary *lepusModulesClasses_;

- (BOOL)enableAsyncDisplay;
- (void)sendGlobalEvent:(id)arg0 withParams:(id)arg1;
- (void)triggerLayout;
- (void)updateGlobalPropsWithDictionary:(id)arg0;
- (id)getPageDataByKey:(id)arg0;
- (void)loadTemplateFromURL:(id)arg0 initData:(id)arg1;
- (void)loadTemplate:(id)arg0 withURL:(id)arg1 initData:(id)arg2;
- (void)onEnterBackground;
- (void)registerModule:(Class)arg0 param:(id)arg1;
- (void)setPreferredLayoutWidth:(double)arg0;
- (void)setPreferredLayoutHeight:(double)arg0;
- (void)setLayoutWidthMode:(long long)arg0;
- (void)setLayoutHeightMode:(long long)arg0;
- (BOOL)isDestroyed;
- (void)setIsDestroyed:(BOOL)arg0;
- (id)getLynxContext;
- (void)loadTemplateBundle:(id)arg0 withURL:(id)arg1 initData:(id)arg2;
- (void)loadSSRData:(id)arg0 withURL:(id)arg1 initData:(id)arg2;
- (void)onEnterForeground;
- (id)getCurrentData;
- (void)updateDataWithTemplateData:(id)arg0;
- (void)updateDataWithDictionary:(id)arg0 processorName:(id)arg1;
- (void)updateDataWithString:(id)arg0 processorName:(id)arg1;
- (void)resetDataWithTemplateData:(id)arg0;
- (long long)getThreadStrategyForRender;
- (void)updateScreenMetricsWithWidth:(double)arg0 height:(double)arg1;
- (void)clearForDestroy;
- (void)resumeRootLayoutAnimation;
- (void)pauseRootLayoutAnimation;
- (BOOL)enableJSRuntime;
- (void)setEnableJSRuntime:(BOOL)arg0;
- (void)triggerEventBus:(id)arg0 withParams:(id)arg1;
- (void)updateMetaData:(id)arg0;
- (id)getJSModule:(id)arg0;
- (void)reloadTemplateWithTemplateData:(id)arg0 globalProps:(id)arg1;
- (void)updateGlobalPropsWithTemplateData:(id)arg0;
- (void)startLynxRuntime;
- (void)setPreferredMaxLayoutHeight:(double)arg0;
- (id)initWithBuilderBlock:(id /* block */)arg0 lynxView:(id)arg1;
- (double)preferredLayoutWidth;
- (void)updateFontScale:(double)arg0;
- (void)sendGlobalEventToLepus:(id)arg0 withParams:(id)arg1;
- (long long)layoutWidthMode;
- (long long)layoutHeightMode;
- (void)setExtraTiming:(id)arg0;
- (void)ssrHydrateFromURL:(id)arg0 initData:(id)arg1;
- (double)preferredLayoutHeight;
- (id)cardVersion;
- (void)onErrorOccurred:(long long)arg0 message:(id)arg1;
- (void)setEnableAsyncDisplay:(BOOL)arg0;
- (id)getLynxRuntimeId;
- (void)notifyIntersectionObservers;
- (void)onLongPress;
- (void)onErrorOccurred:(long long)arg0 sourceError:(id)arg1;
- (BOOL)enableTextNonContiguousLayout;
- (void)setTimingHandler:(id)arg0;
- (void)updateViewport;
- (void)setLepusModulesClasses_:(id)arg0;
- (id)lepusModulesClasses_;
- (id)timingHandler;
- (id)devTool;
- (void)updateDataWithTemplateData:(id)arg0 updateFinishedCallback:(id /* block */)arg1;
- (void)updateViewport:(BOOL)arg0;
- (void)setLocalTheme:(id)arg0;
- (void)loadTemplateWithoutLynxView:(id)arg0 withURL:(id)arg1 initData:(id)arg2;
- (void)loadSSRDataFromURL:(id)arg0 initData:(id)arg1;
- (void)ssrHydrate:(id)arg0 withURL:(id)arg1 initData:(id)arg2;
- (void)triggerLayoutInTick;
- (BOOL)isModuleExist:(id)arg0;
- (id)getAllJsSource;
- (id)getAllTimingInfo;
- (id)getExtraInfo;
- (double)preferredMaxLayoutHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfLynxView;
- (void)setFrameOfLynxView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setDevTool:(id)arg0;
- (void)setPreferredMaxLayoutWidth:(double)arg0;
- (void)setTheme:(id)arg0;
- (id)theme;
- (void)reset;
- (id)url;
- (double)preferredMaxLayoutWidth;
- (BOOL)hasRendered;
- (void)setHasRendered:(BOOL)arg0;
- (void)resetAnimation;
- (void)restartAnimation;

@end