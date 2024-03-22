//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveGameDuringSEIPipeline : NSObject <IESLivePipelineDelegate> {
    BOOL _isStopObserveSEI;
    id /* block */ _updateGameStatusBlock;
}

@property (nonatomic) BOOL isStopObserveSEI;
@property (copy, nonatomic) id /* block */ updateGameStatusBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receivePacket:(id)arg0 throwPacketBlock:(id /* block */)arg1;
- (id /* block */)updateGameStatusBlock;
- (void)setIsStopObserveSEI:(BOOL)arg0;
- (void)updateGameStatus:(unsigned long long)arg0;
- (BOOL)isStopObserveSEI;
- (void)setUpdateGameStatusBlock:(id /* block */)arg0;
- (void).cxx_destruct;

@end
