//
//     Generated by private class-dump
//

@class NSString, HMDMonitorRecord, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HMDMonitorStorageDelegate;

@interface HMDMonitorCurve : NSObject {
    double lastFlushTimestamp;
    double _startTimestamp;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _recordRWLock;
    BOOL _performanceReportEnable;
    BOOL _dropData;
    NSString *_name;
    double _startTime;
    double _duration;
    HMDMonitorRecord *_maxRecord;
    HMDMonitorRecord *_minRecord;
    Class _recordClass;
    NSMutableArray *_records;
    unsigned long long _flushCount;
    double _flushInterval;
    id<HMDMonitorStorageDelegate> _storageDelegate;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (retain, nonatomic) NSMutableArray *records;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) BOOL dropData;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) HMDMonitorRecord *currentRecord;
@property (readonly, nonatomic) HMDMonitorRecord *maxRecord;
@property (readonly, nonatomic) HMDMonitorRecord *minRecord;
@property (nonatomic) Class recordClass;
@property (nonatomic) unsigned long long flushCount;
@property (nonatomic) double flushInterval;
@property (nonatomic) BOOL performanceReportEnable;
@property (weak, nonatomic) id<HMDMonitorStorageDelegate> storageDelegate;

- (void)setFlushInterval:(double)arg0;
- (unsigned long long)flushCount;
- (void)setFlushCount:(unsigned long long)arg0;
- (BOOL)dropData;
- (void)dropAllDataForServerState;
- (void)setRecordClass:(Class)arg0;
- (void)pushRecordToDBImmediately:(id)arg0;
- (void)updateRecord:(id)arg0 forceWrite:(BOOL)arg1;
- (id)maxRecord;
- (id)minRecord;
- (BOOL)performanceReportEnable;
- (void)setDropData:(BOOL)arg0;
- (void)pushRecordImmediately;
- (id)currentRecord;
- (id)recordsInAppTimeFrom:(double)arg0 to:(double)arg1 sessionID:(id)arg2 recordClass:(Class)arg3;
- (void)asyncActionOnCurveQueue:(id /* block */)arg0;
- (void)dropDataForServerState:(BOOL)arg0;
- (void)setPerformanceReportEnable:(BOOL)arg0;
- (id)initWithCurveName:(id)arg0 recordClass:(Class)arg1;
- (void)pushRecord:(id)arg0;
- (void)applicationEnterBackground:(id)arg0;
- (void)recordDataDirectly:(id)arg0;
- (id)syncQueue;
- (void)setRecords:(id)arg0;
- (id)init;
- (id)records;
- (void).cxx_destruct;
- (void)setStorageDelegate:(id)arg0;
- (double)duration;
- (void)setSyncQueue:(id)arg0;
- (double)startTime;
- (void)setName:(id)arg0;
- (id)storageDelegate;
- (void)dealloc;
- (double)flushInterval;
- (id)name;
- (Class)recordClass;

@end
