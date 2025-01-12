//
//     Generated by private class-dump
//

@protocol DVEComponentViewManagerProtocol <NSObject>

+ (double)componentBarHeight;

@property (nonatomic) BOOL enable;

- (void)dismissCurrentActionView;
- (void)unSetupTreeComponents;
- (id)currentBar;
- (void)showComponentType:(long long)arg0 groupTpye:(long long)arg1;
- (id)firstComponentWithType:(long long)arg0;
- (void)popToComponent:(long long)arg0;
- (void)popToComponent:(long long)arg0 groupTpye:(long long)arg1;
- (void)popToComponent:(long long)arg0 groupTpye:(long long)arg1 animation:(BOOL)arg2;
- (long long)currentBarType;
- (id)showComponent:(id)arg0 animation:(BOOL)arg1;
- (id)popToParentComponent:(BOOL)arg0;
- (void)setupTreeComponents:(id)arg0 parentVC:(id)arg1 context:(id)arg2;
- (void)setupGlobalComponents:(id)arg0;
- (long long)currentShowedPanelType;
- (id)popToParentComponent;
- (id)showComponent:(id)arg0;
- (void)showComponentType:(long long)arg0;
- (BOOL)backToParentComponent;
- (void)pushComponent:(long long)arg0 param:(id)arg1;
- (void)updateCurrentBarGroupTpye:(long long)arg0;
- (void)refreshCurrentBarGroupTpye;
- (void)triggerCurrentComponentWithIndex:(long long)arg0;
- (void)triggerCurrentComponentWithTitle:(id)arg0;
- (BOOL)enable;
- (void)popToRoot;
- (void)setEnable:(BOOL)arg0;
- (id)parentView;
- (id)parentVC;
- (id)componentsWithType:(long long)arg0;

@end
