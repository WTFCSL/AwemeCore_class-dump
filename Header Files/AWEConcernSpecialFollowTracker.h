//
//     Generated by private class-dump
//

@interface AWEConcernSpecialFollowTracker : NSObject

+ (id)stringFromEntrancePosition:(unsigned long long)arg0;
+ (void)trackSpecialFollowPopupWithActionType:(unsigned long long)arg0;
+ (void)trackSpecialFollowToastShowWithText:(id)arg0;
+ (void)trackSpecialFollowUserID:(id)arg0 enterFrom:(id)arg1 entrancePosition:(unsigned long long)arg2 followPanelPosition:(unsigned long long)arg3 logExtra:(id)arg4;
+ (void)trackSpecialFollowCancelUserID:(id)arg0 enterFrom:(id)arg1 entrancePosition:(unsigned long long)arg2 followPanelPosition:(unsigned long long)arg3 logExtra:(id)arg4;
+ (void)trackSpecialFollowEntranceShowWithUserID:(id)arg0 enterFrom:(id)arg1 entrancePosition:(unsigned long long)arg2 followPanelPosition:(unsigned long long)arg3;
+ (unsigned long long)followPanelPostionFromMenuShowMethod:(unsigned long long)arg0;
+ (id)stringFromFollowPanelPosition:(unsigned long long)arg0;
+ (id)stringFromActionType:(unsigned long long)arg0;

@end
