//
//     Generated by private class-dump
//

@class TTReachability, NSString, NSArray, NSMutableArray, NSObject, BDTGTSSignItem;
@protocol OS_dispatch_queue;

@interface TTInstallIDManager : NSObject {
    NSString *_clientDID;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _clientDIDMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _retryTimesMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _deviceIDMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _installIDMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _klinkEgdiMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _dTokenMutex;
    BOOL _isAutoActivated;
    NSMutableArray *_deviceRegisteredCallbacks;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _deviceRegisteredCallbacksMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _isDeviceRegisteredMutex;
    BOOL _frequencyEnabled;
    BOOL _klinkEgdiEnabled;
    BOOL _disableKeychain;
    BOOL _disableIDFA;
    BOOL _disableIDFV;
    BOOL _enableGuardSign;
    BOOL _registerStatusOptimize;
    BOOL _needNewUserTag;
    NSString *_deviceID;
    NSString *_installID;
    NSString *_klinkEgdi;
    NSString *_dToken;
    BDTGTSSignItem *_tsSignItem;
    NSString *_encryptedDeviceID;
    NSString *_encryptedInstallID;
    long long _deviceStatus;
    NSString *_appID;
    NSString *_channel;
    NSString *_appName;
    id /* block */ _configParamsBlock;
    id /* block */ _customHeaderBlock;
    id /* block */ _customQueryBlock;
    id /* block */ _fetchRealID;
    long long _retryTimes;
    double _retryInterval;
    double _ticketGuardInitTimeDuration;
    NSArray *_enabledExtraParamsKeys;
    long long _sceneStatus;
    NSString *_appGroupsKey;
    unsigned long long _bgTask;
    TTReachability *_reachability;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *installID;
@property (copy, nonatomic) NSString *klinkEgdi;
@property (copy, nonatomic) NSString *dToken;
@property long long deviceStatus;
@property (nonatomic) unsigned long long bgTask;
@property (retain, nonatomic) TTReachability *reachability;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) BDTGTSSignItem *tsSignItem;
@property (copy, nonatomic) NSString *encryptedDeviceID;
@property (copy, nonatomic) NSString *encryptedInstallID;
@property (nonatomic) BOOL needNewUserTag;
@property (readonly, copy, nonatomic) NSString *clientDID;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) id /* block */ configParamsBlock;
@property (copy, nonatomic) id /* block */ customHeaderBlock;
@property (copy, nonatomic) id /* block */ customQueryBlock;
@property (copy) id /* block */ fetchRealID;
@property (nonatomic) long long retryTimes;
@property (nonatomic) double retryInterval;
@property (nonatomic) BOOL frequencyEnabled;
@property (nonatomic) BOOL klinkEgdiEnabled;
@property (copy, nonatomic) NSString *currentAppLauguage;
@property (copy, nonatomic) NSString *currentAppRegion;
@property (getter=isDisableKeychain) BOOL disableKeychain;
@property (getter=isDisableIDFA) BOOL disableIDFA;
@property (getter=isDisableIDFV) BOOL disableIDFV;
@property (getter=isEnableGuardSign) BOOL enableGuardSign;
@property double ticketGuardInitTimeDuration;
@property (copy) NSArray *enabledExtraParamsKeys;
@property long long sceneStatus;
@property (copy) NSString *appGroupsKey;
@property (nonatomic) BOOL registerStatusOptimize;

+ (BOOL)clearDidAndIid;
+ (void)addDTokenForRequest:(id)arg0;
+ (void)initialize;
+ (id)sharedInstance;

