//
//     Generated by private class-dump
//

@class NSMapTable, UICollectionView, AWEPadListCellDisplayTracker, UIViewController, NSMutableArray, UIView, IGListAdapterProxy, NSString, IGListWorkingRangeHandler, NSHashTable, NSMutableSet, IGListDisplayHandler, IGListSectionMap;
@protocol IGListAdapterDataSource, UICollectionViewDelegate, IGListUpdatingDelegate, IGListAdapterDelegate, IGListAdapterMoveDelegate, UIScrollViewDelegate;

@interface IGListAdapter : NSObject <IGListAdapterDequeueSupplementaryViewProtocol, UICollectionViewDataSource, IGListCollectionViewDelegateLayout, IGListCollectionContext, IGListBatchContext> {
    UICollectionView *_collectionView;
    BOOL _isDequeuingCell;
    BOOL _isSendingWorkingRangeDisplayUpdates;
    NSMapTable *_viewSectionControllerMap;
    NSMutableArray *_queuedCompletionBlocks;
    NSHashTable *_updateListeners;
    BOOL _isLastInteractiveMoveToLastSectionIndex;
    BOOL _isInUpdateBlock;
    UIViewController *_viewController;
    id<IGListAdapterDataSource> _dataSource;
    id<IGListAdapterDelegate> _delegate;
    id<UICollectionViewDelegate> _collectionViewDelegate;
    id<UIScrollViewDelegate> _scrollViewDelegate;
    id<IGListAdapterMoveDelegate> _moveDelegate;
    id<IGListUpdatingDelegate> _updater;
    long long _experiments;
    IGListSectionMap *_sectionMap;
    IGListDisplayHandler *_displayHandler;
    IGListWorkingRangeHandler *_workingRangeHandler;
    IGListAdapterProxy *_delegateProxy;
    UIView *_emptyBackgroundView;
    IGListSectionMap *_previousSectionMap;
    NSMutableSet *_registeredCellClasses;
    NSMutableSet *_registeredNibNames;
    NSMutableSet *_registeredSupplementaryViewIdentifiers;
    NSMutableSet *_registeredSupplementaryViewNibNames;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AWEPadListCellDisplayTracker *cellDisplayTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IGListUpdatingDelegate> updater;
@property (readonly, nonatomic) IGListSectionMap *sectionMap;
@property (readonly, nonatomic) IGListDisplayHandler *displayHandler;
@property (readonly, nonatomic) IGListWorkingRangeHandler *workingRangeHandler;
@property (retain, nonatomic) IGListAdapterProxy *delegateProxy;
@property (retain, nonatomic) UIView *emptyBackgroundView;
@property (nonatomic) BOOL isLastInteractiveMoveToLastSectionIndex;
@property (nonatomic) BOOL isInUpdateBlock;
@property (retain, nonatomic) IGListSectionMap *previousSectionMap;
@property (retain, nonatomic) NSMutableSet *registeredCellClasses;
@property (retain, nonatomic) NSMutableSet *registeredNibNames;
@property (retain, nonatomic) NSMutableSet *registeredSupplementaryViewIdentifiers;
@property (retain, nonatomic) NSMutableSet *registeredSupplementaryViewNibNames;
@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<IGListAdapterDataSource> dataSource;
@property (weak, nonatomic) id<IGListAdapterDelegate> delegate;
@property (weak, nonatomic) id<UICollectionViewDelegate> collectionViewDelegate;
@property (weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (weak, nonatomic) id<IGListAdapterMoveDelegate> moveDelegate;
@property (nonatomic) long long experiments;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } containerSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } containerInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } adjustedContainerInset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } insetContainerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)debugDescriptionLines;
- (id)visibleSectionControllers;
- (long long)sectionForSectionController:(id)arg0;
- (id)sectionControllerForObject:(id)arg0;
- (id)dequeueReusableCellOfClass:(Class)arg0 withReuseIdentifier:(id)arg1 forSectionController:(id)arg2 atIndex:(long long)arg3;
- (id)awelistkit_dequeueReusableSupplementaryViewOfKind:(id)arg0 forSectionController:(id)arg1 viewClass:(Class)arg2 customIdentifier:(id)arg3 atIndex:(long long)arg4;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg0 forSectionController:(id)arg1 class:(Class)arg2 atIndex:(long long)arg3;
- (void)invalidateLayoutForSectionController:(id)arg0 completion:(id /* block */)arg1;
- (void)scrollToSectionController:(id)arg0 atIndex:(long long)arg1 scrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)reloadSectionController:(id)arg0;
- (id)cellForItemAtIndex:(long long)arg0 sectionController:(id)arg1;
- (void)deleteInSectionController:(id)arg0 atIndexes:(id)arg1;
- (void)insertInSectionController:(id)arg0 atIndexes:(id)arg1;
- (void)moveInSectionController:(id)arg0 fromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)performBatchAnimated:(BOOL)arg0 updates:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)visibleCellsForSectionController:(id)arg0;
- (id)visibleIndexPathsForSectionController:(id)arg0;
- (id)collectionView:(id)arg0 layout:(id)arg1 customizedInitialLayoutAttributes:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg0 layout:(id)arg1 customizedFinalLayoutAttributes:(id)arg2 atIndexPath:(id)arg3;
- (void)awelistkit_enterBatchUpdates;
- (void)awelistkit_createProxyAndUpdateCollectionViewDelegate;
- (void)awelistkit_performUpdatesAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)awelistkit_invalidateLayoutForSectionController:(id)arg0 completion:(id /* block */)arg1;
- (id)awelistkit_dequeueReusableCellOfClass:(Class)arg0 withReuseIdentifier:(id)arg1 forSectionController:(id)arg2 atIndex:(long long)arg3;
- (id)collectionViewDelegate;
- (void)_updateCollectionViewDelegate;
- (id)indexPathForSectionController:(id)arg0 index:(long long)arg1 usePreviousIfInUpdateBlock:(BOOL)arg2;
- (void)awelistkit__invalidateLayoutForSectionController:(id)arg0 completion:(id /* block */)arg1;
- (void)_deferBlockBetweenBatchUpdates:(id /* block */)arg0;
- (id)initWithUpdater:(id)arg0 viewController:(id)arg1 workingRangeSize:(long long)arg2;
- (void)setCollectionViewDelegate:(id)arg0;
- (void)markSyncUpdate;
- (void)reloadObjects:(id)arg0;
- (void)performUpdatesAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)objectForSectionController:(id)arg0;
- (void)scrollToObject:(id)arg0 supplementaryKinds:(id)arg1 scrollDirection:(long long)arg2 scrollPosition:(unsigned long long)arg3 animated:(BOOL)arg4;
- (id)visibleObjects;
- (id)dequeueReusableCellOfClass:(Class)arg0 forSectionController:(id)arg1 atIndex:(long long)arg2;
- (long long)sectionForObject:(id)arg0;
- (id)initWithUpdater:(id)arg0 viewController:(id)arg1;
- (id)cellDisplayTracker;
- (void)setPadTrackerEnable:(BOOL)arg0;
- (void)addUpdateListener:(id)arg0;
- (void)removeUpdateListener:(id)arg0;
- (BOOL)padTrackerEnable;
- (void)hookForTracker;
- (void)awe_padTracker_reloadDataWithCompletion:(id /* block */)arg0;
- (void)awe_padTracker_performUpdatesAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)awe_padTracker_performBatchAnimated:(BOOL)arg0 updates:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)visibleCellsForObject:(id)arg0;
- (void)setRegisteredCellClasses:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })containerInset;
- (long long)indexForCell:(id)arg0 sectionController:(id)arg1;
- (id)sectionMap;
- (void)mapView:(id)arg0 toSectionController:(id)arg1;
- (void)moveInSectionControllerInteractive:(id)arg0 fromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)revertInvalidInteractiveMoveFromIndexPath:(id)arg0 toIndexPath:(id)arg1;
- (void)moveSectionControllerInteractive:(id)arg0 fromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)sectionControllerForView:(id)arg0;
- (id)displayHandler;
- (id)workingRangeHandler;
- (void)removeMapForView:(id)arg0;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1;
- (void)_updateAfterPublicSettingsChange;
- (void)_createProxyAndUpdateCollectionViewDelegate;
- (void)_updateObjects:(id)arg0 dataSource:(id)arg1;
- (id)_layoutAttributesForIndexPath:(id)arg0 supplementaryKinds:(id)arg1;
- (void)_enterBatchUpdates;
- (void)setPreviousSectionMap:(id)arg0;
- (void)_notifyDidUpdate:(long long)arg0 animated:(BOOL)arg1;
- (void)_exitBatchUpdates;
- (id)_sectionMapUsingPreviousIfInUpdateBlock:(BOOL)arg0;
- (id)_visibleSectionControllersFromDisplayHandler;
- (id)_visibleSectionControllersFromLayoutAttributes;
- (id)objectAtSection:(long long)arg0;
- (id)_supplementaryViewSourceAtIndexPath:(id)arg0;
- (void)_updateBackgroundViewShouldHide:(BOOL)arg0;
- (BOOL)isInUpdateBlock;
- (id)previousSectionMap;
- (id)registeredNibNames;
- (id)registeredSupplementaryViewIdentifiers;
- (id)registeredSupplementaryViewNibNames;
- (void)setIsInUpdateBlock:(BOOL)arg0;
- (BOOL)_itemCountIsZero;
- (id)indexPathsFromSectionController:(id)arg0 indexes:(id)arg1 usePreviousIfInUpdateBlock:(BOOL)arg2;
- (BOOL)isLastInteractiveMoveToLastSectionIndex;
- (void)setIsLastInteractiveMoveToLastSectionIndex:(BOOL)arg0;
- (id)moveDelegate;
- (struct CGSize { double x0; double x1; })containerSizeForSectionController:(id)arg0;
- (void)deselectItemAtIndex:(long long)arg0 sectionController:(id)arg1 animated:(BOOL)arg2;
- (void)selectItemAtIndex:(long long)arg0 sectionController:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3;
- (id)dequeueReusableCellWithNibName:(id)arg0 bundle:(id)arg1 forSectionController:(id)arg2 atIndex:(long long)arg3;
- (id)dequeueReusableCellFromStoryboardWithIdentifier:(id)arg0 forSectionController:(id)arg1 atIndex:(long long)arg2;
- (id)dequeueReusableSupplementaryViewFromStoryboardOfKind:(id)arg0 withIdentifier:(id)arg1 forSectionController:(id)arg2 atIndex:(long long)arg3;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg0 forSectionController:(id)arg1 nibName:(id)arg2 bundle:(id)arg3 atIndex:(long long)arg4;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })adjustedContainerInset;
- (struct CGSize { double x0; double x1; })insetContainerSize;
- (void)reloadInSectionController:(id)arg0 atIndexes:(id)arg1;
- (void)setMoveDelegate:(id)arg0;
- (id)emptyBackgroundView;
- (void)setEmptyBackgroundView:(id)arg0;
- (void)setRegisteredNibNames:(id)arg0;
- (void)setRegisteredSupplementaryViewIdentifiers:(id)arg0;
- (void)setRegisteredSupplementaryViewNibNames:(id)arg0;
- (void)invalidateLayoutForSectionController:(id)arg0 collectionView:(id)arg1 indexPaths:(id)arg2 completion:(id /* block */)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (id)scrollViewDelegate;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1;
- (struct CGSize { double x0; double x1; })containerSize;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)setViewController:(id)arg0;
- (void)collectionView:(id)arg0 moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(long long)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (id)viewController;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg0 canMoveItemAtIndexPath:(id)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (void)setScrollViewDelegate:(id)arg0;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)experiments;
- (void)collectionView:(id)arg0 didEndDisplayingSupplementaryView:(id)arg1 forElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)objects;
- (void)setDelegateProxy:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1;
- (void)scrollViewDidScroll:(id)arg0;
- (id)updater;
- (id)delegate;
- (id)debugDescription;
- (id)valueForUndefinedKey:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)delegateProxy;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)setUpdater:(id)arg0;
- (void)setExperiments:(long long)arg0;
- (id)sectionControllerForSection:(long long)arg0;
- (void)reloadDataWithCompletion:(id /* block */)arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndexPath:(id)arg0;
- (id)registeredCellClasses;

@end