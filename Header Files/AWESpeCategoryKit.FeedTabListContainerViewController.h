//
//     Generated by private class-dump
//

@interface AWESpeCategoryKit.FeedTabListContainerViewController : AWEBaseTabListViewController <AWESpeCategoryKit.FeedListContainerLoadingApdapterProtocol, AWESpeCategoryKit.FeedTabListContainerUIApdapterProtocol, NSObject> {
    void /* unknown type, empty encoding */ tabListDelegate;
    void /* unknown type, empty encoding */ headerVC;
    void /* unknown type, empty encoding */ firstTabVC;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ tabListItemDataStateBind;
}

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (id)tabListHeaderViewController;
- (id)tabListItemViewControllerForModel:(id)arg0 index:(long long)arg1;
- (id)segmentedControlForTabList;
- (double)heightForSegmentedControl;
- (void)updateSegmentedControl:(id)arg0 itemModelsArray:(id)arg1 itemConfigsArray:(id)arg2;
- (void)tabListContainerDidSelectItemAtIndex:(long long)arg0 itemViewController:(id)arg1 isByTap:(BOOL)arg2;
- (void)tabListContainerScrollViewDidScroll:(id)arg0;
- (void)tabListContainerScrollViewWillBeginDragging:(id)arg0;
- (void)tabListContainerScrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (BOOL)tabContentUseMaxHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerViewControllerPosition;
- (void)setupTabListWithConfig:(id)arg0;
- (BOOL)tabListAddTabItemAsChildViewController;
- (id)createLoadingViewWithSuperView:(id)arg0;
- (void)showLoadingViewWithLoadingView:(id)arg0;
- (void)hideLoadingViewWithLoadingView:(id)arg0;
- (void)updateTabViewControllerStateWithState:(long long)arg0;
- (BOOL)tabItemScrollViewKeepContentOffset;
- (void)tabListContainerScrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)arg2;
- (BOOL)tabListShouldLazyAccessTabItemViewController;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)initWithCoder:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;

@end