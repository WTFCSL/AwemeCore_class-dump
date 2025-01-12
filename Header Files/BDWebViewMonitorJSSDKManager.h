//
//     Generated by private class-dump
//

@interface BDWebViewMonitorJSSDKManager : BDHybridBaseMonitor {
    id /* block */ _shouldInjectJSSDKBlock;
}

@property (copy, nonatomic) id /* block */ shouldInjectJSSDKBlock;

+ (BOOL)startMonitorWithClasses:(id)arg0 setting:(id)arg1;
+ (BOOL)shouldStopUpdateJS;
+ (void)syncGeckoService;
+ (void /* function */ *)getIMPFrom:(Class)arg0 sel:(SEL)arg1;
+ (void)setUpGeckoEnvWithAppId:(id)arg0 appVersion:(id)arg1 cacheRootDirectory:(id)arg2 deviceId:(id)arg3;
+ (id)scriptForTimingForWebView:(id)arg0 domMonitor:(BOOL)arg1;
+ (id)shared;

- (id /* block */)shouldInjectJSSDKBlock;
- (void)setShouldInjectJSSDKBlock:(id /* block */)arg0;
- (void).cxx_destruct;

@end
