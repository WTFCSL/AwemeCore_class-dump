//
//     Generated by private class-dump
//

@protocol AWEBottomContainerViewLifeCycleDelegate <NSObject>

@optional

- (void)containerViewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)containerViewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg0 view:(id)arg1;
- (void)containerViewWillStartLoading;
- (void)containerViewDidStartLoading;
- (void)containerViewDidFetchResourceWithURL:(id)arg0;
- (void)containerViewDidFetchedResourceWithURL:(id)arg0 error:(id)arg1;
- (void)containerViewDidFirstScreen;
- (void)containerViewDidFinishLoadWithURL:(id)arg0;
- (void)containerViewDidFinishLoadWithURL:(id)arg0 view:(id)arg1;
- (void)containerViewDidUpdate;
- (void)containerViewDidReceiveError:(id)arg0;
- (void)containerViewDidReceivePerformance:(id)arg0;
- (void)containerViewDidLoadFailedWithURL:(id)arg0 error:(id)arg1;
- (void)containerViewDidLoadFailedWithURL:(id)arg0 view:(id)arg1 error:(id)arg2;

@end