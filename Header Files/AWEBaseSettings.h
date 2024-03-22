//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEBaseSettings : NSObject <AWEAppSettingGetterProtocol> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
    NSMutableDictionary *_stableSettings;
    NSDictionary *_settings;
    NSObject<OS_dispatch_queue> *_logQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue;
@property (copy) NSDictionary *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)boolValueForKeyPath:(id)arg0 defaultValue:(BOOL)arg1 stable:(BOOL)arg2;
- (BOOL)boolValueForKeyPath:(id)arg0 defaultValue:(BOOL)arg1;
- (id)dictionaryForKeyPath:(id)arg0 defaultValue:(id)arg1;
- (id)stringForKeyPath:(id)arg0 defaultValue:(id)arg1;
- (id)arrayForKeyPath:(id)arg0 defaultValue:(id)arg1;
- (long long)intValueForKeyPath:(id)arg0 defaultValue:(long long)arg1;
- (id)stringForKeyPath:(id)arg0 defaultValue:(id)arg1 stable:(BOOL)arg2;
- (double)doubleValueForKeyPath:(id)arg0 defaultValue:(double)arg1 stable:(BOOL)arg2;
- (long long)intValueForKeyPath:(id)arg0 defaultValue:(long long)arg1 stable:(BOOL)arg2;
- (id)dictionaryForKeyPath:(id)arg0 defaultValue:(id)arg1 stable:(BOOL)arg2;
- (id)arrayForKeyPath:(id)arg0 defaultValue:(id)arg1 stable:(BOOL)arg2;
- (id)objectForKeyPath:(id)arg0 defaultValue:(id)arg1 stable:(BOOL)arg2;
- (double)doubleValueForKeyPath:(id)arg0 defaultValue:(double)arg1;
- (id)objectForKeyPath:(id)arg0 defaultValue:(id)arg1;
- (BOOL)isSettingsValid:(id)arg0;
- (void)clearStableCacheWithKeys:(id)arg0;
- (id)findValueInDict:(id)arg0 path:(id)arg1 needLock:(BOOL)arg2;
- (void)setStableSettingsWithObject:(id)arg0 forKeyPath:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)setSettings:(id)arg0;
- (id)settings;
- (void)setLogQueue:(id)arg0;
- (id)logQueue;
- (void)dealloc;

@end
