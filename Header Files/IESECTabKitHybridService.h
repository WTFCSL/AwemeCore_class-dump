//
//     Generated by private class-dump
//

@class NSString, IESECServiceProxy, NSArray, NSHashTable, NSMutableArray, NSMutableDictionary;
@protocol IESECTabKitMonitorService, IESECTabKitEventSubscriber, IESECTabKitAbilityService, IESECTabKitEventService, IESECTabKitDataService;

@interface IESECTabKitHybridService : IESECTabKitService <IESECTabKitTabElementDelegate, IESECTabKitPuzzleTabDelegate, IESECTabKitHybridService> {
    NSMutableArray *_bridges;
    NSHashTable *_hybridElements;
    NSMutableDictionary *_tabElementDict;
    IESECServiceProxy<IESECTabKitMonitorService> *_monitorService;
    IESECServiceProxy<IESECTabKitEventService, IESECTabKitEventSubscriber> *_eventService;
    IESECServiceProxy<IESECTabKitDataService> *_dataService;
    IESECServiceProxy<IESECTabKitAbilityService> *_abilityService;
}

@property (retain, nonatomic) IESECServiceProxy<IESECTabKitMonitorService> *monitorService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitEventService, IESECTabKitEventSubscriber> *eventService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitAbilityService> *abilityService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *bridges;

- (void)sendEvent:(id)arg0 params:(id)arg1;
- (void)registerBridge:(id)arg0;
- (id)monitorService;
- (void)setMonitorService:(id)arg0;
- (id)dataService;
- (void)setDataService:(id)arg0;
- (id)abilityService;
- (id)tabElementForTabModel:(id)arg0;
- (id)updateHybridContainerUrl:(id)arg0 extraParams:(id)arg1;
- (void)registerCommonBridges;
- (void)registerHybridElement:(id)arg0;
- (id)createTabElementWithModel:(id)arg0;
- (id)createTabElementWithModel:(id)arg0 isPreload:(BOOL)arg1;
- (id)scrollViewForTabModel:(id)arg0;
- (id)initialDataWithCurrentTab:(id)arg0 bottomTab:(id)arg1;
- (id)initialDataWithCurrentTab:(id)arg0 bottomTab:(id)arg1 extra:(id)arg2;
- (id)rootGlobalPropsWithURL:(id)arg0 initialData:(id)arg1;
- (void)checkFirstScreenTabDataConsistencyWithBFFModel:(id)arg0;
- (id)bridges;
- (void)setAbilityService:(id)arg0;
- (BOOL)checkBridgeEnvWithCallBack:(id /* block */)arg0;
- (long long)updateTabModel:(long long)arg0 bundleUrl:(id)arg1 query:(id)arg2;
- (id)formatTabsInfoFromTabsModel:(id)arg0;
- (id)tabElementForTabID:(unsigned long long)arg0;
- (id)tabElementKey:(id)arg0;
- (id)p_createTabElementForModel:(id)arg0;
- (void)reloadTabElement:(id)arg0 withModel:(id)arg1 isPreload:(BOOL)arg2;
- (void)configTabElement:(id)arg0 withModel:(id)arg1;
- (BOOL)shouldRequestTabData:(id)arg0;
- (void)updateTabModel:(id)arg0 withResponse:(id)arg1;
- (void)requestTabDataWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)configPuzzleTabElement:(id)arg0 withModel:(id)arg1;
- (void)configHybridTabElement:(id)arg0 withModel:(id)arg1;
- (void)tabElement:(id)arg0 visibilityDidChange:(BOOL)arg1;
- (void)tabElementHybridViewDidCreate:(id)arg0;
- (void)tabElement:(id)arg0 hybridViewDidFinishLoadWithURL:(id)arg1 error:(id)arg2;
- (void)tabElement:(id)arg0 hybridViewDidScroll:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)setEventService:(id)arg0;
- (id)eventService;

@end
