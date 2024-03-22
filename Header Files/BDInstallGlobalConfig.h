//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface BDInstallGlobalConfig : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _serviceMutex;
    BOOL _autoActivated;
    BOOL _encrypt;
    BOOL _frequencyEnabled;
    BOOL _disableKeychain;
    BOOL _disableIDFA;
    BOOL _disableIDFV;
    BOOL _guestMode;
    Class _service;
    NSString *_appID;
    NSString *_channel;
    NSString *_appName;
    long long _retryTimes;
    double _retryInterval;
    NSString *_appVersion;
    NSArray *_enabledExtraParamsKeys;
    id /* block */ _fetchRealID;
    id /* block */ _fetchRealIDForType;
    id /* block */ _customHeaderBlock;
    id /* block */ _customQueryBlock;
    Class _tracer;
    long long _registerStartTimestamp;
    long long _activateStartTimestamp;
    NSString *_registerTraceKey;
}

@property (readonly) Class tracer;
@property (nonatomic) long long registerStartTimestamp;
@property (nonatomic) long long activateStartTimestamp;
@property (copy, nonatomic) NSString *registerTraceKey;
@property (retain) Class tracer;
@property (nonatomic) long long registerStartTimestamp;
@property (nonatomic) long long activateStartTimestamp;
@property (copy, nonatomic) NSString *registerTraceKey;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *appName;
@property (retain, nonatomic) Class service;
@property (nonatomic, getter=isAutoActivated) BOOL autoActivated;
@property (nonatomic, getter=isEncrypted) BOOL encrypt;
@property (nonatomic) long long retryTimes;
@property (nonatomic) double retryInterval;
@property (nonatomic) BOOL frequencyEnabled;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *currentAppLauguage;
@property (copy, nonatomic) NSString *currentAppRegion;
@property (getter=isDisableKeychain) BOOL disableKeychain;
@property (getter=isDisableIDFA) BOOL disableIDFA;
@property (getter=isDisableIDFV) BOOL disableIDFV;
@property (getter=isGuestMode) BOOL guestMode;
@property (copy) NSArray *enabledExtraParamsKeys;
@property (copy) id /* block */ fetchRealID;
@property (copy) id /* block */ fetchRealIDForType;
@property (copy, nonatomic) id /* block */ customHeaderBlock;
@property (copy, nonatomic) id /* block */ customQueryBlock;

+ (id)sharedInstance;

- (void)setEncrypt:(BOOL)arg0;
- (BOOL)isGuestMode;
- (id)enabledExtraParamsKeys;
- (void)setRegisterTraceKey:(id)arg0;
- (void)setCurrentAppLauguage:(id)arg0;
- (void)setCurrentAppRegion:(id)arg0;
- (BOOL)isAutoActivated;
- (void)setAutoActivated:(BOOL)arg0;
- (long long)retryTimes;
- (void)setRetryTimes:(long long)arg0;
- (BOOL)frequencyEnabled;
- (void)setFrequencyEnabled:(BOOL)arg0;
- (BOOL)isDisableKeychain;
- (void)setDisableKeychain:(BOOL)arg0;
- (void)setDisableIDFA:(BOOL)arg0;
- (void)setDisableIDFV:(BOOL)arg0;
- (void)setEnabledExtraParamsKeys:(id)arg0;
- (id /* block */)fetchRealID;
- (void)setFetchRealID:(id /* block */)arg0;
- (id /* block */)fetchRealIDForType;
- (void)setFetchRealIDForType:(id /* block */)arg0;
- (void)setCustomHeaderBlock:(id /* block */)arg0;
- (id /* block */)customQueryBlock;
- (void)setCustomQueryBlock:(id /* block */)arg0;
- (long long)registerStartTimestamp;
- (void)setRegisterStartTimestamp:(long long)arg0;
- (long long)activateStartTimestamp;
- (void)setActivateStartTimestamp:(long long)arg0;
- (id)registerTraceKey;
- (id)currentAppLauguage;
- (id)currentAppRegion;
- (BOOL)isDisableIDFV;
- (BOOL)isDisableIDFA;
- (id /* block */)customHeaderBlock;
- (void)setAppName:(id)arg0;
- (id)appName;
- (BOOL)isEncrypted;
- (id)channel;
- (id)init;
- (void)setAppID:(id)arg0;
- (void)setAppVersion:(id)arg0;
- (void).cxx_destruct;
- (void)setService:(Class)arg0;
- (void)setChannel:(id)arg0;
- (id)appVersion;
- (id)appID;
- (void)dealloc;
- (Class)service;
- (void)setGuestMode:(BOOL)arg0;
- (Class)tracer;
- (void)setTracer:(Class)arg0;
- (double)retryInterval;
- (void)setRetryInterval:(double)arg0;

@end
