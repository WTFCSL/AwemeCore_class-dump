//
//     Generated by private class-dump
//

@class LynxTimingHandler, LynxShadowNodeOwner, LynxEventHandler, NSDictionary, LynxFontFaceContext, LynxContext, UIView, NSString, LynxEventEmitter, LynxUIExposure, LynxGlobalObserver, LynxRootUI, LynxScreenMetrics, LynxUIIntersectionObserverManager;
@protocol LynxListLayoutProtocol, LynxScrollListener, LynxImageFetcher, LynxResourceFetcher;

@interface LynxUIContext : NSObject {
    BOOL _isDev;
    BOOL _defaultOverflowVisible;
    BOOL _defaultImplicitAnimation;
    BOOL _enableTextRefactor;
    BOOL _defaultAutoResumeAnimation;
    BOOL _defaultEnableNewTransformOrigin;
    BOOL _enableEventRefactor;
    BOOL _enableA11yIDMutationObserver;
    BOOL _enableTextOverflow;
    BOOL _enableNewClipMode;
    BOOL _enableEventThrough;
    BOOL _enableBackgroundShapeLayer;
    BOOL _enableFiberArch;
    BOOL _enableExposureUIMargin;
    BOOL _enableTextLayerRender;
    BOOL _enableTextLanguageAlignment;
    BOOL _enableXTextLayoutReused;
    BOOL _enableLynxResourceServiceLoaderInjection;
    BOOL _enableNewGesture;
    BOOL _cssAlignWithLegacyW3c;
    BOOL _imageMonitorEnabled;
    BOOL _devtoolEnabled;
    LynxContext *_lynxContext;
    id<LynxImageFetcher> _imageFetcher;
    id<LynxResourceFetcher> _resourceFetcher;
    id<LynxResourceFetcher> _resourceServiceFetcher;
    id<LynxListLayoutProtocol> _customizedListLayout;
    id<LynxScrollListener> _scrollListener;
    id<LynxScrollListener> _scrollFluencyMonitor;
    LynxEventHandler *_eventHandler;
    LynxEventEmitter *_eventEmitter;
    UIView *_rootView;
    LynxRootUI *_rootUI;
    LynxFontFaceContext *_fontFaceContext;
    LynxShadowNodeOwner *_nodeOwner;
    LynxTimingHandler *_timingHandler;
    id _lynxModuleExtraData;
    long long _shellPtr;
    LynxScreenMetrics *_screenMetrics;
    LynxUIExposure *_uiExposure;
    NSDictionary *_keyframesDict;
    NSDictionary *_contextDict;
    LynxGlobalObserver *_observer;
    NSString *_targetSdkVersion;
}

