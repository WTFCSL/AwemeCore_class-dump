//
//     Generated by private class-dump
//

@protocol IGListAdapterUpdaterDelegate <NSObject>

- (void)listAdapterUpdater:(id)arg0 willPerformBatchUpdatesWithCollectionView:(id)arg1;
- (void)listAdapterUpdater:(id)arg0 didPerformBatchUpdates:(id)arg1 collectionView:(id)arg2;
- (void)listAdapterUpdater:(id)arg0 willInsertIndexPaths:(id)arg1 collectionView:(id)arg2;
- (void)listAdapterUpdater:(id)arg0 willDeleteIndexPaths:(id)arg1 collectionView:(id)arg2;
- (void)listAdapterUpdater:(id)arg0 willMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2 collectionView:(id)arg3;
- (void)listAdapterUpdater:(id)arg0 willReloadIndexPaths:(id)arg1 collectionView:(id)arg2;
- (void)listAdapterUpdater:(id)arg0 willReloadSections:(id)arg1 collectionView:(id)arg2;
- (void)listAdapterUpdater:(id)arg0 willReloadDataWithCollectionView:(id)arg1;
- (void)listAdapterUpdater:(id)arg0 didReloadDataWithCollectionView:(id)arg1;
- (void)listAdapterUpdater:(id)arg0 collectionView:(id)arg1 willCrashWithException:(id)arg2 fromObjects:(id)arg3 toObjects:(id)arg4 updates:(id)arg5;

@end