//
//     Generated by private class-dump
//

@class UITableView, POIMediaListExtensionManager;

@protocol POIMediaListViewControllerProtocol <NSObject>

@property (readonly, nonatomic) POIMediaListExtensionManager *extensionManager;
@property (readonly, nonatomic) UITableView *tableView;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (id)safelyGetCurrentMediaModel;
- (id)getVisibleTopmostMediaModel;
- (void)reloadInitialDataWithCompletion:(id /* block */)arg0;
- (id)viewForContainer;
- (void)reloadFooterContainerWithCompletion:(id /* block */)arg0;
- (void)reloadHeaderContainerWithCompletion:(id /* block */)arg0;
- (id)safelyGetCurrentCell;
- (id)getVisibleTopmostCell;
- (id)safelyGetItemAtIndex:(long long)arg0;
- (id)safelyGetCurrentInteractorContainer;
- (id)getVisibleTopmostInteractorContainer;
- (id)getHeaderContainer;
- (id)getFooterContainer;
- (void)dismiss;
- (id)tableView;
- (BOOL)hasMore;
- (id)extensionManager;
- (long long)indexOfItem:(id)arg0;
- (void)scrollToItem:(id)arg0 animated:(BOOL)arg1;
- (void)scrollToIndex:(long long)arg0 animated:(BOOL)arg1;
- (void)reloadDataWithCompletion:(id /* block */)arg0;

@end