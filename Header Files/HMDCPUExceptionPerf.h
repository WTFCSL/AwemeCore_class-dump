//
//     Generated by private class-dump
//

@interface HMDCPUExceptionPerf : NSObject {
    BOOL _enablePerfWatch;
}

@property (nonatomic) BOOL enablePerfWatch;

- (void)setEnablePerfWatch:(BOOL)arg0;
- (void)exceptionThreadTimeUsage:(long long)arg0;
- (void)exceptionRecordPrepareWithTimeUsage:(long long)arg0 infoSize:(unsigned long long)arg1;
- (void)threadBackTreeWithTimeUsage:(long long)arg0 threadCount:(long long)arg1 suspendThread:(BOOL)arg2;
- (void)monitorThreadCPUUsgeOutOfThreshold:(float)arg0;
- (void)collectPerformanceWithServiceName:(id)arg0 timeUsage:(id)arg1 category:(id)arg2;
- (BOOL)enablePerfWatch;
- (void)recordTransformDictTimeUsage:(long long)arg0;
- (void)recordWriteFileWithStartTS:(long long)arg0 endTS:(long long)arg1 infoCount:(unsigned long long)arg2;

@end
