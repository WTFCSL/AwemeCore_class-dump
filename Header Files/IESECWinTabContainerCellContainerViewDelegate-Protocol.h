//
//     Generated by private class-dump
//

@protocol IESECWinTabContainerCellContainerViewDelegate <NSObject>

- (id)tabbarView;
- (id)tabContainer:(id)arg0 tabViewElementForIndex:(long long)arg1;
- (long long)numberOfTabViewElementsInTabContainer:(id)arg0;
- (void)tabContainer:(id)arg0 willMoveToIndex:(long long)arg1 withTabElement:(id)arg2;
- (void)tabContainer:(id)arg0 cancelMoveToIndex:(long long)arg1 withTabElement:(id)arg2;
- (void)tabContainer:(id)arg0 didMoveToIndex:(long long)arg1 withTabElement:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;

@end
