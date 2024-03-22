//
//     Generated by private class-dump
//

@class IESECPagerView, IESECServiceProxy, IESECStoreTabElementBuilder, NSString, IESECTabKitDIContext;
@protocol IESECTabKitHybridService, IESECTabKitEventService, IESECShopForwardCoService, IESECTabKitEventSubscriber, IESECTabKitDataService, IESECShopThemeService, IESECTabKitLayoutService, IESECShopLayoutService, IESECShopStateService, IESECShopDataService, IESECTabKitMonitorService, IESECShopEventService;

@interface IESECShopTKTabContentComponent : NSObject <IESECPagerViewDelegate, IESECPagerViewDataSource, IESECShopEventSubscriber, IESECShopTKTabContentComponent> {
    BOOL _switchingTabContents;
    IESECTabKitDIContext *_tabKitCtx;
    IESECPagerView *_pagerView;
    IESECStoreTabElementBuilder *_tabElementBuilder;
    IESECServiceProxy<IESECTabKitDataService> *_dataService;
    IESECServiceProxy<IESECTabKitLayoutService> *_layoutService;
    IESECServiceProxy<IESECTabKitHybridService> *_hybridService;
    IESECServiceProxy<IESECTabKitMonitorService> *_monitorService;
    IESECServiceProxy<IESECTabKitEventService, IESECTabKitEventSubscriber> *_eventService;
    IESECServiceProxy<IESECShopDataService> *_shopDataService;
    IESECServiceProxy<IESECShopStateService> *_shopStateService;
    IESECServiceProxy<IESECShopEventService> *_shopEventService;
    IESECServiceProxy<IESECShopThemeService> *_shopThemeService;
    IESECServiceProxy<IESECShopLayoutService> *_shopLayoutService;
    IESECServiceProxy<IESECShopForwardCoService> *_shopForwardCoService;
}

@property (retain, nonatomic) IESECPagerView *pagerView;
@property (retain, nonatomic) IESECStoreTabElementBuilder *tabElementBuilder;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitHybridService> *hybridService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitMonitorService> *monitorService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitEventService, IESECTabKitEventSubscriber> *eventService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *shopDataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *shopStateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopEventService> *shopEventService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopThemeService> *shopThemeService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *shopLayoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *shopForwardCoService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECTabKitDIContext *tabKitCtx;

+ (unsigned long long)componentType;

- (id)monitorService;
- (void)setMonitorService:(id)arg0;
- (void)componentDidLoad;
- (void)setupBindings;
- (void)componentDidAppear:(BOOL)arg0;
- (void)componentDidDisappear:(BOOL)arg0;
- (id)pagerView;
- (void)setPagerView:(id)arg0;
- (id)dataService;
- (void)setDataService:(id)arg0;
- (id)hybridService;
- (void)setHybridService:(id)arg0;
- (void)pagerViewDidLayoutSubviews:(id)arg0;
- (void)pagerViewDidReload:(id)arg0;
- (double)heightForHeaderViewInPagerView:(id)arg0;
- (double)heightForTabbarViewInPagerView:(id)arg0;
- (double)heightForMiddleStickySectionInPagerView:(id)arg0;
- (id)viewForHeaderInPagerView:(id)arg0;
- (id)viewForTabbarInPagerView:(id)arg0;
- (id)tabbarForTabContainerInPagerView:(id)arg0;
- (id)pagerView:(id)arg0 tabViewElementForIndex:(long long)arg1;
- (void)pagerView:(id)arg0 tabScrollViewWillBeginDragging:(id)arg1;
- (void)pagerView:(id)arg0 tabScrollViewDidEndDecelerating:(id)arg1;
- (void)pagerView:(id)arg0 tabScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)pagerView:(id)arg0 willMoveToIndex:(long long)arg1 withTabElement:(id)arg2;
- (void)pagerView:(id)arg0 cancelMoveToIndex:(long long)arg1 withTabElement:(id)arg2;
- (void)pagerView:(id)arg0 didMoveToIndex:(long long)arg1 withTabElement:(id)arg2;
- (void)pagerView:(id)arg0 mainScrollViewDidScroll:(id)arg1;
- (void)pagerView:(id)arg0 mainScrollViewWillBeginDragging:(id)arg1;
- (void)pagerView:(id)arg0 tabScrollViewDidScroll:(id)arg1;
- (void)pagerView:(id)arg0 mainScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)pagerView:(id)arg0 mainScrollViewDidEndDecelerating:(id)arg1;
- (id)pageContextV2;
- (id)controllerManagerV2;
- (void)iesecshop_pagerView:(id)arg0 didMoveToTab:(id)arg1;
- (void)iesecshop_screenStateDidChange:(unsigned long long)arg0;
- (id)layoutService;
- (void)setLayoutService:(id)arg0;
- (id)tabKitCtx;
- (void)setTabKitCtx:(id)arg0;
- (id)tabElementWithTabType:(unsigned long long)arg0 tabClass:(Class)arg1;
- (id)shopForwardCoService;
- (id)shopStateService;
- (id)shopDataService;
- (id)shopLayoutService;
- (void)setShopDataService:(id)arg0;
- (void)setShopStateService:(id)arg0;
- (void)setShopLayoutService:(id)arg0;
- (void)setShopForwardCoService:(id)arg0;
- (void)requestPreload;
- (id)shopEventService;
- (void)standardPreload;
- (void)subscribeXbridgeEvents;
- (void)unsubscribeXbridgeEvents;
- (id)tabElementBuilder;
- (void)handleMultiProductsCoupon;
- (id)shopThemeService;
- (void)setTabElementBuilder:(id)arg0;
- (void)setShopEventService:(id)arg0;
- (void)setShopThemeService:(id)arg0;
- (void).cxx_destruct;
- (void)setEventService:(id)arg0;
- (id)eventService;
- (id)componentView;
- (void)setupViews;

@end