@property (weak, nonatomic) id<LynxImageFetcher> imageFetcher;
@property (weak, nonatomic) LynxEventHandler *eventHandler;
@property (weak, nonatomic) LynxEventEmitter *eventEmitter;
@property (readonly, weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) NSDictionary *keyframesDict;
@property (nonatomic) BOOL imageMonitorEnabled;
@property (nonatomic) BOOL devtoolEnabled;
@property (weak, nonatomic) LynxContext *lynxContext;
@property (weak, nonatomic) id<LynxImageFetcher> imageFetcher;
@property (weak, nonatomic) id<LynxResourceFetcher> resourceFetcher;
@property (retain, nonatomic) id<LynxResourceFetcher> resourceServiceFetcher;
@property (weak, nonatomic) id<LynxListLayoutProtocol> customizedListLayout;
@property (weak, nonatomic) id<LynxScrollListener> scrollListener;
@property (retain, nonatomic) id<LynxScrollListener> scrollFluencyMonitor;
@property (readonly, weak, nonatomic) LynxEventHandler *eventHandler;
@property (readonly, weak, nonatomic) LynxEventEmitter *eventEmitter;
@property (readonly, weak, nonatomic) UIView *rootView;
@property (weak, nonatomic) LynxRootUI *rootUI;
@property (weak, nonatomic) LynxFontFaceContext *fontFaceContext;
@property (weak, nonatomic) LynxShadowNodeOwner *nodeOwner;
@property (weak, nonatomic) LynxTimingHandler *timingHandler;
@property (weak, nonatomic) id lynxModuleExtraData;
@property (nonatomic) long long shellPtr;
@property (retain, nonatomic) LynxScreenMetrics *screenMetrics;
@property (readonly, nonatomic) LynxUIIntersectionObserverManager *intersectionManager;
@property (retain, nonatomic) LynxUIExposure *uiExposure;
@property (readonly, nonatomic) NSDictionary *keyframesDict;
@property (retain, nonatomic) NSDictionary *contextDict;
@property (retain, nonatomic) LynxGlobalObserver *observer;
@property (readonly, nonatomic) BOOL defaultOverflowVisible;
@property (readonly, nonatomic) BOOL defaultImplicitAnimation;
@property (readonly, nonatomic) BOOL enableTextRefactor;
@property (readonly, nonatomic) BOOL defaultAutoResumeAnimation;
@property (readonly, nonatomic) BOOL defaultEnableNewTransformOrigin;
@property (readonly, nonatomic) BOOL enableEventRefactor;
@property (readonly, nonatomic) BOOL enableA11yIDMutationObserver;
@property (readonly, nonatomic) BOOL enableTextOverflow;
@property (readonly, nonatomic) BOOL enableNewClipMode;
@property (readonly, nonatomic) BOOL enableEventThrough;
@property (readonly, nonatomic) BOOL enableBackgroundShapeLayer;
@property (readonly, nonatomic) BOOL enableFiberArch;
@property (readonly, nonatomic) BOOL enableExposureUIMargin;
@property (readonly, nonatomic) BOOL enableTextLayerRender;
@property (readonly, nonatomic) BOOL enableTextLanguageAlignment;
@property (readonly, nonatomic) BOOL enableXTextLayoutReused;
@property (readonly, nonatomic) BOOL enableLynxResourceServiceLoaderInjection;
@property (readonly, nonatomic) BOOL enableNewGesture;
@property (readonly, nonatomic) BOOL cssAlignWithLegacyW3c;
@property (readonly, nonatomic) NSString *targetSdkVersion;

