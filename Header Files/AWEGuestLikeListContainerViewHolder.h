//
//     Generated by private class-dump
//

@class UICollectionView, DUXVacantView, AWEUILoadingView, UIView, AWEGuestHomePageContext;

@interface AWEGuestLikeListContainerViewHolder : AWEBaseListViewHolder {
    AWEGuestHomePageContext *_pageContext;
    DUXVacantView *_emptyVacantView;
    DUXVacantView *_errorVacantView;
    UICollectionView *_collectionView;
    AWEUILoadingView *_loadingView;
    UIView *_vacantViewContainer;
}

@property (retain, nonatomic) AWEGuestHomePageContext *pageContext;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *vacantViewContainer;
@property (retain, nonatomic) DUXVacantView *emptyVacantView;
@property (retain, nonatomic) DUXVacantView *errorVacantView;

- (void)setupViewHolder;
- (void)showToast:(id)arg0;
- (void)dismissLoadingView;
- (void)showEmptyVacantView;
- (id)emptyVacantView;
- (void)setEmptyVacantView:(id)arg0;
- (id)errorVacantView;
- (void)showErrorVacantView;
- (void)hideVacantView;
- (id)vacantViewContainer;
- (void)updateVacantViewLayout;
- (void)setErrorVacantView:(id)arg0;
- (void)setVacantViewContainer:(id)arg0;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setCollectionView:(id)arg0;
- (void)showLoadingView;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end