//
//     Generated by private class-dump
//

@interface IESLivePloyCenter : NSObject

+ (void)messageInteraction_updateToolbarTipCounterWithTimes:(long long *)arg0 userID:(id)arg1 messageType:(long long)arg2 expire:(id)arg3;
+ (BOOL)checkAndUpdateShowPolicyWithBehaviourParams:(id)arg0 roomID:(id)arg1;
+ (void)gift_recordGiftSendTimeWithGiftId:(id)arg0;
+ (void)icon_recordTouchLabelSendedWithGift:(id)arg0 toUser:(id)arg1;
+ (void)assembly_deleteCachedCustomizedCardWithGiftId:(id)arg0 cardConfig:(id)arg1;
+ (long long)assembly_matchCustomizedCardRecordsWithPluginInfo:(id)arg0 giftId:(id)arg1;
+ (long long)lynx_assembly_matchCustomizedCardRecordsWithPluginInfo:(id)arg0 giftId:(id)arg1;
+ (void)lynx_assembly_saveCustomizedCardRecordWithConfig:(id)arg0 giftId:(id)arg1 replaceWithIndex:(long long)arg2;
+ (void)lynx_assembly_recordLastSendPluginListWithGiftId:(id)arg0 cardConfig:(id)arg1;
+ (void)lynx_assembly_recordLastSendCardNameWithGiftId:(id)arg0 cardConfig:(id)arg1;
+ (void)assembly_saveCustomizedCardRecordWithConfig:(id)arg0 giftId:(id)arg1 replaceWithIndex:(long long)arg2;
+ (void)assembly_recordCustomizedCardIndexPreviouslySelectedWithGiftId:(id)arg0 selectedIndex:(long long)arg1;
+ (void)assembly_recordCustomizedCardPreviouslySelectedWithGiftId:(id)arg0 cardConfig:(id)arg1;
+ (long long)assembly_getCustomizedCardIndexPreviouslySelectedWithGiftId:(id)arg0;
+ (BOOL)assembly_differentiatePluginInfo:(id)arg0 withPluginInfo:(id)arg1;
+ (void)optimizeKVIfNeedWithType:(unsigned long long)arg0 recordKey:(id)arg1;
+ (id)getPluginKeyWithGiftId:(id)arg0 cardConfig:(id)arg1;
+ (void)lynx_copyDiyGiftToolbarCacheIfNeededForGift:(id)arg0;
+ (void)lynx_copyDiyGiftLastSendPluginListForGift:(id)arg0;
+ (void)lynx_copyGiftSendTimeForGift:(id)arg0;
+ (void)assembly_replaceCustomizedCardRecordsForGiftId:(id)arg0 configs:(id)arg1;
+ (void)assembly_deleteCachedCustomizedCardWithGiftId:(id)arg0 index:(long long)arg1;
+ (id)assembly_getSavedCustomizedCardRecordWithGiftId:(id)arg0;
+ (id)lynx_assembly_getSavedCustomizedCardRecordWithGiftId:(id)arg0;
+ (id)assembly_getCustomizedCardPreviouslySelectedWithGiftId:(id)arg0;
+ (void)lynx_gift_recordGiftSendTimeWithGiftId:(id)arg0;
+ (long long)gift_getGiftSendTimeWithGiftId:(id)arg0;
+ (BOOL)icon_getTouchLabelSendedWithGift:(id)arg0 toUser:(id)arg1;
+ (void)assembly_recordCustomizedCardClickedWithGiftId:(id)arg0 cardConfig:(id)arg1;
+ (BOOL)assembly_getCustomizedCardClickedWithGiftId:(id)arg0 cardConfig:(id)arg1;
+ (void)giftDynamicOperation_saveStrategyLocateData:(id)arg0;
+ (id)giftDynamicOperation_strategyLocateData;
+ (void)giftSticker_updateGuideStatusWithGiftId:(id)arg0;
+ (id)giftSticker_getGuideStatusWithGiftId:(id)arg0;
+ (BOOL)monitor_checkAndUpdateGiftDiskMonitorStatus;
+ (id)parseConfigValues:(id)arg0;
+ (BOOL)checkShowPolicyWithIdentifier:(id)arg0 withUserID:(id)arg1 withDailyCount:(long long)arg2;
+ (BOOL)checkShowPolicyWithIdentifier:(id)arg0 withDailyCount:(long long)arg1;
+ (BOOL)checkShowPolicyWithIdentifier:(id)arg0 withUserID:(id)arg1 withRoomID:(id)arg2 withRoomCount:(long long)arg3;
+ (BOOL)checkShowPolicyWithIdentifier:(id)arg0 withRoomID:(id)arg1 withRoomCount:(long long)arg2;
+ (BOOL)checkShowPolicyWithIdentifier:(id)arg0 withUserID:(id)arg1 withTotalCount:(long long)arg2;
+ (BOOL)checkShowPolicyWithIdentifier:(id)arg0 withTotalCount:(long long)arg1;
+ (BOOL)checkAndUpdateShowPolicyWithIdentifier:(id)arg0 withUserID:(id)arg1 withDailyCount:(long long)arg2;
+ (BOOL)checkAndUpdateShowPolicyWithIdentifier:(id)arg0 withDailyCount:(long long)arg1;
+ (BOOL)checkAndUpdateShowPolicyWithIdentifier:(id)arg0 withUserID:(id)arg1 withRoomID:(id)arg2 withRoomCount:(long long)arg3;
+ (BOOL)checkAndUpdateShowPolicyWithIdentifier:(id)arg0 withRoomID:(id)arg1 withRoomCount:(long long)arg2;
+ (BOOL)checkAndUpdateShowPolicyWithIdentifier:(id)arg0 withUserID:(id)arg1 withTotalCount:(long long)arg2;
+ (BOOL)checkAndUpdateShowPolicyWithIdentifier:(id)arg0 withTotalCount:(long long)arg1;
+ (BOOL)checkAndUpdateChargeBannerShowPolicyWithRoomID:(id)arg0 tag:(id)arg1;
+ (BOOL)checkAndUpdateBuffCardShowPolicyWithKey:(id)arg0;
+ (BOOL)checkAndUpdateFansclubMissionGuide;
+ (BOOL)checkDailyFrequencyPermissionDailyMaxCount:(unsigned long long)arg0 businessIdentifier:(id)arg1 itemKey:(id)arg2;
+ (BOOL)checkAndUpdateGiftShimmerCountWithGiftID:(id)arg0 needShimmerCount:(unsigned long long)arg1 kvStore:(id)arg2;
+ (id)obtainGiftShimmerCountSoFarWithGiftID:(id)arg0 kvStore:(id)arg1;
+ (BOOL)checkAndUpdateGiftTappedWithGiftID:(id)arg0 isTapping:(BOOL)arg1;
+ (BOOL)checkAndUpdateInteractiveGiftGuideWithGiftId:(id)arg0 isSending:(BOOL)arg1;
+ (BOOL)privilege_enableSubscribeEmojiTip;
+ (BOOL)privilege_enableSubscribeEmojiTabTip;
+ (void)privilege_cleanSubscribeEmojiTip;
+ (void)privilege_cleanSubscribeEmojiTabTip;
+ (id)privilege_topLeftEntranceLastPanelTab;
+ (void)privilege_cleanTopLeftEntranceLastPanelTab;
+ (BOOL)privilege_shouldShowNewSubscribeEmojiTabDotToday:(id)arg0 andAnchorID:(id)arg1;
+ (void)privilege_updateLocalShowNewSubscribeEmojiTabDotDateWithUserID:(id)arg0 andAnchorID:(id)arg1;
+ (id)privilege_getIsNewSubscribeEmojiDicWithUserID:(id)arg0 andAnchorID:(id)arg1 andSubsribeEmojiArray:(id)arg2;
+ (void)pribilege_updateLocalSubscribeEmojiArrayWith:(id)arg0 andWithUserID:(id)arg1 andAnchorID:(id)arg2;
+ (void)test_resetSubscribeEmojiTip;
+ (void)test_resetSubscribeEmojiTabTip;

@end