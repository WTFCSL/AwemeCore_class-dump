//
//     Generated by private class-dump
//

@interface IESECGoodsVerifyHelper : NSObject

+ (void)verifyGoodsManageAuthorityIfNeeded:(id /* block */)arg0;
+ (void)loginIfNeededWithCompletion:(id /* block */)arg0;
+ (void)loginNCheckDisclaimerWithConfig:(id)arg0 confirmBlock:(id /* block */)arg1 cancelBlock:(id /* block */)arg2;
+ (void)popVerifyViewWithResponse:(id)arg0 completion:(id /* block */)arg1;
+ (void)updateLocallyResult:(long long)arg0 config:(id)arg1;
+ (void)checkDisclaimerForTouTiaoProductWithConfig:(id)arg0 action:(id /* block */)arg1 cancel:(id /* block */)arg2;
+ (void)checkDisclaimerForNonTouTiaoProductWithConfig:(id)arg0 action:(id /* block */)arg1 cancel:(id /* block */)arg2;
+ (void)loginIfNeededWithExtraInfo:(id)arg0 completion:(id /* block */)arg1;
+ (void)updateRemoteResultWithConfig:(id)arg0 completion:(id /* block */)arg1;
+ (void)fetchDisclaimerResult:(id)arg0 completion:(id /* block */)arg1;
+ (id)locallyStorageKeyWithAppID:(id)arg0;
+ (void)loginNCheckDisclaimerWithConfig:(id)arg0 confirmBlock:(id /* block */)arg1 cancleBlock:(id /* block */)arg2;

@end
