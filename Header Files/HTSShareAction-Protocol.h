//
//     Generated by private class-dump
//

@protocol HTSShareAction <NSObject>

- (BOOL)isPlatformAvailable:(long long)arg0;

@optional

- (BOOL)isPlatformInstalled:(long long)arg0;
- (BOOL)openAppWithPlatform:(long long)arg0;
- (void)shareWithModel:(id)arg0 toPlatform:(long long)arg1 completion:(id /* block */)arg2;
- (void)shareWithModel:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)handleOpenURL:(id)arg0;

@end
