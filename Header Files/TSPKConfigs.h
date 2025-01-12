//
//     Generated by private class-dump
//

@class NSDictionary;
@protocol TSPKLock;

@interface TSPKConfigs : NSObject {
    BOOL _enableRelativeTime;
    NSDictionary *_defaultDetectedPlanConfigs;
    NSDictionary *_monitorConfig;
    id<TSPKLock> _lock;
}

@property (nonatomic) BOOL enableRelativeTime;
@property (retain, nonatomic) id<TSPKLock> lock;
@property (copy, nonatomic) NSDictionary *defaultDetectedPlanConfigs;
@property (copy, nonatomic) NSDictionary *monitorConfig;

+ (id)sharedConfig;

- (void)setMonitorConfig:(id)arg0;
- (id)monitorConfig;
- (long long)maxUploadCount;
- (id)ruleConfigs;
- (id)settingVersion;
- (BOOL)isEnableUploadAPICostTimeStatistics;
- (id)apiStatisticsConfigs;
- (id)customAnchorConfigs;
- (id)detectorConfigs;
- (BOOL)enableMergeCustomAndSystemBacktraces;
- (id)frequencyConfigs;
- (long long)maxURLCacheSize;
- (id)isApiEnable:(id)arg0;
- (id)performanceStatisticsConfigs;
- (id)isDataTypeEnable:(id)arg0;
- (id)isPipelineEnable:(id)arg0;
- (id)dynamicAspectConfigs;
- (id)crossPlatformConfigs;
- (id)callFilterConfigs;
- (id)pageStatusConfigs;
- (BOOL)enableRemoveLastStartBacktrace;
- (BOOL)enableSetupAppLifeCycleObserver;
- (BOOL)enableSetupMediaNotificationObserver;
- (BOOL)isRelativeTimeEnable;
- (BOOL)enableNetworkInit;
- (BOOL)enableUploadAlog;
- (double)timeRangeToUploadAlog;
- (double)timeDelayToUploadAlog;
- (BOOL)enablePermissionChecker;
- (BOOL)enableBizInfoUpload;
- (void)updateRuleAndDetectorPartOfMonitorConfig:(id)arg0;
- (id)cacheConfigs;
- (BOOL)enableLocationDelegate;
- (id)defaultDetectedPlanConfigs;
- (void)setDefaultDetectedPlanConfigs:(id)arg0;
- (BOOL)enableRelativeTime;
- (void)setEnableRelativeTime:(BOOL)arg0;
- (BOOL)enable;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)setLock:(id)arg0;

@end
