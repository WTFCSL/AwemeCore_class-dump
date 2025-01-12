//
//     Generated by private class-dump
//

@class HMInstance;

@interface HMDControllerTimeManager2 : HMDControllerTimeManager {
    HMInstance *_instance;
}

@property (retain, nonatomic) HMInstance *instance;

- (void)performanceDataSaveImmediately;
- (void)dropAllDataForServerState;
- (id)performanceDataWithCountLimit:(long long)arg0;
- (void)performanceDataDidReportSuccess:(BOOL)arg0;
- (id)performanceDataWithLimitSize:(unsigned long long)arg0 limitCount:(long long)arg1 currentSize:(unsigned long long *)arg2;
- (void)performanceSizeLimitedDataDidReportSuccess:(BOOL)arg0;
- (void)cleanupNotUploadAndReportedPerformanceData;
- (void)clearRecordsArray;
- (void)hmdControllerName:(id)arg0 typeName:(id)arg1 timeInterval:(double)arg2 isFirstOpen:(long long)arg3;
- (void).cxx_destruct;
- (id)instance;
- (void)setInstance:(id)arg0;
- (void)applicationWillEnterBackground:(id)arg0;

@end
