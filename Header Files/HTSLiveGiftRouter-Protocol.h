//
//     Generated by private class-dump
//

@protocol HTSLiveGiftRouter <IESLiveGiftModuleGiftInterface>

- (void)trackWithEvent:(id)arg0 extra:(id)arg1;
- (BOOL)isSwitchedToOtherRoom;
- (void)performSelectGiftActionWhenClickedRedPack;
- (id)giftPanelComponentsView;
- (id)realPanelViewDataSharing;
- (double)giftPanelViewShowTime;
- (void)updateGiftPanelAndFetchGiftListWithRecipients:(id)arg0 allMic:(BOOL)arg1 recipientChanged:(BOOL)arg2;
- (id)giftListFeatureParams;
- (id)giftForCurrentSelectedRecipientsWithGiftID:(id)arg0 needCheckResourceReady:(BOOL)arg1;
- (id)getCurrentTouchMessageManager;
- (long long)currentRoomOpenTimes;
- (BOOL)preJudgePkcardWithCurrentAnchorRoomByLocal;
- (void)cleanLocalPkcardIdentifyWithCurrentAnchorRoom;
- (void)downLoadGiftAssetIfNeed:(id)arg0;

@end
