//
//     Generated by private class-dump
//

@class AWELiveRoomMessageContext, NSString;
@protocol IESLiveCompoundSubscription;

@interface IESLiveRoomActionsFragment : IESLiveRoomComponent <HTSLiveAudienceActions, HTSLiveAnchorActions, IESLiveAnchorRoomStatusChangeEvents> {
    BOOL _liveDisableSetting;
    id<IESLiveCompoundSubscription> _disposable;
    AWELiveRoomMessageContext *_roomEndContext;
}

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (nonatomic) BOOL liveDisableSetting;
@property (retain, nonatomic) AWELiveRoomMessageContext *roomEndContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)stopLive;
- (void)componentMount;
- (void)componentUnmount;
- (void)startLive;
- (void)startAnchorLiveWithRoom:(id)arg0;
- (void)stopAnchorLive;
- (void)onReceiveShareFilterUser;
- (void)willStopLive;
- (void)receiveError:(id)arg0 withPrompts:(id)arg1;
- (void)willStopAnchorLive;
- (void)setRoomEndContext:(id)arg0;
- (id)snapshotLinkmicView;
- (id)roomEndContext;
- (id)findAudioViewFrames:(id)arg0;
- (id)findKTVStage:(id)arg0;
- (void)findGuestView:(id)arg0 addTo:(id)arg1 rootView:(id)arg2;
- (void)_setupActions;
- (void)setLiveDisableSetting:(BOOL)arg0;
- (void)_addRecallMessageObserver;
- (void)_removeRecallMessageObserver;
- (void)recorderControllerDidAppear;
- (void)_handleRecallMessage:(id)arg0;
- (void)_fakeBannerRefreshMesasge:(id)arg0;
- (void)callEndLiveMessage;
- (BOOL)liveDisableSetting;
- (void).cxx_destruct;

@end
