//
//     Generated by private class-dump
//

@interface AWEKnowledgeRichContentImpl.FullPageTabListViewController : AWEBaseTabListViewController <UIGestureRecognizerDelegate, AWEPadFullPageTabListContainerProtocol> {
    void /* unknown type, empty encoding */ target;
    void /* unknown type, empty encoding */ tabListDelegate;
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ hasTrackedCommentSlide;
    void /* unknown type, empty encoding */ shouldShowLoadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bodyViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lineView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomBar;
    void /* unknown type, empty encoding */ loopPhotoPauseThreshold;
    void /* unknown type, empty encoding */ atEntireRecommendRegion;
    void /* unknown type, empty encoding */ atEntrieImageThirtyPCTRegion;
}

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })arg0 toBreakPoint:(struct { long long x0; long long x1; })arg1;
- (void)setupContainerScrollView:(id)arg0;
- (id)tabListHeaderViewController;
- (id)tabListItemViewControllerForModel:(id)arg0 index:(long long)arg1;
- (void)tabListContainerScrollViewDidScroll:(id)arg0;
- (void)tabListContainerScrollViewWillBeginDragging:(id)arg0;
- (void)tabListContainerDidEndScrolling:(id)arg0;
- (void)returnToListTop;
- (void)setupBottomBarAndInputViewLayout;
- (void)updateBottomBarViewLayout;
- (BOOL)supportRotationForTabList;
- (void)setupTabListWithConfig:(id)arg0;
- (double)topSafeAreaForTabList;
- (BOOL)tabListShouldPreloadTabItemAtIndex:(long long)arg0;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)updateCollectionView;

@end