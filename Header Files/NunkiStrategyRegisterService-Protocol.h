//
//     Generated by private class-dump
//

@protocol NunkiStrategyRegisterService <NSObject>

+ (BOOL)enableNunki;
+ (id)sharedInstance;

- (void)registerStrategies:(id)arg0;
- (id /* block */)strategyTaskWithKey:(id)arg0;
- (id)dicSettingsForKey:(id)arg0;
- (BOOL)boolSettingsForKey:(id)arg0;
- (id)allStrategyKeys;
- (id)strategyInfoWithKey:(id)arg0;
- (id)arraySettingsForKey:(id)arg0;

@end
