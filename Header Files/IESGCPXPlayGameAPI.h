//
//     Generated by private class-dump
//

@interface IESGCPXPlayGameAPI : IESGCPApi

- (id)baseHostURL;
- (id)xtokenRequestHost;
- (void)requestXTokensInfoWithXPlayId:(id)arg0 completion:(id /* block */)arg1;
- (void)requestGetDownloadInfoWithUnifiedGameId:(id)arg0 scene:(id)arg1 authorId:(id)arg2 itemId:(id)arg3 requestId:(id)arg4 completion:(id /* block */)arg5;
- (void)requestUnifiedGameIdWithXPlayId:(id)arg0 completion:(id /* block */)arg1;
- (void)requestLoadingPageConfigWithGameId:(id)arg0 playType:(long long)arg1 completion:(id /* block */)arg2;
- (void)requestBootConfigWithGameModel:(id)arg0 completion:(id /* block */)arg1;
- (void)switchSceneWithAppId:(id)arg0 gameId:(id)arg1 fromScene:(long long)arg2 toScene:(long long)arg3 completion:(id /* block */)arg4;
- (void)payOrderWithOutOrderId:(id)arg0 completion:(id /* block */)arg1;
- (void)recordOpenXPlayGameWithRequetModel:(id)arg0 completion:(id /* block */)arg1;

@end
