//
//     Generated by private class-dump
//

@protocol AWETabListInnerViewHolderDelegate <NSObject>

- (double)topSafeArea;
- (id)segmentedControlForTabList;
- (struct AWEListKitSegmentedControlMargins { double x0; double x1; })marginsForSegmentedControl;
- (id)tabItemContentViewAtIndex:(long long)arg0;
- (id)tabItemScrollViewAtIndex:(long long)arg0;
- (double)bottomSafeArea;
- (double)heightForTabListSegmentedControl;
- (void)viewHolder:(id)arg0 setupContainerScrollView:(id)arg1;
- (void)viewHolder:(id)arg0 segmentedControl:(id)arg1 didTapAtIndex:(long long)arg2;
- (void)viewHolder:(id)arg0 didUpdateTabSelectedIndex:(unsigned long long)arg1 isByTap:(BOOL)arg2;
- (void)viewHolder:(id)arg0 containerScrollViewDidScroll:(id)arg1;
- (void)viewHolder:(id)arg0 containerScrollViewWillBeginDragging:(id)arg1;
- (void)viewHolder:(id)arg0 containerScrollViewDidEndScrolling:(id)arg1;
- (void)viewHolder:(id)arg0 containerScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x0; double x1; })arg2 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg3;
- (void)viewHolder:(id)arg0 containerScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (BOOL)viewHolder:(id)arg0 containerScrollViewShouldScrollToTop:(id)arg1;
- (void)viewHolder:(id)arg0 containerScrollViewDidScrollToTop:(id)arg1;
- (void)viewHolder:(id)arg0 tabContainerDidScroll:(id)arg1;
- (BOOL)viewHolder:(id)arg0 enableTabItemScrollViewBounceAtIndex:(long long)arg1;
- (BOOL)enableSegmentedControl;
- (void)viewHolder:(id)arg0 notifyHeaderAppearance:(BOOL)arg1;
- (BOOL)viewHolder:(id)arg0 shouldPreloadTabItemAtIndex:(long long)arg1;

@end
