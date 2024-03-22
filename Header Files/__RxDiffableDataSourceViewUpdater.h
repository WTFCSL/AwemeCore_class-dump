//
//     Generated by private class-dump
//

@class NSString, UICollectionView, __RxDataSourceSnapshotter, UIView, UITableView;
@protocol __RxCollectionViewUpdateItemApplying;

@interface __RxDiffableDataSourceViewUpdater : NSObject <__RxCollectionViewUpdateItemApplying> {
    long long _tableViewRowAnimation;
    long long _sinkKind;
    id<__RxCollectionViewUpdateItemApplying> _updatesSink;
    UICollectionView *_collectionView;
    __RxDataSourceSnapshotter *_dataSourceSnapshotter;
    UITableView *_tableView;
}

@property (nonatomic) long long tableViewRowAnimation;
@property (readonly, nonatomic) long long sinkKind;
@property (readonly, weak, nonatomic) id<__RxCollectionViewUpdateItemApplying> updatesSink;
@property (readonly, weak, nonatomic) UICollectionView *collectionView;
@property (readonly, weak, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) __RxDataSourceSnapshotter *dataSourceSnapshotter;
@property (readonly, nonatomic) UIView *targetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performUpdateWithCollectionViewUpdateItems:(id)arg0 dataSourceSnapshotter:(id)arg1 animated:(BOOL)arg2 updateHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_performCollectionViewInsertUpdate:(id)arg0;
- (void)_performTableViewInsertUpdate:(id)arg0;
- (void)_performCollectionViewDeleteUpdate:(id)arg0;
- (void)_performTableViewDeleteUpdate:(id)arg0;
- (void)_performCollectionViewReloadUpdate:(id)arg0;
- (void)_performTableViewReloadUpdate:(id)arg0;
- (void)_performCollectionViewMoveUpdate:(id)arg0;
- (void)_performTableViewMoveUpdate:(id)arg0;
- (id)dataSourceSnapshotter;
- (id)initWithCollectionView:(id)arg0;
- (void)_deleteAllItems;
- (id)initWithCollectionViewUpdatesSink:(id)arg0;
- (id)initWithTableView:(id)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (id)tableView;
- (id)targetView;
- (long long)tableViewRowAnimation;
- (void)_willPerformDiff:(BOOL)arg0;
- (void)_reloadData;
- (long long)sinkKind;
- (void)setTableViewRowAnimation:(long long)arg0;
- (id)description;
- (id)updatesSink;
- (id)initWithUpdatesSink:(id)arg0 collectionView:(id)arg1 tableView:(id)arg2;
- (void)_performViewUpdates:(id)arg0;

@end