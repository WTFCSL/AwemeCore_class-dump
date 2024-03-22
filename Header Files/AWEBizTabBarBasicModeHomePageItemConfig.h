//
//     Generated by private class-dump
//

@class AWETabbarGeneralButton, AWEBasicModeTabBarViewController, NSString;

@interface AWEBizTabBarBasicModeHomePageItemConfig : NSObject <AWEBizTabBarItemConfigProtocol> {
    AWETabbarGeneralButton *_homePageButton;
    AWEBasicModeTabBarViewController *_userHomeController;
}

@property (retain, nonatomic) AWETabbarGeneralButton *homePageButton;
@property (retain, nonatomic) AWEBasicModeTabBarViewController *userHomeController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConfig;

- (BOOL)canLandingWithTabId:(id)arg0 params:(id)arg1;
- (id)tabBarItemButton;
- (id)tabBarItemViewController;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)arg0 isByTap:(BOOL)arg1;
- (id)homePageButton;
- (id)userHomeController;
- (void)setHomePageButton:(id)arg0;
- (void)setUserHomeController:(id)arg0;
- (void).cxx_destruct;

@end
