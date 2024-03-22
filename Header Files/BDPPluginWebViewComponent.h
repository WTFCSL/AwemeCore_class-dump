//
//     Generated by private class-dump
//

@class NSString, NSMapTable;

@interface BDPPluginWebViewComponent : BDPBridgeInstancePlugin <BDPBusinessEnginePublishProtocol> {
    NSMapTable *_webViewMap;
}

@property (retain, nonatomic) NSMapTable *webViewMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)instance:(id)arg0 publish:(id)arg1 dest:(unsigned long long)arg2 param:(id)arg3;
- (void)setWebViewMap:(id)arg0;
- (id)webViewMap;
- (id)webviewComponentWithController:(id)arg0 componentID:(id)arg1;
- (void)insertHTMLWebViewWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)updateHTMLWebViewWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)removeHTMLWebViewWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)init;
- (void).cxx_destruct;

@end
