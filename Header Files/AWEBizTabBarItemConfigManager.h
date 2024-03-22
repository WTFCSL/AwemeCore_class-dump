//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBizTabBarItemConfigManager : NSObject <AWEBizTabBarItemConfigCallProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)channel:(id)arg0 showBubbleWithModel:(id)arg1 showCallback:(id /* block */)arg2 clickCallback:(id /* block */)arg3 dismissCallback:(id /* block */)arg4;
- (void)channel:(id)arg0 hideBubbleWithCompletion:(id /* block */)arg1;
- (void)channel:(id)arg0 showBadgeWithModel:(id)arg1 withAnimateType:(long long)arg2 showCallBack:(id /* block */)arg3 hideCallBack:(id /* block */)arg4 downgradeCallBack:(id /* block */)arg5;
- (void)channel:(id)arg0 hideBadgeWithAnimate:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (unsigned long long)currentBadgeTypeWithChannel:(id)arg0;
- (void)channel:(id)arg0 showActionPopover:(id)arg1 preferDarkTheme:(BOOL)arg2 showCallback:(id /* block */)arg3 clickCallback:(id /* block */)arg4 dismissCallback:(id /* block */)arg5;
- (void)channel:(id)arg0 showBackgroundImagesWithProgress:(double)arg1;
- (void)channel:(id)arg0 showBadgeWithModel:(id)arg1 withAnimateType:(long long)arg2 task:(id)arg3;
- (void)consumeComponentWhenEnterIfNeed:(id)arg0;
- (id)callGetCustomTrackParamsWithChannel:(id)arg0 trackInfo:(id)arg1;
- (void)callItemEnterWithChannel:(id)arg0 enterModel:(id)arg1;
- (void)callItemLeaveWithChannel:(id)arg0 leaveModel:(id)arg1;

@end
