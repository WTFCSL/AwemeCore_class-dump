//
//     Generated by private class-dump
//

@protocol AWELandscapeFeedControllerProtocol <AWEViewControllerLifeCycle, AWEAppLifeCycle>

@optional

- (void)willExitLandscape;
- (void)scrollViewWillBeginDecelerating:(id)arg0;
- (void)setScrollEnabled:(BOOL)arg0;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)stop;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)play;
- (void)pause;
- (void)setupCollectionView:(id)arg0;

@end
