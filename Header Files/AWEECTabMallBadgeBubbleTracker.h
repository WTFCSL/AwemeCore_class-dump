//
//     Generated by private class-dump
//

@interface AWEECTabMallBadgeBubbleTracker : NSObject

+ (void)trackBadgeShowResult:(long long)arg0 withModel:(id)arg1 source:(id)arg2;
+ (void)trackBadgeHidden:(long long)arg0 withModel:(id)arg1 source:(id)arg2;
+ (void)trackBadgeDowngrade:(long long)arg0 withModel:(id)arg1 source:(id)arg2;
+ (void)trackBubbleShowResult:(long long)arg0 withBubbleInfo:(id)arg1 source:(id)arg2;
+ (void)trackBubbleDismiss:(long long)arg0 withBubbleInfo:(id)arg1 source:(id)arg2;
+ (void)trackBadgeEvent:(id)arg0 withModel:(id)arg1 andParams:(id)arg2;
+ (void)trackBubbleEvent:(id)arg0 withBubbleInfo:(id)arg1 andParams:(id)arg2;

@end
