//
//     Generated by private class-dump
//

@class AWEUILoadingView, DUXVacantView;

@interface AWELandscapeDetailLoadingCell : UICollectionViewCell {
    AWEUILoadingView *_loadingView;
    DUXVacantView *_errorView;
}

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) DUXVacantView *errorView;

- (void)dismissLoadingView;
- (void)showErrorPage;
- (void)dismissErrorPage;
- (void).cxx_destruct;
- (void)showLoadingView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)errorView;
- (void)setErrorView:(id)arg0;

@end
