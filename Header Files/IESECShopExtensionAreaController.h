//
//     Generated by private class-dump
//

@class IESECServiceProxy, NSString;
@protocol IESECShopLayoutService, IESECShopStateService, IESECShopDataService, IESECShopForwardCoService, IESECShopEventService;

@interface IESECShopExtensionAreaController : IESECShopControllerV2 <IESECShopEventSubscriber, IESECShopExtensionAreaController> {
    BOOL _isExtensionAreaAnimating;
    BOOL _isExtensionAreaAnimated;
    BOOL _shouldExpandVideoArea;
    BOOL _isExpandVideoAreaForIndexTabOnly;
    double _preContentOffsetY;
    IESECServiceProxy<IESECShopDataService> *_dataService;
    IESECServiceProxy<IESECShopStateService> *_stateService;
    IESECServiceProxy<IESECShopEventService> *_eventService;
    IESECServiceProxy<IESECShopLayoutService> *_layoutService;
    IESECServiceProxy<IESECShopForwardCoService> *_forwardCoService;
}

@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *stateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopEventService> *eventService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardCoService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBinding;
- (id)dataService;
- (void)setDataService:(id)arg0;
- (void)didSetPageContextV2:(id)arg0;
- (void)controllerDidLoad;
- (void)controllerWillAppear:(BOOL)arg0;
- (void)iesecshop_pagerView:(id)arg0 didMoveToTab:(id)arg1;
- (void)iesecshop_pagerView:(id)arg0 mainScrollViewDidScroll:(id)arg1;
- (void)didSetControllerManagerV2:(id)arg0;
- (void)iesecshop_didSelectBottomTabItem:(id)arg0;
- (id)forwardCoService;
- (id)layoutService;
- (id)stateService;
- (void)setStateService:(id)arg0;
- (void)setLayoutService:(id)arg0;
- (void)setForwardCoService:(id)arg0;
- (double)extensionAreaHeight;
- (void)switchHeaderType:(unsigned long long)arg0 withCompletion:(id /* block */)arg1;
- (void)attachExtensionArea;
- (void)decideShouldExpandVideoArea;
- (void)expandVideoAreaIfNeeded;
- (void)setupExtensionArea;
- (void)cleanupExtensionArea;
- (void)switchLiveHeader:(id /* block */)arg0;
- (void)switchVideoHeader:(id /* block */)arg0;
- (void)switchLiveFusionHeader:(id /* block */)arg0;
- (void)switchInfoHeader:(id /* block */)arg0;
- (void)attachExtensionAreaIfNeeded;
- (void)pullDownExtensionAreaIfNeeded;
- (void)foldExtensionAreaIfNeeded;
- (id /* block */)generateBizScrollPercentBlock:(double)arg0;
- (id)extensionAreaController;
- (id)init;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)setEventService:(id)arg0;
- (id)eventService;

@end
