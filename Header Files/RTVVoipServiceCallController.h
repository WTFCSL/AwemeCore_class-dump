//
//     Generated by private class-dump
//

@class RTVVoipParticipator, RTVVoipSession, NSString;
@protocol RTVUserProfileManagerInterface, RTVVoipStateRecorder, RTVXREngine, RTVXRControllerInjector, RTVVoipResourceFetcherInterface;

@interface RTVVoipServiceCallController : NSObject <RTVXRControllerInterface, RTVVoipSessionObserver, RTVVoipServiceCallController> {
    id<RTVXRControllerInjector> _controllerInjector;
    RTVVoipSession *_voipSession;
    id<RTVXREngine> _engine;
    id<RTVVoipStateRecorder> _voipStateRecorder;
    id<RTVUserProfileManagerInterface> _userProfileManager;
    id<RTVVoipResourceFetcherInterface> _voipResourceFetcher;
    RTVVoipParticipator *_servicePariticipator;
    long long _callState;
}

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) RTVVoipSession *voipSession;
@property (readonly, weak, nonatomic) id<RTVXREngine> engine;
@property (readonly, nonatomic) id<RTVVoipStateRecorder> voipStateRecorder;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> userProfileManager;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> voipResourceFetcher;
@property (retain, nonatomic) RTVVoipParticipator *servicePariticipator;
@property (nonatomic) long long callState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (id)userProfileManager;
- (id)logTag;
- (void)__addNotification;
- (void)__addObserver;
- (id)controllerInjector;
- (void)renderBusinessHandler:(id)arg0 context:(id)arg1;
- (void)rtvSession:(id)arg0 participatorsDidChange:(id)arg1 oldParticipators:(id)arg2;
- (id)voipSession;
- (id)imSchema;
- (id)voipResourceFetcher;
- (id)voipStateRecorder;
- (id)dialPanelSchema;
- (void)__handlePlayKeyboardToneNotification:(id)arg0;
- (void)__refreshServiceParticipator;
- (id)servicePariticipator;
- (void)setServicePariticipator:(id)arg0;
- (void)__updateCallState:(long long)arg0;
- (void).cxx_destruct;
- (id)engine;
- (long long)callState;
- (void)setCallState:(long long)arg0;

@end
