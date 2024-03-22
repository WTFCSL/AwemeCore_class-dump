//
//     Generated by private class-dump
//

@class IESLiveAssociateHeadVideoSelectViewModel, MJRefreshFooter, IESLiveWebpLoadingView;

@interface IESLiveAssociateHeadVideoSelectCollectionView : UICollectionView {
    id /* block */ _loadMoreBlock;
    IESLiveAssociateHeadVideoSelectViewModel *_viewModel;
    MJRefreshFooter *_loadMoreFooter;
    IESLiveWebpLoadingView *_loadingView;
}

@property (retain, nonatomic) MJRefreshFooter *loadMoreFooter;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (copy, nonatomic) id /* block */ loadMoreBlock;
@property (retain, nonatomic) IESLiveAssociateHeadVideoSelectViewModel *viewModel;

- (id /* block */)loadMoreBlock;
- (void)setLoadMoreBlock:(id /* block */)arg0;
- (id)loadMoreFooter;
- (void)setLoadMoreFooter:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 collectionViewLayout:(id)arg1;
- (void)setup;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
