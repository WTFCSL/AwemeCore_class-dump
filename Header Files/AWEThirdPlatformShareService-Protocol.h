//
//     Generated by private class-dump
//

@protocol AWEThirdPlatformShareService <HTSUniqService>

- (BOOL)isPlatformAvailable:(long long)arg0;
- (BOOL)isPlatformInstalled:(long long)arg0;
- (BOOL)openAppWithPlatform:(long long)arg0;
- (void)shareWithModel:(id)arg0 toPlatform:(long long)arg1 completion:(id /* block */)arg2;
- (void)openAppWithPlatform:(long long)arg0 delay:(double)arg1 completion:(id /* block */)arg2;
- (BOOL)handleOpenURL:(id)arg0;

@end