- (id)clientDID;
- (void)activateDeviceWithRetryTimes:(long long)arg0 completionHandler:(id /* block */)arg1;
- (BOOL)isDeviceActivated;
- (void)observeDeviceDidRegistered:(id /* block */)arg0;
- (id)enabledExtraParamsKeys;
- (BOOL)_needRegsiter;
- (void)_activateDeviceWithRetryTimes:(long long)arg0;
- (void)_registerDeviceWithRetryTimes:(long long)arg0 failure:(id /* block */)arg1;
- (void)setInstallID:(id)arg0;
- (void)setDToken:(id)arg0;
- (void)registerDeviceWithCompletionHandler:(id /* block */)arg0;
- (id)_identifierFromFileForKey:(id)arg0;
- (void)_backupToFileWithIdentifier:(id)arg0 forKey:(id)arg1;
- (void)_notifyDeviceRegisterd;
- (void)invalidBgTaskIfNeeded;
- (void)activateDeviceWithCompletionHandler:(id /* block */)arg0;
- (unsigned long long)bgTask;
- (void)setBgTask:(unsigned long long)arg0;
- (void)setCurrentAppLauguage:(id)arg0;
- (void)setCurrentAppRegion:(id)arg0;
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
- (void)setCustomHeaderBlock:(id /* block */)arg0;
- (id /* block */)customQueryBlock;
- (void)setCustomQueryBlock:(id /* block */)arg0;
- (id)currentAppLauguage;
- (id)currentAppRegion;
- (id)dToken;
- (BOOL)isDisableIDFV;
- (BOOL)isDisableIDFA;
- (id /* block */)customHeaderBlock;
- (void)startRegisterDeviceWithAutoActivated:(BOOL)arg0 success:(id /* block */)arg1 failure:(id /* block */)arg2;
- (id)resetedDeviceID;
- (void)setResetedDeviceID:(id)arg0;
- (id)resetedInstallID;
- (void)setResetedInstallID:(id)arg0;
- (void)setSceneStatus:(long long)arg0;
- (void)setNeedNewUserTag:(BOOL)arg0;
- (void)_registerDeviceWithRetryTimes:(long long)arg0 success:(id /* block */)arg1 failure:(id /* block */)arg2;
- (id)configParams;
- (BOOL)isEnableGuardSign;
- (id)ticketGuardHeadersWithUrl:(id)arg0 signItem:(id)arg1 useTicketRequest:(BOOL)arg2;
- (void)setTsSignItem:(id)arg0;
- (void)setEncryptedDeviceID:(id)arg0;
- (void)setEncryptedInstallID:(id)arg0;
- (id)encryptedDeviceID;
- (id)encryptedInstallID;
- (void)setKlinkEgdi:(id)arg0;
- (BOOL)registerStatusOptimize;
- (id)appGroupsKey;
- (BOOL)klinkEgdiEnabled;
- (void)_postTicketGuardInfo;
- (void)_fetchKlinkEgdiIfNeededWithRetryTimes:(long long)arg0;
- (id)tsSignItem;
- (double)ticketGuardInitTimeDuration;
- (BOOL)clearAllIDs;
- (void)registerDeviceWithSceneStatus:(long long)arg0 completionHandler:(id /* block */)arg1;
- (void)registerDeviceOnceWithCompletion:(id /* block */)arg0;
- (void)setConfigParamsBlock:(id /* block */)arg0;
- (void)setKlinkEgdiEnabled:(BOOL)arg0;
- (void)setEnableGuardSign:(BOOL)arg0;
- (void)setTicketGuardInitTimeDuration:(double)arg0;
- (void)setAppGroupsKey:(id)arg0;
- (void)setRegisterStatusOptimize:(BOOL)arg0;
- (void)clearDeviceIDAndInstallID;
- (id)klinkEgdi;
- (long long)sceneStatus;
- (void)setIsInHouseVersion:(BOOL)arg0;
- (BOOL)needNewUserTag;
- (id /* block */)configParamsBlock;
- (void)setAppName:(id)arg0;
- (id)appName;
- (id)channel;
- (id)init;
- (void)setAppID:(id)arg0;
- (void)setDeviceID:(id)arg0;
- (id)reachability;
- (void).cxx_destruct;
- (id)deviceID;
- (void)setChannel:(id)arg0;
- (void)didEnterBackground:(id)arg0;
- (void)setReachability:(id)arg0;
- (void)setSerialQueue:(id)arg0;
- (id)serialQueue;
- (id)installID;
- (id)appID;
- (void)connectionChanged:(id)arg0;
- (void)dealloc;
- (long long)deviceStatus;
- (double)retryInterval;
- (void)setRetryInterval:(double)arg0;
- (void)setDeviceStatus:(long long)arg0;
- (BOOL)isDeviceRegistered;

@end