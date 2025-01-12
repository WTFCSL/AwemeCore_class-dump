//
//     Generated by private class-dump
//

@protocol TTVideoEngineEventLoggerDelegate;

@protocol TTVideoEngineEventNetworkSpeedPredictorSampleProtocol <NSObject>

@property (weak, nonatomic) id<TTVideoEngineEventLoggerDelegate> delegate;

- (void)stopRecord;
- (void)startRecord;
- (void)updateSingleNetworkSpeed:(id)arg0 audioInfo:(id)arg1 realInterval:(int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
