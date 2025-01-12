//
//     Generated by private class-dump
//

@class NSIndexPath;

@interface __RxCollectionViewUpdateItem : UICollectionViewUpdateItem {
    long long _updateAction;
    NSIndexPath *_initialIndexPath;
    NSIndexPath *_finalIndexPath;
}

@property (readonly, nonatomic) NSIndexPath *initialIndexPath;
@property (readonly, nonatomic) NSIndexPath *finalIndexPath;
@property (readonly, nonatomic) long long updateAction;

- (id)initWithOldIndexPath:(id)arg0 newIndexPath:(id)arg1;
- (id)initWithAction:(long long)arg0 forIndexPath:(id)arg1;
- (id)finalIndexPath;
- (id)initWithInitialIndexPath:(id)arg0 finalIndexPath:(id)arg1 updateAction:(long long)arg2;
- (id)indexPathBeforeUpdate;
- (id)indexPathAfterUpdate;
- (void).cxx_destruct;
- (BOOL)isSectionOperation;
- (long long)inverseCompareIndexPaths:(id)arg0;
- (id)debugDescription;
- (id)initialIndexPath;
- (long long)updateAction;
- (id)_indexPath;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (long long)compareIndexPaths:(id)arg0;
- (BOOL)_isSectionOperation;

@end
