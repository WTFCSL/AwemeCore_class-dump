//
//     Generated by private class-dump
//

@protocol UICollectionViewDataSource <NSObject>

- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;

@optional

- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)indexTitlesForCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg0 canMoveItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 indexPathForIndexTitle:(id)arg1 atIndex:(long long)arg2;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;

@end