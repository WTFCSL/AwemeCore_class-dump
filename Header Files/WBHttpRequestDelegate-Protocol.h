//
//     Generated by private class-dump
//

@protocol WBHttpRequestDelegate <NSObject>

@optional

- (void)request:(id)arg0 didReceiveResponse:(id)arg1;
- (void)request:(id)arg0 didFinishLoadingWithResult:(id)arg1;
- (void)request:(id)arg0 didFinishLoadingWithDataResult:(id)arg1;
- (void)request:(id)arg0 didReciveRedirectResponseWithURI:(id)arg1;
- (void)request:(id)arg0 didFailWithError:(id)arg1;

@end
