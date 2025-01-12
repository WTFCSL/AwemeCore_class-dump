//
//     Generated by private class-dump
//

@class IESLiveAAIGameAudienceMsgDispatcher, NSString, IESLiveGameOpenPlatformIMMessageChannel;
@protocol IESLiveRoomService, IESLiveAAIGameAudienceMsgDispatcherService;

@interface IESLiveOpenPlatformMessageChannel : NSObject <IESLiveGameOpenPlatformIMMessageObserver, IESLiveAAIGameAudienceMsgSubscriber, HTSLiveMessageSubscriber, IESLiveDataSyncDelegate, IESLiveOpenPlatformMessageChannelService> {
    BOOL _hasReportStatusSEI;
    id<IESLiveRoomService> _room;
    IESLiveGameOpenPlatformIMMessageChannel *_IMChannel;
    id<IESLiveAAIGameAudienceMsgDispatcherService> _dispatcherService;
    IESLiveAAIGameAudienceMsgDispatcher *_audienceMsgHandleDispatcher;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveGameOpenPlatformIMMessageChannel *IMChannel;
@property (retain, nonatomic) id<IESLiveAAIGameAudienceMsgDispatcherService> dispatcherService;
@property (retain, nonatomic) IESLiveAAIGameAudienceMsgDispatcher *audienceMsgHandleDispatcher;
@property (nonatomic) BOOL hasReportStatusSEI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)subscribedSyncDataWithValue:(id)arg0 version:(long long)arg1;
- (void)subscribedSyncDataUpdatedWithValue:(id)arg0 oldVersion:(long long)arg1 newVersion:(long long)arg2;
- (BOOL)audienceMsgDispatcher:(id)arg0 blockAllMsgWithEntranceMsg:(id)arg1;
- (void)audienceMsgDispatcher:(id)arg0 receiveEntranceMsg:(id)arg1;
- (void)audienceMsgDispatcher:(id)arg0 receiveGameStart:(id)arg1;
- (void)audienceMsgDispatcher:(id)arg0 receiveGameStop:(id)arg1;
- (void)audienceMsgDispatcher:(id)arg0 receivePipelineEventId:(id)arg1;
- (void)audienceMsgDispatcher:(id)arg0 receiveDuringGameMsg:(id)arg1;
- (void)didReceiveGameOpenPlatformIMMessage:(id)arg0 from:(id)arg1;
- (void)_setupMsgObserve;
- (void)setDispatcherService:(id)arg0;
- (id)dispatcherService;
- (void)p_handleInteractcontrolSyncdata:(id)arg0;
- (void)_didReceiveCommonMessage:(id)arg0;
- (void)setIMChannel:(id)arg0;
- (id)IMChannel;
- (void)_didReceiveAnchorMessage:(id)arg0;
- (void)_didReceiveAudienceMessage:(id)arg0 msgType:(long long)arg1;
- (id)audienceMsgHandleDispatcher;
- (void)setAudienceMsgHandleDispatcher:(id)arg0;
- (BOOL)hasReportStatusSEI;
- (void)setHasReportStatusSEI:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)open;
- (BOOL)close;
- (void)setup;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)messageReceived:(id)arg0;
- (id)initWithRoom:(id)arg0;

@end
