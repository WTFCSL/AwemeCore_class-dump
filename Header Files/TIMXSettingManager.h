//
//     Generated by private class-dump
//

@class NSDictionary, NSString, TIMXSDKInstance;

@interface TIMXSettingManager : NSObject <TIMXInstanceScopeSingleton> {
    NSDictionary *_settings;
    NSDictionary *_lastCachedSettings;
    TIMXSDKInstance *_r;
}

@property (readonly, nonatomic) BOOL enableMachOForStartup;
@property BOOL p_syncIsFetching;
@property long long p_syncRetryCount;
@property (copy, nonatomic) NSDictionary *settings;
@property (copy, nonatomic) NSDictionary *lastCachedSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)arg0;

- (id)valueForKey:(id)arg0 expectedClass:(Class)arg1 useCache:(BOOL)arg2 forceUseLast:(BOOL)arg3;
- (BOOL)enableMachOForStartup;
- (void)p_syncSettingsFromServer;
- (void)p_appWillEnterForeground;
- (void)setLastCachedSettings:(id)arg0;
- (id)lastCachedSettings;
- (BOOL)p_syncIsFetching;
- (long long)p_syncRetryCount;
- (void)setP_syncIsFetching:(BOOL)arg0;
- (void)setP_syncRetryCount:(long long)arg0;
- (void).cxx_destruct;
- (void)setSettings:(id)arg0;
- (void)updateSettings:(id)arg0;
- (id)settings;
- (id)initWithRootObject:(id)arg0;

@end
