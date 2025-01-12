//
//     Generated by private class-dump
//

@protocol IESGCPLinkDurationService <NSObject>

- (void)startTraceWithTrackId:(id)arg0;
- (BOOL)verifyIfTraceStartedWithTrackId:(id)arg0;
- (void)traceEventStart:(id)arg0 time:(id)arg1 trackId:(id)arg2;
- (void)traceEventEnd:(id)arg0 time:(id)arg1 trackId:(id)arg2 completion:(id /* block */)arg3;
- (void)traceViewRenderEnd:(id)arg0 trackId:(id)arg1 completion:(id /* block */)arg2;
- (void)traceEventStamp:(id)arg0 time:(id)arg1 trackId:(id)arg2;
- (void)stopTraceWithTrackId:(id)arg0;
- (id)acquireTriggerWithTrackId:(id)arg0;
- (id)acquireEventDuration:(id)arg0 withTrackId:(id)arg1;
- (id)durationInTimeStampStart:(id)arg0 toStampEnd:(id)arg1 trackId:(id)arg2;

@end
