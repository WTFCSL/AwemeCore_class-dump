//
//     Generated by private class-dump
//

@interface CJPayAPI : NSObject

+ (BOOL)canProcessUserActivity:(id)arg0;
+ (void)openUniversalPayDeskWithParams:(id)arg0 withDelegate:(id)arg1;
+ (void)openPayDeskWithConfig:(id)arg0 orderParams:(id)arg1 withDelegate:(id)arg2;
+ (void)openScheme:(id)arg0 withDelegate:(id)arg1;
+ (void)openSetPasswordDeskWithParams:(id)arg0 withDelegate:(id)arg1;
+ (void)requestAuth:(id)arg0 withDelegate:(id)arg1;
+ (void)syncResourcesWhenSelectHomepage;
+ (void)syncResourcesWhenSelectNotify;
+ (void)setupFontScale:(double)arg0;
+ (void)configHost:(id)arg0;
+ (void)enableMergeGeckoRequest:(BOOL)arg0;
+ (void)syncOfflineWith:(id)arg0;
+ (void)registerAppInfo:(id)arg0;
+ (void)setupLanguage:(unsigned long long)arg0;
+ (void)registerMetaSecDelegate:(id)arg0;
+ (BOOL)canProcessURL:(id)arg0;
+ (void)requestCreateOrderBeforeOpenBytePayDesk:(id)arg0;
+ (void)openBytePayDeskWithSchemaParams:(id)arg0 withDelegate:(id)arg1;
+ (void)openWithdrawDeskWithConfig:(id)arg0 orderURL:(id)arg1 withDelegate:(id)arg2;
+ (void)openScheme:(id)arg0 callBack:(id /* block */)arg1;
+ (void)registerInitClass:(Class)arg0;
+ (id)getAPIVersion;
+ (void)openBDPayDeskWithConfig:(id)arg0 orderParams:(id)arg1 delegate:(id)arg2;
+ (void)lazyInitCJPay;
+ (id)getCJPayInfo:(id)arg0;
+ (void)openPayscoreWithParams:(id)arg0 withDelegate:(id)arg1;
+ (void)openFastPayDeskWithConfig:(id)arg0 orderParams:(id)arg1 withDelegate:(id)arg2;
+ (void)openBankCardListWithMerchantId:(id)arg0 appId:(id)arg1 userId:(id)arg2;
+ (void)openH5PayDeskWithConfig:(id)arg0 orderURL:(id)arg1 withDelegate:(id)arg2;
+ (void)openWithConfig:(id)arg0 scheme:(id)arg1 withDelegate:(id)arg2;
+ (void)openBalanceWithdrawDeskWithParams:(id)arg0 withDelegate:(id)arg1;
+ (void)openBalanceRechargeDeskWithParams:(id)arg0 withDelegate:(id)arg1;
+ (void)openUniteSign:(id)arg0 withDelegate:(id)arg1;
+ (void)openEcommercePayDeskWithParams:(id)arg0 withDelegate:(id)arg1;
+ (BOOL)trackPerformanceWithEventList:(id)arg0;
+ (void)openTradeRecordWithAppId:(id)arg0 merchantId:(id)arg1;
+ (void)openPayManagerWithAppId:(id)arg0 merchantId:(id)arg1;
+ (void)setTheme:(id)arg0;
+ (void)registerDelegate:(id)arg0;

@end