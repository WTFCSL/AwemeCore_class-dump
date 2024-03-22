//
//     Generated by private class-dump
//

@protocol RTVUserProfileManagerInterface, RTVVoipWebServiceAdapterProtocol, RxInjector, RTVPerformanceMonitorInterface;

@interface RTVVoipWebService : NSObject {
    id<RTVVoipWebServiceAdapterProtocol> _webServiceAccess;
    id<RTVUserProfileManagerInterface> _profileManager;
    id<RxInjector> _injector;
    id<RTVPerformanceMonitorInterface> _monitor;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVPerformanceMonitorInterface> monitor;
@property (readonly, nonatomic) id<RTVVoipWebServiceAdapterProtocol> webServiceAccess;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;

- (void)rxAwakeFromPropertyInjection;
- (id)webServiceAccess;
- (BOOL)webSocketRequestEnable;
- (id)__getRequestWithName:(id)arg0 queryItems:(id)arg1;
- (id)__postRequestWithName:(id)arg0 jsonBody:(id)arg1;
- (id)keepaliveWithCallID:(id)arg0;
- (id)ackWithCallID:(id)arg0 sequenceID:(id)arg1;
- (id)ackV2WithSequenceID:(id)arg0;
- (id)distributeRoom:(id)arg0;
- (id)fetchMissCalls;
- (id)observeRoom:(BOOL)arg0 withRoomID:(id)arg1;
- (id)checkVoipRoomAliveWithID:(id)arg0;
- (id)fetchSecurityCallAlertInfo:(id)arg0 conversationID:(id)arg1 conversationType:(long long)arg2 dialogCode:(id)arg3;
- (id)voipPullRequestWithConfiguration:(id)arg0;
- (id)voipPatchRequestWithCallID:(id)arg0 status:(long long)arg1 type:(long long)arg2 callType:(long long)arg3;
- (id)voipSwitchTypeWithCallID:(id)arg0 toType:(long long)arg1 callType:(long long)arg2;
- (id)toggleCameraOff:(BOOL)arg0 withRoomID:(id)arg1;
- (id)updateSelfParticiantExt:(id)arg0 withRoomID:(id)arg1;
- (id)invoke1V1VoipWithUserIMID:(id)arg0 clientID:(id)arg1 type:(long long)arg2 cameraOff:(BOOL)arg3 initialState:(id)arg4 bizType:(long long)arg5 businessInfo:(id)arg6 ext:(id)arg7;
- (id)pullRoomInfoWithNewPathAndRoomID:(id)arg0 roomVersion:(id)arg1;
- (id)pullRoomsInfoWithRoomIDs:(id)arg0;
- (id)createCallWithClientID:(id)arg0 conversationShortID:(id)arg1 participatorIMIDs:(id)arg2 cameraOff:(BOOL)arg3 source:(long long)arg4 inviteText:(id)arg5 bizType:(long long)arg6 ext:(id)arg7;
- (id)joinCallWithID:(id)arg0 bizType:(id)arg1;
- (id)inviteParticipators:(id)arg0 groups:(id)arg1 joinCall:(id)arg2;
- (id)reportRecordStateWithCallID:(id)arg0 callType:(long long)arg1 start:(BOOL)arg2;
- (id)createDistributableRoomCallWithClientID:(id)arg0 conversationShortID:(id)arg1 participatorIMIDs:(id)arg2 cameraOff:(BOOL)arg3 source:(long long)arg4 inviteText:(id)arg5 bizType:(long long)arg6 ext:(id)arg7;
- (id)__voipInfoV1WithDictionary:(id)arg0;
- (long long)__requestVoipTypeWithVoipType:(long long)arg0;
- (id)__voipInfoWithResponseDictionary:(id)arg0;
- (id)__voipCallInfoWithResponseDictionary:(id)arg0;
- (id)joinCallWithID:(id)arg0;
- (id)uploadVoIPPushToken:(id)arg0;
- (void).cxx_destruct;
- (id)monitor;
- (id)injector;
- (id)profileManager;

@end