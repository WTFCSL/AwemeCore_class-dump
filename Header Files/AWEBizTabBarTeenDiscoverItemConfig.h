//
//     Generated by private class-dump
//

@class NSString, AWETeenTabbarDiscoverButton, AWETeenDiscoverViewController;

@interface AWEBizTabBarTeenDiscoverItemConfig : NSObject <AWEDigitalWellbeingMessage, AWEBizTabBarMessage, AWEUserMessage, AWETeenDiscoverTabButtonDelegate, AWETeenNightLockMessage, AWEBizTabBarItemConfigProtocol> {
    BOOL _fetchTeenDiscoverNavWhenLogin;
    AWETeenDiscoverViewController *_teenDiscoverController;
    AWETeenTabbarDiscoverButton *_teenDiscoverButton;
}

@property (retain, nonatomic) AWETeenTabbarDiscoverButton *teenDiscoverButton;
@property (retain, nonatomic) AWETeenDiscoverViewController *teenDiscoverController;
@property (nonatomic) BOOL fetchTeenDiscoverNavWhenLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConfig;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (BOOL)canLandingWithTabId:(id)arg0 params:(id)arg1;
- (void)setupNotification;
- (id)tabBarItemButton;
- (id)tabBarItemViewController;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)arg0 isByTap:(BOOL)arg1;
- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (void)tabBarController:(id)arg0 didSelectItemType:(long long)arg1 previousItemType:(long long)arg2;
- (void)didDismissNightLock;
- (void)fetchTeenDiscoverNavIfNeeded;
- (id)teenDiscoverButton;
- (id)teenDiscoverController;
- (void)dismissDiscoverBubbleIfNeeded;
- (void)setFetchTeenDiscoverNavWhenLogin:(BOOL)arg0;
- (BOOL)fetchTeenDiscoverNavWhenLogin;
- (void)redoTeenDiscoverAnimations;
- (id)teenDiscoverInnerView;
- (void)didSelectedDiscoverTab;
- (void)didDiscoverTabWithRecommandRemind:(BOOL)arg0;
- (void)setTeenDiscoverController:(id)arg0;
- (void)setTeenDiscoverButton:(id)arg0;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground;
- (void)dealloc;
- (void)setupConfig;

@end
