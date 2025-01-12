//
//     Generated by private class-dump
//

@protocol IGListUpdatingDelegate <NSObject>

- (void)reloadCollectionView:(id)arg0 sections:(id)arg1;
- (id)objectLookupPointerFunctions;
- (void)performUpdateWithCollectionView:(id)arg0 fromObjects:(id)arg1 toObjectsBlock:(id /* block */)arg2 animated:(BOOL)arg3 objectTransitionBlock:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)reloadDataWithCollectionView:(id)arg0 reloadUpdateBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performUpdateWithCollectionView:(id)arg0 animated:(BOOL)arg1 itemUpdates:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)reloadItemInCollectionView:(id)arg0 fromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)insertItemsIntoCollectionView:(id)arg0 indexPaths:(id)arg1;
- (void)deleteItemsFromCollectionView:(id)arg0 indexPaths:(id)arg1;
- (void)moveItemInCollectionView:(id)arg0 fromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)moveSectionInCollectionView:(id)arg0 fromIndex:(long long)arg1 toIndex:(long long)arg2;

@end
