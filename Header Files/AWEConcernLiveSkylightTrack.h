//
//     Generated by private class-dump
//

@interface AWEConcernLiveSkylightTrack : NSObject

+ (void)trackShowAvatarAtIndexPath:(id)arg0 pageType:(id)arg1 cellModel:(id)arg2 skylightView:(id)arg3;
+ (id)trackParamsWithModel:(id)arg0 enterFrom:(id)arg1 enterMethod:(id)arg2;
+ (void)trackSkylightCellAtIndex:(long long)arg0 moduleIndex:(long long)arg1 event:(id)arg2 pageType:(id)arg3 cellNumber:(long long)arg4 cellModel:(id)arg5;
+ (void)trackSkylightStickyUnreadViewWithEvent:(id)arg0 model:(id)arg1;
+ (void)trackSkylightUnreadTipViewWithEvent:(id)arg0 model:(id)arg1;
+ (void)trackCloseSkylightByClick:(BOOL)arg0;
+ (void)trackShowSkylightWithActionMethod:(unsigned long long)arg0 actualLiveCount:(long long)arg1 cellCount:(long long)arg2 skylightCellListStr:(id)arg3 hasSpecialFollow:(BOOL)arg4;
+ (void)trackRefreshSkylightByAuto:(BOOL)arg0;
+ (void)trackRefreshSkylightLiveWithType:(id)arg0;
+ (void)trackShowAvatarAtIndexPath:(id)arg0 pageType:(id)arg1 cellModel:(id)arg2;
+ (void)trackSkylightFollowMoreByClick:(BOOL)arg0;

@end
