//
//     Generated by private class-dump
//

@class NSString, BDXBridgeEventSubscriber;

@interface AWEPluginRouteCustomImpl : NSObject <BDPRouterPluginDelegate, AWEOpenURLMessage, AWEWebViewLoadTaskMessage, WXApiDelegate> {
    id /* block */ _payCallback;
    id /* block */ _closeWebViewBlock;
    id /* block */ _adWebViewLoadFinishBlk;
    NSString *_verifyAppId;
    id /* block */ _verifyBlk;
    id /* block */ _payResultBlk;
    BDXBridgeEventSubscriber *_paySubscriber;
}

@property (copy, nonatomic) id /* block */ closeWebViewBlock;
@property (copy, nonatomic) id /* block */ adWebViewLoadFinishBlk;
@property (copy, nonatomic) NSString *verifyAppId;
@property (copy, nonatomic) id /* block */ verifyBlk;
@property (copy, nonatomic) id /* block */ payResultBlk;
@property (retain, nonatomic) BDXBridgeEventSubscriber *paySubscriber;
@property (copy, nonatomic) id /* block */ payCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (BOOL)transferToURLString:(id)arg0;
- (BOOL)canOpenURLString:(id)arg0;
- (void)onResp:(id)arg0;
- (BOOL)transferToURLStringWithFormat:(id)arg0;
- (void)adWebViewDidFinishLoadWithWebViewController:(id)arg0;
- (void)adWebViewDidFailLoadWithWebViewController:(id)arg0 error:(id)arg1;
- (void)didOpenURL:(id)arg0 sourceApplication:(id)arg1 annotation:(id)arg2;
- (void)registerSubscribes;
- (void)unregisterSubscribers;
- (void)setPayCallback:(id /* block */)arg0;
- (id /* block */)payCallback;
- (void)closeWebViewNotification:(id)arg0;
- (void)setCloseWebViewBlock:(id /* block */)arg0;
- (id)adWebUrlWithParam:(id)arg0;
- (void)setAdWebViewLoadFinishBlk:(id /* block */)arg0;
- (void)eventAdWebViewOpenWithParams:(id)arg0;
- (id)otherWebViewUrlWithParam:(id)arg0;
- (id /* block */)closeWebViewBlock;
- (id /* block */)adWebViewLoadFinishBlk;
- (void)bdp_openSchemaAndCloseGameWithUniqueID:(id)arg0 URL:(id)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)syncCertificationStatusHandler:(id)arg0;
- (BOOL)bdp_openSchemaWithURL:(id)arg0 userInfo:(id)arg1 appID:(id)arg2;
- (BOOL)bdp_openSchemaWithURL:(id)arg0 userInfo:(id)arg1 appID:(id)arg2 error:(id *)arg3;
- (void)tryEventIMEnterChat:(id)arg0;
- (void)bdp_openLoadFailedPageForChannel:(long long)arg0 schema:(id)arg1 appID:(id)arg2 closeHandler:(id /* block */)arg3;
- (BOOL)openAdWebUrlWithParam:(id)arg0 appID:(id)arg1;
- (BOOL)openOtherWithParam:(id)arg0 appID:(id)arg1;
- (id)bdp_loadFailedPageForChannel:(long long)arg0 schema:(id)arg1 appID:(id)arg2 loadFinishBlock:(id /* block */)arg3;
- (void)bdp_openLoadFailedPageForNonODRWithParams:(id)arg0 schema:(id)arg1 appID:(id)arg2 closeHandler:(id /* block */)arg3;
- (BOOL)bdp_openCustomerServiceWithWebURLString:(id)arg0 extraInfo:(id)arg1 appID:(id)arg2;
- (BOOL)bdp_checkSidebarScene;
- (void)bdp_navigateToVideoWithParam:(id)arg0 appID:(id)arg1 completion:(id /* block */)arg2;
- (void)setVerifyAppId:(id)arg0;
- (void)setVerifyBlk:(id /* block */)arg0;
- (id)verifyAppId;
- (id /* block */)verifyBlk;
- (void)setPayResultBlk:(id /* block */)arg0;
- (void)__registerPlayletPaymentStatusChange;
- (id)paySubscriber;
- (void)setPaySubscriber:(id)arg0;
- (id /* block */)payResultBlk;
- (BOOL)bdp_openSchemaWithURL:(id)arg0 userInfo:(id)arg1;
- (BOOL)bdp_canOpenLoadFailedPageForChannel:(long long)arg0 schema:(id)arg1;
- (void)bdp_openLoadFailedPageForChannel:(long long)arg0 schema:(id)arg1 closeHandler:(id /* block */)arg2;
- (id)bdp_loadFailedPageForChannel:(long long)arg0 schema:(id)arg1 loadFinishBlock:(id /* block */)arg2;
- (BOOL)bdp_openCustomerServiceWithWebURLString:(id)arg0 extraInfo:(id)arg1;
- (void)bdp_navigateToVideoWithParam:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)bdp_openIMCustomerService:(id)arg0;
- (void)bdp_openAppAndReopenGameWithUniqueID:(id)arg0 URL:(id)arg1 completion:(id /* block */)arg2;
- (void)bdp_openGameDetailInfoWithUniqueID:(id)arg0;
- (void)bdp_navigateToSidebarWithUniqueID:(id)arg0 completion:(id /* block */)arg1;
- (void)bdp_openUrl:(id)arg0 params:(id)arg1 fromH5:(BOOL)arg2 completion:(id /* block */)arg3;
- (BOOL)bdp_openUserProfile:(id)arg0 appID:(id)arg1;
- (void)bdp_openLoadFailedPageForIndustryWithParams:(id)arg0 schema:(id)arg1 appID:(id)arg2 closeHandler:(id /* block */)arg3;
- (void)bdp_navigateToRealNamePageWithParam:(id)arg0 appID:(id)arg1 completion:(id /* block */)arg2;
- (void)bdp_navigateToDPPageWithParam:(id)arg0 appID:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleOpenURL:(id)arg0;

@end
