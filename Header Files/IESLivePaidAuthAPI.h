//
//     Generated by private class-dump
//

@interface IESLivePaidAuthAPI : HTSLiveApi

- (long long)getCurrentPaidLiveType:(long long)arg0;
- (void)requestPaidForAuthID:(id)arg0 paidScene:(long long)arg1 completion:(id /* block */)arg2;
- (void)requestPaiedInfoForRoom:(id)arg0 pingID:(id)arg1 authID:(id)arg2 paidScene:(long long)arg3 type:(long long)arg4 completion:(id /* block */)arg5;

@end