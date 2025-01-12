//
//     Generated by private class-dump
//

@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface AWEResourcePreloadSchedule : NSObject {
    BOOL _busy;
    BOOL _isCPULevelHigh;
    unsigned long long _networkStatus;
    unsigned long long _busyReason;
    NSHashTable *_delegateTable;
    NSObject<OS_dispatch_queue> *_workQueue;
    long long _ttnetworkState;
    unsigned long long _appUsedMemory;
    unsigned long long _limitMemory;
}

@property (nonatomic) BOOL busy;
@property (nonatomic) unsigned long long busyReason;
@property (retain, nonatomic) NSHashTable *delegateTable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) long long ttnetworkState;
@property (nonatomic) unsigned long long appUsedMemory;
@property (nonatomic) unsigned long long limitMemory;
@property (nonatomic) BOOL isCPULevelHigh;
@property (readonly, nonatomic) unsigned long long networkStatus;

+ (id)shareSchedule;

- (void)initialData;
- (void)addNotification;
- (unsigned long long)appUsedMemory;
- (void)setAppUsedMemory:(unsigned long long)arg0;
- (void)onMultiNetworkStateChanged:(id)arg0;
- (unsigned long long)busyReason;
- (void)onMemoryCheckTimer;
- (void)setLimitMemory:(unsigned long long)arg0;
- (void)setIsCPULevelHigh:(BOOL)arg0;
- (void)onThermalMitigationStateChanged:(id)arg0;
- (void)onMemoryWarningNotification:(id)arg0;
- (void)onCPUDidFallbackNotification:(id)arg0;
- (void)setTtnetworkState:(long long)arg0;
- (void)checkBusyCondition;
- (long long)ttnetworkState;
- (unsigned long long)limitMemory;
- (BOOL)isCPULevelHigh;
- (void)setBusyReason:(unsigned long long)arg0;
- (id)delegateTable;
- (void)removeobserver:(id)arg0;
- (void)setDelegateTable:(id)arg0;
- (BOOL)busy;
- (id)init;
- (void)setWorkQueue:(id)arg0;
- (id)workQueue;
- (unsigned long long)networkStatus;
- (void).cxx_destruct;
- (void)setup;
- (void)addObserver:(id)arg0;
- (void)notify;
- (void)setBusy:(BOOL)arg0;

@end
