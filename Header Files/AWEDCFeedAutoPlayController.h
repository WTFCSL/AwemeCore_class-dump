//
//     Generated by private class-dump
//

@class AWEDCFeedAutoPlayHandler, NSString, NSHashTable;

@interface AWEDCFeedAutoPlayController : AWEDCFeedBaseController <AWEDCFeedAutoPlayContainerProtocol> {
    NSHashTable *_optVisibleCellsCache;
    AWEDCFeedAutoPlayHandler *_autoPlayHandler;
}

@property (retain, nonatomic) NSHashTable *optVisibleCellsCache;
@property (retain, nonatomic) AWEDCFeedAutoPlayHandler *autoPlayHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerScrollViewDidScroll:(id)arg0;
- (void)containerScrollViewDidEndDecelerating:(id)arg0;
- (void)containerScrollViewDidEndScrollingAnimation:(id)arg0;
- (void)containerScrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)containerViewDidAppear:(BOOL)arg0;
- (void)containerViewWillDisappear:(BOOL)arg0;
- (void)containerCollectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)containerCollectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)listDidReloadData;
- (void)listDidPerformBatchUpdates;
- (void)setAutoPlayHandler:(id)arg0;
- (id)feedScrollView;
- (id)autoPlayHandler;
- (BOOL)disableFeedScrollViewDelegate;
- (void)setOptVisibleCellsCache:(id)arg0;
- (id)optVisibleCellsCache;
- (id)visibleCells;
- (id)init;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)appDidEnterBackground;

@end