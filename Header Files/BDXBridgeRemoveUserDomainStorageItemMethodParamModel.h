//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeRemoveUserDomainStorageItemMethodParamModel : BDXBridgeModel {
    BOOL _enableAppIdIsolation;
    NSString *_key;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL enableAppIdIsolation;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)enableAppIdIsolation;
- (void)setEnableAppIdIsolation:(BOOL)arg0;
- (id)key;
- (void).cxx_destruct;
- (void)setKey:(id)arg0;

@end