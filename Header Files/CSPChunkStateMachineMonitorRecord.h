//
//     Generated by private class-dump
//

@class NSNumber;

@interface CSPChunkStateMachineMonitorRecord : CSPChunkDataMonitorRecord {
    NSNumber *_predictTS;
    NSNumber *_ackTS;
    NSNumber *_replaceTS;
}

@property (retain, nonatomic) NSNumber *predictTS;
@property (retain, nonatomic) NSNumber *ackTS;
@property (retain, nonatomic) NSNumber *replaceTS;
@property (readonly, nonatomic) NSNumber *predictTimeStamp;
@property (readonly, nonatomic) NSNumber *ackTimeStamp;
@property (readonly, nonatomic) NSNumber *replaceTimeStamp;

- (id)predictTS;
- (id)ackTS;
- (id)replaceTS;
- (id)predictTimeStamp;
- (id)ackTimeStamp;
- (id)replaceTimeStamp;
- (void)setPredictTS:(id)arg0;
- (void)setAckTS:(id)arg0;
- (void)setReplaceTS:(id)arg0;
- (void).cxx_destruct;

@end
