//
//     Generated by private class-dump
//

@class UIView, HunterContext, NSString, HunterContainerMonitor, HunterPreserveDataManager, HunterPluginManager, HunterDynamicPatchModel, HunterJSBExecuter, NSObject, HunterContainerAbilityManager;
@protocol HunterContainerProtocol, HunterContainerLifeCycleProtocol, HunterControllerProtocol, OS_dispatch_semaphore;

@interface HunterContainerViewModel : NSObject <BDXContainerLifecycleProtocol, HunterContainerLifeCycleProtocol> {
    BOOL _hasLoadFinish;
    BOOL _hasSetupJsRuntime;
    BOOL _hasSendDestroyEvent;
    BOOL _isExistInCache;
    UIView<HunterContainerProtocol> *_containerView;
    id<HunterContainerLifeCycleProtocol> _lifeCycleDelegate;
    id<HunterControllerProtocol> _controllerDelegate;
    HunterContext *_context;
    HunterContainerMonitor *_monitor;
    HunterContainerAbilityManager *_abilityManager;
    HunterDynamicPatchModel *_dynamicPatchModel;
    HunterJSBExecuter *_JSBExecuter;
    HunterPluginManager *_pluginManager;
    HunterPreserveDataManager *_preserveDataManager;
    NSObject<OS_dispatch_semaphore> *_loadSchemaLatch;
    NSString *_rawSchema;
    NSString *_currentTheme;
    id /* block */ _preserveDataCompletion;
}

@property (weak, nonatomic) UIView<HunterContainerProtocol> *containerView;
@property (weak, nonatomic) id<HunterContainerLifeCycleProtocol> lifeCycleDelegate;
@property (weak, nonatomic) id<HunterControllerProtocol> controllerDelegate;
@property (retain, nonatomic) HunterContext *context;
@property (retain, nonatomic) HunterContainerMonitor *monitor;
@property (retain, nonatomic) HunterContainerAbilityManager *abilityManager;
@property (retain, nonatomic) HunterDynamicPatchModel *dynamicPatchModel;
@property (retain, nonatomic) HunterJSBExecuter *JSBExecuter;
@property (retain, nonatomic) HunterPluginManager *pluginManager;
@property (retain, nonatomic) HunterPreserveDataManager *preserveDataManager;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *loadSchemaLatch;
@property (copy, nonatomic) NSString *rawSchema;
@property (nonatomic) BOOL hasLoadFinish;
@property (nonatomic) BOOL hasSetupJsRuntime;
@property (nonatomic) BOOL hasSendDestroyEvent;
@property (nonatomic) BOOL isExistInCache;
@property (copy, nonatomic) NSString *currentTheme;
@property (copy, nonatomic) id /* block */ preserveDataCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)realBulletSchemaWithParams:(id)arg0;
+ (id)globalPropsWithParams:(id)arg0 customGlobalProps:(id)arg1;

- (void)container:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)container:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)containerWillDestory:(id)arg0;
- (void)containerDidPageReady:(id)arg0 sourceParam:(id)arg1;
- (void)containerOnShow:(id)arg0 sourceParam:(id)arg1;
- (void)containerOnHide:(id)arg0 sourceParam:(id)arg1;
- (BOOL)container:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(id)arg2;
- (void)container:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)containerOnTasmFinishByNative:(id)arg0;
- (void)containerWillStartLoading:(id)arg0;
- (void)containerDidStartLoading:(id)arg0;
- (void)container:(id)arg0 didStartLoadingSuccessWithUrl:(id)arg1;
- (void)container:(id)arg0 didStartLoadingFailedWithUrl:(id)arg1;
- (void)container:(id)arg0 didStartFetchResourceWithURL:(id)arg1;
- (void)container:(id)arg0 didFetchedResource:(id)arg1 error:(id)arg2;
- (void)containerDidFirstScreen:(id)arg0;
- (void)containerDidUpdate:(id)arg0;
- (void)container:(id)arg0 didRecieveError:(id)arg1;
- (void)container:(id)arg0 didReceivePerformance:(id)arg1;
- (void)container:(id)arg0 updateTitle:(id)arg1;
- (void)containerDidClose:(id)arg0;
- (void)container:(id)arg0 didStartAnimationWithDuration:(double)arg1 startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg3;
- (void)container:(id)arg0 didEndAnimationWithDuration:(double)arg1 startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg3;
- (void)containerDidPageUpdate:(id)arg0;
- (void)containerDidConstructJSRuntime:(id)arg0;
- (void)container:(id)arg0 didReceivePerformanceFirstLoad:(id)arg1 bulletPerfDict:(id)arg2;
- (void)container:(id)arg0 didFallBackWithURL:(id)arg1;
- (void)container:(id)arg0 onSetupLynxInfo:(id)arg1 bulletInfo:(id)arg2;
- (void)container:(id)arg0 onUpdateLynxInfo:(id)arg1 bulletInfo:(id)arg2;
- (id)lifeCycleDelegate;
- (void)setLifeCycleDelegate:(id)arg0;
- (id)dynamicPatchModel;
- (void)setDynamicPatchModel:(id)arg0;
- (id)preserveDataManager;
- (void)bdxPushViewController:(id)arg0 animated:(BOOL)arg1;
- (void)bdxPresentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setPluginManager:(id)arg0;
- (void)setPreserveDataManager:(id)arg0;
- (void)loadFailedWithURL:(id)arg0 error:(id)arg1;
- (void)setHasLoadFinish:(BOOL)arg0;
- (BOOL)hasLoadFinish;
- (id)abilityManager;
- (void)setAbilityManager:(id)arg0;
- (void)setCurrentTheme:(id)arg0;
- (void)setupHunterDefaultPlugins;
- (void)doUnlockRender;
- (void)doLockRender;
- (void)setRawSchema:(id)arg0;
- (void)resetBdxContext;
- (void)setIsExistInCache:(BOOL)arg0;
- (id)JSBExecuter;
- (void)setJSBExecuter:(id)arg0;
- (void)injectDictIntoClientDataByFlatMode:(id)arg0 withViewModel:(id)arg1;
- (void)injectDictIntoClientData:(id)arg0 forKey:(id)arg1 withViewModel:(id)arg2;
- (BOOL)hasSetupJsRuntime;
- (void)setPreserveDataCompletion:(id /* block */)arg0;
- (id)initWithDynamicPatchModel:(id)arg0;
- (void)processDefaultBulletStyleWithSchema:(id)arg0;
- (BOOL)hasSendDestroyEvent;
- (void)setHasSendDestroyEvent:(BOOL)arg0;
- (BOOL)isExistInCache;
- (id /* block */)preserveDataCompletion;
- (void)setHasSetupJsRuntime:(BOOL)arg0;
- (id)initWithDynamicPatchModel:(id)arg0 context:(id)arg1;
- (id)loadSchemaLatch;
- (void)dataProcessBeforeBulletStart;
- (id)processedSchemaByAnotherAbilityManager:(id)arg0;
- (id)getContainerData;
- (void)injectDictIntoClientsDataByMergeMode:(id)arg0;
- (void)injectDictIntoStorageData:(id)arg0;
- (void)setLoadSchemaLatch:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (id)monitor;
- (void)setContext:(id)arg0;
- (void)setMonitor:(id)arg0;
- (id)rawSchema;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id)context;
- (void)setControllerDelegate:(id)arg0;
- (id)controllerDelegate;
- (id)currentTheme;
- (id)pluginManager;
- (void)updateWithViewModel:(id)arg0;
- (BOOL)canRender;

@end