//
//     Generated by private class-dump
//

@class NSHashTable, HTSEventContext, NSString, NSArray, NSSet, NSMutableDictionary, IESLiveBootLoaderTracker, NSDictionary, NSMutableArray, IESLiveComponentLoadOptimezer, IESLiveComponentLoadStrategyManager, IESLiveComponentContext;
@protocol IESLiveBootableModel, IESLiveComponentAttacher, IESLiveBootloaderAdapter, IESLiveTemplateParserProtocol;

@interface IESLiveComponentBootLoader : NSObject <IESLiveComponentProvider, IESLiveComponentBootLoaderProtocol, IESLiveBootloader> {
    BOOL _canceled;
    BOOL _enableInitializeSeperateStep;
    BOOL _booted;
    BOOL _appeared;
    BOOL _installed;
    id<IESLiveBootableModel> _room;
    IESLiveComponentContext *_componentContext;
    HTSEventContext *_trackContext;
    IESLiveBootLoaderTracker *_tracker;
    NSString *_entry;
    long long _strategy;
    long long _realStrategy;
    long long _mode;
    NSArray *_customScenes;
    NSSet *_customWhiteList;
    IESLiveComponentLoadOptimezer *_loadOptimezer;
    unsigned long long _installState;
    id<IESLiveBootloaderAdapter> _bootloaderAdapter;
    IESLiveComponentLoadStrategyManager *_loadStrategyManager;
    id<IESLiveTemplateParserProtocol> _templateParser;
    NSMutableArray *_deallocBlocks;
    NSMutableArray *_closeBlocks;
}

