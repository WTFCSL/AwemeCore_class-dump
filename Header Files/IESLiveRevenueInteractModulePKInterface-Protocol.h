//
//     Generated by private class-dump
//

@protocol IESLiveRevenueInteractModulePKInterface <NSObject>

- (long long)currentCameraPosition;
- (id)linkedUsers;
- (id)linkmicHost;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })streamRect;
- (BOOL)enableSendGiftToOthers;
- (BOOL)userInActiveList:(id)arg0;
- (id)connectionTypeForTrack;
- (void)showFeedbackViewFromSource:(long long)arg0;
- (void)trackWithEvent:(id)arg0 extra:(id)arg1;
- (void)sendEffectRenderInfo;
- (id)baseTrackParams;
- (id)smallGiftViews;
- (id)anchorViewFrames;
- (id)uidToRenderKeys;
- (unsigned long long)currentRoleType;
- (void)showExplainCard:(BOOL)arg0 preferredHeight:(double)arg1 completeBlock:(id /* block */)arg2;
- (void)notifyExplainCardHeightChanged:(double)arg0;
- (void)notifyPKLynxEvent:(long long)arg0 extraParams:(id)arg1;
- (BOOL)didConnectToAnchor;
- (BOOL)isProcessingBusinessPrepareToInteracting;
- (BOOL)isMixStreaming;
- (BOOL)isProcessingInteractionPK;
- (void)inviteWithRoomID:(id)arg0 toUserID:(id)arg1 secToUserID:(id)arg2 signExtra:(id)arg3 isVote:(BOOL)arg4 inviteType:(unsigned long long)arg5 inviteSource:(unsigned long long)arg6 extraParams:(id)arg7 successHandler:(id /* block */)arg8 errorHandler:(id /* block */)arg9;
- (void)switchSceneFromMultiNormalWithMediaService:(id)arg0;
- (void)clickInteractionItem;
- (BOOL)isGiftPKing;
- (void)showInteractSettingPanel:(unsigned long long)arg0;
- (void)showPKDecoration:(BOOL)arg0;
- (BOOL)isInteractScoreShow;
- (BOOL)enableGiftQueueConsume;
- (BOOL)isProcessingPK;
- (void)clickLinkMicEntrance;
- (BOOL)supportOpenCamera;
- (void)overturnCamera;
- (void)turnOnCameraByOther:(BOOL)arg0;
- (void)turnOnCameraBySelf:(BOOL)arg0;
- (BOOL)isCameraOpen;
- (BOOL)shouldIgnoreCameraRemoteControl;
- (void)openBeautySettingPanelBeforeVideoInteractionWithStartBlock:(id /* block */)arg0 cancelBlock:(id /* block */)arg1;
- (void)switchSceneFromBigPartyWithMediaService:(id)arg0;
- (void)switchApplyStateFromMultiNormalWithLinkMicID:(id)arg0 interactiveMode:(long long)arg1;
- (void)switchSceneFromBigPartyWithMediaService:(id)arg0 cameraPreview:(id)arg1;
- (void)switchApplyStateFromBigPartyWithLinkMicID:(id)arg0 interactiveMode:(long long)arg1;
- (void)switchPreApplyStateFromBigPartyWithDisplayText:(id)arg0;
- (void)applyConnectionWithEventExtra:(id)arg0 applySource:(unsigned long long)arg1;
- (BOOL)isApplyingToJoinChannel;
- (void)stopConnectionWithRequestSource:(id)arg0;
- (BOOL)isTransforming;
- (BOOL)isRematchStatus;
- (BOOL)isInvitingOthers;
- (id)userID2LinkmicIDMap;
- (id)userID2RegionMap;
- (id)oppositeUserModel;
- (id)oppositeRoom;
- (id)currentGiftPKInfo;
- (void)setTeamTaskRunning:(BOOL)arg0;
- (BOOL)canSwitchToOtherRoom;
- (id)emojiContainerForUserID:(id)arg0 isInteractiveEmoji:(BOOL)arg1;
- (double)ownGuestViewHeight;
- (BOOL)ownGuestConnected;
- (id)ownGuestList;
- (id)oppoGuestList;
- (BOOL)enableSendGiftToGuest;
- (void)subscribeRemainTime:(id)arg0;
- (void)startAutoMatchWithMatchType:(long long)arg0 source:(id)arg1 activityType:(id)arg2;
- (void)inviteBattle:(int)arg0;
- (void)inviteUserWithSecID:(id)arg0 userID:(id)arg1 sourcePage:(id)arg2;
- (void)stopConnectionWithUserID:(id)arg0 secUserID:(id)arg1 requestSource:(id)arg2;
- (BOOL)interactAdminModeEnable;
- (BOOL)userInActiveOrWaitingList:(id)arg0;
- (void)trackPKLynxEvent:(id)arg0 extraParams:(id)arg1;
- (void)handleBattleBg:(id)arg0 topImage:(id)arg1 bottomImage:(id)arg2;
- (double)resolutionRatio;

@end
