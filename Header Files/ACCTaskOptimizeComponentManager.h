//
//     Generated by private class-dump
//

@class NSMapTable, NSMutableDictionary, NSString, NSSet, NSMutableArray;
@protocol ACCComponentLogDelegate, ACCComponentManagerLoadPhaseDelegate;

@interface ACCTaskOptimizeComponentManager : NSObject <ACCComponentManager> {
    BOOL _isStartMonitorMemory;
    BOOL _forceLoaded;
    id<ACCComponentLogDelegate> _delegate;
    id<ACCComponentManagerLoadPhaseDelegate> _loadPhaseDelegate;
    NSMutableArray *_loadedComponents;
    NSMutableDictionary *_loadPhaseMap;
    NSMapTable *_lifeCycleBindings;
    NSMutableArray *_mountCompletions;
    NSMutableArray *_loadViewCompletions;
    NSMutableArray *_allComponents;
    unsigned long long _mountState;
    unsigned long long _viewState;
    NSString *_memoryContext;
    unsigned long long _currentLoadPhase;
    NSSet *_allowListSelectorWhenUnmounted;
}

@property (retain, nonatomic) NSMutableArray *loadedComponents;
@property (retain, nonatomic) NSMutableDictionary *loadPhaseMap;
@property (retain, nonatomic) NSMapTable *lifeCycleBindings;
@property (retain, nonatomic) NSMutableArray *mountCompletions;
@property (retain, nonatomic) NSMutableArray *loadViewCompletions;
@property (retain, nonatomic) NSMutableArray *allComponents;
@property (nonatomic) unsigned long long mountState;
@property (nonatomic) unsigned long long viewState;
@property (nonatomic) BOOL isStartMonitorMemory;
@property (copy, nonatomic) NSString *memoryContext;
@property (nonatomic) BOOL forceLoaded;
@property (nonatomic) unsigned long long currentLoadPhase;
@property (retain, nonatomic) NSSet *allowListSelectorWhenUnmounted;
@property (weak, nonatomic) id<ACCComponentLogDelegate> delegate;
@property (weak, nonatomic) id<ACCComponentManagerLoadPhaseDelegate> loadPhaseDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForViewDidLoad;
- (void)prepareForWillAppear;
- (void)prepareForDidAppear;
- (void)prepareForWillDisappear;
- (void)prepareForDidDisappear;
- (void)prepareForUnmount;
- (void)unmountComponents;
- (void)loadComponentOfPhase:(unsigned long long)arg0;
- (void)registerMountCompletion:(id /* block */)arg0;
- (void)setLoadPhaseDelegate:(id)arg0;
- (void)forceLoadComponentsWhenInteracting;
- (void)registerLoadViewCompletion:(id /* block */)arg0;
- (id)memoryContext;
- (void)setLoadedComponents:(id)arg0;
- (id)loadedComponents;
- (id)loadPhaseMap;
- (id)lifeCycleBindings;
- (unsigned long long)currentLoadPhase;
- (void)setCurrentLoadPhase:(unsigned long long)arg0;
- (unsigned long long)mountState;
- (void)performComponent:(id)arg0 selector:(SEL)arg1;
- (id)mountCompletions;
- (id)allowListSelectorWhenUnmounted;
- (id)loadPhaseDelegate;
- (void)loadComponentsView;
- (void)performLifeCycleSelector:(SEL)arg0;
- (BOOL)shouldPerformLifeCycleSelInRunloop:(SEL)arg0;
- (void)setMountState:(unsigned long long)arg0;
- (id)loadViewCompletions;
- (id)loadPhases;
- (void)setForceLoaded:(BOOL)arg0;
- (void)bindLife:(id)arg0 with:(id)arg1;
- (void)prepareApplicationDidChangeStatusBarOrientation;
- (void)prepareForViewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)prepareForReceiveMemoryWarningWithType:(unsigned long long)arg0;
- (void)setLoadPhaseMap:(id)arg0;
- (void)setLifeCycleBindings:(id)arg0;
- (void)setMountCompletions:(id)arg0;
- (void)setLoadViewCompletions:(id)arg0;
- (void)setAllComponents:(id)arg0;
- (BOOL)isStartMonitorMemory;
- (void)setIsStartMonitorMemory:(BOOL)arg0;
- (void)setMemoryContext:(id)arg0;
- (BOOL)forceLoaded;
- (void)setAllowListSelectorWhenUnmounted:(id)arg0;
- (void)addComponent:(id)arg0;
- (id)allComponents;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (unsigned long long)viewState;
- (void)setViewState:(unsigned long long)arg0;

@end
