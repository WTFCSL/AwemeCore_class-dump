//
//     Generated by private class-dump
//

@class IESECTabKitBFFController, IESECServiceProxy, NSString;
@protocol IESECShopLayoutService, IESECShopStateService, IESECShopDataService, IESECShopForwardCoService, IESECShopEventService;

@interface IESECShopTabKitController : IESECShopControllerV2 <IESECTabKitBFFControllerDelegate, IESECShopEventSubscriber, IESECShopTabKitController> {
    unsigned long long _finalCloseAction;
    IESECTabKitBFFController *_tabKitVC;
    IESECServiceProxy<IESECShopDataService> *_dataService;
    IESECServiceProxy<IESECShopStateService> *_stateService;
    IESECServiceProxy<IESECShopEventService> *_eventService;
    IESECServiceProxy<IESECShopLayoutService> *_layoutService;
    IESECServiceProxy<IESECShopForwardCoService> *_forwardCoService;
}

@property (retain, nonatomic) IESECTabKitBFFController *tabKitVC;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *stateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopEventService> *eventService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardCoService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBindings;
- (id)dataService;
- (void)setDataService:(id)arg0;
- (id)tabKitVC;
- (void)configTabKitUI;
- (BOOL)tabKitController:(id)arg0 splitSlideContainer:(id)arg1 panGestureShouldBegin:(id)arg2;
- (void)tabKitController:(id)arg0 splitSlideContainerDidScroll:(id)arg1;
- (double)tabKitController:(id)arg0 splitSlideContainerFinalOffset:(id)arg1;
- (BOOL)tabKitController:(id)arg0 splitSlideContainerShouldPauseVideo:(id)arg1;
- (BOOL)tabKitController:(id)arg0 splitSlideContainer:(id)arg1 tapGestureHitDismiss:(id)arg2;
- (void)tabKitController:(id)arg0 didInterceptCloseAction:(unsigned long long)arg1 tabItem:(id)arg2;
- (void)tabKitController:(id)arg0 willDisplayTopTabItem:(id)arg1;
- (void)tabKitController:(id)arg0 willDisplayBottomTabItem:(id)arg1;
- (void)tabKitController:(id)arg0 didTapAtTopTabItem:(id)arg1;
- (void)tabKitController:(id)arg0 didSelectTopTabItem:(id)arg1;
- (void)tabKitController:(id)arg0 didTapAtBottomTabItem:(id)arg1;
- (void)tabKitController:(id)arg0 didSelectBottomTabItem:(id)arg1;
- (BOOL)tabKitController:(id)arg0 canAnchorToTargetTabItem:(id)arg1;
- (void)setTabKitVC:(id)arg0;
- (void)didSetPageContextV2:(id)arg0;
- (void)controllerDidLoad;
- (void)didSetControllerManagerV2:(id)arg0;
- (void)iesecshop_containerDidMoveToParentViewController:(id)arg0;
- (id)forwardCoService;
- (id)layoutService;
- (id)stateService;
- (void)setStateService:(id)arg0;
- (void)setLayoutService:(id)arg0;
- (void)setForwardCoService:(id)arg0;
- (id)generateInterceptionStorageKey:(id)arg0 type:(long long)arg1;
- (void)adTrackClickReturn;
- (void)trackCloseStorePage:(unsigned long long)arg0;
- (void)doInterceptAction:(unsigned long long)arg0;
- (id)interceptJumpURLExtraParams:(unsigned long long)arg0;
- (id)tabkitParameters;
- (void).cxx_destruct;
- (void)setEventService:(id)arg0;
- (id)eventService;
- (void)setupViews;

@end
