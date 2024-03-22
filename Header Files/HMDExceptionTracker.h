//
//     Generated by private class-dump
//

@class NSString, NSArray, HMInstance, NSMutableArray;

@interface HMDExceptionTracker : HMDTracker <HMDExceptionReporterDataProvider> {
    NSArray *_andConditions;
    NSMutableArray *_pendingRecords;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _pendingMutex;
    BOOL _onceStarted;
    HMInstance *_instance;
}

@property (retain, nonatomic) HMInstance *instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTracker;

- (void)updateConfig:(id)arg0;
- (BOOL)exceptionDataSource;
- (id)pendingExceptionData;
- (void)exceptionReporterDidReceiveResponse:(BOOL)arg0;
- (void)dropExceptionData;
- (void)cleanupExceptionDataWithConfig:(id)arg0;
- (id)pendingDebugRealExceptionDataWithConfig:(id)arg0;
- (id)dealNotDebugRealPerformanceData;
- (void)collectRecordToHermasOrDB:(id)arg0;
- (void)pendingRecord:(id)arg0;
- (void)enableCustomCatchWithMethodDict:(id)arg0;
- (void)enableSystemProtectWithKeyList:(id)arg0;
- (void)savePendingRecordToDatabase;
- (id)fetchUploadRecordsWithLimitCount:(long long)arg0;
- (id)getExceptionDataWithRecords:(id)arg0;
- (void)recordCapture:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (id)instance;
- (void)start;
- (void)setInstance:(id)arg0;
- (Class)storeClass;

@end
