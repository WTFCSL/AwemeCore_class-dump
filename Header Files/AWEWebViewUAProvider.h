//
//     Generated by private class-dump
//

@class NSString;

@interface AWEWebViewUAProvider : NSObject <BDPWebViewUADelegate, CJPayWebViewUADelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)fetchSystemUserAgentWithCompletion:(id /* block */)arg0;
- (BOOL)enableUAFetch;
- (void)fetchLastestSystemUserAgentWithCompletion:(id /* block */)arg0;
- (void)registerUAProvider;
- (id)fetchSystemUserAgentFromeCache;

@end
