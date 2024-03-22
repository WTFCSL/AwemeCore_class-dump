//
//     Generated by private class-dump
//

@protocol MemoryBalanceProtocol <NSObject>

+ (id)shareInstance;

- (void)startMemoryMonitor;
- (double)fetchCurrentMemoryUsageForMB;
- (void)predictMemoryUsageWithScene:(id)arg0;
- (BOOL)isMemoryDangerTopLevel;
- (BOOL)isMemoryDangerSecondLevel;

@end