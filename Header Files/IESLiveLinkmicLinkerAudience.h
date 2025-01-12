//
//     Generated by private class-dump
//

@class NSString, IESLiveLinkmicLinkerConfig, IESLiveLinkmicLinkerAudienceModel;
@protocol IESLiveLinkmicLinkServiceInterface, IESLiveLinkmicLinkerAudienceDataSource, IESLiveLinkmicMediaServiceInterface, IESLiveLinkmicUserServiceInterface;

@interface IESLiveLinkmicLinkerAudience : IESLiveLinkmicLinker <IESLiveLinkmicMediaServiceDelegate, IESLiveLinkmicLinkServiceDelegate, IESLiveLinkmicUserServiceDelegate> {
    BOOL _isDoingLinker;
    BOOL _seiOnInteractMode;
    id<IESLiveLinkmicUserServiceInterface> _userService;
    id<IESLiveLinkmicLinkServiceInterface> _linkService;
    id<IESLiveLinkmicMediaServiceInterface> _mediaService;
    id<IESLiveLinkmicLinkerAudienceDataSource> _dataSource;
    long long _userState;
    IESLiveLinkmicLinkerConfig *_config;
    unsigned long long _linkmicStatus;
    IESLiveLinkmicLinkerAudienceModel *_model;
}

