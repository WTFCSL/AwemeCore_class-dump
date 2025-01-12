//
//     Generated by private class-dump
//

@class _TtC27AWEKnowledgeRichContentImpl21FullPageListViewModel, UIView;

@interface AWEKnowledgeRichContentImpl.FullPageListViewController : AWEBaseListViewController <AWESpeCategoryKitAdapter.FeedListBaseSectionControllerDelegate, AWEListSectionControllerDelegate, UIScrollViewDelegate, AWETabListItemViewControllerProtocol, AWECommentSectionControllerContainerProtocol, AFDFullPageFlowWaterFallViewLayoutDelegate, AWEPadFullPageListContainerProtocol, AWECommentControlVideoStateProtocol> {
    void /* unknown type, empty encoding */ listDelegate;
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ isInputViewShowing;
    void /* unknown type, empty encoding */ commentInputView;
    void /* unknown type, empty encoding */ hideInputViewBlock;
    void /* unknown type, empty encoding */ needLoadMoreAfterScroll;
    void /* unknown type, empty encoding */ isLongPressPanelShowing;
    void /* unknown type, empty encoding */ commentDidPerformPatchUpdate;
    void /* unknown type, empty encoding */ commentDidPerformPatchUpdateOffset;
    void /* unknown type, empty encoding */ tabContainerLastContentOffsetY;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_commentVC;
}

@property (nonatomic, retain) UIView *listView;
@property (nonatomic, readonly) _TtC27AWEKnowledgeRichContentImpl21FullPageListViewModel *viewModel;

- (id)tabContentScrollView;
- (id)segmentedControlItemConfigForTabList:(id)arg0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (long long)workingRangeSize;
- (void)dataSourceDidCreateSectionController:(id)arg0 forSectionViewModel:(id)arg1;
- (void)listDidReloadDataWithCollectionView:(id)arg0;
- (void)sectionControllerWillEnterWorkingRange:(id)arg0;
- (BOOL)pauseVideoIfPlaying;
- (BOOL)recoverPlayIfPauseByComment;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })arg0 originalTargetContentOffset:(struct CGPoint { double x0; double x1; })arg1;
- (void)awe_themeReload;
- (id)commentSectionControllerContainer;
- (id)commentSectionControllerContainerView;
- (id)commentSectionControllerContainerSectionModelsArray;
- (void)commentSectionControllerUpdateByFinalModels:(id)arg0 actionModels:(id)arg1 actionType:(unsigned long long)arg2 animated:(BOOL)arg3 sync:(BOOL)arg4;
- (void)commentSectionControllerFooterTextDidUpdate:(id)arg0 noMoreData:(BOOL)arg1 hideFooter:(BOOL)arg2;
- (id)commentSectionControllerContainerActualScrollview;
- (void)sectionControllerWillEnterDetail:(id)arg0;
- (BOOL)canShowLongPressPanel;
- (BOOL)markShowLongPressPanel;
- (void)longPressPanelDidDismiss;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerViewControllerPosition;
- (struct CGPoint { double x0; double x1; })containerScrollViewContentOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellPosition:(id)arg0;
- (id)getNestedLevel;
- (BOOL)isNestedChainContainRecommendList;
- (double)calculateListMargin;
- (long long)collectionView:(id)arg0 layout:(id)arg1 columnCountForSection:(long long)arg2;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumColumnSpacingForSectionAtIndex:(long long)arg2;
- (double)collectionView:(id)arg0 layout:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)collectionView:(id)arg0 layout:(id)arg1 backgroundColorAtSectionIndex:(long long)arg2;
- (id)layoutAttributesForSupplementaryViewWithAttributes:(id)arg0;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (void)setListView:(id)arg0;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (id)listView;
- (void)viewDidAppear:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)viewDidLoad;
- (void)setupCollectionView:(id)arg0;

@end
