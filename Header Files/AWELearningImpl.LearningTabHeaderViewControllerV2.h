//
//     Generated by private class-dump
//

@interface AWELearningImpl.LearningTabHeaderViewControllerV2 : AWEBaseListViewController <UIScrollViewDelegate, AWETabListHeaderViewControllerProtocol, AWEHangoutListSectionContext> {
    void /* unknown type, empty encoding */ needRecalculateControllerStateBlock;
    void /* unknown type, empty encoding */ listDidReloadDataBlock;
    void /* unknown type, empty encoding */ listDidPerformBatchUpdatesBlock;
    void /* unknown type, empty encoding */ listContext;
    void /* unknown type, empty encoding */ viewShow;
    void /* unknown type, empty encoding */ $__lazy_storage_$_carouselIndicator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_muteControlButton;
}

- (id)provider:(Class)arg0;
- (void)configWithHeaderModel:(id)arg0;
- (void)customLayoutCollectionView:(id)arg0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (long long)workingRangeSize;
- (void)dataSourceDidCreateSectionController:(id)arg0 forSectionViewModel:(id)arg1;
- (void)listDidReloadDataWithCollectionView:(id)arg0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })arg0 originalTargetContentOffset:(struct CGPoint { double x0; double x1; })arg1;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)arg0;
- (void)handleClickWithMute:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)viewDidLoad;
- (void)setupCollectionView:(id)arg0;
- (double)heightForHeaderView;

@end
