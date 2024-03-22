//
//     Generated by private class-dump
//

@protocol AWEHPBizTabBarPrivatedService <HTSService>

- (id)homePageContext;
- (long long)compareTabPositionWithFirstTab:(id)arg0 secondTab:(id)arg1;
- (void)canLandingTabWithTabId:(id)arg0 params:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)landingTabWithTabId:(id)arg0 params:(id)arg1 completionBlock:(id /* block */)arg2 exitBlock:(id /* block */)arg3;
- (id)getTabCenterPointWithTabId:(id)arg0;
- (id)getBottomTabItemList;
- (id)getCurrentChannelController;
- (id)getAbilityWithTabId:(id)arg0;
- (id)getItemConfigWithTabId:(id)arg0;
- (id)getTabBarRootViewController;
- (void)hotReloadTabBar;

@end