//
//     Generated by private class-dump
//

@interface AWECommentTreeContainerViewController : AWEBaseListViewController <AWECommentSectionControllerContainerProtocol, UIScrollViewDelegate, AWEListSectionControllerDelegate, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ commentVC;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ sheetViewController;
    void /* unknown type, empty encoding */ commentInputView;
    void /* unknown type, empty encoding */ referString;
    void /* unknown type, empty encoding */ commentCountTotal;
    void /* unknown type, empty encoding */ commentCount;
    void /* unknown type, empty encoding */ isForcedToShowInputView;
    void /* unknown type, empty encoding */ needDisplyHeader;
    void /* unknown type, empty encoding */ generalModel;
    void /* unknown type, empty encoding */ commentModel;
    void /* unknown type, empty encoding */ headerCommentViewModel;
    void /* unknown type, empty encoding */ containerSceneType;
    void /* unknown type, empty encoding */ headerViewType;
    void /* unknown type, empty encoding */ headerViewExternalHeight;
    void /* unknown type, empty encoding */ commentInputViewDefaultPlaceholder;
    void /* unknown type, empty encoding */ shieldInputViewVideoReplyButton;
    void /* unknown type, empty encoding */ isShowing;
    void /* unknown type, empty encoding */ isFirstRefresh;
    void /* unknown type, empty encoding */ horizontalPan;
    void /* unknown type, empty encoding */ collectionViewDidFinishLoad;
    void /* unknown type, empty encoding */ lastExpandingCommentSectionController;
    void /* unknown type, empty encoding */ parentCommentFeedPlay;
    void /* unknown type, empty encoding */ inputViewBottomAlign;
    void /* unknown type, empty encoding */ commentMediaFeedTrackManager;
    void /* unknown type, empty encoding */ needLoadMoreAfterScroll;
    void /* unknown type, empty encoding */ inputSnapshotImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_defaultCommentVC;
    void /* unknown type, empty encoding */ $__lazy_storage_$_countLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dismissButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerBarView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
}

+ (Class)viewModelClass;

- (void)customLayoutCollectionView:(id)arg0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)arg0 forSectionViewModel:(id)arg1;
- (void)sectionControllerWillEnterWorkingRange:(id)arg0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })arg0 originalTargetContentOffset:(struct CGPoint { double x0; double x1; })arg1;
- (void)listWillPerformBatchUpdatesWithCollectionView:(id)arg0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)arg0;
- (BOOL)disableContentOffsetRestorationAnchor;
- (id)commentSectionControllerContainer;
- (id)commentSectionControllerContainerView;
- (id)commentSectionControllerContainerSectionModelsArray;
- (void)commentSectionControllerUpdateByFinalModels:(id)arg0 actionModels:(id)arg1 actionType:(unsigned long long)arg2 animated:(BOOL)arg3 sync:(BOOL)arg4;
- (void)commentSectionControllerFooterTextDidUpdate:(id)arg0 noMoreData:(BOOL)arg1 hideFooter:(BOOL)arg2;
- (id)commentSectionControllerContainerActualScrollview;
- (void)horizontalPanGestureAction:(id)arg0;
- (void)deleteCommentNoticeWithNotice:(id)arg0;
- (void)addCommentNoticeWithNotice:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setupCollectionView:(id)arg0;
- (void)dismissTapped;

@end