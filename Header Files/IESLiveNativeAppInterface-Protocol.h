//
//     Generated by private class-dump
//

@protocol IESLiveNativeAppInterface <NSObject>

- (BOOL)hasTimorEnter;
- (BOOL)hasTimorInfo;
- (id)mountingNativeAppInfo;
- (unsigned long long)coexistType;
- (BOOL)supportCoexist;
- (BOOL)isNativeAppMounting;
- (BOOL)needUnmountNativeApp;
- (void)unmountNativeApp;

@optional

- (void)openExistTimorWithLocation:(id)arg0 completion:(id /* block */)arg1;
- (void)forceStopShareScreenForNativeAppWithError:(id)arg0 extra:(id)arg1;
- (void)pauseShareScreenForNativeAppWithExtra:(id)arg0 completion:(id /* block */)arg1;
- (void)resumeShareScreenForNativeAppWithExtra:(id)arg0 completion:(id /* block */)arg1;

@end