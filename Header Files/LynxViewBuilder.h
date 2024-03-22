//
//     Generated by private class-dump
//

@class NSMutableDictionary, LynxConfig, LynxGroup;
@protocol LynxDynamicComponentFetcher;

@interface LynxViewBuilder : NSObject {
    long long _threadStrategy;
    NSMutableDictionary *_providers;
    NSMutableDictionary *_builderRegistedAliasFontMap;
    BOOL _isUIRunningMode;
    BOOL _enableLayoutSafepoint;
    BOOL _enableAutoExpose;
    BOOL _enableTextNonContiguousLayout;
    BOOL _enableLayoutOnly;
    BOOL _enableUIOperationQueue;
    BOOL _enablePendingJSTaskOnLayout;
    BOOL _enableJSRuntime;
    BOOL _enableAirStrictMode;
    BOOL _enableAsyncCreateRender;
    BOOL _enableRadonCompatible;
    BOOL _enableSyncFlush;
    BOOL _enableMultiAsyncThread;
    BOOL _enableAsyncHydration;
    BOOL _debuggable;
    BOOL _enablePreUpdateData;
    BOOL _enableLynxResourceServiceLoaderInjection;
    LynxConfig *_config;
    LynxGroup *_group;
    id<LynxDynamicComponentFetcher> _fetcher;
    double _fontScale;
    id _lynxModuleExtraData;
    struct CGSize { double width; double height; } _screenSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

@property (nonatomic) BOOL isUIRunningMode;
@property (retain, nonatomic) LynxConfig *config;
@property (retain, nonatomic) LynxGroup *group;
@property (nonatomic) BOOL enableLayoutSafepoint;
@property (nonatomic) BOOL enableAutoExpose;
@property (nonatomic) BOOL enableTextNonContiguousLayout;
@property (nonatomic) BOOL enableLayoutOnly;
@property (nonatomic) BOOL enableUIOperationQueue;
@property (nonatomic) BOOL enablePendingJSTaskOnLayout;
@property (nonatomic) BOOL enableJSRuntime;
@property (nonatomic) BOOL enableAirStrictMode;
@property (nonatomic) BOOL enableAsyncCreateRender;
@property (nonatomic) BOOL enableRadonCompatible;
@property (nonatomic) BOOL enableSyncFlush;
@property (nonatomic) BOOL enableMultiAsyncThread;
@property (nonatomic) BOOL enableAsyncHydration;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) id<LynxDynamicComponentFetcher> fetcher;
@property (nonatomic) double fontScale;
@property (retain, nonatomic) id lynxModuleExtraData;
@property (nonatomic) struct CGSize { double width; double height; } screenSize;
@property (nonatomic) BOOL debuggable;
@property (nonatomic) BOOL enablePreUpdateData;
@property (nonatomic) BOOL enableLynxResourceServiceLoaderInjection;

- (void)setThreadStrategyForRender:(long long)arg0;
- (void)addLynxResourceProvider:(id)arg0 provider:(id)arg1;
- (long long)getThreadStrategyForRender;
- (void)setEnableRadonCompatible:(BOOL)arg0;
- (void)setEnableAirStrictMode:(BOOL)arg0;
- (BOOL)enableRadonCompatible;
- (BOOL)enableJSRuntime;
- (void)setEnableJSRuntime:(BOOL)arg0;
- (BOOL)enableUIOperationQueue;
- (void)setEnableUIOperationQueue:(BOOL)arg0;
- (void)setEnableMultiAsyncThread:(BOOL)arg0;
- (BOOL)enableAirStrictMode;
- (BOOL)enableMultiAsyncThread;
- (void)setEnableLayoutSafepoint:(BOOL)arg0;
- (void)setEnableAutoExpose:(BOOL)arg0;
- (void)setEnablePendingJSTaskOnLayout:(BOOL)arg0;
- (void)setEnableAsyncCreateRender:(BOOL)arg0;
- (BOOL)enableAutoExpose;
- (void)setEnableLayoutOnly:(BOOL)arg0;
- (BOOL)enableLynxResourceServiceLoaderInjection;
- (void)setEnableLynxResourceServiceLoaderInjection:(BOOL)arg0;
- (void)registerFont:(id)arg0 forName:(id)arg1;
- (void)registerFamilyName:(id)arg0 withAliasName:(id)arg1;
- (BOOL)enablePendingJSTaskOnLayout;
- (BOOL)enableAsyncHydration;
- (BOOL)enableAsyncCreateRender;
- (BOOL)enableTextNonContiguousLayout;
- (void)setEnableTextNonContiguousLayout:(BOOL)arg0;
- (BOOL)enableSyncFlush;
- (void)setEnableSyncFlush:(BOOL)arg0;
- (BOOL)debuggable;
- (BOOL)enableLayoutSafepoint;
- (BOOL)enablePreUpdateData;
- (id)lynxModuleExtraData;
- (void)setLynxModuleExtraData:(id)arg0;
- (id)getLynxResourceProviders;
- (id)getBuilderRegistedAliasFontMap;
- (BOOL)enableLayoutOnly;
- (void)setDebuggable:(BOOL)arg0;
- (BOOL)isUIRunningMode;
- (void)setIsUIRunningMode:(BOOL)arg0;
- (void)setEnableAsyncHydration:(BOOL)arg0;
- (void)setEnablePreUpdateData:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })screenSize;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)group;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setGroup:(id)arg0;
- (id)fetcher;
- (void)setScreenSize:(struct CGSize { double x0; double x1; })arg0;
- (double)fontScale;
- (void)setFontScale:(double)arg0;
- (void)setFetcher:(id)arg0;

@end