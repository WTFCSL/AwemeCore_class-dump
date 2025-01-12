//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEHPChannelTabItemAbilityImpl;

@interface AWEHPChannelTabItemAbilityImpl : AWEHPChannelBaseAbilityImpl <AWEHPChannelTabItemAbility> {
    id<AWEHPChannelTabItemAbilityImpl> _target;
}

@property (weak, nonatomic) id<AWEHPChannelTabItemAbilityImpl> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelBottomTabItemImageWithCompletion:(id /* block */)arg0;
- (void)showBottomTabItemImage:(id)arg0 withAnimateType:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)updateTopTabItemSelectedIndicatorWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)updateTopTabItemIndicatorIconWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)showBottomTabItemRightIcon:(id)arg0;
- (void)cancelBottomTabItemRightIcon:(id)arg0;
- (void)updateTopTabItemIndicatorIconHidden:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)updateAccessibilityHintText:(id)arg0;
- (void)showBottomTabItemActionPopoverWithActions:(id)arg0 preferDarkTheme:(BOOL)arg1 showCallback:(id /* block */)arg2;
- (void)updateTopTabItemIndicatorIconRotation:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)updateTabItemTitle:(id)arg0 completion:(id /* block */)arg1;
- (void)removeAllResourcesIfNeedBeforeChannelUnload;
- (void)updateBottomTabItem:(id)arg0;
- (BOOL)p_updateTopTabLottieWithTask:(id)arg0 withItemIndicatorColor:(id)arg1 withReUseComponent:(BOOL)arg2;
- (void)p_cancelTopTabLottieWithCallBack:(id /* block */)arg0 isContainerHide:(BOOL)arg1;
- (void)showTopTabLottieWithParams:(id)arg0 withItemIndicatorColor:(id)arg1 showCallBack:(id /* block */)arg2 hideCallBack:(id /* block */)arg3;
- (void)cancelTopTabLottieWithCallBack:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)setTarget:(id)arg0;
- (id)target;

@end
