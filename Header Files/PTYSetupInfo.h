//
//     Generated by private class-dump
//

@class NSString, PTYURLSetting;

@interface PTYSetupInfo : NSObject {
    BOOL _isDebugMode;
    BOOL _flEnable;
    BOOL _autoRequestUpdate;
    BOOL _idleDownloadEnable;
    BOOL _isEnableApplogPlugin;
    NSString *_appID;
    NSString *_channel;
    NSString *_appVersion;
    id /* block */ _deviceIDBlock;
    id /* block */ _userIDBlock;
    id /* block */ _attStatusBlock;
    id /* block */ _settingsBlock;
    PTYURLSetting *_customURLSetting;
    id /* block */ _filterBlock;
    double _flFirstReportStatusDelay;
    unsigned long long _downloadConcurrency;
    unsigned long long _cleanStrategy;
    unsigned long long _pyConcurrency;
    id /* block */ _pyBindCallback;
    id /* block */ _minpyBindCallback;
    unsigned long long _cepMode;
    NSString *_URLHost;
    NSString *_AuthentificationURLHost;
    NSString *_sdkAID;
    NSString *_sdkBuildVersion;
}

@property (copy, nonatomic) NSString *URLHost;
@property (copy, nonatomic) NSString *AuthentificationURLHost;
@property (copy, nonatomic) NSString *sdkAID;
@property (readonly, nonatomic) NSString *sdkBuildVersion;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *deviceModel;
@property (nonatomic) BOOL isEnableApplogPlugin;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) id /* block */ deviceIDBlock;
@property (copy, nonatomic) id /* block */ userIDBlock;
@property (copy, nonatomic) id /* block */ attStatusBlock;
@property (copy, nonatomic) id /* block */ settingsBlock;
@property (nonatomic) BOOL isDebugMode;
@property (retain, nonatomic) PTYURLSetting *customURLSetting;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (nonatomic) BOOL flEnable;
@property (nonatomic) double flFirstReportStatusDelay;
@property (nonatomic) BOOL autoRequestUpdate;
@property (nonatomic) unsigned long long downloadConcurrency;
@property (nonatomic) BOOL idleDownloadEnable;
@property (nonatomic) unsigned long long cleanStrategy;
@property (nonatomic) unsigned long long pyConcurrency;
@property (copy, nonatomic) id /* block */ pyBindCallback;
@property (copy, nonatomic) id /* block */ minpyBindCallback;
@property (nonatomic) unsigned long long cepMode;

+ (Class)GetSetting;

- (void)setIsDebugMode:(BOOL)arg0;
- (void)setDeviceIDBlock:(id /* block */)arg0;
- (void)setPyConcurrency:(unsigned long long)arg0;
- (void)setUserIDBlock:(id /* block */)arg0;
- (void)setSettingsBlock:(id /* block */)arg0;
- (id /* block */)deviceIDBlock;
- (id /* block */)userIDBlock;
- (BOOL)loadSetting;
- (unsigned long long)cleanStrategy;
- (void)setCleanStrategy:(unsigned long long)arg0;
- (BOOL)isEnableApplogPlugin;
- (id)AuthentificationURLHost;
- (id)sdkAID;
- (id /* block */)settingsBlock;
- (void)setIsEnableApplogPlugin:(BOOL)arg0;
- (void)setDownloadConcurrency:(unsigned long long)arg0;
- (BOOL)loadModuleConfigFromSettings;
- (id /* block */)attStatusBlock;
- (void)setAttStatusBlock:(id /* block */)arg0;
- (id)customURLSetting;
- (void)setCustomURLSetting:(id)arg0;
- (BOOL)flEnable;
- (void)setFlEnable:(BOOL)arg0;
- (double)flFirstReportStatusDelay;
- (void)setFlFirstReportStatusDelay:(double)arg0;
- (BOOL)autoRequestUpdate;
- (void)setAutoRequestUpdate:(BOOL)arg0;
- (unsigned long long)downloadConcurrency;
- (BOOL)idleDownloadEnable;
- (void)setIdleDownloadEnable:(BOOL)arg0;
- (unsigned long long)pyConcurrency;
- (id /* block */)pyBindCallback;
- (void)setPyBindCallback:(id /* block */)arg0;
- (id /* block */)minpyBindCallback;
- (void)setMinpyBindCallback:(id /* block */)arg0;
- (unsigned long long)cepMode;
- (void)setCepMode:(unsigned long long)arg0;
- (void)setURLHost:(id)arg0;
- (void)setAuthentificationURLHost:(id)arg0;
- (void)setSdkAID:(id)arg0;
- (id)channel;
- (id)init;
- (void)setAppID:(id)arg0;
- (id)osVersion;
- (void)setAppVersion:(id)arg0;
- (void).cxx_destruct;
- (id)deviceModel;
- (id)deviceID;
- (void)setChannel:(id)arg0;
- (id)appVersion;
- (id /* block */)filterBlock;
- (id)appID;
- (id)URLHost;
- (void)setFilterBlock:(id /* block */)arg0;
- (id)sdkBuildVersion;
- (BOOL)isDebugMode;

@end