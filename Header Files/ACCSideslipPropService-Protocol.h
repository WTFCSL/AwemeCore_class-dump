//
//     Generated by private class-dump
//

@class ACCGroupedPredicate;

@protocol ACCSideslipPropService <ACCCameraSubscription>

@property (readonly, nonatomic) unsigned long long lastShowState;
@property (readonly, nonatomic) unsigned long long showState;
@property (readonly, nonatomic) BOOL isShowOrDismissAnimating;
@property (readonly, nonatomic) BOOL isFadeHidden;
@property (readonly, nonatomic) ACCGroupedPredicate *forbidFirstExposurePredicate;
@property (readonly, nonatomic) ACCGroupedPredicate *fadeHiddenPredicate;
@property (nonatomic, getter=isEnable) BOOL enable;
@property (readonly, nonatomic) BOOL isUserTap;
@property (readonly, nonatomic) BOOL hasOpenPropPanel;

- (BOOL)isEnable;
- (void)exposePanelWithEnterMethod:(id)arg0 cancelProp:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showPanelWithEnterMethod:(id)arg0 forceLocateIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)showPanelWithEnterMethod:(id)arg0 forceLocateIndex:(long long)arg1 animated:(BOOL)arg2 isUserTap:(BOOL)arg3;
- (void)showPanelWithEnterMethod:(id)arg0 autoLocate:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dismissPanelWithEnterMethod:(id)arg0 cancelProp:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updatePanelFadeShowState;
- (unsigned long long)lastShowState;
- (BOOL)isShowOrDismissAnimating;
- (BOOL)isFadeHidden;
- (id)forbidFirstExposurePredicate;
- (id)fadeHiddenPredicate;
- (BOOL)isUserTap;
- (BOOL)hasOpenPropPanel;
- (unsigned long long)showState;
- (void)setEnable:(BOOL)arg0;

@end
