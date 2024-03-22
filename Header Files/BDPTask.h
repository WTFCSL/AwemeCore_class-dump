//
//     Generated by private class-dump
//

@class UIView, NSString, UIImage, BDPUniqueID, WKProcessPool, NSDictionary, UIViewController, BDPAppConfig, BDPBasicAppTask;
@protocol BDPBaseVCProtocol, BDPRuntimeServiceLoader, BDPEngineProtocol, BDPMessengerPrototol, BDPlatformContainerProtocol, BDPLoadInstanceProtocol, BDPBusinessEngineProtocol, BDPBusinessEngineMetricsProtocol;

@interface BDPTask : NSObject <BDPReachabilityStateDelegate, BDPIndustrySDKManagerClient> {
    BOOL _debugRuntime;
    BOOL _frontendDebugRuntime;
    BDPUniqueID *_uniqueID;
    BDPAppConfig *_config;
    WKProcessPool *_processPool;
    BDPBasicAppTask *_customTask;
    id<BDPBusinessEngineProtocol, BDPMessengerPrototol, BDPBusinessEngineMetricsProtocol> _engine;
    id<BDPEngineProtocol> _renderEngine;
    UIViewController<BDPlatformContainerProtocol, BDPBaseVCProtocol> *_containerVC;
    id<BDPLoadInstanceProtocol> _loadInstance;
    NSString *_lastPagePath;
    NSString *_lastPageQuery;
    UIImage *_lastScreenShootImage;
    id<BDPRuntimeServiceLoader> _runtimeServiceLoader;
    UIView *_outerContainer;
    UIView *_outerSubContainer;
    UIViewController *_outerController;
    long long _toolbarStyle;
    NSDictionary *_toolbarVisibility;
}

@property (nonatomic, getter=isHideShareMenu) BOOL hideShareMenu;
@property (nonatomic, getter=isHighPerformance) BOOL highPerformance;
@property (retain, nonatomic) BDPAppConfig *config;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) WKProcessPool *processPool;
@property (retain, nonatomic) BDPBasicAppTask *customTask;
@property (retain, nonatomic) id<BDPBusinessEngineProtocol, BDPMessengerPrototol, BDPBusinessEngineMetricsProtocol> engine;
@property (weak, nonatomic) id<BDPEngineProtocol> renderEngine;
@property (weak, nonatomic) UIViewController<BDPlatformContainerProtocol, BDPBaseVCProtocol> *containerVC;
@property (retain, nonatomic) id<BDPLoadInstanceProtocol> loadInstance;
@property (nonatomic, getter=isDebugRuntime) BOOL debugRuntime;
@property (nonatomic) BOOL frontendDebugRuntime;
@property (copy, nonatomic) NSString *lastPagePath;
@property (copy, nonatomic) NSString *lastPageQuery;
@property (retain, nonatomic) UIImage *lastScreenShootImage;
@property (retain, nonatomic) id<BDPRuntimeServiceLoader> runtimeServiceLoader;
@property (weak, nonatomic) UIView *outerContainer;
@property (weak, nonatomic) UIView *outerSubContainer;
@property (weak, nonatomic) UIViewController *outerController;
@property (nonatomic) long long toolbarStyle;
@property (copy, nonatomic) NSDictionary *toolbarVisibility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContainerVC:(id)arg0;
- (id)containerVC;
- (void)setRenderEngine:(id)arg0;
- (id)renderEngine;
- (id)loadInstance;
- (void)setLoadInstance:(id)arg0;
- (void)setDebugRuntime:(BOOL)arg0;
- (id)customTask;
- (void)setCustomTask:(id)arg0;
- (BOOL)isHideShareMenu;
- (void)setHideShareMenu:(BOOL)arg0;
- (void)updateWithModel:(id)arg0 configDict:(id)arg1;
- (void)updateConfigJSON:(id)arg0 configDict:(id)arg1;
- (BOOL)isDebugRuntime;
- (id)runtimeServiceLoader;
- (void)setRuntimeServiceLoader:(id)arg0;
- (id)toolbarVisibility;
- (void)setToolbarVisibility:(id)arg0;
- (void)setOuterContainer:(id)arg0;
- (id)outerContainer;
- (id)lastPagePath;
- (id)lastPageQuery;
- (void)setLastPageQuery:(id)arg0;
- (void)setLastPagePath:(id)arg0;
- (id)initWithModel:(id)arg0 configDict:(id)arg1 schema:(id)arg2;
- (id)lastScreenShootImage;
- (id)outerSubContainer;
- (void)setOuterController:(id)arg0;
- (void)setOuterSubContainer:(id)arg0;
- (void)setFrontendDebugRuntime:(BOOL)arg0;
- (BOOL)frontendDebugRuntime;
- (void)setLastScreenShootImage:(id)arg0;
- (BOOL)isHighPerformance;
- (void)setHighPerformance:(BOOL)arg0;
- (id)outerController;
- (void)updateRefererConfig:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)config;
- (id)engine;
- (void)setProcessPool:(id)arg0;
- (void)onReachabilityChange:(unsigned long long)arg0;
- (long long)toolbarStyle;
- (id)processPool;
- (void)setToolbarStyle:(long long)arg0;
- (void)dealloc;
- (void)setEngine:(id)arg0;

@end