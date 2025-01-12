//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface HMDANRTracker : HMDTracker <HMDExceptionReporterDataProvider, HMDANRMonitorDelegate> {
    double _runloopStartTime;
    NSArray *andConditions;
    unsigned long long _uploadCount;
}

@property (nonatomic) unsigned long long uploadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTracker;

- (void)updateConfig:(id)arg0;
- (BOOL)exceptionDataSource;
- (long long)dbMaxSize;
- (id)pendingExceptionData;
- (void)exceptionReporterDidReceiveResponse:(BOOL)arg0;
- (void)dropExceptionData;
- (void)cleanupExceptionDataWithConfig:(id)arg0;
- (id)pendingDebugRealExceptionDataWithConfig:(id)arg0;
- (void)uploadANRLogIfNeeded;
- (id)getANRDataWithRecords:(id)arg0;
- (id)dealNotDebugRealPerformanceData;
- (id)recordsFilteredByConditions:(id)arg0;
- (void)didBlockWithInfo:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;
- (Class)storeClass;
- (void)setUploadCount:(unsigned long long)arg0;
- (unsigned long long)uploadCount;

@end
