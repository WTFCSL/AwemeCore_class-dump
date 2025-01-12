//
//     Generated by private class-dump
//

@class IESLiveInteractiveUserService, IESLiveLinkmicCanvasViewManager, NSString, IESLiveLinkmicLinkerAnchorManager, IESLiveInteractiveMediaService, IESLiveInteractiveLinkService, IESLiveLinkmicLinkerAdvanceConfig, IESLiveLinkmicLinkerAnchorModel, HTSLiveInteractiveAPIV2;
@protocol IESLiveLinkmicLinkerPlugin, IESLiveLinkmicLinkerAnchorDelegate, IESLiveCompoundSubscription, IESLiveInteractiveExtendUserService, IESLiveLinkmicLinkerAnchorDataSource;

@interface IESLiveLinkmicLinkerAnchor : IESLiveLinkmicLinker <IESLiveLinkmicCanvasViewManagerDataSource, IESLiveSEIListener, HTSLiveMessageSubscriber, IESLiveLinkmicLinkerPluginProvider, IESLiveInteractiveUserServiceDelegate, IESLiveInteractiveUserServiceSignalDelegate, IESLiveInteractiveLinkServiceDelegate, IESLiveInteractiveMediaServiceDelegate> {
    BOOL _seiOnInteractMode;
    id<IESLiveLinkmicLinkerAnchorDataSource> _dataSource;
    IESLiveLinkmicLinkerAnchorModel *_model;
    IESLiveLinkmicLinkerAnchorManager *_linkerManager;
    IESLiveLinkmicLinkerAdvanceConfig *_config;
    HTSLiveInteractiveAPIV2 *_api;
    unsigned long long _linkmicStatus;
    IESLiveInteractiveUserService *_userService;
    IESLiveInteractiveLinkService *_linkService;
    IESLiveInteractiveMediaService *_mediaService;
    id<IESLiveCompoundSubscription> _disposable;
    IESLiveLinkmicCanvasViewManager *_canvasViewManager;
    id<IESLiveLinkmicLinkerPlugin> _linkedPlugin;
    id<IESLiveLinkmicLinkerPlugin> _audiencePlugin;
}