@property (readonly, nonatomic) NSMutableDictionary *componentMaps;
@property (retain, nonatomic) NSDictionary *rootConfig;
@property (readonly, nonatomic) NSMutableArray *modules;
@property (readonly, nonatomic) NSHashTable *loadedModuleNames;
@property (readonly, nonatomic) NSMutableDictionary *componentModuleMap;
@property (readonly, nonatomic) NSMutableArray *components;
@property (readonly, nonatomic) NSHashTable *loadedComponentNames;
@property (readonly, nonatomic) NSMutableArray *basicComponents;
@property (readonly, nonatomic) NSMutableArray *importantComponents;
@property (readonly, nonatomic) NSMutableArray *normalComponents;
@property (readonly, nonatomic) NSMutableArray *downgrageableComponents;
@property (readonly, nonatomic) NSMutableArray *registeredComponents;
@property (readonly, nonatomic) id<IESLiveComponentAttacher> attacher;
@property (nonatomic) BOOL initialized;
@property (readonly, nonatomic) NSMutableArray *bootPrepareCallBack;
@property (readonly, nonatomic) NSMutableArray *bootCompletionCallBack;
@property (readonly, nonatomic) NSMutableDictionary *dataBlocks;
@property (nonatomic) struct __CFRunLoopObserver { } *observerRef;
@property (nonatomic) BOOL machineBooted;
@property (nonatomic) BOOL initialized;
@property (readonly, nonatomic) NSMutableArray *machineQueue;
@property (retain, nonatomic) id<IESLiveBootableModel> room;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL booted;
@property (retain, nonatomic) IESLiveBootLoaderTracker *tracker;
@property (nonatomic) BOOL canceled;
@property (retain, nonatomic) NSMutableArray *deallocBlocks;
@property (retain, nonatomic) NSMutableArray *closeBlocks;
@property (copy, nonatomic) NSString *entry;
@property (nonatomic) long long strategy;
@property (nonatomic) BOOL appeared;
@property (nonatomic) unsigned long long installState;
@property (nonatomic) BOOL installed;
@property (nonatomic) long long realStrategy;
@property (nonatomic) long long mode;
@property (copy, nonatomic) NSArray *customScenes;
@property (copy, nonatomic) NSSet *customWhiteList;
@property (retain, nonatomic) IESLiveComponentLoadOptimezer *loadOptimezer;
@property (nonatomic) BOOL enableInitializeSeperateStep;
@property (retain, nonatomic) id<IESLiveBootloaderAdapter> bootloaderAdapter;
@property (retain, nonatomic) IESLiveComponentLoadStrategyManager *loadStrategyManager;
@property (readonly, nonatomic) id<IESLiveTemplateParserProtocol> templateParser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bootloader;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (id)attacher;
- (void)setCustomScenes:(id)arg0;
- (id)customScenes;
- (id)initWithRoom:(id)arg0 componentContext:(id)arg1 trackCotext:(id)arg2;
- (void)registerBootCompletion:(id /* block */)arg0;
- (void)installForRoom:(id)arg0;
- (void)cancelAsyncComponentsLoading;
- (id)deallocBlocks;
- (void)setDeallocBlocks:(id)arg0;
- (id)templateParser;
- (id)templateParser;
- (void)hideComponents;
- (void)showComponents;
- (BOOL)couldUnInstallAtLeastPriority:(long long)arg0;
- (void)registerDataReceiver:(long long)arg0 receiver:(id /* block */)arg1;
- (void)setEnableInitializeSeperateStep:(BOOL)arg0;
- (id)commonTrackContext:(BOOL)arg0;
- (void)preloadInstallForRoom:(id)arg0;
- (void)interfaceOrientationTransitioning:(long long)arg0;
- (void)interfaceOrientationTransitionBegin:(long long)arg0;
- (void)interfaceOrientationTransitionEnd:(long long)arg0;
- (void)setLoadStrategyManager:(id)arg0;
- (id)loadStrategyManager;
- (void)setCustomWhiteList:(id)arg0;
- (void)unInstall;
- (id)bootloaderAdapter;
- (void)setBootloaderAdapter:(id)arg0;
- (id)p_source;
- (id)p_scene;
- (BOOL)initialFinishedWithWithState:(unsigned long long)arg0;
- (void)p_prepare;
- (void)initializeComponentWithState:(unsigned long long)arg0;
- (BOOL)enableInitializeSeperateStep;
- (id)machineQueue;
- (id)asyncOperations;
- (void)fireBoot:(id)arg0 async:(BOOL)arg1 stepByStep:(BOOL)arg2 finished:(id /* block */)arg3;
- (void)setStartLoadTimeStamp:(double)arg0;
- (id)opComponentsForLevel:(long long)arg0;
- (id)componentStringWithLevel:(long long)arg0;
- (double)startLoadTimeStamp;
- (void)p_notifyComponents:(id)arg0 forEvent:(long long)arg1 subEvent:(long long)arg2;
- (id)componentModuleMap;
- (id)loadOptimezer;
- (id)componentMaps;
- (id)basicComponents;
- (id)importantComponents;
- (id)normalComponents;
- (id)downgrageableComponents;
- (void)performSelector:(SEL)arg0 forTarget:(id)arg1 atSubEvent:(long long)arg2 isComponent:(BOOL)arg3;
- (void)p_mount:(long long)arg0;
- (void)p_unMount:(long long)arg0;
- (void)p_backupUnmout:(long long)arg0;
- (void)p_destroy:(long long)arg0;
- (BOOL)p_couldUnInstallAtLeastPriority:(long long)arg0;
- (void)p_showComponents;
- (void)p_hideComponents;
- (void)p_interfaceOrientationTransitionBegin:(long long)arg0;
- (void)p_interfaceOrientationTransitionEnd:(long long)arg0;
- (void)p_interfaceOrientationTransitioning:(long long)arg0;
- (void)p_viewWillAppear:(long long)arg0;
- (void)p_viewDidAppear:(long long)arg0;
- (void)p_viewWillDisappear:(long long)arg0;
- (void)p_viewDidDisappear:(long long)arg0;
- (void)p_cycleClear;
- (id)basicComponentString;
- (id)importantComponentString;
- (id)normalComponentString;
- (id)downgrageableComponentString;
- (id)rootConfig;
- (id)p_componentsConfigFromPlist;
- (void)setRootConfig:(id)arg0;
- (id)loadInitializer;
- (void)p_initializeWithState:(unsigned long long)arg0;
- (id)dynamicFilter;
- (void)resetComponents:(id)arg0 sortedComponents:(id)arg1;
- (void)sortComponentsIfNeeded;
- (void)p_processComponent:(id)arg0 forModule:(id)arg1 shouldWhiteList:(BOOL)arg2 fromTemplate:(BOOL)arg3;
- (void)p_initializeModuleAndComponentForScene:(id)arg0 shouldWhiteList:(BOOL)arg1;
- (id)p_sceneForScene:(long long)arg0;
- (void)p_initializeInjectedComponent;
- (void)reallyDistributeAllComponents;
- (void)realInitInsideComponentWithName:(id)arg0;
- (void)initializeOuterComponentInPreload:(BOOL)arg0;
- (BOOL)basicStageLoadWithComponent:(id)arg0;
- (id)realInitOuterComponent:(id)arg0;
- (id)levelNumberWithComponent:(id)arg0;
- (id)loadedComponentNames;
- (id)p_initializeComponentWithShortName:(id)arg0;
- (id)p_containerForLevel:(long long)arg0;
- (id)p_initializeComponentWithFullName:(id)arg0;
- (id)p_role;
- (id)p_stage;
- (id)loadedModuleNames;
- (id)p_initializeModuleWithName:(id)arg0;
- (id)customWhiteList;
- (id)p_initializeComponentWithName:(id)arg0 isFullName:(BOOL)arg1;
- (void)realInitOuterComponents:(id)arg0;
- (id)stringWithComponents:(id)arg0;
- (void)p_bootComponentsIfNeed;
- (void)p_initClear;
- (void)p_machineClear;
- (id)bootPrepareCallBack;
- (id)bootCompletionCallBack;
- (void)p_registerPrepareBlock:(id /* block */)arg0;
- (void)p_triggerBootPrepareBlock;
- (void)p_registerBootCompletion:(id /* block */)arg0;
- (void)p_triggerBootCompletion;
- (void)p_registerDataReceiver:(long long)arg0 receiver:(id /* block */)arg1;
- (void)p_triggerDataReceiverBlock;
- (void)setRealStrategy:(long long)arg0;
- (void)setTimeoutBooted:(BOOL)arg0;
- (BOOL)timeoutBooted;
- (void)setRunloopBooted:(BOOL)arg0;
- (void)runLoopFireBoot:(id)arg0 async:(BOOL)arg1 stepByStep:(BOOL)arg2;
- (void)setObserverRef:(struct __CFRunLoopObserver { } *)arg0;
- (struct __CFRunLoopObserver { } *)observerRef;
- (BOOL)runloopBooted;
- (void)removeRunLoopObserver:(id)arg0;
- (void)registerCloseBlock:(id /* block */)arg0;
- (void)registerDeallocBlock:(id /* block */)arg0;
- (void)mainRunLoopObserverSchedule;
- (void)asyncFireBoot:(id)arg0;
- (void)asyncOperationSchedule;
- (BOOL)machineBooted;
- (void)setMachineBooted:(BOOL)arg0;
- (id)generateMachineForLevel:(long long)arg0;
- (void)setLoadOptimezer:(id)arg0;
- (void)allMachineMakeFirstStep;
- (void)allMachineFinished;
- (void)p_bootStateMachineIfNeed;
- (void)setCloseBlocks:(id)arg0;
- (void)paraInit;
- (void)registerPrepareBlock:(id /* block */)arg0;
- (void)setBooted:(BOOL)arg0;
- (void)realInstallForRoom:(id)arg0;
- (long long)realStrategy;
- (BOOL)booted;
- (id)closeBlocks;
- (void)interfaceOrientationChange:(long long)arg0;
- (BOOL)initialized;
- (id)components;
- (id)modules;
- (id)timer;
- (void)bootstrap;
- (void)setInitialized:(BOOL)arg0;
- (long long)strategy;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)mode;
- (void)setEntry:(id)arg0;
- (void)setMode:(long long)arg0;
- (BOOL)canceled;
- (void)removeTimer:(id)arg0;
- (id)entry;
- (void)setTimer:(id)arg0;
- (void)viewDidAppear;
- (void)setCanceled:(BOOL)arg0;
- (void)prepareForReuse;
- (void)dealloc;
- (void)viewWillAppear;
- (void)setStrategy:(long long)arg0;
- (BOOL)installed;
- (void)setInstallState:(unsigned long long)arg0;
- (unsigned long long)installState;
- (void)cancelAsyncOperations;
- (id)room;
- (void)setRoom:(id)arg0;
- (BOOL)appeared;
- (void)setAppeared:(BOOL)arg0;
- (void)setInstalled:(BOOL)arg0;
- (void)viewDidDisappear;
- (void)prepareForClose;
- (void)p_clear;
- (id)registeredComponents;
- (id)dataBlocks;
- (void)viewWillDisappear;
- (void)p_initialize;

@end
