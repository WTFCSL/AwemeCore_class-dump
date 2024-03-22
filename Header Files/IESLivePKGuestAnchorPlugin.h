//
//     Generated by private class-dump
//

@class IESLivePKGuestInteractiveRootPanel, NSString, NSArray, IESLivePKGuestInteractSettingHandler, IESLivePKGuestInteractiveRootPanelViewModel, IESLivePKGuestAnchorBuilder, IESLivePKGuestTrackerContext, IESLivePKGuestTrackHandler, IESLivePKModel;
@protocol IESLiveShareServiceAdapter, IESLiveRoomServiceAdapter;

@interface IESLivePKGuestAnchorPlugin : NSObject <IESLiveInteractiveLinkServiceDelegate, IESLivePKGuestInteractiveRootPanelDelegate, IESLivePKStateAction, IESLivePKInstanceProtocol, IESLivePKGuestProvider> {
    BOOL isBigPartyMode;
    BOOL _pkingStateReceived;
    IESLivePKGuestTrackerContext *guestTrackerContext;
    IESLivePKGuestTrackHandler *guestTrackerHandler;
    IESLivePKGuestInteractSettingHandler *settingHandler;
    id<IESLiveRoomServiceAdapter> _room;
    IESLivePKGuestInteractiveRootPanel *_audOperatePanel;
    IESLivePKGuestInteractiveRootPanelViewModel *_audOperatePanelViewModel;
    NSArray *_readedApplications;
    IESLivePKModel *_pkmodel;
    IESLivePKGuestAnchorBuilder *_guestBuilder;
    id<IESLiveShareServiceAdapter> _shareService;
}

@property (weak, nonatomic) IESLivePKGuestInteractiveRootPanel *audOperatePanel;
@property (retain, nonatomic) IESLivePKGuestInteractiveRootPanelViewModel *audOperatePanelViewModel;
@property (retain, nonatomic) NSArray *readedApplications;
@property (retain, nonatomic) IESLivePKModel *pkmodel;
@property (retain, nonatomic) IESLivePKGuestAnchorBuilder *guestBuilder;
@property (retain, nonatomic) id<IESLiveShareServiceAdapter> shareService;
@property (nonatomic) BOOL pkingStateReceived;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESLivePKGuestTrackerContext *guestTrackerContext;
@property (retain, nonatomic) IESLivePKGuestTrackHandler *guestTrackerHandler;
@property (retain, nonatomic) IESLivePKGuestInteractSettingHandler *settingHandler;
@property (nonatomic) BOOL isBigPartyMode;

- (void)showToast:(id)arg0;
- (void)didSetAttachingDIContext;
- (id)shareService;
- (void)setShareService:(id)arg0;
- (void)setPkmodel:(id)arg0;
- (void)componentContainerFrameChanged;
- (id)pkmodel;
- (void)didChangePKStateFrom:(long long)arg0 to:(long long)arg1;
- (void)onPKFinish;
- (void)onReceivedReplyAudienceMessage:(id)arg0;
- (void)onReceiveAutoJoinApplicationMessage:(id)arg0;
- (void)onReceiveAudienceCameraOpenReply:(id)arg0;
- (void)onReceivedAudiencePreapplyMessage:(id)arg0;
- (void)onReceivedAudienceCancelPreapplyMessage:(id)arg0;
- (void)endLiveWithScource:(unsigned long long)arg0;
- (BOOL)linkMicConnected;
- (void)showAdminOperatePanel;
- (void)askForStopConnection;
- (void)applyForConnection;
- (void)handleGuestSeatDidTapped;
- (void)onPKCloseWithGuest;
- (id)guestTrackerContext;
- (void)setGuestTrackerContext:(id)arg0;
- (id)guestTrackerHandler;
- (void)setGuestTrackerHandler:(id)arg0;
- (id)settingHandler;
- (void)setSettingHandler:(id)arg0;
- (BOOL)isBigPartyMode;
- (void)setIsBigPartyMode:(BOOL)arg0;
- (void)showInteractivePanel;
- (id)readedApplications;
- (void)setReadedApplications:(id)arg0;
- (void)setGuestBuilder:(id)arg0;
- (id)guestBuilder;
- (id)audOperatePanelViewModel;
- (void)didWaitingListChanged:(id)arg0;
- (void)handlePreApplyMessage:(id)arg0;
- (void)showAudienceOperationPanel;
- (id)audOperatePanel;
- (void)resetReadedApplications;
- (void)showOrHideIntimateChatEntranceWithApplicationsCount:(long long)arg0;
- (void)hideInteractivePanel;
- (void)setPkingStateReceived:(BOOL)arg0;
- (void)setAudOperatePanel:(id)arg0;
- (void)pkGuestInteractiveRootPanel:(id)arg0 inviteWithUserID:(id)arg1 secUserID:(id)arg2 sourcePage:(id)arg3 params:(id)arg4;
- (void)p_closeBigParty;
- (BOOL)pkingStateReceived;
- (void)pkGuestInteractiveRootPanel:(id)arg0 permitApplicationOfUser:(id)arg1 extraInfo:(id)arg2;
- (void)pkGuestInteractiveRootPanel:(id)arg0 inviteWithUserID:(id)arg1 secUserID:(id)arg2 sourcePage:(id)arg3;
- (void)pkGuestInteractiveRootPanelNeedToResetWaitingApplications:(id)arg0;
- (void)pkGuestInteractiveRootPanel:(id)arg0 fetchInvitableFriendsListWithCount:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)pkGuestInteractiveRootPanel:(id)arg0 shareWithClickScene:(id)arg1 shareScene:(id)arg2;
- (void)pkGuestInteractiveRootPanel:(id)arg0 onTabShowWithType:(id)arg1;
- (void)pkGuestInteractiveRootPanelEndInteract:(id)arg0;
- (void)pkGuestInteractiveRootPanelOnGuestAutoLinkMic:(id)arg0 completion:(id /* block */)arg1;
- (void)p_trackFeedbackViewShow;
- (void)setAudOperatePanelViewModel:(id)arg0;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)initWithRoom:(id)arg0;

@end