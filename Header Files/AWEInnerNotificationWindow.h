//
//     Generated by private class-dump
//

@interface AWEInnerNotificationWindow : UIWindow {
    id /* block */ _customPointInsideTest;
}

@property (copy, nonatomic) id /* block */ customPointInsideTest;

+ (void)interfaceOrientationAdaptTo:(long long)arg0;
+ (Class)aAWEPadBizUIAdapterClass;
+ (void)initialize;

- (BOOL)_canBecomeKeyWindow;
- (BOOL)_canAffectStatusBarAppearance;
- (id)aAWEPadBizUIAdapter;
- (BOOL)shouldAffectStatusBarAppearance;
- (void)setCustomPointInsideTest:(id /* block */)arg0;
- (id /* block */)customPointInsideTest;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end