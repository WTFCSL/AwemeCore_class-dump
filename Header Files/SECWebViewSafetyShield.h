//
//     Generated by private class-dump
//

@class NSString;
@protocol SECWebTrafficFeatureDetector, SECWebSafetyPolicy;

@interface SECWebViewSafetyShield : NSObject <SECWebViewPlugin> {
    id<SECWebSafetyPolicy> _policy;
    id<SECWebTrafficFeatureDetector> _webFeatureDetector;
}

@property (retain, nonatomic) id<SECWebSafetyPolicy> policy;
@property (retain, nonatomic) id<SECWebTrafficFeatureDetector> webFeatureDetector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchTraceFromWebView:(id)arg0;
+ (BOOL)compareLinkIsEqual:(id)arg0 with:(id)arg1;

- (void)onPluginInit;
- (void)webView:(id)arg0 changedURLFrom:(id)arg1 toURL:(id)arg2;
- (void)setWebFeatureDetector:(id)arg0;
- (id)webFeatureDetector;
- (void)handleSecLinkRiskNotification:(id)arg0;
- (void)handleSecLinkResponseNotificationInMainThread:(id)arg0;
- (void)handleSecLinkHeaderRiskNotification:(id)arg0;
- (void)handleSecLinkResponseNotification:(id)arg0;
- (void)setupPolicy:(id)arg0;
- (void)setupFeatureDetector:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)policy;
- (void)setPolicy:(id)arg0;
- (void)addNotificationObserver;

@end