@property (retain, nonatomic) IESLiveLinkmicLinkerConfig *config;
@property (nonatomic) BOOL isDoingLinker;
@property (nonatomic) BOOL seiOnInteractMode;
@property (nonatomic) unsigned long long linkmicStatus;
@property (retain, nonatomic) IESLiveLinkmicLinkerAudienceModel *model;
@property (retain, nonatomic) id<IESLiveLinkmicUserServiceInterface> userService;
@property (retain, nonatomic) id<IESLiveLinkmicLinkServiceInterface> linkService;
@property (retain, nonatomic) id<IESLiveLinkmicMediaServiceInterface> mediaService;
@property (weak, nonatomic) id<IESLiveLinkmicLinkerAudienceDataSource> dataSource;
@property (nonatomic) long long userState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUserState:(long long)arg0;
- (id)userService;
- (void)setUserService:(id)arg0;
- (id)linkService;
- (void)setLinkService:(id)arg0;
- (void)enterWithChannelID:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (void)leaveWithSource:(id)arg0 extraParams:(id)arg1 completion:(id /* block */)arg2;
- (void)stopLinkmicWithSource:(id)arg0 extraParams:(id)arg1 completion:(id /* block */)arg2;
- (void)applyWithChannelID:(id)arg0 extraParams:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelApplyWithChannelID:(id)arg0 extraParams:(id)arg1 completion:(id /* block */)arg2;
- (void)inviteUserID:(id)arg0 secUserID:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelInviteWithUserID:(id)arg0 secUserID:(id)arg1 extraParams:(id)arg2 completion:(id /* block */)arg3;
- (void)permitWithUserID:(id)arg0 toSecUserID:(id)arg1 extraParams:(id)arg2 completion:(id /* block */)arg3;
- (void)refuseWithUserID:(id)arg0 toSecUserID:(id)arg1 extraParams:(id)arg2 completion:(id /* block */)arg3;
- (void)replyWithContext:(id)arg0 type:(unsigned long long)arg1 linkMode:(long long)arg2 extraParams:(id)arg3 completion:(id /* block */)arg4;
- (void)muteWithUserID:(id)arg0 toSecUserID:(id)arg1 mute:(BOOL)arg2 reason:(id)arg3 extraParams:(id)arg4 completion:(id /* block */)arg5;
- (void)kickoutWithUserID:(id)arg0 toSecUserID:(id)arg1 extraParams:(id)arg2 completion:(id /* block */)arg3;
- (void)onReceivedCreateMessage:(id)arg0;
- (void)onReceivedCloseMessage:(id)arg0;
- (void)onReceivedInviteMessage:(id)arg0;
- (void)onReceivedReplyMessage:(id)arg0;
- (void)onReceivedPermitMessage:(id)arg0;
- (void)onReceivedEnterMessage:(id)arg0;
- (void)onReceivedLeaveMessage:(id)arg0;
- (void)onReceivedKickoutedMessage:(id)arg0;
- (void)onReceivedLinkedListChangeMessage:(id)arg0;
- (void)onReceivedSilenceStatusMessage:(id)arg0;
- (void)onReceivedApplyMessage:(id)arg0;
- (id)currentLinkmicID;
- (void)linkmicMediaService:(id)arg0 receivesError:(id)arg1;
- (void)linkmicMediaServiceDidStart:(id)arg0;
- (void)linkmicMediaServiceDidEnd:(id)arg0;
- (void)linkmicMediaService:(id)arg0 onUserJoined:(id)arg1;
- (void)linkmicMediaService:(id)arg0 onUserLeaved:(id)arg1;
- (void)linkmicMediaService:(id)arg0 onUserAudioMute:(id)arg1 mute:(BOOL)arg2;
- (void)linkmicMediaService:(id)arg0 firstRemoteAudioWithLinkmicUid:(id)arg1;
- (void)linkmicMediaServiceFirstLocalAudio:(id)arg0;
- (void)linkmicMediaService:(id)arg0 onUserVolumeIndication:(id)arg1 volume:(long long)arg2;
- (void)linkmicMediaService:(id)arg0 onTotalVolumeIndication:(long long)arg1;
- (void)linkmicMediaServiceDidStartPushStream:(id)arg0;
- (void)linkmicUserService:(id)arg0 onActiveListDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)setSeiOnInteractMode:(BOOL)arg0;
- (BOOL)seiOnInteractMode;
- (BOOL)canJoinChannel;
- (void)linkmicMediaServiceWillEnd:(id)arg0;
- (void)linkmicMediaService:(id)arg0 newSessionCreated:(id)arg1 local:(BOOL)arg2;
- (void)onReceivedInviteCancelMessage:(id)arg0;
- (unsigned long long)linkmicStatus;
- (void)setLinkmicStatus:(unsigned long long)arg0;
- (void)stopInteractWithError:(id)arg0;
- (BOOL)hasInteractiveUser;
- (void)muteVideoStreamWithUserID:(id)arg0 mute:(BOOL)arg1;
- (BOOL)isDoingLinker;
- (void)setIsDoingLinker:(BOOL)arg0;
- (void)startInteractWithPrevState:(long long)arg0;
- (void)startLinkmicWithChannelID:(id)arg0 autoMute:(BOOL)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)inviteUserID:(id)arg0 secUserID:(id)arg1 extraParams:(id)arg2 completion:(id /* block */)arg3;
- (void)inviteUserID:(id)arg0 secUserID:(id)arg1 seatIndex:(long long)arg2 extraParams:(id)arg3 completion:(id /* block */)arg4;
- (void)applyWithChannelID:(id)arg0 linkMode:(long long)arg1 seatIndex:(long long)arg2 extraParams:(id)arg3 completion:(id /* block */)arg4;
- (void)muteAudioStreamWithUserID:(id)arg0 mute:(BOOL)arg1 reason:(id)arg2;
- (void)startLinkmicWithChannelID:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (void)setUserState:(long long)arg0 force:(BOOL)arg1;
- (void)linkmicUserService:(id)arg0 onUserMuted:(id)arg1 mute:(BOOL)arg2;
- (void)createWithScene:(unsigned long long)arg0 supportedScenes:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)resumeWithParamDict:(id)arg0 completion:(id /* block */)arg1;
- (void)closeWithWithChannelID:(id)arg0 source:(id)arg1 extraParams:(id)arg2 completion:(id /* block */)arg3;
- (void)replyWithContext:(id)arg0 type:(unsigned long long)arg1 extraParams:(id)arg2 completion:(id /* block */)arg3;
- (void)setModel:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)config;
- (BOOL)isConnected;
- (void)setup;
- (id)initWithConfig:(id)arg0;
- (long long)userState;
- (id)mediaService;
- (void)setMediaService:(id)arg0;
- (void)clean;

@end
