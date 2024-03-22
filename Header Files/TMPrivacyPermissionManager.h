//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface TMPrivacyPermissionManager : TMModule <TMPrivacyPermissionService> {
    NSDictionary *_permissionAPIMap;
    NSDictionary *_handlers;
}

@property (copy, nonatomic) NSDictionary *permissionAPIMap;
@property (copy, nonatomic) NSDictionary *handlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_permissionHandlerClasses;

- (id)permissionTypeOfDataType:(id)arg0 methodName:(id)arg1 className:(id)arg2;
- (long long)permissionStateOfPermissionType:(id)arg0;
- (id)permissionAPIMap;
- (void)setPermissionAPIMap:(id)arg0;
- (void)setHandlers:(id)arg0;
- (id)handlers;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg0;
- (void)start;
- (void)_loadHandlers;

@end
