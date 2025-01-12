//
//     Generated by private class-dump
//

@class IESECTabKitTabBarDynamicConfig, IESECTabKitSplitStyleConfig, NSArray, NSString, NSDictionary, IESECTabKitTabBarMultiStateConfig, IESECTabKitNavbarConfigModel, IESECTabKitPopupConfig;

@interface IESECTabKitBFFModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _anchoredTabID;
    NSDictionary *_logExtra;
    NSArray *_tabs;
    IESECTabKitPopupConfig *_popupConfig;
    IESECTabKitNavbarConfigModel *_navbarConfig;
    IESECTabKitSplitStyleConfig *_splitStyleConfig;
    IESECTabKitTabBarMultiStateConfig *_topTabbarStyle;
    IESECTabKitTabBarMultiStateConfig *_bottomTabbarStyle;
    IESECTabKitTabBarDynamicConfig *_topTabbarDynamicConfig;
    IESECTabKitTabBarDynamicConfig *_bottomTabbarDynamicConfig;
}

@property (nonatomic) unsigned long long anchoredTabID;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSArray *tabs;
@property (retain, nonatomic) IESECTabKitPopupConfig *popupConfig;
@property (retain, nonatomic) IESECTabKitNavbarConfigModel *navbarConfig;
@property (retain, nonatomic) IESECTabKitSplitStyleConfig *splitStyleConfig;
@property (retain, nonatomic) IESECTabKitTabBarMultiStateConfig *topTabbarStyle;
@property (retain, nonatomic) IESECTabKitTabBarMultiStateConfig *bottomTabbarStyle;
@property (retain, nonatomic) IESECTabKitTabBarDynamicConfig *topTabbarDynamicConfig;
@property (retain, nonatomic) IESECTabKitTabBarDynamicConfig *bottomTabbarDynamicConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (id)popupConfig;
- (void)setPopupConfig:(id)arg0;
- (unsigned long long)anchoredTabID;
- (id)navbarConfig;
- (id)topTabbarStyle;
- (id)bottomTabbarStyle;
- (void)setAnchoredTabID:(unsigned long long)arg0;
- (void)setNavbarConfig:(id)arg0;
- (id)splitStyleConfig;
- (void)setSplitStyleConfig:(id)arg0;
- (void)setTopTabbarStyle:(id)arg0;
- (void)setBottomTabbarStyle:(id)arg0;
- (id)topTabbarDynamicConfig;
- (void)setTopTabbarDynamicConfig:(id)arg0;
- (id)bottomTabbarDynamicConfig;
- (void)setBottomTabbarDynamicConfig:(id)arg0;
- (void).cxx_destruct;
- (id)tabs;
- (void)setTabs:(id)arg0;

@end
