//
//     Generated by private class-dump
//

@class NSLock, NSMutableDictionary, NSString;

@interface NunkiStrategyRegister : NSObject <NunkiStrategyRegisterService> {
    NSMutableDictionary *_registeredStrategys;
    NSLock *_rwLock;
}

@property (retain, nonatomic) NSMutableDictionary *registeredStrategys;
@property (retain, nonatomic) NSLock *rwLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableNunki;
+ (id)sharedInstance;

- (void)setRwLock:(id)arg0;
- (id)rwLock;
- (void)registerStrategies:(id)arg0;
- (id /* block */)strategyTaskWithKey:(id)arg0;
- (id)dicSettingsForKey:(id)arg0;
- (BOOL)boolSettingsForKey:(id)arg0;
- (id)allStrategyKeys;
- (id)strategyInfoWithKey:(id)arg0;
- (id)arraySettingsForKey:(id)arg0;
- (id)registeredStrategys;
- (void)setRegisteredStrategys:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end