//
//     Generated by private class-dump
//

@class NSString;

@interface AWEWebConfigImpl : HTSService <AWEWebViewConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)secureLinkBaseUrl;
- (BOOL)adConfigIsClickJumpEnabled;
- (id)adConfigInterceptList;
- (id)adConfigInterceptListNoToast;
- (id)adConfigInterceptTips;
- (BOOL)adConfigIsClickJumpWithinInfoPlist;
- (BOOL)adConfigIsAutoJumpEnabled;
- (double)adConfigClickJumpInterval;
- (id)adConfigAllowClickJumpWhiteList;
- (id)adConfigJumpAllowList;
- (id)adConfigInteractionJumpAllowList;
- (id)adSplashConfigJumpAllowList;
- (id)wkAllowList;
- (BOOL)enableAutoJumpAppStore;
- (id)adConfigEnterpriseSignList;
- (id)adConfigAppstoreWhiteList;
- (BOOL)webInfoReportWifiOnly;
- (long long)webInfoReportPageCount;
- (long long)webInfoReportCountLimit;
- (id)webInfoReportURL;
- (BOOL)enableGurdPreload;
- (BOOL)enableWebviewCachePreload;
- (unsigned long long)cacheCount;
- (id)commonResourcePrefix;
- (id)resourceRequestURL;
- (id)commonResourceChannelForAdCard;
- (id)commonResourcePrefixForAdCard;
- (id)webViewAnalyticsScript;
- (BOOL)ironManJumpControlEnabled;
- (id)ironManJumpAllowWhiteList;
- (long long)errorOverwhelmingCount;
- (long long)errorOverwhelmingDuration;
- (long long)safeDuraionAfterOverWhelming;
- (long long)syncCheckTimeLimit;
- (BOOL)forbidDeeplinkFromThirdParty;
- (BOOL)enableAdWebViewCookieFix;
- (id)adWebViewNativeCookieBlockList;
- (BOOL)enableFix30xCORSCookie;
- (BOOL)falconEnable;
- (id)secureLinkDefaultBaseUrl;
- (id)webInfoDefaultReportURL;
- (id)commonResourceDefaultPrefix;
- (id)resourceDefaultRequestURL;
- (id)adCardResourceDefaultChannels;
- (id)adCardResourceDefaultPrefix;

@end