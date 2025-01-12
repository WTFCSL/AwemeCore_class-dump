//
//     Generated by private class-dump
//

@interface AWECommentMediaFeedViewController : UIViewController <AWERouterViewControllerProtocol, AWECommentImagePreviewFadeOutTransitionContextProvider, AWEPhotosPreviewFadeOutTransitionContextProvider, AWETransitioningViewController, UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIGestureRecognizerDelegate, AWEContainerProtocol> {
    void /* unknown type, empty encoding */ commentMediaPreviewCellEndDisplay;
    void /* unknown type, empty encoding */ commentMediaPreviewCurrentIndexChanged;
    void /* unknown type, empty encoding */ commentMediaPreviewWillDisappear;
    void /* unknown type, empty encoding */ commentMediaPreviewWillBePoped;
    void /* unknown type, empty encoding */ commentMediaPreviewDidDisappear;
    void /* unknown type, empty encoding */ commentMediaPreviewDidSendComment;
    void /* unknown type, empty encoding */ commentMediaPreviewBeginLoadMore;
    void /* unknown type, empty encoding */ commentMediaPreviewFetchCellBusinessControler;
    void /* unknown type, empty encoding */ disableInput;
    void /* unknown type, empty encoding */ isAutoEnter;
    void /* unknown type, empty encoding */ serviceFakeComment;
    void /* unknown type, empty encoding */ serviceSectionMode;
    void /* unknown type, empty encoding */ containsImage;
    void /* unknown type, empty encoding */ containsVideo;
    void /* unknown type, empty encoding */ singleMode;
    void /* unknown type, empty encoding */ hasLoadMoreTask;
    void /* unknown type, empty encoding */ loadMoreTaskTimes;
    void /* unknown type, empty encoding */ loadMoreThreshold;
    void /* unknown type, empty encoding */ firstDidOccur;
    void /* unknown type, empty encoding */ isReloadOccur;
    void /* unknown type, empty encoding */ isDragScrolling;
    void /* unknown type, empty encoding */ currentIndex;
    void /* unknown type, empty encoding */ dataList;
    void /* unknown type, empty encoding */ scrollIndexSet;
    void /* unknown type, empty encoding */ didDisappearIndexSet;
    void /* unknown type, empty encoding */ willDisappearIndex;
    void /* unknown type, empty encoding */ previousContentOffset;
    void /* unknown type, empty encoding */ referString;
    void /* unknown type, empty encoding */ isDismissing;
    void /* unknown type, empty encoding */ willDisappear;
    void /* unknown type, empty encoding */ $__lazy_storage_$_componentManager;
    void /* unknown type, empty encoding */ isMediaFeedSupportInteraction;
    void /* unknown type, empty encoding */ currentIndexInMultiImageList;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_commentInputLineView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_publishButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_commentInputViewManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_longPressGestureRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pureModeViewController;
}

@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)fadeOutTransitionEndView;
- (unsigned long long)fadeOutTransitionAllowedTriggerDirection;
- (void)transition_didPopDoneTransitionWithContext:(id)arg0;
- (void)viewControllerWillBePopped;
- (BOOL)transition_gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)transition_didStartTransitionWithContext:(id)arg0;
- (void)popViewControllerCancelled;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)handleLongPressWithGes:(id)arg0;
- (void)previewDismissByNotiWithNotice:(id)arg0;
- (void)screenshotNotificationWithNotice:(id)arg0;
- (void)previewDismissByClickBackBtn;
- (void)previewDismiss;
- (void)publishComment;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)initWithCoder:(id)arg0;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
