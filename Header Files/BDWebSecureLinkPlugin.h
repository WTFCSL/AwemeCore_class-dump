//
//     Generated by private class-dump
//

@class NSString;

@interface BDWebSecureLinkPlugin : IWKPluginObject <IWKInstancePlugin> {
    int _aid;
    NSString *_wrapingLink;
    NSString *_scene;
    NSString *_lang;
}

@property (retain, nonatomic) NSString *wrapingLink;
@property (nonatomic) int aid;
@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *lang;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)URLString:(id)arg0 appendCommonParams:(id)arg1;
+ (void)injectToWebView:(id)arg0 withAid:(int)arg1 scene:(id)arg2 lang:(id)arg3;
+ (void)secureGoBackStepByStep:(id)arg0 reachEndBlock:(id /* block */)arg1;
+ (void)configSecureLinkDomain:(id)arg0;
+ (void)updateCustomSettingModel:(id)arg0;
+ (void)secureGoBackOneStep:(id)arg0 reachEndBlock:(id /* block */)arg1;

- (id)webView:(id)arg0 loadRequest:(id)arg1;
- (BOOL)compareLinkIsEqual:(id)arg0 with:(id)arg1;
- (void)asyncRequreSecureLinkCheck:(id)arg0 webView:(id)arg1 flag:(BOOL)arg2;
- (void)postSeclinkRiskNotification:(id)arg0 risk:(long long)arg1 showMidPage:(long long)arg2 webview:(id)arg3 extraInfo:(id)arg4;
- (BOOL)isUrlInWhiteList:(id)arg0 webView:(id)arg1;
- (unsigned long long)checkUrlSecurityInCache:(id)arg0 webView:(id)arg1;
- (id)wrapSecureLinkWithOriUrl:(id)arg0;
- (id)loadLink:(id)arg0 withWebView:(id)arg1;
- (void)requestSecureCheck:(id)arg0 webView:(id)arg1 flag:(BOOL)arg2 handleBlock:(id /* block */)arg3;
- (void)strictSyncRequreSecureLinkCheck:(id)arg0 webView:(id)arg1 navigationResponse:(id)arg2 flag:(BOOL)arg3 decisionHandler:(id /* block */)arg4;
- (void)syncRequreSecureLinkCheck:(id)arg0 webView:(id)arg1 navigationResponse:(id)arg2 flag:(BOOL)arg3 decisionHandler:(id /* block */)arg4;
- (id)errorMsgForError:(id)arg0;
- (void)handleSecureLinkCheck:(id)arg0 oriUrl:(id)arg1 risk:(long long)arg2 showMidPage:(BOOL)arg3 needPopPreviousPage:(BOOL)arg4;
- (void)checkAndFireHandlerIfNeededFrom:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 forceReloadToSecurePage:(id)arg2;
- (void)bindHandleBlock:(id /* block */)arg0 toWebView:(id)arg1;
- (void)postResponseNotification:(id)arg0 error:(id)arg1 webview:(id)arg2;
- (id /* block */)fetchAndCleanDecisionHandlerFromWebView:(id)arg0;
- (id)wrapQuickMiddlePage:(id)arg0 risk:(int)arg1;
- (id)reloadSecureWrapWithOriUrl:(id)arg0 webView:(id)arg1;
- (void)handleDangerOrGrayUrl:(id)arg0 isDanger:(BOOL)arg1 webView:(id)arg2 needPopPreviousPage:(BOOL)arg3;
- (id)wrapingLink;
- (void)setWrapingLink:(id)arg0;
- (id)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2;
- (id)webView:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id /* block */)arg2;
- (long long)priority;
- (id)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1;
- (id)scene;
- (void)setAid:(int)arg0;
- (int)aid;
- (id)lang;
- (void)setLang:(id)arg0;

@end
