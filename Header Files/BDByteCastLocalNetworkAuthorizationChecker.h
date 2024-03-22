//
//     Generated by private class-dump
//

@class NSNetService, NSString, NSObject;
@protocol OS_nw_browser;

@interface BDByteCastLocalNetworkAuthorizationChecker : NSObject <NSNetServiceDelegate> {
    NSObject<OS_nw_browser> *_browser;
    NSNetService *_netService;
    id /* block */ _completion;
}

@property (retain, nonatomic) NSObject<OS_nw_browser> *browser;
@property (retain, nonatomic) NSNetService *netService;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkAuthorizationWithCompletion:(id /* block */)arg0;
- (void)onCheckCompletedWithError:(id)arg0 allowed:(BOOL)arg1;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setBrowser:(id)arg0;
- (void)setCompletion:(id /* block */)arg0;
- (id)browser;
- (void)reset;
- (void)netService:(id)arg0 didNotPublish:(id)arg1;
- (void)netServiceDidPublish:(id)arg0;
- (void)setNetService:(id)arg0;
- (id)netService;

@end