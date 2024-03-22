//
//     Generated by private class-dump
//

@class NSString, IESECServiceProxy, NSTimer, UIView;
@protocol IESECShopForwardCoService, IESECShopLayoutService, IESECTabKitLayoutService, IESECShopDataService, IESECTabKitDataService, IESECShopStateService;

@interface IESECShopTKBottomTabComponent : IESECTabKitBottomTabComponent <IESECShopEventSubscriber, IESECShopPopupProtocol, IESECShopTKBottomTabComponent> {
    BOOL _isFirstAnchored;
    BOOL _hasShownBubble;
    NSTimer *_dismissTimer;
    UIView *_activeBubble;
    IESECServiceProxy<IESECTabKitDataService> *_dataService;
    IESECServiceProxy<IESECTabKitLayoutService> *_layoutService;
    IESECServiceProxy<IESECShopDataService> *_shopDataService;
    IESECServiceProxy<IESECShopStateService> *_shopStateService;
    IESECServiceProxy<IESECShopLayoutService> *_shopLayoutService;
    IESECServiceProxy<IESECShopForwardCoService> *_shopForwardCoService;
    id /* block */ _popupClose;
}

@property (retain, nonatomic) IESECServiceProxy<IESECTabKitDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *shopDataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *shopStateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *shopLayoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *shopForwardCoService;
@property (copy, nonatomic) id /* block */ popupClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldLoadWithContext:(id)arg0;
+ (id)scaleStyleModel:(id)arg0;

- (void)componentDidLoad;
- (void)configView;
- (void)setupBindings;
- (id)dataService;
- (void)setDataService:(id)arg0;
- (id)pageContextV2;
- (id)controllerManagerV2;
- (void)iesecshop_screenStateDidChange:(unsigned long long)arg0;
- (void)iesecshop_splitSlideDidScroll:(double)arg0;
- (void)iesecshop_didTapAtBottomTabItem:(id)arg0;
- (void)iesecshop_didSelectBottomTabItem:(id)arg0;
- (id)layoutService;
- (void)setLayoutService:(id)arg0;
- (void)triggerLayoutAnimated:(BOOL)arg0;
- (void)trackEnterStorePage;
- (void)showWithTask:(id)arg0 closeCallback:(id /* block */)arg1;
- (id)shopForwardCoService;
- (void)showBottomTabBubbleIfNeeded;
- (void)trackBottomTabsShow:(id)arg0;
- (void)reloadTabBarStyleWithConfig:(id)arg0;
- (id)shopStateService;
- (void)adTrackOtherClick:(id)arg0;
- (void)trackBottomTabClick:(id)arg0;
- (void)trackTopTabsShowAtBottomTab:(id)arg0;
- (id)shopDataService;
- (id)shopLayoutService;
- (id)bubbleCacheKeyWithTabID:(id)arg0 hintText:(id)arg1;
- (void)dismissBottomTabBubble;
- (void)bottomTabBubbleTimeUp:(id)arg0;
- (id /* block */)popupClose;
- (void)showBottomTabBubbleWithHintText:(id)arg0 duration:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setPopupClose:(id /* block */)arg0;
- (void)setShopDataService:(id)arg0;
- (void)setShopStateService:(id)arg0;
- (void)setShopLayoutService:(id)arg0;
- (void)setShopForwardCoService:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setupViews;

@end