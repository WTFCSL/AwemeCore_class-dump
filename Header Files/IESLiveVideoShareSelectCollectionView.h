//
//     Generated by private class-dump
//

@class VideoTab, MJRefreshFooter, IESLiveWebpLoadingView;

@interface IESLiveVideoShareSelectCollectionView : UICollectionView {
    VideoTab *_videoTab;
    MJRefreshFooter *_loadMoreFooter;
    IESLiveWebpLoadingView *_loadingView;
}

@property (retain, nonatomic) MJRefreshFooter *loadMoreFooter;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) VideoTab *videoTab;

- (id)loadMoreFooter;
- (void)setLoadMoreFooter:(id)arg0;
- (id)videoTab;
- (void)setVideoTab:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 collectionViewLayout:(id)arg1 videoTab:(id)arg2;
- (void).cxx_destruct;
- (void)setup;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
