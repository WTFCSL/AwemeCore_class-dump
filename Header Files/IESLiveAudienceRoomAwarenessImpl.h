//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveAudienceRoomAwarenessImpl : NSObject <IESLiveAudienceRoomAwareness>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enableFullscreenPopTransitionFor:(id)arg0;
- (void)enableFullscreenPopTransitionFor:(id)arg0 panBegin:(id /* block */)arg1 restoreBlock:(id /* block */)arg2 endBlock:(id /* block */)arg3;
- (void)audienceRoomAwareness:(id)arg0;
- (void)disableFullscreenPopTransitionFor:(id)arg0;
- (void)enableFullscreenPopTransitionFor:(id)arg0 shouldStartBlock:(id /* block */)arg1 panBegin:(id /* block */)arg2 restoreBlock:(id /* block */)arg3 endBlock:(id /* block */)arg4;
- (void)hideNavigationBarFor:(id)arg0;
- (void)setStatusBarStyleFor:(id)arg0 style:(long long)arg1;
- (void)forbidInteractivePopGestureRecognizerFor:(id)arg0;

@end
