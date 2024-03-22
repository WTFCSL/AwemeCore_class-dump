//
//     Generated by private class-dump
//

@class IESLiveAAIGameSyncVideoStreamUtil, NSString;

@interface IESLiveGameSyncVideoStreamPipeline : NSObject <IESLiveAAIGameSyncVideoStreamUtilDelegate, IESLivePipelineDelegate> {
    IESLiveAAIGameSyncVideoStreamUtil *_syncVideoStreamUtil;
    id /* block */ _throwPacketBlock;
}

@property (retain, nonatomic) IESLiveAAIGameSyncVideoStreamUtil *syncVideoStreamUtil;
@property (copy, nonatomic) id /* block */ throwPacketBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setThrowPacketBlock:(id /* block */)arg0;
- (void)syncVideoStreamUtil:(id)arg0 receiveSyncVideoStreamMsg:(id)arg1;
- (id /* block */)throwPacketBlock;
- (void)receivePacket:(id)arg0 throwPacketBlock:(id /* block */)arg1;
- (id)syncVideoStreamUtil;
- (void)setSyncVideoStreamUtil:(id)arg0;
- (void).cxx_destruct;

@end
