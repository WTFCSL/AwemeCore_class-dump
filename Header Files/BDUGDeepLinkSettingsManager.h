//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSTimer, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDUGDeepLinkSettingsManager : NSObject {
    BOOL _enableRequestOptimize;
    BOOL _settingsUpdatedSuccessful;
    BOOL _isSettingsRequesting;
    long long _appID;
    id /* block */ _did;
    id /* block */ _iid;
    NSString *_BDUGDeepLinkSettingsCustomerURL;
    NSDictionary *_settings;
    NSObject<OS_dispatch_semaphore> *_lock;
    NSTimer *_timer;
}

@property (copy, nonatomic) NSDictionary *settings;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long appID;
@property (copy, nonatomic) id /* block */ did;
@property (copy, nonatomic) id /* block */ iid;
@property (retain, nonatomic) NSString *BDUGDeepLinkSettingsCustomerURL;
@property (nonatomic) BOOL enableRequestOptimize;
@property (nonatomic) BOOL settingsUpdatedSuccessful;
@property (nonatomic) BOOL isSettingsRequesting;

+ (id)sharedInstance;

- (id /* block */)did;
- (void)setDid:(id /* block */)arg0;
- (id)settingsForKey:(id)arg0 defaultValue:(id)arg1;
- (id /* block */)iid;
- (void)setIid:(id /* block */)arg0;
- (void)setBDUGDeepLinkSettingsCustomerURL:(id)arg0;
- (void)setEnableRequestOptimize:(BOOL)arg0;
- (void)fetchSettingsImmediatelyWithScene:(long long)arg0;
- (void)fetchSettingsIfNeededWithScene:(long long)arg0;
- (void)setSettingsUpdatedSuccessful:(BOOL)arg0;
- (void)setIsSettingsRequesting:(BOOL)arg0;
- (id)BDUGDeepLinkSettingsCustomerURL;
- (id)getRequestSourceFromScene:(long long)arg0;
- (void)fetchSettingsImmediatelyFromTimer;
- (BOOL)isSettingsRequesting;
- (BOOL)enableRequestOptimize;
- (void)fetchSettingsByForce:(BOOL)arg0;
- (BOOL)settingsUpdatedSuccessful;
- (id)timer;
- (id)init;
- (void)updateTimer;
- (void)setAppID:(long long)arg0;
- (void).cxx_destruct;
- (void)setSettings:(id)arg0;
- (id)settings;
- (void)setTimer:(id)arg0;
- (long long)appID;
- (void)onReachabilityChange:(id)arg0;
- (id)lock;
- (void)setLock:(id)arg0;

@end
