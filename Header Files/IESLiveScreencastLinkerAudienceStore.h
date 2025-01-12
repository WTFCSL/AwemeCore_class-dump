//
//     Generated by private class-dump
//

@class IESLiveScreencastLinkerModel, HTSEventContext, NSString, IESLiveInteractiveLinkService, IESLiveInteractiveUserService;
@protocol IESLiveRoomService, IESLiveScreencastLinkAnchorParticipationInfo;

@interface IESLiveScreencastLinkerAudienceStore : NSObject <IESLiveSEIListener, IESLiveInteractiveLinkServiceDelegate, IESLiveInteractiveUserServiceDelegate, IESLiveScreencastLinkerAnchorProvider> {
    id<IESLiveRoomService> _room;
    unsigned long long status;
    unsigned long long finishReason;
    IESLiveScreencastLinkerModel *linkerModel;
    NSString *remoteAnchorLinkmicIdStr;
    NSString *notificationContent;
    HTSEventContext *_trackContext;
    IESLiveInteractiveUserService *_userService;
    IESLiveInteractiveLinkService *_linkService;
}

@property (retain, nonatomic) IESLiveInteractiveUserService *userService;
@property (retain, nonatomic) IESLiveInteractiveLinkService *linkService;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly, nonatomic) BOOL isMultiLinkerProcessing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveScreencastLinkerModel *linkerModel;
@property (nonatomic) unsigned long long finishReason;
@property (weak, nonatomic) id<IESLiveScreencastLinkAnchorParticipationInfo> anchorParticipationInfo;
@property (copy, nonatomic) NSString *remoteAnchorLinkmicIdStr;
@property (copy, nonatomic) NSString *notificationContent;
@property (nonatomic) unsigned long long status;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)setFinishReason:(unsigned long long)arg0;
- (unsigned long long)finishReason;
- (void)didSetAttachingDIContext;
- (void)componentMount;
- (void)bindActions;
- (void)remoteRoomDataReady:(id)arg0;
- (id)userService;
- (void)setUserService:(id)arg0;
- (id)initWithRoom:(id)arg0 trackContext:(id)arg1;
- (id)linkService;
- (void)setLinkService:(id)arg0;
- (BOOL)isMultiLinkerProcessing;
- (id)notificationContent;
- (void)setNotificationContent:(id)arg0;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)arg0;
- (void)onReceivedLinkEnterMessage:(id)arg0;
- (void)onReceivedLinkCloseMessage:(id)arg0;
- (void)onReceivedLinkLeaveMessage:(id)arg0;
- (id)linkerModel;
- (void)setLinkerModel:(id)arg0;
- (id)remoteAnchorLinkmicIdStr;
- (void)setRemoteAnchorLinkmicIdStr:(id)arg0;
- (void)multiLinkerUserService:(id)arg0 didInteractiveListUpdated:(id)arg1;
- (void)listenSEIChange;
- (void)setupLinkerProvider;
- (void)fetchLinkedUsersIfNeeded;
- (void)fetchLinkedUsers;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg0;
- (id)room;
- (void)setRoom:(id)arg0;

@end
