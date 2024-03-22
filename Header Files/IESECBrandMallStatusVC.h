//
//     Generated by private class-dump
//

@class IESECTabKitErrorView, IESECFullLoadingView;

@interface IESECBrandMallStatusVC : UIViewController {
    IESECFullLoadingView *_fullLoadingView;
    id /* block */ _errorViewRefreshBlock;
    IESECTabKitErrorView *_errorView;
}

@property (retain, nonatomic) IESECTabKitErrorView *errorView;
@property (copy, nonatomic) id /* block */ errorViewRefreshBlock;

- (void)showLoadingStatus;
- (void)showErrorStatus;
- (void)dismissStatus;
- (void)setErrorViewRefreshBlock:(id /* block */)arg0;
- (id /* block */)errorViewRefreshBlock;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)errorView;
- (void)setErrorView:(id)arg0;

@end
