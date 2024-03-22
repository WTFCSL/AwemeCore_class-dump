//
//     Generated by private class-dump
//

@class NSString;

@interface MemoryBalanceManager : NSObject <MemoryBalanceProtocol> {
    MemoryBalanceManager *_memoryBalanceManager;
    double _monitorTimeInterval;
    long long _memoryDangerTopLevelInteger;
    long long _memoryDangerSecondaryLevelInteger;
}

@property (retain, nonatomic) MemoryBalanceManager *memoryBalanceManager;
@property (nonatomic) double monitorTimeInterval;
@property (nonatomic) long long memoryDangerTopLevelInteger;
@property (nonatomic) long long memoryDangerSecondaryLevelInteger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)startMemoryMonitor;
- (void)predictMemoryUsageWithScene:(id)arg0;
- (BOOL)isMemoryDangerTopLevel;
- (BOOL)isMemoryDangerSecondLevel;
- (double)monitorTimeInterval;
- (void)p_startScheduleMemeory;
- (void)p_fetchCurrentMemoryUsage;
- (long long)memoryDangerTopLevelInteger;
- (void)postMemoryBalanceNotificationWith:(id)arg0;
- (long long)memoryDangerSecondaryLevelInteger;
- (long long)setPageMemoryRiseNumber:(id)arg0;
- (id)memoryBalanceManager;
- (void)setMemoryBalanceManager:(id)arg0;
- (void)setMemoryDangerTopLevelInteger:(long long)arg0;
- (void)setMemoryDangerSecondaryLevelInteger:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setMonitorTimeInterval:(double)arg0;
- (void)dealloc;

@end