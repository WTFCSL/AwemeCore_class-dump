//
//     Generated by private class-dump
//

@protocol AWEConcernSpecialFollowManagerProtocol <NSObject>

- (void)specialFollowUser:(id)arg0 context:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)presentSpecialFollowGuidePanelIfNeededWithType:(unsigned long long)arg0 userModel:(id)arg1 referString:(id)arg2 logExtra:(id)arg3;
- (void)cancelSpecialFollowUser:(id)arg0 context:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)canShowSpecialFollowSettingsWithUserModel:(id)arg0 referString:(id)arg1;
- (BOOL)specialFollowEnable;
- (BOOL)specialFollowAdaptUnreadEnable;
- (id)specialFollowText;
- (void)trackSpecialFollowShowEntranceWithUserID:(id)arg0 enterFrom:(id)arg1 entrancePosition:(unsigned long long)arg2;
- (BOOL)specialFollowOftenWatchTextEnable;
- (id)specialFollowElementAppearScenes;
- (id)addSpecialFollowAppearScenes;
- (BOOL)canShowGuidePanelWithType:(unsigned long long)arg0;
- (void)trackSpecialFollowToastShowWithText:(id)arg0;
- (void)resetSepecialFollowStorageWithUserIDs:(id)arg0;
- (unsigned long long)followPanelPostionFromMenuShowMethod:(unsigned long long)arg0;
- (BOOL)canShowAvatarEntranceWithReferString:(id)arg0 enterFrom:(id)arg1 specialFollowStatus:(long long)arg2;
- (BOOL)shouldShowSpecialFollowElementWithUserModel:(id)arg0 referString:(id)arg1;
- (void)recordContinuousMissSpecialFollowCount;
- (void)recordMissCountAndDate;
- (void)clearContinuousMissSpecialFollowCount;
- (void)recordShowSpecialFollowElementWithUserID:(id)arg0;
- (BOOL)shouldShowAddSpecialFollowElementWithUserModel:(id)arg0 referString:(id)arg1;
- (void)recordShowAddSpecialFollowWithUserID:(id)arg0;
- (void)closeRecommendSpecialFollowUserID:(id)arg0;
- (id)specialFollowYellowDotText;
- (id)specialFollowTextWithScenes:(unsigned long long)arg0 defaultText:(id)arg1;
- (id)topPinedOfflineToastTextWithUser:(id)arg0;
- (BOOL)isSpecialFollowInStorageWithUserID:(id)arg0;
- (void)trackSpecialFollowShowEntranceWithUserID:(id)arg0 enterFrom:(id)arg1 menuShowMethod:(unsigned long long)arg2;
- (id)playerTrackPramasWithModel:(id)arg0;

@end