@property (retain, nonatomic) IESLiveLinkmicLinkerAnchorManager *linkerManager;
@property (retain, nonatomic) IESLiveLinkmicLinkerAdvanceConfig *config;
@property (retain, nonatomic) HTSLiveInteractiveAPIV2 *api;
@property (nonatomic) BOOL seiOnInteractMode;
@property (nonatomic) unsigned long long linkmicStatus;
@property (retain, nonatomic) IESLiveLinkmicLinkerAnchorModel *model;
@property (retain, nonatomic) IESLiveInteractiveUserService *userService;
@property (retain, nonatomic) IESLiveInteractiveLinkService *linkService;
@property (retain, nonatomic) IESLiveInteractiveMediaService *mediaService;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) IESLiveLinkmicCanvasViewManager *canvasViewManager;
@property (retain, nonatomic) id<IESLiveLinkmicLinkerPlugin> linkedPlugin;
@property (retain, nonatomic) id<IESLiveLinkmicLinkerPlugin> audiencePlugin;
@property (readonly, nonatomic) id<IESLiveInteractiveExtendUserService> userServiceInterface;
@property (readonly, nonatomic) IESLiveInteractiveLinkService *linkServiceInterface;
@property (readonly, nonatomic) IESLiveInteractiveMediaService *mediaServiceInterface;
@property (weak, nonatomic) id<IESLiveLinkmicLinkerAnchorDataSource> dataSource;
@property (weak, nonatomic) id<IESLiveLinkmicLinkerAnchorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)setupModel;
- (void)bindAction;
- (id)userService;
- (void)setUserService:(id)arg0;
- (id)linkService;
- (void)setLinkService:(id)arg0;
- (void)startInteract;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)arg0;
- (unsigned long long)typeToCheckIfLaterThanWhenReuseSEI;
- (void)leaveWithSource:(unsigned long long)arg0 extraParams:(id)arg1 completion:(id /* block */)arg2;
- (void)kickoutWithUserID:(id)arg0 toSecUserID:(id)arg1 extraParams:(id)arg2 completion:(id /* block */)arg3;
- (void)muteAudioStreamWithUserID:(id)arg0 mute:(BOOL)arg1;
- (void)closeWithWithSource:(unsigned long long)arg0 extraParams:(id)arg1 completion:(id /* block */)arg2;
- (void)needUpdateUserPositions;
- (id)canvasManager;
- (id)userServiceInterface;
- (id)createInviteExtraParamsWithInviteSource:(int)arg0 inviteType:(unsigned long long)arg1 matchType:(long long)arg2;
- (void)inviteWithUserID:(id)arg0 secUserID:(id)arg1 roomID:(id)arg2 signExtra:(id)arg3 extraParams:(id)arg4 completion:(id /* block */)arg5;
- (void)cancelInviteWithUserID:(id)arg0 secUserID:(id)arg1 roomID:(id)arg2 source:(unsigned long long)arg3 signExtra:(id)arg4 extraParams:(id)arg5 completion:(id /* block */)arg6;
- (id)linkServiceInterface;
- (void)replyWithMessage:(id)arg0 type:(unsigned long long)arg1 extraParams:(id)arg2 completion:(id /* block */)arg3;
- (void)onReceivedLinkCloseMessage:(id)arg0;
- (void)onReceivedLinkInviteMessage:(id)arg0;
- (void)onReceivedLinkReplyMessage:(id)arg0;
- (void)onReceivedLinkKickOutMessage:(id)arg0;
- (void)onReceivedLinkCancelInviteMessage:(id)arg0;
- (void)onReceivedLinkLeaveMessage:(id)arg0;
- (void)joinChannel;
- (void)interactClient:(id)arg0 firstRemoteVideoDecodedOfUid:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2 elapsed:(long long)arg3;
- (void)multiLinkerUserService:(id)arg0 didInteractiveListUpdated:(id)arg1;
- (id)mediaServiceInterface;
- (void)removeUserByID:(id)arg0 forceOrNot:(BOOL)arg1;
- (void)interactiveMediaServiceDidStart:(id)arg0;
- (void)interactiveMediaServiceWillEnd:(id)arg0;
- (void)interactiveMediaServiceDidEnd:(id)arg0;
- (void)interactiveMediaService:(id)arg0 receivesError:(id)arg1;
- (void)interactiveMeidaServiceLostConnection:(id)arg0;
- (void)interactiveMediaService:(id)arg0 firstRemoteVideoWithLinkmicUid:(id)arg1;
- (void)interactiveMediaService:(id)arg0 didUpdatedSessionsLocalLayout:(id)arg1;
- (void)interactiveMediaService:(id)arg0 firstFrameRenderCallback:(id)arg1;
- (void)interactiveMediaService:(id)arg0 didOfflineOfUid:(id)arg1 sessions:(id)arg2 reason:(unsigned long long)arg3;
- (void)interactiveMediaService:(id)arg0 newSessionCreated:(id)arg1 local:(BOOL)arg2;
- (void)loadMediaService;
- (void)loadInteractiveLayout;
- (void)multiLinkerUserService:(id)arg0 onActiveChanged:(BOOL)arg1 linkmicID:(id)arg2;
- (void)setSeiOnInteractMode:(BOOL)arg0;
- (BOOL)seiOnInteractMode;
- (id)streamProfile;
- (id)linkerConfig;
- (id)seiAppData;
- (id)linkerManager;
- (void)setLinkerManager:(id)arg0;
- (void)setupServiceWithConfig:(id)arg0;
- (id)canvasViewManager;
- (id)linkerData;
- (unsigned long long)linkmicStatus;
- (void)setLinkmicStatus:(unsigned long long)arg0;
- (void)cleanLinkerData;
- (void)stopInteractWithError:(id)arg0;
- (void)switchMediaExtInfo;
- (void)updateUserPostions;
- (BOOL)hasInteractiveUser;
- (BOOL)isValidSEIResult:(id)arg0;
- (void)audienceLinkerStart:(id)arg0;
- (void)audienceLinkerUpdate:(id)arg0 gridsChange:(BOOL)arg1;
- (id)linkedPlugin;
- (id)audiencePlugin;
- (void)setCanvasViewManager:(id)arg0;
- (void)switchMediaExtInfoWithLinkedUserCount:(long long)arg0;
- (void)applyWithChannelID:(id)arg0 toUserID:(id)arg1 toSecUserID:(id)arg2 extraParams:(id)arg3 completion:(id /* block */)arg4;
- (void)cancelApplyWithChannelID:(id)arg0 toUserID:(id)arg1 toSecUserID:(id)arg2 source:(unsigned long long)arg3 extraParams:(id)arg4 completion:(id /* block */)arg5;
- (void)permitWithUserID:(id)arg0 toSecUserID:(id)arg1 type:(unsigned long long)arg2 extraParams:(id)arg3 completion:(id /* block */)arg4;
- (void)muteVideoStreamWithUserID:(id)arg0 mute:(BOOL)arg1;
- (void)setLinkedPlugin:(id)arg0;
- (void)setAudiencePlugin:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (void)dealloc;
- (void)messageReceived:(id)arg0;
- (id)api;
- (id)mediaService;
- (void)setMediaService:(id)arg0;
- (void)setApi:(id)arg0;

@end
