//
//     Generated by private class-dump
//

@interface LarkSSO.LarkSSO : NSObject {
    void /* unknown type, empty encoding */ apps;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ showViewController;
    void /* unknown type, empty encoding */ currentRequest;
    void /* unknown type, empty encoding */ logInfo;
    void /* unknown type, empty encoding */ lang;
    void /* unknown type, empty encoding */ window;
}

+ (void)registerWithApps:(id)arg0;
+ (id)setupLog;
+ (id)setupLogWithDid:(id)arg0;
+ (void)sendWithRequest:(id)arg0 viewController:(id)arg1 delegate:(id)arg2;
+ (void)setupLang:(id)arg0;
+ (void)setupIsLarkSchemeOver50:(BOOL)arg0;
+ (BOOL)handleURL:(id)arg0;
+ (id)sdkVersion;

- (id)init;
- (void).cxx_destruct;

@end
