//
//     Generated by private class-dump
//

@interface AWEAntiAddictNoticeNetworkManager : NSObject

+ (void)fetchUserAntiAddictNoticeSettingSceneType:(long long)arg0;
+ (void)updateUserAntiAddictNoticeSetting:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
+ (void)fetchUserAntiAddictNoticeSettingSceneType:(long long)arg0 sceneTypeString:(id)arg1 needRetry:(BOOL)arg2 completion:(id /* block */)arg3;
+ (void)trackSLOBeginWithRetry:(BOOL)arg0;
+ (void)trackSLOEndWithError:(id)arg0 model:(id)arg1 extra:(id)arg2;
+ (BOOL)isSameUserID:(id)arg0 loginEndUserID:(id)arg1;
+ (void)cacheElderModePopupModelImage:(id)arg0;
+ (void)fetchUserAntiAddictNoticeSettingSceneType:(long long)arg0 sceneTypeString:(id)arg1 completionBlock:(id /* block */)arg2;
+ (id)getSceneTypeString:(long long)arg0;

@end