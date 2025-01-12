//
//     Generated by private class-dump
//

@class NSNumber, NSArray, NSString;

@interface BDUGLuckyPrefetchConfigRuleItem : MTLModel <MTLJSONSerializing> {
    NSNumber *_enableInject;
    NSNumber *_needPrefetchData;
    NSArray *_settingsKey;
    NSArray *_storagesKey;
}

@property (retain, nonatomic) NSNumber *enableInject;
@property (retain, nonatomic) NSNumber *needPrefetchData;
@property (copy, nonatomic) NSArray *settingsKey;
@property (copy, nonatomic) NSArray *storagesKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)enableInject;
- (void)setEnableInject:(id)arg0;
- (id)needPrefetchData;
- (void)setNeedPrefetchData:(id)arg0;
- (void)setSettingsKey:(id)arg0;
- (id)storagesKey;
- (void)setStoragesKey:(id)arg0;
- (void).cxx_destruct;
- (id)settingsKey;

@end
