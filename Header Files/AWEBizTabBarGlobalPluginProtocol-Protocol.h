//
//     Generated by private class-dump
//

@protocol AWEBizTabBarGlobalPluginProtocol <NSObject>

- (BOOL)isPluginEffect;

@optional

- (BOOL)shouldInterceptSingleClickWithCurrentTabID:(id)arg0 targetTabID:(id)arg1;
- (BOOL)shouldInterceptLongPressWithCurrentTabID:(id)arg0 targetTabID:(id)arg1;
- (BOOL)shouldInterceptDoubleClickWithCurrentTabID:(id)arg0 targetTabID:(id)arg1;
- (void)tabBarDidChangeSelectedTabWithCurrentSelectedTabID:(id)arg0 previousSelectedTabID:(id)arg1;
- (id)shouldInterceptTabCurrentReferStringWithTabID:(id)arg0;

@end
