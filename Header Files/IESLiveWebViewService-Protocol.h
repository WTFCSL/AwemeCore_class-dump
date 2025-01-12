//
//     Generated by private class-dump
//

@protocol IESLiveWebViewService <NSObject>

- (id)secureLinkBaseUrl;
- (id)hostUserAgent;
- (id)whiteList;
- (id)XTokenHeaders;
- (id)piperHandlers;
- (void)registerClass;
- (void)unregisterClass;

@optional

- (BOOL)inWhiteListWith:(id)arg0;
- (id)fetchSystemUserAgent;
- (void)forceFetchSystemUserAgent;
- (void)registerUserAgentWithWKWebView:(id)arg0;
- (void)configInnerDomainsIfNeed;
- (void)addInnerDomainsFromSettings;
- (BOOL)shouldFailedOf:(id)arg0;
- (id)getOutSideWebViewHost;
- (id)useBtdURLEncode:(id)arg0;
- (void)forceOffline;
- (void)closeForceOffline;
- (BOOL)isOfflineForURL:(id)arg0;
- (id)offlineMetaForURL:(id)arg0;
- (void)showInjectedPanelWebViewWithURL:(id)arg0 configData:(id)arg1 fromVC:(id)arg2;
- (id)liveHybridAid;
- (void)registerCanvasViewForLynxView:(id)arg0;
- (void)setUpBridgeWithLynxView:(id)arg0;
- (id)commonGlobalPropertiesWithURL:(id)arg0 routerParams:(id)arg1;
- (id)placeHolderView;

@end
