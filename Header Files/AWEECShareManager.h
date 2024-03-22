//
//     Generated by private class-dump
//

@interface AWEECShareManager : NSObject

+ (BOOL)isEcomShareSchema:(id)arg0;
+ (void)verifyShareSecretWithSchema:(id)arg0 requestPage:(unsigned long long)arg1 shareChannel:(unsigned long long)arg2 ecS:(id)arg3 bizParams:(id)arg4 extraDic:(id)arg5 completion:(id /* block */)arg6;
+ (void)requesetSafeTokenWithSchema:(id)arg0 requestPage:(unsigned long long)arg1 destinationPage:(unsigned long long)arg2 extraDic:(id)arg3 completion:(id /* block */)arg4;
+ (id)ecomShareSaveToAlbumImageWithSharedImage:(id)arg0 bgColorImage:(id)arg1 shareScene:(id)arg2;
+ (void)trackEcomShareReflowWithUrl:(id)arg0;
+ (void)openEcomLynxPosterSharePanelWithParams:(id)arg0;
+ (void)requestGoodsInfoBeforeReturnWithRequestPage:(unsigned long long)arg0 itemType:(unsigned long long)arg1 itemId:(id)arg2 userId:(id)arg3 marketingChannel:(id)arg4 extraDic:(id)arg5 schema:(id)arg6 extraInfo:(id)arg7 completion:(id /* block */)arg8;
+ (id)ecomTagStackView:(id)arg0 shouldHideBoundsView:(BOOL)arg1 maxWidth:(double)arg2 needCoupon:(BOOL)arg3;
+ (void)requestShareItemImInfoWithItemId:(id)arg0 itemType:(id)arg1 requestPage:(id)arg2 extraDic:(id)arg3 logDic:(id)arg4 modelClass:(id)arg5 withCompletion:(id /* block */)arg6;
+ (id)generateGoodsTrackObjectWithParams:(id)arg0;
+ (void)requestBeforeShareWithParams:(id)arg0 logDic:(id)arg1 completion:(id /* block */)arg2;
+ (id)transJSBParamsToActivityModel:(id)arg0;
+ (void)requestBeforeShareWithActivityModel:(id)arg0 logDic:(id)arg1 completion:(id /* block */)arg2;
+ (void)requesetHotGoodsInfoWithItemId:(id)arg0 withSchema:(id)arg1 marketChannel:(id)arg2 channelId:(id)arg3 channelType:(long long)arg4 extraDic:(id)arg5 logDic:(id)arg6 withCompletion:(id /* block */)arg7;
+ (void)requestBeforeShareWithShareModel:(id)arg0 extraDic:(id)arg1 logDic:(id)arg2 completion:(id /* block */)arg3;
+ (void)requestBeforeShareWithShopOwnerModel:(id)arg0 extraDic:(id)arg1 logDic:(id)arg2 completion:(id /* block */)arg3;
+ (void)requestBeforeShareWithStoreModel:(id)arg0 extraDic:(id)arg1 logDic:(id)arg2 completion:(id /* block */)arg3;
+ (id)hMacMD5String:(id)arg0;

@end