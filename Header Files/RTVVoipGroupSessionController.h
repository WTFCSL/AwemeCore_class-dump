//
//     Generated by private class-dump
//

@class NSString, RTVVoipSession;
@protocol RTVUserProfileManagerInterface, RTVVoipConfigureManagerInterface, RxInjector, RTVVoipManagerInterface;

@interface RTVVoipGroupSessionController : NSObject <RTVVoipSessionControllerInterface> {
    RTVVoipSession *_session;
    id<RxInjector> _injector;
    id<RTVVoipConfigureManagerInterface> _configureManager;
    id<RTVUserProfileManagerInterface> _profileManager;
    id<RTVVoipManagerInterface> _voipManager;
}

@property (readonly, weak, nonatomic) RTVVoipSession *session;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)voipManager;
- (BOOL)supportInviteParticipator;
- (id)configureManager;
- (void)renderSession:(id)arg0;
- (id)participator;
- (id)isPrejoinRoomEnable;
- (BOOL)enableInviteParticipator;
- (id)participatorID;
- (id)prepareCalleeVoipInfoFromServer;
- (void)handleRTCOfflineOfUid:(id)arg0;
- (id)pollingRoomServiceModelWithReason:(long long)arg0;
- (id)__userNamesWithUserIDs:(id)arg0;
- (void).cxx_destruct;
- (id)session;
- (id)injector;
- (id)profileManager;
- (id)voip;

@end
