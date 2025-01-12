//
//     Generated by private class-dump
//

@class AWELiveRoomMessageContext, NSString;

@interface AWELivePlayEventPublisherImpl : NSObject <IESLivePlayEventPublishService> {
    AWELiveRoomMessageContext *_roomEndContext;
}

@property (retain, nonatomic) AWELiveRoomMessageContext *roomEndContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dislikeWithRoom:(id)arg0;
- (void)liveWillAppear;
- (void)liveWillDisappear;
- (void)onPreViewUserFeedbackCardShowInLive:(id)arg0;
- (void)liveDidAppear;
- (void)liveDidDisappear;
- (void)insertFeedbackDataInPreview:(id)arg0;
- (void)setRoomEndContext:(id)arg0;
- (id)snapshotLinkmicView;
- (id)roomEndContext;
- (id)snapshotPKView;
- (id)findAudioViewFrames:(id)arg0;
- (id)findKTVStage:(id)arg0;
- (void)findGuestView:(id)arg0 addTo:(id)arg1 rootView:(id)arg2;
- (void)liveWillOpen;
- (void)liveDidCloseWithPreferOptions:(id)arg0;
- (void)liveDidCloseByCloseButton;
- (void)liveWillEnter;
- (void)liveDidLeave;
- (void)liveDidKickdOutForRoom:(id)arg0 anchorID:(id)arg1;
- (void)liveWillLeaveWithViceView:(id)arg0;
- (void)checkLiveRoomBackOptimizeEnable:(id /* block */)arg0;
- (void).cxx_destruct;

@end
