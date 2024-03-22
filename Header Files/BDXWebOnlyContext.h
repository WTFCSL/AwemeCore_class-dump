//
//     Generated by private class-dump
//

@interface BDXWebOnlyContext : BDXSubContext {
    BOOL _disableJSBridgeBroadcastNotification;
    BOOL _enableTTNet;
    id /* block */ _customGlobalPropsScriptBlock;
    id /* block */ _enableTTNetWithURL;
}

@property (nonatomic) BOOL disableJSBridgeBroadcastNotification;
@property (copy, nonatomic) id /* block */ customGlobalPropsScriptBlock;
@property (nonatomic) BOOL enableTTNet;
@property (copy, nonatomic) id /* block */ enableTTNetWithURL;

- (void)mergeContext:(id)arg0 shouldOverride:(BOOL)arg1;
- (void)setCustomGlobalPropsScriptBlock:(id /* block */)arg0;
- (BOOL)enableTTNet;
- (void)setEnableTTNet:(BOOL)arg0;
- (void)setDisableJSBridgeBroadcastNotification:(BOOL)arg0;
- (BOOL)disableJSBridgeBroadcastNotification;
- (id /* block */)customGlobalPropsScriptBlock;
- (id /* block */)enableTTNetWithURL;
- (void)setEnableTTNetWithURL:(id /* block */)arg0;
- (void).cxx_destruct;

@end