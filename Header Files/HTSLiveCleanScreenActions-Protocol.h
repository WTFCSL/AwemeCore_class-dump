//
//     Generated by private class-dump
//

@protocol HTSLiveCleanScreenActions <NSObject>

@optional

- (void)focusOnPopup:(BOOL)arg0;
- (void)switchCleanScreenMode:(long long)arg0;
- (void)cleanScreenAnimationCompleteWithMode:(long long)arg0;
- (void)onCleanScreenContainerShow;
- (void)onCleanScreenContainerHide;
- (void)isPinchGestureStarted;
- (void)isPinchGestureEnded;
- (void)popupContainerStatusChanged;
- (void)startSwitchingCleanScreenMode:(long long)arg0 withAnimationDuration:(double)arg1 animationDelay:(double)arg2 options:(unsigned long long)arg3;

@end
