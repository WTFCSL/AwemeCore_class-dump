//
//     Generated by private class-dump
//

@class NSDictionary;

@interface TMPrivacyPermissionConfig : TMModuleConfig {
    NSDictionary *_permissionApiMap;
}

@property (copy, nonatomic) NSDictionary *permissionApiMap;

+ (id)configKey;

- (Class)moduleClass;
- (id)permissionApiMap;
- (void)setPermissionApiMap:(id)arg0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;

@end
