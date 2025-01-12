//
//     Generated by private class-dump
//

@class AWETabContentViewController, NSString, UICollectionView, UIView;
@protocol AWEListKitSegmentedControlProtocol, AWETabContainerSectionControllerDelegate, AWETabContainerSectionControllerDataSource;

@interface AWETabContainerSectionController : AWEBaseListSectionController <AWETabContentViewControllerDelegate, AWESegmentedControlContextProtocol> {
    BOOL _hideSegmentedControl;
    id<AWETabContainerSectionControllerDataSource> _dataSource;
    id<AWETabContainerSectionControllerDelegate> _delegate;
    long long _selectedIndex;
    long long _itemCount;
    UIView<AWEListKitSegmentedControlProtocol> *_segmentedControl;
    AWETabContentViewController *_tabContentViewController;
}

@property (retain, nonatomic) UIView<AWEListKitSegmentedControlProtocol> *segmentedControl;
@property (retain, nonatomic) AWETabContentViewController *tabContentViewController;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long itemCount;
@property (nonatomic) BOOL hideSegmentedControl;
@property (weak, nonatomic) id<AWETabContainerSectionControllerDataSource> dataSource;
@property (weak, nonatomic) id<AWETabContainerSectionControllerDelegate> delegate;
@property (readonly, nonatomic) UICollectionView *contentScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (void)viewControllerDidAppear:(BOOL)arg0;
- (void)viewControllerWillDisappear:(BOOL)arg0 isBeingDismissed:(BOOL)arg1 isMovingFromParentViewController:(BOOL)arg2;
- (void)viewControllerDidDisappear:(BOOL)arg0;
- (void)configSupplementaryHeaderView:(id)arg0;
- (BOOL)lazyAccessItemViewControllerForTabContent;
- (void)viewControllerWillAppear:(BOOL)arg0 isBeingPresented:(BOOL)arg1 isMovingToParentViewController:(BOOL)arg2;
- (void)segmentedControlDidChangedValue:(long long)arg0;
- (void)segmentedControlDidTapAtIndex:(long long)arg0;
- (BOOL)enableSegmentedControl;
- (void)updateAndNotifySelectedIndex:(long long)arg0 isByTap:(BOOL)arg1;
- (id)tabContentViewController;
- (void)scrollToItemWithAnimated:(BOOL)arg0;
- (id)itemViewControllerAtIndex:(long long)arg0;
- (void)setHideSegmentedControl:(BOOL)arg0;
- (void)setTabContentViewController:(id)arg0;
- (BOOL)lazyAccessItemViewController;
- (BOOL)hideSegmentedControl;
- (void)tabContentViewController:(id)arg0 didCreateCollectionView:(id)arg1;
- (id)itemViewControllerForTabContentViewController:(id)arg0 atIndex:(long long)arg1;
- (void)tabContentViewController:(id)arg0 contentDidScroll:(id)arg1;
- (void)tabContentViewController:(id)arg0 didScrollToIndex:(long long)arg1;
- (BOOL)tabContentViewControllerShouldDisableAccessibilityAutoScroll:(id)arg0;
- (void)updateSegmentedControlVisible:(BOOL)arg0 animated:(BOOL)arg1;
- (long long)itemCount;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (void)setSelectedIndex:(long long)arg0;
- (Class)cellClass;
- (id)delegate;
- (id)contentScrollView;
- (void)setDelegate:(id)arg0;
- (long long)selectedIndex;
- (id)selectedViewController;
- (void)setItemCount:(long long)arg0;
- (id)segmentedControl;
- (void)setSegmentedControl:(id)arg0;
- (void)scrollToItemAtIndex:(long long)arg0 animated:(BOOL)arg1;
- (double)segmentedControlHeight;
- (Class)headerViewClass;

@end
