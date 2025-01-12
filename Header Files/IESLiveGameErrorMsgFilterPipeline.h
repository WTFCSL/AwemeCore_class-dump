//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveGameErrorMsgFilterPipeline : NSObject <IESLivePipelineDelegate> {
    NSString *_connectId;
    long long _gameId;
    long long _seq;
}

@property (copy, nonatomic) NSString *connectId;
@property (nonatomic) long long gameId;
@property (nonatomic) long long seq;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)gameId;
- (void)setGameId:(long long)arg0;
- (id)connectId;
- (void)setConnectId:(id)arg0;
- (void)receivePacket:(id)arg0 throwPacketBlock:(id /* block */)arg1;
- (void)updateConnectId:(id)arg0 gameId:(long long)arg1 seq:(long long)arg2;
- (BOOL)shouldHandleMsgWithConnID:(id)arg0;
- (void).cxx_destruct;
- (void)clear;
- (void)setSeq:(long long)arg0;
- (long long)seq;

@end
