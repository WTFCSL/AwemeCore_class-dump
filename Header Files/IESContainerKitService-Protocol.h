//
//     Generated by private class-dump
//

@protocol IESContainerKitService <NSObject>

+ (void)registerLayoutRule:(id)arg0 forViewType:(id)arg1;

- (void)addViewElement:(id)arg0;
- (void)addView:(id)arg0 viewType:(id)arg1;
- (void)addView:(id)arg0 viewType:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (void)addView:(id)arg0 viewType:(id)arg1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg2 size:(struct CGSize { double x0; double x1; })arg3;
- (void)removeViewElement:(id)arg0;
- (id)queryViewByType:(id)arg0;
- (id)queryContainerByType:(long long)arg0;
- (id)roomContainerView;

@optional

- (void)switchToSideMode;
- (void)switchToNormalModel;
- (BOOL)enableProxyEngine;
- (void)parseDynamicLayoutRule:(id)arg0;
- (id)dynamicLayoutRules;
- (id)proxyWithCaller:(id)arg0;
- (void)viewDidAdded:(id)arg0;
- (void)addOperation:(id)arg0 dependWithViewType:(id)arg1;
- (void)addOperation:(id)arg0;

@end
