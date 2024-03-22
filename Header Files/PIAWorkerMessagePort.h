//
//     Generated by private class-dump
//

@class PIAWorker, PIASTLQueue;

@interface PIAWorkerMessagePort : NSObject <PIAMessageChannelPort> {
    PIAWorker *_worker;
    PIASTLQueue *_bridgeMessageList;
}

@property (retain, nonatomic) PIASTLQueue *bridgeMessageList;
@property (weak, nonatomic) PIAWorker *worker;

- (void)onMessage:(id)arg0;
- (void)onReceivedMessage:(id)arg0;
- (void)terminateWorkerWithResult:(id)arg0;
- (id)getWorkerBridgeMessage;
- (id)bridgeMessageList;
- (void)setBridgeMessageList:(id)arg0;
- (id)initWithWorker:(id)arg0;
- (void).cxx_destruct;
- (id)worker;
- (void)setWorker:(id)arg0;
- (void)postMessage:(id)arg0;

@end
