//
//     Generated by private class-dump
//

@interface BDXBridgeRequestPermissionMethodParamModel : BDXBridgeModel {
    BOOL _showAlert;
    unsigned long long _permission;
}

@property (nonatomic) unsigned long long permission;
@property (nonatomic) BOOL showAlert;

+ (id)requiredKeyPaths;
+ (id)permissionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setShowAlert:(BOOL)arg0;
- (unsigned long long)permission;
- (void)setPermission:(unsigned long long)arg0;
- (BOOL)showAlert;

@end
