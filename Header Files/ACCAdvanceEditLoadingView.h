//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol ACCProcessViewProtcol;

@interface ACCAdvanceEditLoadingView : NSObject <DVELoadingViewProtocol> {
    UIView<ACCProcessViewProtcol> *_loadingView;
}

@property (retain, nonatomic) UIView<ACCProcessViewProtcol> *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showMessage:(id)arg0 afterDele:(double)arg1;
- (void)showMessageForLoadingView:(id)arg0;
- (void)setProgressLableWithText:(id)arg0 Progress:(double)arg1 CancelBlock:(id /* block */)arg2;
- (void)showMessage:(id)arg0;
- (void).cxx_destruct;
- (void)hideProgress;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)showProgress;

@end