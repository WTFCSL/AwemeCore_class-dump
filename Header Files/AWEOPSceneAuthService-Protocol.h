//
//     Generated by private class-dump
//

@protocol AWEOPSceneAuthService <HTSService>

- (void)handleSceneAuthIfNeededWithEntranceModel:(id)arg0 sceneAuthArray:(id)arg1 completeBlock:(id /* block */)arg2;
- (void)callbackWithAuthID:(id)arg0 clientKey:(id)arg1 rspCode:(long long)arg2 errMsg:(id)arg3 extraParams:(id)arg4;
- (void)handleSceneAuthDialogIfNeededWithChoosedScopes:(id)arg0 sceneAuthBindInfoModels:(id)arg1 scopeInfoMap:(id)arg2 finishBlock:(id /* block */)arg3;

@end