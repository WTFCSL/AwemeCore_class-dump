//
//     Generated by private class-dump
//

@class HMDCustomEventSetting, NSDictionary, HMDGeneralAPISettings, HMDCleanupConfig, HMDCloudCommandConfig;

@interface HMDHeimdallrConfig : NSObject {
    BOOL _configurationAvailable;
    BOOL _enableNetQualityReport;
    HMDCleanupConfig *_cleanupConfig;
    HMDGeneralAPISettings *_apiSettings;
    NSDictionary *_commonInfo;
    HMDCustomEventSetting *_customEventSetting;
    NSDictionary *_activeModulesMap;
    NSDictionary *_allModulesMap;
    HMDCloudCommandConfig *_cloudCommandConfig;
}

@property (readonly, nonatomic) BOOL isDefault;
@property (copy, nonatomic) NSDictionary *activeModulesMap;
@property (copy, nonatomic) NSDictionary *allModulesMap;
@property (retain, nonatomic) HMDGeneralAPISettings *apiSettings;
@property (retain, nonatomic) HMDCloudCommandConfig *cloudCommandConfig;
@property (readonly, nonatomic) HMDCleanupConfig *cleanupConfig;
@property (retain, nonatomic) NSDictionary *commonInfo;
@property (retain, nonatomic) HMDCustomEventSetting *customEventSetting;
@property (readonly, nonatomic) BOOL needHookTTMonitor;
@property (readonly, nonatomic) BOOL enableEventTrace;
@property (nonatomic) BOOL configurationAvailable;
@property (nonatomic) BOOL enableNetQualityReport;

+ (void)_removeExpiredConfigIfNeeded:(id)arg0;

- (id)apiSettings;
- (id)cloudCommandConfig;
- (void)setCloudCommandConfig:(id)arg0;
- (id)cleanupConfig;
- (id)activeModulesMap;
- (id)allModulesMap;
- (BOOL)needHookTTMonitor;
- (BOOL)enableNetQualityReport;
- (id)initWithAppId:(id)arg0 defaultConfig:(id)arg1;
- (id)conditionWithThreshold:(double)arg0;
- (void)parseConfigData:(id)arg0;
- (void)setApiSettings:(id)arg0;
- (void)parseCleanupConfig:(id)arg0;
- (void)setCustomEventSetting:(id)arg0;
- (void)parseHeimdallrModules:(id)arg0;
- (void)parseCloudCommandConfig:(id)arg0;
- (void)setActiveModulesMap:(id)arg0;
- (void)setAllModulesMap:(id)arg0;
- (void)prepareCleanConfig:(id)arg0;
- (id)customEventSetting;
- (id)allowedLogTypes;
- (BOOL)enableEventTrace;
- (BOOL)logTypeEnabled:(id)arg0;
- (BOOL)customLogTypeEnable:(id)arg0 withMonitorData:(id)arg1;
- (BOOL)metricTypeEnabled:(id)arg0;
- (BOOL)serviceTypeEnabled:(id)arg0;
- (BOOL)logTypeHighPriorityEnable:(id)arg0;
- (BOOL)serviceHighPriorityEnable:(id)arg0;
- (void)setConfigurationAvailable:(BOOL)arg0;
- (void)setEnableNetQualityReport:(BOOL)arg0;
- (id)commonInfo;
- (void)setCommonInfo:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;
- (BOOL)isDefault;
- (id)initWithJSONData:(id)arg0;
- (void)setIsDefault:(BOOL)arg0;
- (BOOL)configurationAvailable;

@end