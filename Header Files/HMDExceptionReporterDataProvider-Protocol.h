//
//     Generated by private class-dump
//

@protocol HMDExceptionReporterDataProvider <NSObject>

@optional

- (id)pendingExceptionData;
- (void)exceptionReporterDidReceiveResponse:(BOOL)arg0;
- (void)dropExceptionData;
- (void)cleanupExceptionDataWithConfig:(id)arg0;
- (id)pendingDebugRealExceptionDataWithConfig:(id)arg0;
- (void)dropExceptionDataIgnoreHermas;
- (unsigned long long)exceptionType;

@end
