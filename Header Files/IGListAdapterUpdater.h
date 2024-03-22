//
//     Generated by private class-dump
//

@class IGListBatchUpdateData, NSArray, NSString, NSMutableArray, IGListBatchUpdates;
@protocol IGListAdapterUpdaterDelegate;

@interface IGListAdapterUpdater : NSObject <IGListUpdatingDelegate> {
    BOOL _movesAsDeletesInserts;
    BOOL _allowsBackgroundReloading;
    BOOL _queuedUpdateIsAnimated;
    BOOL _queuedReloadData;
    id<IGListAdapterUpdaterDelegate> _delegate;
    double _coalescanceTime;
    long long _experiments;
    NSArray *_fromObjects;
    id /* block */ _toObjectsBlock;
    NSArray *_pendingTransitionToObjects;
    NSMutableArray *_completionBlocks;
    IGListBatchUpdates *_batchUpdates;
    id /* block */ _objectTransitionBlock;
    id /* block */ _reloadUpdates;
    long long _state;
    IGListBatchUpdateData *_applyingUpdateData;
}

@property (nonatomic) BOOL awelistkit_syncUpdate;
@property (copy, nonatomic) id /* block */ getDataSource;
@property (copy, nonatomic) NSArray *fromObjects;
@property (copy, nonatomic) id /* block */ toObjectsBlock;
@property (copy, nonatomic) NSArray *pendingTransitionToObjects;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (nonatomic) BOOL queuedUpdateIsAnimated;
@property (retain, nonatomic) IGListBatchUpdates *batchUpdates;
@property (copy, nonatomic) id /* block */ objectTransitionBlock;
@property (copy, nonatomic) id /* block */ reloadUpdates;
@property (nonatomic, getter=hasQueuedReloadData) BOOL queuedReloadData;
@property (nonatomic) long long state;
@property (retain, nonatomic) IGListBatchUpdateData *applyingUpdateData;
@property (weak, nonatomic) id<IGListAdapterUpdaterDelegate> delegate;
@property (nonatomic) BOOL movesAsDeletesInserts;
@property (nonatomic) BOOL allowsBackgroundReloading;
@property (nonatomic) double coalescanceTime;
@property (nonatomic) long long experiments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)debugDescriptionLines;
- (void)setAwelistkit_syncUpdate:(BOOL)arg0;
- (void)awelistkit_performReloadDataWithCollectionView:(id)arg0;
- (void)awelistkit_performBatchUpdatesWithCollectionView:(id)arg0;
- (void)awelistkit_queueUpdateWithCollectionView:(id)arg0;
- (id /* block */)getDataSource;
- (void)cleanStateBeforeUpdates;
- (void)_cleanStateAfterUpdates;
- (void)setApplyingUpdateData:(id)arg0;
- (BOOL)awelistkit_syncUpdate;
- (BOOL)hasQueuedReloadData;
- (void)performReloadDataWithCollectionView:(id)arg0;
- (void)performBatchUpdatesWithCollectionView:(id)arg0;
- (void)setAllowsBackgroundReloading:(BOOL)arg0;
- (void)setGetDataSource:(id /* block */)arg0;
- (void)reloadCollectionView:(id)arg0 sections:(id)arg1;
- (void)setQueuedReloadData:(BOOL)arg0;
- (id)objectLookupPointerFunctions;
- (void)performUpdateWithCollectionView:(id)arg0 fromObjects:(id)arg1 toObjectsBlock:(id /* block */)arg2 animated:(BOOL)arg3 objectTransitionBlock:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)reloadDataWithCollectionView:(id)arg0 reloadUpdateBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performUpdateWithCollectionView:(id)arg0 animated:(BOOL)arg1 itemUpdates:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)reloadItemInCollectionView:(id)arg0 fromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)insertItemsIntoCollectionView:(id)arg0 indexPaths:(id)arg1;
- (void)deleteItemsFromCollectionView:(id)arg0 indexPaths:(id)arg1;
- (void)moveItemInCollectionView:(id)arg0 fromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)moveSectionInCollectionView:(id)arg0 fromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)batchUpdates;
- (id)fromObjects;
- (id /* block */)toObjectsBlock;
- (id /* block */)reloadUpdates;
- (id /* block */)objectTransitionBlock;
- (BOOL)queuedUpdateIsAnimated;
- (void)_performBatchUpdatesItemBlockApplied;
- (BOOL)allowsBackgroundReloading;
- (void)_beginPerformBatchUpdatesToObjects:(id)arg0;
- (id)_flushCollectionView:(id)arg0 withDiffResult:(id)arg1 batchUpdates:(id)arg2 fromObjects:(id)arg3;
- (id)applyingUpdateData;
- (void)_queueUpdateWithCollectionView:(id)arg0;
- (BOOL)movesAsDeletesInserts;
- (void)setPendingTransitionToObjects:(id)arg0;
- (void)setQueuedUpdateIsAnimated:(BOOL)arg0;
- (void)setFromObjects:(id)arg0;
- (void)setToObjectsBlock:(id /* block */)arg0;
- (void)setReloadUpdates:(id /* block */)arg0;
- (void)setObjectTransitionBlock:(id /* block */)arg0;
- (void)setBatchUpdates:(id)arg0;
- (double)coalescanceTime;
- (id)pendingTransitionToObjects;
- (void)setMovesAsDeletesInserts:(BOOL)arg0;
- (void)setCoalescanceTime:(double)arg0;
- (BOOL)hasChanges;
- (id)init;
- (void).cxx_destruct;
- (long long)state;
- (void)setCompletionBlocks:(id)arg0;
- (void)setState:(long long)arg0;
- (long long)experiments;
- (id)completionBlocks;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setExperiments:(long long)arg0;

@end
