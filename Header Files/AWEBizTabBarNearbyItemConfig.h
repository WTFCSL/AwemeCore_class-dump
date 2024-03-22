//
//     Generated by private class-dump
//

@class AWETabbarGeneralButton, UIViewController, NSString;
@protocol AWETabBarItemViewControllerProtocol, AWENewNearbyViewControllerProtocol;

@interface AWEBizTabBarNearbyItemConfig : NSObject <AWEDigitalWellbeingMessage, AWEBizTabBarItemConfigProtocol> {
    UIViewController<AWETabBarItemViewControllerProtocol, AWENewNearbyViewControllerProtocol> *_nearbyController;
    AWETabbarGeneralButton *_nearbyButton;
}

@property (retain, nonatomic) AWETabbarGeneralButton *nearbyButton;
@property (retain, nonatomic) UIViewController<AWETabBarItemViewControllerProtocol, AWENewNearbyViewControllerProtocol> *nearbyController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWENearbyTabBarCommonAdapterClass;
+ (id)sharedConfig;

- (BOOL)isTeenModeEnabled;
- (BOOL)canLandingWithTabId:(id)arg0 params:(id)arg1;
- (void)setupNotification;
- (id)tabBarItemButton;
- (id)tabBarItemViewController;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)arg0 isByTap:(BOOL)arg1;
- (void)tabBarDidSelectItemFromPreviousSelectedType:(long long)arg0 isByTap:(BOOL)arg1;
- (id)getCustomTrackParamsWithTrackInfo:(id)arg0;
- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (id)nearbyDisplayString;
- (id)nearbyButton;
- (id)nearbyController;
- (void)updateTC21NearbyTabButtonBackgroundIfNeeded;
- (void)updateTC21NearbyTabButtonBackground:(id)arg0;
- (id)nearbyInnerViewTitle;
- (BOOL)customInnerTextView;
- (id)aAWENearbyTabBarCommonAdapter;
- (void)setNearbyController:(id)arg0;
- (void)setNearbyButton:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupConfig;

@end
