//
//     Generated by private class-dump
//

@class NSObject, NSString, NSMutableDictionary, NSNumber, IESLiveLinkmicSettingApi;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface IESLiveLinkmicSettingServiceImpl : NSObject <HTSLiveMessageSubscriber, IESLiveLinkmicSettingService> {
    BOOL _settingMapFetched;
    BOOL _enableWrds;
    NSNumber *_roomID;
    NSString *_secUserID;
    IESLiveLinkmicSettingApi *_api;
    NSMutableDictionary *_settingMap;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_sem;
    NSMutableDictionary *_listenerMap;
    long long _version;
}

@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSString *secUserID;
@property (retain, nonatomic) IESLiveLinkmicSettingApi *api;
@property (retain, nonatomic) NSMutableDictionary *settingMap;
@property (nonatomic) BOOL settingMapFetched;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (retain, nonatomic) NSMutableDictionary *listenerMap;
@property (nonatomic) BOOL enableWrds;
@property (nonatomic) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (void)didSetAttachingDIContext;
- (void)setSettingMap:(id)arg0;
- (id)settingMap;
- (void)getBoolValueWithKey:(int)arg0 callback:(id /* block */)arg1;
- (void)getIntValueWithKey:(int)arg0 callback:(id /* block */)arg1;
- (void)getAllKeyWithCallback:(id /* block */)arg0;
- (void)getAllKeyWithCallback:(id /* block */)arg0 end:(id /* block */)arg1;
- (void)fetchSettingIfNeed:(id /* block */)arg0;
- (BOOL)getLocalBool:(int)arg0;
- (int)getLocalInt:(int)arg0;
- (id)getLocalValue:(int)arg0;
- (void)addListener:(id)arg0 keys:(id)arg1 callback:(id /* block */)arg2;
- (void)addListenerForAllKeys:(id)arg0 callback:(id /* block */)arg1;
- (void)addListenerForAllKeys:(id)arg0 callback:(id /* block */)arg1 onceMessage:(id /* block */)arg2;
- (void)updateSetting:(id)arg0 extParams:(id)arg1 callback:(id /* block */)arg2;
- (void)fetchAudienceSettings:(id)arg0 callback:(id /* block */)arg1;
- (void)updateAudienceSettings:(int)arg0 status:(int)arg1 callback:(id /* block */)arg2;
- (void)fetchSettingIgnoreCache:(id /* block */)arg0;
- (void)setNeedUpdateCache;
- (void)addCacheWithKey:(int)arg0 value:(BOOL)arg1;
- (void)removeCacheWithKey:(int)arg0;
- (void)setSettingMapFetched:(BOOL)arg0;
- (void)setEnableWrds:(BOOL)arg0;
- (BOOL)enableWrds;
- (BOOL)settingMapFetched;
- (void)fetchSettingByWrds:(id /* block */)arg0;
- (void)fetchSettingByApi:(id /* block */)arg0;
- (void)getLatestSettingsWithVersion:(long long)arg0 completion:(id /* block */)arg1;
- (void)fixFetchSettingResponse:(id)arg0;
- (id)genSetting:(int)arg0 value:(BOOL)arg1;
- (void)fetchSettingsSyncIfNeed:(id /* block */)arg0;
- (id)sem;
- (id)init;
- (void)setVersion:(long long)arg0;
- (void)removeListener:(id)arg0;
- (void).cxx_destruct;
- (long long)version;
- (void)setSem:(id)arg0;
- (id)queue;
- (void)setQueue:(id)arg0;
- (void)messageReceived:(id)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)listenerMap;
- (void)setListenerMap:(id)arg0;
- (id)api;
- (void)sendNotify:(id)arg0;
- (void)setApi:(id)arg0;

@end
