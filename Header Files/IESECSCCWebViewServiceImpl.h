//
//     Generated by private class-dump
//

@class NSString, NSMapTable;

@interface IESECSCCWebViewServiceImpl : NSObject <SCCFilterProtocol, IESECSCCWebViewService> {
    NSMapTable *_sccEventHandlers;
}

@property (retain, nonatomic) NSMapTable *sccEventHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)enableSCCFilterForWebView:(id)arg0 eventHandler:(id)arg1;
+ (id)sharedInstance;

- (id)sccEventHandlers;
- (void)reportEvent:(id)arg0 webView:(id)arg1;
- (void)setSccEventHandlers:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
