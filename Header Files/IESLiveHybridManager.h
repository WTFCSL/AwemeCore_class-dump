//
//     Generated by private class-dump
//

@class NSArray, NSString, WKWebView;
@protocol IESLiveWebViewService, IESLiveLanguageService, IESLiveDebugService;

@interface IESLiveHybridManager : NSObject {
    BOOL _hasInjectedBaseInnerDomains;
    NSArray *_innerDomains;
    NSString *_systemUserAgent;
    WKWebView *_uaWebView;
    id<IESLiveLanguageService> _languageService;
    id<IESLiveWebViewService> _webViewService;
    id<IESLiveDebugService> _debugService;
}

@property (copy, nonatomic) NSArray *innerDomains;
@property (nonatomic) BOOL hasInjectedBaseInnerDomains;
@property (copy, nonatomic) NSString *systemUserAgent;
@property (retain, nonatomic) WKWebView *uaWebView;
@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (retain, nonatomic) id<IESLiveWebViewService> webViewService;
@property (retain, nonatomic) id<IESLiveDebugService> debugService;

+ (id)shared;

- (void)addPrivateDomains:(id)arg0;
- (id)hostUserAgent;
- (id)systemUserAgent;
- (id)whiteList;
- (id)languageService;
- (void)setLanguageService:(id)arg0;
- (BOOL)inWhiteListWith:(id)arg0;
- (id)fetchSystemUserAgent;
- (id)forceFetchSystemUserAgent;
- (void)registerUserAgentWithWKWebView:(id)arg0;
- (void)configInnerDomainsIfNeed;
- (void)addInnerDomainsFromSettings;
- (BOOL)isOfflineForURL:(id)arg0;
- (id)offlineMetaForURL:(id)arg0;
- (id)innerDomains;
- (void)setInnerDomains:(id)arg0;
- (id)webViewService;
- (void)setWebViewService:(id)arg0;
- (id)absoluteUserAgent;
- (void)setDebugService:(id)arg0;
- (id)debugService;
- (void)buildInnerDomains;
- (id)didReceiveSystemUA:(id)arg0;
- (void)setUaWebView:(id)arg0;
- (id)uaWebView;
- (id)uaRemoveBlankIfNeed:(id)arg0;
- (void)setSystemUserAgent:(id)arg0;
- (BOOL)hasInjectedBaseInnerDomains;
- (void)setHasInjectedBaseInnerDomains:(BOOL)arg0;
- (id)customUserAgent;
- (id)init;
- (void).cxx_destruct;

@end
