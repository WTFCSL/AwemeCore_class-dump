//
//     Generated by private class-dump
//

@interface BDPAlbumPermissionScope : BDPBasePermissionScope

+ (void)bootstrapLaunch;
+ (id)sharedScope;

- (id)desc:(id)arg0;
- (id)title:(id)arg0;
- (long long)freeType;
- (BOOL)isNeedRecorded;
- (BOOL)isCanCombine:(id)arg0;
- (id)brief:(id)arg0;
- (void)forceRequestPermission:(id)arg0 completion:(id /* block */)arg1;
- (unsigned long long)privacyScopeEnumName;
- (id)briefDesc:(id)arg0;
- (id)eventName;

@end
