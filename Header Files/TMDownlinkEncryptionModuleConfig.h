//
//     Generated by private class-dump
//

@class NSDictionary;

@interface TMDownlinkEncryptionModuleConfig : TMModuleConfig {
    NSDictionary *_downlinkEncryptionConfigs;
}

@property (retain, nonatomic) NSDictionary *downlinkEncryptionConfigs;

+ (id)configKey;

- (Class)moduleClass;
- (id)downlinkEncryptionConfigs;
- (void)setDownlinkEncryptionConfigs:(id)arg0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;

@end