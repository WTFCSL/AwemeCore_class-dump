//
//     Generated by private class-dump
//

@class NSString, AWETabBarPlusButton, AWETabbarPlusScreenBurnManager;
@protocol AWEBizTabBarItemConfigAbility;

@interface AWEBizTabBarPlusItemConfig : NSObject <AWEBizTabBarMessage, AWEBizTabBarPlusItemConfigProtocol> {
    AWETabBarPlusButton *_plusButton;
    AWETabbarPlusScreenBurnManager *_plusScreenBurnManager;
    id<AWEBizTabBarItemConfigAbility> _tabBarAbility;
}

@property (retain, nonatomic) AWETabBarPlusButton *plusButton;
@property (retain, nonatomic) AWETabbarPlusScreenBurnManager *plusScreenBurnManager;
@property (retain, nonatomic) id<AWEBizTabBarItemConfigAbility> tabBarAbility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConfig;

- (BOOL)canLandingWithTabId:(id)arg0 params:(id)arg1;
- (void)setupNotification;
- (id)tabBarItemButton;
- (id)tabBarItemViewController;
- (void)setupTabBarAbility:(id)arg0;
- (BOOL)isStickerIcon;
- (id)tabBarAbility;
- (void)setTabBarAbility:(id)arg0;
- (void)tabBarController:(id)arg0 didSelectItemType:(long long)arg1 previousItemType:(long long)arg2;
- (void)setPlusScreenBurnManager:(id)arg0;
- (id)plusScreenBurnManager;
- (void)tabBarControllerViewWillAppear;
- (void)tabBarControllerViewDidDisappear;
- (void)tabBarControllerDidChangeSelectedIndex:(id)arg0;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)arg0;
- (id)plusButton;
- (void)setPlusButton:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupConfig;

@end
