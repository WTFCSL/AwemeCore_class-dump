//
//     Generated by private class-dump
//

@interface AFDCloseFriendsNotesHelper : NSObject

+ (void)deleteMomentModel:(id)arg0 completion:(id /* block */)arg1;
+ (id)getNotesVisibilityLabelWithColorRingInfo:(id)arg0 publishModel:(id)arg1;
+ (id)getNotesTimeLabelWithNotesTTL:(id)arg0 createTime:(id)arg1;
+ (void)deleteNotesWithColorRingInfo:(id)arg0 publishModel:(id)arg1 begin:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)reportNotesHasReadWithItemId:(id)arg0 uid:(id)arg1;
+ (void)reportDraftNotesHasRead;
+ (long long)getNotesVisibleStatusWithColorRingInfo:(id)arg0 publishModel:(id)arg1;
+ (void)reportAwemeStatsForMyNotesWithItemId:(id)arg0;
+ (id)createAwemeWithColorRingInfo:(id)arg0;
+ (void)reportNotesHasReadWithAweme:(id)arg0;

@end