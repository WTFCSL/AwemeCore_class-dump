//
//     Generated by private class-dump
//

@class NSString, IESLiveGameEnterRoomPipeline, IESLiveGameDuringSEIPipeline, IESLiveGamePipelinePlumber, NSMutableArray, IESLiveBoxingSubscriberUtil;
@protocol IESLiveRoomService;

@interface IESLiveAAIGameAudienceMsgDispatcher : NSObject <IESLiveGameHandleStatusEnterDataPipelineDelegate, IESLiveAAIGameAudienceMsgDispatcherService> {
    BOOL _isBlockAllMsg;
    IESLiveGamePipelinePlumber *_msgPipelinePlumber;
    IESLiveGamePipelinePlumber *_heartbeartPipelinePlumber;
    IESLiveGameEnterRoomPipeline *_enterRoomPipeline;
    IESLiveGameDuringSEIPipeline *_gameDuringSEIPipeline;
    id<IESLiveRoomService> _liveRoom;
    NSMutableArray *_portMutArr;
    IESLiveBoxingSubscriberUtil *_subscriberUtil;
}

@property (retain, nonatomic) IESLiveGamePipelinePlumber *msgPipelinePlumber;
@property (retain, nonatomic) IESLiveGamePipelinePlumber *heartbeartPipelinePlumber;
@property (retain, nonatomic) IESLiveGameEnterRoomPipeline *enterRoomPipeline;
@property (retain, nonatomic) IESLiveGameDuringSEIPipeline *gameDuringSEIPipeline;
@property (retain, nonatomic) id<IESLiveRoomService> liveRoom;
@property (nonatomic) BOOL isBlockAllMsg;
@property (retain, nonatomic) NSMutableArray *portMutArr;
@property (retain, nonatomic) IESLiveBoxingSubscriberUtil *subscriberUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)arg0;
- (id)liveRoom;
- (void)setLiveRoom:(id)arg0;
- (void)setPortMutArr:(id)arg0;
- (id)subscriberUtil;
- (id)portMutArr;
- (void)p_startObserveMsg;
- (void)configLiveRoom:(id)arg0;
- (void)startObserveMsg;
- (void)registerMessageSubscriber:(id)arg0;
- (void)unregisterMessageSubscriber:(id)arg0;
- (void)setGameDuringSEIPipeline:(id)arg0;
- (void)observeMsg;
- (void)safeAddObjcToPortMutArr:(id)arg0;
- (void)setEnterRoomPipeline:(id)arg0;
- (id)enterRoomPipeline;
- (void)setMsgPipelinePlumber:(id)arg0;
- (void)p_updateSubscriberBlockStateWithEntranceMsg:(id)arg0;
- (void)p_handleMsg:(id)arg0;
- (id)msgPipelinePlumber;
- (id)gameDuringSEIPipeline;
- (void)p_handleMsg:(id)arg0 withSubscriber:(id)arg1;
- (unsigned long long)containerViewTypeInStatusEnterHandler:(id)arg0;
- (id)cacheSEIInStatusEnterHandler:(id)arg0;
- (id)heartbeartPipelinePlumber;
- (void)setHeartbeartPipelinePlumber:(id)arg0;
- (BOOL)isBlockAllMsg;
- (void)setIsBlockAllMsg:(BOOL)arg0;
- (void)setSubscriberUtil:(id)arg0;
- (void).cxx_destruct;
- (void)reloadIfNeeded;

@end
