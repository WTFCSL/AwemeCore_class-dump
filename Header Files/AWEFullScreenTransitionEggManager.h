//
//     Generated by private class-dump
//

@interface AWEFullScreenTransitionEggManager : NSObject

+ (BOOL)hasFullScreenTransitionEgg:(id)arg0;
+ (void)playFullScreenTransitionEggWithAweme:(id)arg0 fullScreenBlock:(id /* block */)arg1;
+ (id)preRenderFullScreenTransitionEgg:(id)arg0 aweme:(id)arg1 autoShow:(BOOL)arg2 fullScreenBlock:(id /* block */)arg3;
+ (void)showTransitionEggView:(id)arg0 onView:(id)arg1 aweme:(id)arg2 eggInfo:(id)arg3;
+ (void)playFullScreenTransitionEggWithAweme:(id)arg0 imageName:(id)arg1 fullScreenBlock:(id /* block */)arg2;
+ (void)trackerPreloadEventWithAweme:(id)arg0 label:(id)arg1 adExtraData:(id)arg2;
+ (void)playFullScreenTransitionEgg:(id)arg0 aweme:(id)arg1 fullScreenBlock:(id /* block */)arg2;
+ (void)preloadFullScreenTransitionEggIfNeeded:(id)arg0;

@end