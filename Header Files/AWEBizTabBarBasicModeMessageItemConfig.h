//
//     Generated by private class-dump
//

@class AWETabbarGeneralButton, AWEBasicModeTabBarViewController, NSString;

@interface AWEBizTabBarBasicModeMessageItemConfig : NSObject <AWEBizTabBarItemConfigProtocol> {
    AWETabbarGeneralButton *_messageButton;
    AWEBasicModeTabBarViewController *_messageController;
}

@property (retain, nonatomic) AWETabbarGeneralButton *messageButton;
@property (retain, nonatomic) AWEBasicModeTabBarViewController *messageController;
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
- (void)setMessageController:(id)arg0;
- (void).cxx_destruct;
- (id)messageButton;
- (void)setMessageButton:(id)arg0;
- (id)messageController;

@end
