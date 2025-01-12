//
//     Generated by private class-dump
//

@class IESLiveAnchorAudienceInteractiveGameApi, NSString;
@protocol IESLiveRoomService;

@interface IESLiveGameEnterRoomPipeline : NSObject <IESLivePipelineDelegate> {
    BOOL _usingEntranceInfoAPI;
    BOOL _isGetGameExtraInfoFromServer;
    BOOL _isStopObserveHeartBeat;
    id<IESLiveRoomService> _liveRoom;
    IESLiveAnchorAudienceInteractiveGameApi *_interactiveGameApi;
    long long _retryTime;
    unsigned long long _gameStatus;
    id /* block */ _throwStatusEnterFailEventBlock;
}

@property (retain, nonatomic) IESLiveAnchorAudienceInteractiveGameApi *interactiveGameApi;
@property (nonatomic) long long retryTime;
@property (nonatomic) unsigned long long gameStatus;
@property (nonatomic) BOOL isGetGameExtraInfoFromServer;
@property (nonatomic) BOOL isStopObserveHeartBeat;
@property (copy, nonatomic) id /* block */ throwStatusEnterFailEventBlock;
@property (retain, nonatomic) id<IESLiveRoomService> liveRoom;
@property (nonatomic) BOOL usingEntranceInfoAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)arg0;
- (id)liveRoom;
- (void)setLiveRoom:(id)arg0;
- (void)setGameStatus:(unsigned long long)arg0;
- (unsigned long long)gameStatus;
- (void)updateGameStatusWithMsgContent:(unsigned long long)arg0;
- (void)receivePacket:(id)arg0 throwPacketBlock:(id /* block */)arg1;
- (void)setInteractiveGameApi:(id)arg0;
- (void)setIsStopObserveHeartBeat:(BOOL)arg0;
- (BOOL)isStopObserveHeartBeat;
- (BOOL)isGetGameExtraInfoFromServer;
- (void)setThrowStatusEnterFailEventBlock:(id /* block */)arg0;
- (void)setIsGetGameExtraInfoFromServer:(BOOL)arg0;
- (void)processPacket:(id)arg0 data:(id)arg1;
- (void)requestStatusEnterApiWithPacket:(id)arg0 isEnterRoomEvent:(BOOL)arg1 RoomId:(id)arg2 gameId:(id)arg3 kind:(id)arg4 status:(id)arg5 source:(id)arg6 canInvokePipeBlock:(id /* block */)arg7;
- (id)interactiveGameApi;
- (void)sendEntranceDisable;
- (void)processPacket:(id)arg0 info:(id)arg1;
- (void)getEntranceInfoWithRoomId:(id)arg0 completionHandler:(id /* block */)arg1;
- (BOOL)usingEntranceInfoAPI;
- (void)setUsingEntranceInfoAPI:(BOOL)arg0;
- (id /* block */)throwStatusEnterFailEventBlock;
- (void).cxx_destruct;
- (long long)retryTime;
- (void)setRetryTime:(long long)arg0;

@end