- (id)contextDict;
- (void)setContextDict:(id)arg0;
- (BOOL)enableExposureUIMargin;
- (void)setLynxContext:(id)arg0;
- (id)lynxContext;
- (void)setImageFetcher:(id)arg0;
- (void)setResourceFetcher:(id)arg0;
- (id)resourceFetcher;
- (BOOL)isDev;
- (id)rootUI;
- (id)nodeOwner;
- (BOOL)enableEventThrough;
- (void)setEnableEventThrough:(BOOL)arg0;
- (id)fontFaceContext;
- (void)setFontFaceContext:(id)arg0;
- (id)targetSdkVersion;
- (id)screenMetrics;
- (void)didReceiveResourceError:(id)arg0 withSource:(id)arg1 type:(id)arg2;
- (BOOL)enableBackgroundShapeLayer;
- (BOOL)enableTextRefactor;
- (BOOL)enableNewClipMode;
- (long long)shellPtr;
- (BOOL)cssAlignWithLegacyW3c;
- (void)setTargetSdkVersion:(id)arg0;
- (id)getLynxRuntimeId;
- (id)intersectionManager;
- (BOOL)devtoolEnabled;
- (void)setDevtoolEnabled:(BOOL)arg0;
- (void)onGestureRecognized;
- (id)uiExposure;
- (id)getGenericResourceFetcher;
- (id)resourceServiceFetcher;
- (void)setResourceServiceFetcher:(id)arg0;
- (BOOL)enableLynxResourceServiceLoaderInjection;
- (void)setEnableLynxResourceServiceLoaderInjection:(BOOL)arg0;
- (id)keyframesDict;
- (void)onGestureRecognizedByUI:(id)arg0;
- (BOOL)enableEventRefactor;
- (void)reportLynxError:(id)arg0;
- (void)didReceiveException:(id)arg0 withMessage:(id)arg1 forUI:(id)arg2;
- (void)setTimingHandler:(id)arg0;
- (id)lynxModuleExtraData;
- (void)setLynxModuleExtraData:(id)arg0;
- (void)setNodeOwner:(id)arg0;
- (void)setShellPtr:(long long)arg0;
- (id)timingHandler;
- (void)updateScreenSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setCustomizedListLayout:(id)arg0;
- (void)setEnableNewGesture:(BOOL)arg0;
- (void)setDefaultOverflowVisible:(BOOL)arg0;
- (void)setEnableTextRefactor:(BOOL)arg0;
- (void)setEnableTextOverflow:(BOOL)arg0;
- (void)setEnableNewClipMode:(BOOL)arg0;
- (void)setDefaultImplicitAnimation:(BOOL)arg0;
- (void)setEnableEventRefactor:(BOOL)arg0;
- (void)setEnableA11yIDMutationObserver:(BOOL)arg0;
- (void)setEnableBackgroundShapeLayer:(BOOL)arg0;
- (void)setEnableExposureUIMargin:(BOOL)arg0;
- (void)setEnableTextLanguageAlignment:(BOOL)arg0;
- (void)setEnableXTextLayoutReused:(BOOL)arg0;
- (void)setEnableFiberArch:(BOOL)arg0;
- (void)setCSSAlignWithLegacyW3c:(BOOL)arg0;
- (void)setImageMonitorEnabled:(BOOL)arg0;
- (BOOL)enableTextLayerRender;
- (BOOL)enableFiberArch;
- (BOOL)enableTextLanguageAlignment;
- (BOOL)isTouchMoving;
- (BOOL)enableNewGesture;
- (id)scrollFluencyMonitor;
- (BOOL)defaultAutoResumeAnimation;
- (BOOL)defaultEnableNewTransformOrigin;
- (void)onPropsChangedByUI:(id)arg0;
- (void)addUIToExposedMap:(id)arg0;
- (BOOL)defaultImplicitAnimation;
- (void)removeUIFromExposedMap:(id)arg0;
- (void)didReceiveResourceError:(id)arg0;
- (void)addUIToExposedMap:(id)arg0 withUniqueIdentifier:(id)arg1 extraData:(id)arg2 useOptions:(id)arg3;
- (void)removeUIFromExposedMap:(id)arg0 withUniqueIdentifier:(id)arg1;
- (id)initWithScreenMetrics:(id)arg0;
- (void)removeUIFromIntersectionManager:(id)arg0;
- (void)setEnableTextLayerRender:(BOOL)arg0;
- (id)customizedListLayout;
- (void)setScrollFluencyMonitor:(id)arg0;
- (void)setRootUI:(id)arg0;
- (void)setScreenMetrics:(id)arg0;
- (void)setUiExposure:(id)arg0;
- (BOOL)defaultOverflowVisible;
- (BOOL)enableA11yIDMutationObserver;
- (BOOL)enableTextOverflow;
- (BOOL)enableXTextLayoutReused;
- (BOOL)imageMonitorEnabled;
- (void)setKeyframesDict:(id)arg0;
- (void)mergeKeyframesWithLynxKeyframes:(id)arg0 forKey:(id)arg1;
- (void)removeKeyframeWithRemovedName:(id)arg0;
- (id)eventHandler;
- (id)observer;
- (void).cxx_destruct;
- (int)instanceId;
- (void)reportError:(id)arg0;
- (void)setObserver:(id)arg0;
- (void)setEventHandler:(id)arg0;
- (id)rootView;
- (void)setRootView:(id)arg0;
- (id)scrollListener;
- (void)setScrollListener:(id)arg0;
- (id)eventEmitter;
- (void)setEventEmitter:(id)arg0;
- (id)imageFetcher;

@end
