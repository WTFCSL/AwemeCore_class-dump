//
//     Generated by private class-dump
//

@protocol IESLiveOpenPlatformShareScreenStorageService <NSObject>

- (BOOL)isValidScreenCastScene;
- (long long)getScreenCastGuideStatus;
- (void)updateScreenCastGuideStatus;
- (long long)getScreenCastOptStatusWithAppId:(id)arg0;
- (void)updateScreenCastOptStatusWithAppId:(id)arg0 status:(BOOL)arg1;
- (BOOL)getScreenCastUseStatus;
- (void)updateScreenCastUseStatus;

@end