//
//     Generated by private class-dump
//

@protocol AWEOpenShareDelegate <NSObject>

- (BOOL)isColdLaunch;
- (void)getPasteboardItemsWithCert:(id)arg0 completion:(id /* block */)arg1;
- (void)endLoading;
- (void)shareGameInvitationWithShareResponse:(id)arg0 completionResp:(id)arg1 completion:(id /* block */)arg2;
- (void)jumpToProfileWithOpenId:(id)arg0 targetOpenId:(id)arg1 clientKey:(id)arg2 extraParams:(id)arg3 completionResp:(id)arg4 completion:(id /* block */)arg5;
- (void)jumpToAlbumWithResp:(id)arg0 completion:(id /* block */)arg1;
- (void)jumpToContactWithOpenId:(id)arg0 targetOpenId:(id)arg1 clientKey:(id)arg2 completionResp:(id)arg3 completion:(id /* block */)arg4;
- (void)shareGameAddGroupWithId:(id)arg0 openId:(id)arg1 clientKey:(id)arg2 addGroupType:(long long)arg3 groupType:(long long)arg4 completionResp:(id)arg5 completion:(id /* block */)arg6;
- (void)shareIMLinkWithShareResponse:(id)arg0 backToSourceAppBlock:(id /* block */)arg1 stayInDouyinBlock:(id /* block */)arg2;
- (void)shareIMImageWithShareResponse:(id)arg0 backToSourceAppBlock:(id /* block */)arg1 stayInDouyinBlock:(id /* block */)arg2;
- (BOOL)requireLoginBeforeStart;
- (void)didEnterAwemeFromThridAppShareWithThridAppKey:(id)arg0 shareParam:(id)arg1;
- (void)shareWithShareResponse:(id)arg0 backToSourceAppBlock:(id /* block */)arg1 stayInDouyinBlock:(id /* block */)arg2;
- (void)captureWithShareResponse:(id)arg0 backToSourceAppBlock:(id /* block */)arg1 stayInDouyinBlock:(id /* block */)arg2;
- (void)shouldShareToPublishWithShareResponse:(id)arg0 resultBlock:(id /* block */)arg1;
- (void)showLoading;

@end
