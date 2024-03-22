//
//     Generated by private class-dump
//

@protocol TTVideoEngineEventLoggerDelegate;

@protocol TTVideoEngineEventOneOperaProtocol <NSObject>

@property (weak, nonatomic) id<TTVideoEngineEventLoggerDelegate> delegate;
@property (nonatomic) long long reportLevel;

- (void)moviePlayRetryWithError:(id)arg0 strategy:(long long)arg1 apiver:(unsigned long long)arg2;
- (void)seekToTime:(double)arg0 toPos:(double)arg1;
- (id)endSeek:(id)arg0 isSeekInCache:(long long)arg1;
- (long long)reportLevel;
- (void)setReportLevel:(long long)arg0;
- (id)initWithEventBase:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
