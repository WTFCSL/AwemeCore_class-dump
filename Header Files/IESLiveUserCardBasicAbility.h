//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, IESLiveUserCardDiggAPI, IESLiveComponentContext, GetAdminOperationTypeResponse_ResponseData;
@protocol IESLiveRoomService;

@interface IESLiveUserCardBasicAbility : NSObject <IESLiveUserCardBasicAbilityProtocol> {
    BOOL _needKickoutSilenceInfo;
    BOOL _hasFetchKickoutInfo;
    BOOL _hasFetchSilenceInfo;
    HTSEventContext *_trackContext;
    IESLiveComponentContext *_componentContext;
    id<IESLiveRoomService> _room;
    unsigned long long _interactiveTypeWhenShow;
    IESLiveUserCardDiggAPI *_usercardDiggApi;
    long long _diggCount;
    id /* block */ _uploadDiggMessageTask;
    GetAdminOperationTypeResponse_ResponseData *_kickoutInfo;
    GetAdminOperationTypeResponse_ResponseData *_silenceInfo;
}

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) unsigned long long interactiveTypeWhenShow;
@property (retain, nonatomic) IESLiveUserCardDiggAPI *usercardDiggApi;
@property (nonatomic) long long diggCount;
@property (copy, nonatomic) id /* block */ uploadDiggMessageTask;
@property (nonatomic) BOOL needKickoutSilenceInfo;
@property (retain, nonatomic) GetAdminOperationTypeResponse_ResponseData *kickoutInfo;
@property (nonatomic) BOOL hasFetchKickoutInfo;
@property (retain, nonatomic) GetAdminOperationTypeResponse_ResponseData *silenceInfo;
@property (nonatomic) BOOL hasFetchSilenceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (long long)diggCount;
- (void)setDiggCount:(long long)arg0;
- (void)processAdminOperationTypeResponse:(id)arg0 userID:(id)arg1 actionType:(long long)arg2 backupAction:(id /* block */)arg3 cancelAction:(id /* block */)arg4 scene:(id)arg5;
- (id)makeEventWithLiveRoomModel:(id)arg0 block:(id /* block */)arg1;
- (BOOL)needKickoutSilenceInfo;
- (void)setNeedKickoutSilenceInfo:(BOOL)arg0;
- (id)initWithRoom:(id)arg0 trackContext:(id)arg1 componentContext:(id)arg2;
- (BOOL)isGuestUser:(id)arg0;
- (void)managerAnonymousUserWithSilence:(BOOL)arg0;
- (void)kickoutUserAlertWithUserID:(id)arg0 secUserId:(id)arg1;
- (void)reportUser:(id)arg0 config:(id)arg1 myRole:(unsigned long long)arg2 itsRole:(unsigned long long)arg3;
- (void)actionMute:(id)arg0;
- (void)showAdministrateSheet:(id)arg0 config:(id)arg1 myRole:(unsigned long long)arg2 itsRole:(unsigned long long)arg3;
- (void)actionAt:(long long)arg0 toRole:(long long)arg1 currentUser:(id)arg2 userSuitId:(id)arg3 config:(id)arg4;
- (void)onMoreTapped:(id)arg0 fromRole:(long long)arg1 toRole:(long long)arg2 currentUser:(id)arg3 myRole:(unsigned long long)arg4 itsRole:(unsigned long long)arg5 previewConfig:(id)arg6;
- (void)handleUrl:(id)arg0 fromRole:(long long)arg1 toRole:(long long)arg2 currentUser:(id)arg3 myRole:(unsigned long long)arg4 itsRole:(unsigned long long)arg5 previewConfig:(id)arg6;
- (void)handleLikeButtonTappedInMore:(id)arg0 currentUser:(id)arg1;
- (void)handleAdventureInviteEntry:(id)arg0 currentUser:(id)arg1;
- (void)beginUploadDiggMessage:(id)arg0 scene:(id)arg1;
- (void)setDiggCount;
- (void)endUploadDiggMessage;
- (void)selectUserProfileStyle:(long long)arg0 smartSwitchEnabled:(BOOL)arg1 needUpdate:(BOOL)arg2 config:(id)arg3 currentUser:(id)arg4;
- (id)parseLiveText:(id)arg0;
- (void)managerAnonymousWithSilenceSuccess:(BOOL)arg0 currentMuteState:(BOOL)arg1;
- (void)changeBanState:(id)arg0;
- (BOOL)hasFetchSilenceInfo;
- (id)silenceInfo;
- (void)clickMuteTrack:(id)arg0;
- (BOOL)hasFetchKickoutInfo;
- (id)kickoutInfo;
- (void)kickoutUserWithUserID:(id)arg0 secUserId:(id)arg1;
- (void)alertKickoutTrack:(BOOL)arg0 withUserID:(id)arg1;
- (void)tr_trackProfileCardAddAudienceGiftReceiverClick:(id)arg0;
- (void)tr_trackProfileCardAddAudienceGiftReceiverSuccess:(id)arg0;
- (void)fetchAdminOperationWithUser:(id)arg0;
- (void)changeAdministrateState:(id)arg0;
- (void)clickAdminTrack:(BOOL)arg0 userID:(id)arg1;
- (void)kickoutUserActionWithUserID:(id)arg0 secUserId:(id)arg1;
- (void)clickKickoutTrack:(id)arg0;
- (void)addGiftAudienceReceiver:(id)arg0;
- (void)trackFeedbackPopupClick:(id)arg0 buttonTitle:(id)arg1 sheetTitle:(id)arg2;
- (BOOL)needShowReport:(id)arg0;
- (void)trackFeedbackPopupShowWithUserID:(id)arg0 sheetTitle:(id)arg1;
- (void)setSilenceInfo:(id)arg0;
- (void)setKickoutInfo:(id)arg0;
- (void)setHasFetchSilenceInfo:(BOOL)arg0;
- (void)setHasFetchKickoutInfo:(BOOL)arg0;
- (void)trackAdminOperationAlertClickedWithUserID:(id)arg0 actionType:(long long)arg1 buttonTitle:(id)arg2 title:(id)arg3;
- (void)trackAdminOperationAlertShowWithUserID:(id)arg0 actionType:(long long)arg1 windowPrompt:(id)arg2;
- (void)atUser:(id)arg0 config:(id)arg1;
- (id)getCurrentRequestPage:(long long)arg0 toRole:(long long)arg1;
- (id)requestPageString:(unsigned long long)arg0;
- (void)clickAtUserTrack:(id)arg0 config:(id)arg1;
- (id)trackUserType;
- (void)handleConfig:(id)arg0 fromRole:(long long)arg1 toRole:(long long)arg2 currentUser:(id)arg3 myRole:(unsigned long long)arg4 itsRole:(unsigned long long)arg5 previewConfig:(id)arg6;
- (BOOL)isSendGift:(id)arg0;
- (void)showSendGiftPanelWithShowFrom:(id)arg0 currentUser:(id)arg1 itsRole:(unsigned long long)arg2;
- (void)tr_sendGiftClicked:(long long)arg0 toRole:(long long)arg1 currentUser:(id)arg2;
- (BOOL)isInviteChat:(id)arg0;
- (void)inviteUserToChatForUserCard:(unsigned long long)arg0 currentUser:(id)arg1;
- (BOOL)isPreInviteChat:(id)arg0;
- (void)preInviteUser:(id)arg0;
- (BOOL)isStopConnection:(id)arg0;
- (void)stopConnection:(unsigned long long)arg0 itsRole:(unsigned long long)arg1 currentUser:(id)arg2 previewConfig:(id)arg3;
- (BOOL)isFlashSale:(id)arg0;
- (void)showFlashSaleEntrance:(id)arg0;
- (void)tr_flashSaleClicked:(long long)arg0 toRole:(long long)arg1 currentUser:(id)arg2;
- (BOOL)isOwnRoomsAnchor:(id)arg0;
- (void)refreshShowType:(id)arg0;
- (void)trackInvite;
- (void)inviteUserToChat:(unsigned long long)arg0 currentUser:(id)arg1;
- (BOOL)bigPartyInvitetationEnable:(unsigned long long)arg0 currentUser:(id)arg1;
- (BOOL)intimateChatInvitetationEnable:(unsigned long long)arg0 currentUser:(id)arg1;
- (BOOL)multiAudioInvitetationEnable:(unsigned long long)arg0 currentUser:(id)arg1;
- (BOOL)pkAnchorEnable:(unsigned long long)arg0 currentUser:(id)arg1;
- (unsigned long long)interactiveTypeWhenShow;
- (BOOL)bigPartyAdminEnable:(id)arg0;
- (void)setInteractiveTypeWhenShow:(unsigned long long)arg0;
- (BOOL)intimateChatAdminEnable:(id)arg0;
- (BOOL)multiAudioAdminEnable:(id)arg0;
- (BOOL)pkAdminEnable:(id)arg0;
- (BOOL)bigPartyAnchorEnable:(unsigned long long)arg0 currentUser:(id)arg1;
- (BOOL)multiAudioAnchorEnable:(unsigned long long)arg0 currentUser:(id)arg1;
- (BOOL)bigPartyStopAnchorEnable:(unsigned long long)arg0 currentUser:(id)arg1;
- (BOOL)intimateChatStopEnable:(unsigned long long)arg0 currentUser:(id)arg1;
- (BOOL)multiAudioStopAnchorEnable:(unsigned long long)arg0 currentUser:(id)arg1;
- (BOOL)pkStopAnchorEnable:(unsigned long long)arg0 currentUser:(id)arg1;
- (BOOL)bigPartyKickAdminEnable:(id)arg0;
- (BOOL)intimateChatStopAdminEnable:(id)arg0;
- (BOOL)multiAudioStopAdminEnable:(id)arg0;
- (BOOL)pkStopAdminEnable:(id)arg0;
- (void)trackStopConnection:(id)arg0 itsRole:(unsigned long long)arg1 previewConfig:(id)arg2;
- (BOOL)targetIsAnchor:(unsigned long long)arg0 currentUser:(id)arg1;
- (id /* block */)uploadDiggMessageTask;
- (void)uploadDiggMessage:(id)arg0 scene:(id)arg1;
- (void)uploadDiggMessageAutomatically:(id)arg0 scene:(id)arg1;
- (void)setUploadDiggMessageTask:(id /* block */)arg0;
- (id)usercardDiggApi;
- (void)trackLikeDig:(id)arg0;
- (id)parseWord:(id)arg0;
- (id)parseImage:(id)arg0;
- (id)textColor:(id)arg0;
- (id)textFont:(id)arg0;
- (id)fontName:(long long)arg0;
- (void)setUsercardDiggApi:(id)arg0;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;

@end
