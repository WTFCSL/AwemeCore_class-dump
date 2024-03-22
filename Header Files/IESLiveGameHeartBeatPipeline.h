//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveGameHeartBeatPipeline : NSObject <IESLiveSocialInteractAction, IESLiveMultiAudioAction, IESLivePipelineDelegate> {
    BOOL _ignoreNoRTCSEIRceived;
}

@property (nonatomic) BOOL ignoreNoRTCSEIRceived;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)arg0;
- (void)didJoinChannelWithLayout:(id)arg0;
- (void)didLeaveChannelWithLayout:(id)arg0;
- (void)didJoinChannel:(BOOL)arg0;
- (void)receivePacket:(id)arg0 throwPacketBlock:(id /* block */)arg1;
- (BOOL)ignoreNoRTCSEIRceived;
- (void)processPacket:(id)arg0 gameId:(long long)arg1 connectId:(id)arg2 seq:(long long)arg3 msgType:(unsigned long long)arg4 msgContentType:(unsigned long long)arg5;
- (void)setIgnoreNoRTCSEIRceived:(BOOL)arg0;

@end
