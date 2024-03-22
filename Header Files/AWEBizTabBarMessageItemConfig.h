//
//     Generated by private class-dump
//

@class AWETabbarGeneralButton, UIViewController, NSString;
@protocol AWEBizTabBarMessageItemBadgeModelProtocol, AWEBizTabBarItemConfigAbility;

@interface AWEBizTabBarMessageItemConfig : NSObject <AWEBizTabBarMessage, AWEBizTabBarItemConfigProtocol, AWEBizTabBarMessageItemConfigProtocol> {
    UIViewController *_messageController;
    AWETabbarGeneralButton *_messageButton;
    id<AWEBizTabBarItemConfigAbility> _tabBarAbility;
    id<AWEBizTabBarMessageItemBadgeModelProtocol> _badgeModel;
}

@property (retain, nonatomic) AWETabbarGeneralButton *messageButton;
@property (retain, nonatomic) UIViewController *messageController;
@property (retain, nonatomic) id<AWEBizTabBarItemConfigAbility> tabBarAbility;
@property (retain) id<AWEBizTabBarMessageItemBadgeModelProtocol> badgeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConfig;

- (BOOL)canLandingWithTabId:(id)arg0 params:(id)arg1;
- (void)beginLandingTabWithTabId:(id)arg0 withParams:(id)arg1;
- (void)endLandingTabWithTabId:(id)arg0 withParams:(id)arg1;
- (id)tabBarItemButton;
- (id)tabBarItemViewController;
- (void)setupTabBarAbility:(id)arg0;
- (BOOL)loginIfNeededAtTabBarItemSelection:(BOOL)arg0;
- (id)loginInfoAtTabBarItemSelectionFromPreviousSelectedType:(long long)arg0;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)arg0 isByTap:(BOOL)arg1;
- (void)tabBarDidSelectItemFromPreviousSelectedType:(long long)arg0 isByTap:(BOOL)arg1;
- (id)getCustomTrackParamsWithTrackInfo:(id)arg0;
- (void)setMessageController:(id)arg0;
- (id)tabBarAbility;
- (void)setTabBarAbility:(id)arg0;
- (void)showBadgeWithModel:(id)arg0 showCallBack:(id /* block */)arg1 hideCallBack:(id /* block */)arg2 downgradeCallBack:(id /* block */)arg3;
- (void)hideBadgeWithCompletion:(id /* block */)arg0;
- (void)setBadgeModel:(id)arg0;
- (id)badgeModel;
- (void)tabBarController:(id)arg0 didSelectItemType:(long long)arg1 previousItemType:(long long)arg2;
- (void)p_regMessageButtonAccessibilityLabelUpdater;
- (void)clearInteractUnreadCount;
- (void)selectMessageViewController;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)messageButton;
- (void)setMessageButton:(id)arg0;
- (id)messageController;

@end
