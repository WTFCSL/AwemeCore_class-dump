//
//     Generated by private class-dump
//

@interface BDPPluginTracker : BDPBridgeInstancePlugin

- (void)reportPointsWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)systemLogWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)sentryReportWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)setAnalyticsConfigSyncWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)reportAnalyticsWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)reportTimelinePointsWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)reportJsRuntimeErrorWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)reportMetricsWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)reportAppLogWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)sendAdLogWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (BOOL)isValidMethod:(id)arg0;
- (unsigned long long)logLevel:(id)arg0;
- (id)logLevelAlias:(id)arg0;
- (void)reportTimelineWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)reportPageTimelineWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)reportDiagnosePointsWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)reportInternalAppLogWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;

@end
