//
//     Generated by private class-dump
//

@class NSString;
@protocol WKScriptMessageHandler;

@interface CSJScriptMessageHandler : NSObject <WKScriptMessageHandler> {
    id<WKScriptMessageHandler> _realScriptMessageHandler;
}

@property (weak, nonatomic) id<WKScriptMessageHandler> realScriptMessageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRealScriptMessageHandler:(id)arg0;
- (id)realScriptMessageHandler;
- (void).cxx_destruct;
- (id)initWithHandler:(id)arg0;
- (void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1;

@end
