//
//     Generated by private class-dump
//

@protocol AWEBaseTabListViewControllerSubclass <NSObject>

- (id)tabListHeaderViewController;
- (id)tabListItemViewControllerForModel:(id)arg0 index:(long long)arg1;

@optional

- (void)setupContainerScrollView:(id)arg0;
- (id)segmentedControlForTabList;
- (double)heightForSegmentedControl;
- (struct AWEListKitSegmentedControlMargins { double x0; double x1; })marginsForSegmentedControl;
- (void)updateSegmentedControl:(id)arg0 itemModelsArray:(id)arg1 itemConfigsArray:(id)arg2;
- (void)tabListContainerDidSelectItemAtIndex:(long long)arg0 itemViewController:(id)arg1 isByTap:(BOOL)arg2;
- (void)tabListContainerScrollViewDidScroll:(id)arg0;
- (void)tabListContainerScrollViewWillBeginDragging:(id)arg0;
- (void)tabListContainerScrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)tabListContainerDidEndScrolling:(id)arg0;
- (void)tabListDidTapItemAtIndex:(long long)arg0;
- (BOOL)tabContentUseMaxHeight;
- (BOOL)supportRotationForTabList;
- (void)setupTabListWithConfig:(id)arg0;
- (double)topSafeAreaForTabList;
- (BOOL)tabListShouldPreloadTabItemAtIndex:(long long)arg0;
- (double)bottomSafeAreaForTabList;
- (BOOL)tabListAddTabItemAsChildViewController;
- (BOOL)tabItemScrollViewKeepContentOffset;
- (void)tabListContainerScrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (BOOL)tabListShouldLazyAccessTabItemViewController;
- (BOOL)tabListContainerScrollViewShouldScrollToTop:(id)arg0;
- (void)tabListContainerScrollViewDidScrollToTop:(id)arg0;
- (void)tabListTabContainerDidScroll:(struct CGPoint { double x0; double x1; })arg0;

@end
