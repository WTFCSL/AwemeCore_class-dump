//
//     Generated by private class-dump
//

@class NSMutableDictionary, IESLiveMultiChannelInfo, NSDictionary, HTSLiveLinkMessage, JoinChannelResponse_MultiAnchorLinkmicRtcLiveCoreData, IESLiveLinkMicListResponse, HTSInteractionStreamAppData, NSString, IESLiveMultiAnchorLinkmicLiveCoreInfo, HTSLiveIntercomChangeSyncData, IESLiveLinkmicLinkerAnchorLayoutModel, IESLiveMultiAnchorLinkmicRtcInfo, NSNumber, IESLiveIntercomCommentMediaConfig, IESLiveLinkmicLinkerAdvanceConfig;

@interface IESLiveLinkmicLinkerAnchorModel : NSObject <IESLiveLinkmicLinkerPluginData> {
    BOOL _useMultiChannel;
    int _inviteSource;
    unsigned long long _vendor;
    NSNumber *_channelID;
    NSString *_linkmicID;
    NSString *_backgroundColor;
    HTSInteractionStreamAppData *_appData;
    HTSLiveIntercomChangeSyncData *_intercomMessageModel;
    IESLiveIntercomCommentMediaConfig *_intercomConfig;
    IESLiveLinkmicLinkerAdvanceConfig *_config;
    NSString *_theme;
    NSMutableDictionary *_oppositeUIDToSignExtra;
    HTSLiveLinkMessage *_replyMessage;
    HTSLiveLinkMessage *_inviteMessage;
    NSNumber *_inviteeRoomID;
    NSString *_inviteeUID;
    NSString *_inviteeSecUID;
    NSString *_inviteeLinkmicID;
    NSString *_replyUID;
    NSString *_replyLinkmicID;
    NSString *_applyUID;
    NSString *_applySecUID;
    NSString *_applyLinkmicID;
    NSString *_permitUID;
    NSString *_permitLinkmicID;
    NSString *_receiveUID;
    NSNumber *_inviteRoomID;
    NSDictionary *_rtcExtraInfo;
    long long _regionCount;
    IESLiveMultiAnchorLinkmicRtcInfo *_multiRtcInfo;
    IESLiveMultiAnchorLinkmicLiveCoreInfo *_multiLiveCoreInfo;
    IESLiveMultiChannelInfo *_multiChannelInfo;
    JoinChannelResponse_MultiAnchorLinkmicRtcLiveCoreData *_rtcLiveCoreData;
    IESLiveLinkmicLinkerAnchorLayoutModel *_layoutModel;
    IESLiveLinkMicListResponse *_listData;
}

