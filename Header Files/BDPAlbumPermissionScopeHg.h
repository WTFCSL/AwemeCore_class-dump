//
//     Generated by private class-dump
//

@class NSString;

@interface BDPAlbumPermissionScopeHg : NSObject <BDPPermissionScopeEntityProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedScope;

- (id)desc:(id)arg0;
- (id)title:(id)arg0;
- (long long)freeType;
- (BOOL)isNeedRecorded;
- (BOOL)isCanCombine:(id)arg0;
- (id)brief:(id)arg0;
- (void)footerView:(id)arg0 completion:(id /* block */)arg1;
- (void)contentView:(id)arg0 completion:(id /* block */)arg1;
- (void)preCheck:(id)arg0 completion:(id /* block */)arg1;
- (void)forceRequestPermission:(id)arg0 completion:(id /* block */)arg1;
- (id)briefDesc:(id)arg0;
- (id)eventName;

@end
