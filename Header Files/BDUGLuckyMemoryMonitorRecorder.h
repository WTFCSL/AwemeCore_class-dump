//
//     Generated by private class-dump
//

@class NSDictionary, BDUGLuckyMemoryMonitorSettingsEntryModel, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface BDUGLuckyMemoryMonitorRecorder : NSObject {
    BOOL _memoryRecordRunning;
    int _memoryAppStableCounter;
    int _memoryAvailableStableCounter;
    id /* block */ _recordCompletion;
    unsigned long long _memoryAppBefore;
    unsigned long long _memoryAvailableBefore;
    unsigned long long _memoryAppRecordMax;
    unsigned long long _memoryAvailableRecordMin;
    unsigned long long _memoryAppRecordStable;
    unsigned long long _memoryAvailableRecordStable;
    unsigned long long _memoryAppRecordLast;
    unsigned long long _memoryAvailableRecordLast;
    NSMutableArray *_memoryAppRecords;
    NSMutableArray *_memoryAvailableRecords;
    double _memoryRecordBeginTime;
    NSObject<OS_dispatch_source> *_memoryRecordTimer;
    unsigned long long _memoryRecordTimerCounter;
    BDUGLuckyMemoryMonitorSettingsEntryModel *_config;
    NSDictionary *_pageInfo;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _memoryRecordLock;
}

@property (nonatomic) unsigned long long memoryAppBefore;
@property (nonatomic) unsigned long long memoryAvailableBefore;
@property (nonatomic) unsigned long long memoryAppRecordMax;
@property (nonatomic) unsigned long long memoryAvailableRecordMin;
@property (nonatomic) unsigned long long memoryAppRecordStable;
@property (nonatomic) unsigned long long memoryAvailableRecordStable;
@property (nonatomic) unsigned long long memoryAppRecordLast;
@property (nonatomic) unsigned long long memoryAvailableRecordLast;
@property (retain, nonatomic) NSMutableArray *memoryAppRecords;
@property (retain, nonatomic) NSMutableArray *memoryAvailableRecords;
@property (nonatomic) double memoryRecordBeginTime;
@property (nonatomic) int memoryAppStableCounter;
@property (nonatomic) int memoryAvailableStableCounter;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryRecordTimer;
@property (nonatomic) unsigned long long memoryRecordTimerCounter;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } memoryRecordLock;
@property (nonatomic) BOOL memoryRecordRunning;
@property (retain, nonatomic) BDUGLuckyMemoryMonitorSettingsEntryModel *config;
@property (copy, nonatomic) NSDictionary *pageInfo;
@property (copy, nonatomic) id /* block */ recordCompletion;

- (id)initWithConfig:(id)arg0 pageInfo:(id)arg1;
- (BOOL)__terminateRecordTimer;
- (void)setMemoryAppBefore:(unsigned long long)arg0;
- (void)setMemoryAvailableBefore:(unsigned long long)arg0;
- (unsigned long long)memoryAppBefore;
- (unsigned long long)memoryAvailableBefore;
- (void)recordMemoryBeforeJump;
- (BOOL)memoryRecordRunning;
- (void)setMemoryRecordRunning:(BOOL)arg0;
- (void)__resetRecordData;
- (void)__resetRecordTimer;
- (id /* block */)recordCompletion;
- (id)memoryAppRecords;
- (id)__bytesToMBStringFixed:(long long)arg0;
- (id)memoryAvailableRecords;
- (unsigned long long)memoryAppRecordMax;
- (void)setMemoryAppRecordMax:(unsigned long long)arg0;
- (unsigned long long)memoryAvailableRecordMin;
- (void)setMemoryAvailableRecordMin:(unsigned long long)arg0;
- (unsigned long long)memoryAppRecordLast;
- (int)memoryAppStableCounter;
- (void)setMemoryAppStableCounter:(int)arg0;
- (void)setMemoryAppRecordStable:(unsigned long long)arg0;
- (unsigned long long)memoryAvailableRecordLast;
- (int)memoryAvailableStableCounter;
- (void)setMemoryAvailableStableCounter:(int)arg0;
- (void)setMemoryAvailableRecordStable:(unsigned long long)arg0;
- (void)setMemoryAppRecordLast:(unsigned long long)arg0;
- (void)setMemoryAvailableRecordLast:(unsigned long long)arg0;
- (double)memoryRecordBeginTime;
- (id)__endRecordMemoryAfterJumpAndBuildReportWithEndTime:(double)arg0;
- (void)setMemoryAppRecords:(id)arg0;
- (void)setMemoryAvailableRecords:(id)arg0;
- (void)setMemoryRecordBeginTime:(double)arg0;
- (unsigned long long)memoryRecordTimerCounter;
- (void)__recordMemoryAfterJump;
- (void)setMemoryRecordTimer:(id)arg0;
- (id)memoryRecordTimer;
- (void)setMemoryRecordTimerCounter:(unsigned long long)arg0;
- (unsigned long long)memoryAppRecordStable;
- (unsigned long long)memoryAvailableRecordStable;
- (id)__bytesToMB:(long long)arg0;
- (void)beginRecordMemoryAfterJump;
- (void)terminateRecordMemoryAfterJump;
- (void)setRecordCompletion:(id /* block */)arg0;
- (struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })memoryRecordLock;
- (void)setMemoryRecordLock:(struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })arg0;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)dealloc;
- (id)pageInfo;
- (void)setPageInfo:(id)arg0;

@end