@property (retain, nonatomic) IESLiveLinkmicLinkerAdvanceConfig *config;
@property (nonatomic) unsigned long long vendor;
@property (copy, nonatomic) NSNumber *channelID;
@property (copy, nonatomic) NSString *linkmicID;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *theme;
@property (retain, nonatomic) NSMutableDictionary *oppositeUIDToSignExtra;
@property (retain, nonatomic) HTSLiveLinkMessage *replyMessage;
@property (retain, nonatomic) HTSLiveLinkMessage *inviteMessage;
@property (copy, nonatomic) NSNumber *inviteeRoomID;
@property (copy, nonatomic) NSString *inviteeUID;
@property (copy, nonatomic) NSString *inviteeSecUID;
@property (copy, nonatomic) NSString *inviteeLinkmicID;
@property (copy, nonatomic) NSString *replyUID;
@property (copy, nonatomic) NSString *replyLinkmicID;
@property (copy, nonatomic) NSString *applyUID;
@property (copy, nonatomic) NSString *applySecUID;
@property (copy, nonatomic) NSString *applyLinkmicID;
@property (copy, nonatomic) NSString *permitUID;
@property (copy, nonatomic) NSString *permitLinkmicID;
@property (copy, nonatomic) NSString *receiveUID;
@property (copy, nonatomic) NSNumber *inviteRoomID;
@property (copy, nonatomic) NSDictionary *rtcExtraInfo;
@property (nonatomic) long long regionCount;
@property (retain, nonatomic) IESLiveMultiAnchorLinkmicRtcInfo *multiRtcInfo;
@property (retain, nonatomic) IESLiveMultiAnchorLinkmicLiveCoreInfo *multiLiveCoreInfo;
@property (nonatomic) BOOL useMultiChannel;
@property (retain, nonatomic) IESLiveMultiChannelInfo *multiChannelInfo;
@property (retain, nonatomic) JoinChannelResponse_MultiAnchorLinkmicRtcLiveCoreData *rtcLiveCoreData;
@property (retain, nonatomic) IESLiveLinkmicLinkerAnchorLayoutModel *layoutModel;
@property (nonatomic) int inviteSource;
@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (retain, nonatomic) IESLiveLinkMicListResponse *listData;
@property (retain, nonatomic) HTSLiveIntercomChangeSyncData *intercomMessageModel;
@property (retain, nonatomic) IESLiveIntercomCommentMediaConfig *intercomConfig;
@property (readonly, nonatomic) HTSInteractionStreamAppData *seiAppData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)layoutModel;
- (void)setLayoutModel:(id)arg0;
- (void)setListData:(id)arg0;
- (id)inviteeUID;
- (id)applyUID;
- (id)linkmicID;
- (id)inviteeSecUID;
- (id)rtcExtraInfo;
- (void)setLinkmicID:(id)arg0;
- (void)setRegionCount:(long long)arg0;
- (id)intercomConfig;
- (void)setIntercomConfig:(id)arg0;
- (id)intercomMessageModel;
- (void)setIntercomMessageModel:(id)arg0;
- (long long)keyWithUserCount:(long long)arg0;
- (id)receiveUID;
- (void)setReceiveUID:(id)arg0;
- (void)setRtcExtraInfo:(id)arg0;
- (int)inviteSource;
- (id)multiRtcInfo;
- (id)multiLiveCoreInfo;
- (id)multiChannelInfo;
- (BOOL)useMultiChannel;
- (id)rtcLiveCoreData;
- (id)oppositeUIDToSignExtra;
- (void)setInviteSource:(int)arg0;
- (void)updateMultiChannelInfoWith:(id)arg0 shouldMerge:(BOOL)arg1;
- (void)setMultiChannelInfo:(id)arg0;
- (id)applySecUID;
- (void)setUseMultiChannel:(BOOL)arg0;
- (void)setMultiRtcInfo:(id)arg0;
- (void)setMultiLiveCoreInfo:(id)arg0;
- (void)setInviteRoomID:(id)arg0;
- (void)setApplyUID:(id)arg0;
- (void)setApplySecUID:(id)arg0;
- (void)setOppositeUIDToSignExtra:(id)arg0;
- (id)inviteRoomID;
- (void)updateWithSwitchSceneMessage:(id)arg0;
- (void)updateWithInviteMessage:(id)arg0;
- (void)updateWithPermitMessage:(id)arg0;
- (void)setInviteeUID:(id)arg0;
- (void)setInviteeSecUID:(id)arg0;
- (void)setInviteeRoomID:(id)arg0;
- (void)setInviteeLinkmicID:(id)arg0;
- (void)setRtcLiveCoreData:(id)arg0;
- (void)setReplyUID:(id)arg0;
- (void)setReplyLinkmicID:(id)arg0;
- (void)setApplyLinkmicID:(id)arg0;
- (id)seiAppData;
- (void)updateWithInviteRespnse:(id)arg0;
- (void)updateWithReplyResponse:(id)arg0;
- (void)updateWithJoinChannelRespone:(id)arg0;
- (void)updateWithReplyMessage:(id)arg0;
- (void)updateWithApplyMessage:(id)arg0;
- (void)updateWithPermitResponse:(id)arg0;
- (void)updateLinkmicSEIParserResult:(id)arg0;
- (id)liveCoreInfoWithUserCount:(long long)arg0;
- (id)rtcInfoWithUserCount:(long long)arg0;
- (id)inviteeRoomID;
- (id)inviteeLinkmicID;
- (id)replyUID;
- (id)replyLinkmicID;
- (id)applyLinkmicID;
- (id)permitUID;
- (void)setPermitUID:(id)arg0;
- (id)permitLinkmicID;
- (void)setPermitLinkmicID:(id)arg0;
- (void)setConfig:(id)arg0;
- (void)setTheme:(id)arg0;
- (id)channelID;
- (void).cxx_destruct;
- (id)theme;
- (unsigned long long)vendor;
- (id)config;
- (id)backgroundColor;
- (long long)regionCount;
- (void)setBackgroundColor:(id)arg0;
- (void)setVendor:(unsigned long long)arg0;
- (void)setChannelID:(id)arg0;
- (id)listData;
- (void)setAppData:(id)arg0;
- (id)appData;
- (id)inviteMessage;
- (void)setInviteMessage:(id)arg0;
- (id)replyMessage;
- (void)setReplyMessage:(id)arg0;

@end