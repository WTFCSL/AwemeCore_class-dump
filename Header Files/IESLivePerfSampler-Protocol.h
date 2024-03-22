//
//     Generated by private class-dump
//

@class IESLivePerfSampleContext, IESLiveClientDiagnose;

@protocol IESLivePerfSampler <NSObject>

@property (readonly, nonatomic) IESLivePerfSampleContext *context;
@property (readonly, nonatomic) IESLiveClientDiagnose *clientDiagnose;

- (void)startShowingVideoGift;
- (void)endShowingVideoGift;
- (void)startShowingEffectGift;
- (void)endShowingEffectGift;
- (void)startShowingLynxGift;
- (void)endShowingLynxGift;
- (id)recentSampleInfo;
- (id)perfWarningSignal;
- (id)anchorHeatingSignal;
- (void)liveAppLogWithType:(unsigned long long)arg0 className:(id)arg1 startTime:(double)arg2 duration:(double)arg3 extra:(id)arg4;
- (void)reportSummaryInfo;
- (void)appendReportSummaryInfo:(id)arg0;
- (void)addMsgInfos:(long long)arg0 msgShowCount:(long long)arg1;
- (void)addMsgRate:(long long)arg0;
- (void)trackPerfEvent:(id)arg0 params:(id)arg1;
- (void)trackAnchorBHVPerformance:(id)arg0;
- (void)reportMonitorFpsAtPrepareForCloseLiveRoom;
- (void)recordEnterRoomPerfSampleWithScene:(id)arg0 extraPara:(id)arg1;
- (void)reportEnterRoomPerfSample;
- (void)openLivePerfSampleWithScene:(unsigned long long)arg0;
- (void)generateCurrentPerfSampleInfo:(id)arg0 completion:(id /* block */)arg1;
- (id)appAvailableMemory;
- (id)getDropRecordInfo;
- (id)clientDiagnose;
- (id)context;
- (void)refresh:(unsigned long long)arg0;

@end
