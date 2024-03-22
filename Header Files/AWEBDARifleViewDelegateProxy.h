//
//     Generated by private class-dump
//

@class NSDate, NSString, AWEBDARifleView;

@interface AWEBDARifleViewDelegateProxy : NSObject <AWEBDARifleViewDelegate> {
    AWEBDARifleView *_bdaRifleView;
    NSDate *_startDate;
}

@property (weak, nonatomic) AWEBDARifleView *bdaRifleView;
@property (retain, nonatomic) NSDate *startDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rifleViewDidStartLoading:(id)arg0;
- (void)rifleView:(id)arg0 didStartFetchResourceWithURL:(id)arg1;
- (void)rifleView:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)rifleView:(id)arg0 didLoadFailedWithURL:(id)arg1 error:(id)arg2;
- (void)rifleViewDidConstructJSRuntime:(id)arg0;
- (void)rifleView:(id)arg0 didReceivePerformance:(id)arg1;
- (void)rifleViewvDidFirstScreen:(id)arg0;
- (void)rifleView:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)rifleViewWillStartLoading:(id)arg0;
- (void)rifleView:(id)arg0 didFetchedResource:(id)arg1 error:(id)arg2;
- (void)rifleViewDidUpdate:(id)arg0;
- (void)rifleView:(id)arg0 didRecieveError:(id)arg1;
- (void)rifleViewDidPageUpdate:(id)arg0;
- (void)rifleView:(id)arg0 updateTitle:(id)arg1;
- (id)bdaRifleView;
- (void)setBdaRifleView:(id)arg0;
- (void).cxx_destruct;
- (id)startDate;
- (void)setStartDate:(id)arg0;

@end
