//
//     Generated by private class-dump
//

@class NSString;

@interface SECWebContentTrafficMonitor : NSObject <BDWebInterceptorMonitor, BDWebRequestFilter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)bdw_URLSchemeTask:(id)arg0 didReceiveResponse:(id)arg1;
- (void)bdw_URLSchemeTask:(id)arg0 didLoadData:(id)arg1;
- (void)bdw_URLSchemeTaskDidFinishLoading:(id)arg0;
- (void)bdw_URLSchemeTask:(id)arg0 didFailWithError:(id)arg1;
- (void)bdw_URLSchemeTask:(id)arg0 didPerformRedirection:(id)arg1 newRequest:(id)arg2;
- (BOOL)bdw_willBlockRequest:(id)arg0;

@end
