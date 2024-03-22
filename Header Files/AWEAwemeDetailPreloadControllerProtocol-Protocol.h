//
//     Generated by private class-dump
//

@class UITableViewCell, AWEListDataController, UITableView;
@protocol AWEAwemeContainerTableViewCellPreloadProtocol;

@protocol AWEAwemeDetailPreloadControllerProtocol <NSObject>

@property (nonatomic) BOOL closeCellPreload;
@property (readonly, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (readonly, nonatomic) UITableViewCell<AWEAwemeContainerTableViewCellPreloadProtocol> *feedPreloadedCell;
@property (nonatomic) long long preCurrentIndex;

- (void)setDataController:(id)arg0;
- (void)configureCell:(id)arg0 withModel:(id)arg1 atIndexPath:(id)arg2;
- (id)safelyModelForRow:(long long)arg0;
- (id)cellReuseIdentifierForRowWithModel:(id)arg0;
- (BOOL)closeCellPreload;
- (void)preloadCellControllerDidCancelCellPreload;
- (void)preloadNextCellIfNeededAtIndexPath:(id)arg0;
- (long long)preCurrentIndex;
- (id)feedPreloadedCell;
- (void)setPreCurrentIndex:(long long)arg0;
- (void)setCloseCellPreload:(BOOL)arg0;
- (id)tableView;
- (id)dataController;

@end