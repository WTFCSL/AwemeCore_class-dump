//
//     Generated by private class-dump
//

@interface FlowKit.VideoFeedViewController : FlowCommon.FlowBaseViewController <UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ animator;
    void /* unknown type, empty encoding */ maxPlayIndex;
    void /* unknown type, empty encoding */ currentPlayingIndex;
    void /* unknown type, empty encoding */ loadingIndicatorView;
    void /* unknown type, empty encoding */ loadMoreMode;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadMoreView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_moreView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_noMoreView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_moreIndicatorView;
    void /* unknown type, empty encoding */ initialIndex;
    void /* unknown type, empty encoding */ dataFetcher;
    void /* unknown type, empty encoding */ hasFirstAppeared;
    void /* unknown type, empty encoding */ willDisappearPlaying;
    void /* unknown type, empty encoding */ dismissPan;
    void /* unknown type, empty encoding */ initDate;
    void /* unknown type, empty encoding */ stayBeginDate;
    void /* unknown type, empty encoding */ isLoadingMore;
    void /* unknown type, empty encoding */ hasScrolledToInitialVideo;
}

- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (struct CGPoint { double x0; double x1; })collectionView:(id)arg0 targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)handleDismissPanGesture:(id)arg0;
- (void)handleCloseButtonTouchUpInside:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)didEnterBackground:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)initWithCoder:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)willEnterForeground:(id)arg0;

@end
