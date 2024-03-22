//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWEUILoadingView, UIView, NSIndexPath;
@protocol AWEOneDayFeedCollectionCellProtocol;

@interface AWEOneDayFeedViewController : AWEBaseListViewController <AWERouterViewControllerProtocol, UICollectionViewDelegate> {
    BOOL _isFirstPlayAfterRefresh;
    BOOL _isViewAppeard;
    BOOL _isAutoPause;
    UIView *_returnView;
    UIImageView *_moreView;
    AWEUILoadingView *_loadingView;
    NSIndexPath *_currentPlayIndex;
    id<AWEOneDayFeedCollectionCellProtocol> _currentPlayCell;
}

@property (retain, nonatomic) UIView *returnView;
@property (retain, nonatomic) UIImageView *moreView;
@property (nonatomic) BOOL isFirstPlayAfterRefresh;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) NSIndexPath *currentPlayIndex;
@property (retain, nonatomic) id<AWEOneDayFeedCollectionCellProtocol> currentPlayCell;
@property (nonatomic) BOOL isViewAppeard;
@property (nonatomic) BOOL isAutoPause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (void)customLayoutCollectionView:(id)arg0;
- (id)sectionControllerClassArray;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)currentPlayIndex;
- (void)setCurrentPlayIndex:(id)arg0;
- (void)setReturnView:(id)arg0;
- (void)windowDidBecomeKeyNotification:(id)arg0;
- (void)windowDidResignKeyNotification:(id)arg0;
- (id)returnView;
- (id)currentPlayCell;
- (id)moreView;
- (void)setMoreView:(id)arg0;
- (void)handleDataState:(long long)arg0;
- (BOOL)isAutoPause;
- (void)setIsAutoPause:(BOOL)arg0;
- (void)autoPlayIfNeeded;
- (void)autoPauseIfNeeded;
- (void)deleteStoryAtIndex:(long long)arg0;
- (void)setIsViewAppeard:(BOOL)arg0;
- (void)attemptToStopCurrentPlayCell;
- (void)moreViewTapped;
- (void)applicationDidBecomeActiveHandler;
- (void)applicationWillResignActiveHandler;
- (void)downloadStoryAtIndex:(long long)arg0;
- (BOOL)isFirstPlayAfterRefresh;
- (void)setIsFirstPlayAfterRefresh:(BOOL)arg0;
- (void)attemptToPlayCellWithIndex:(long long)arg0 cell:(id)arg1;
- (void)prefetchDataListWithIndexPath:(id)arg0;
- (void)setCurrentPlayCell:(id)arg0;
- (BOOL)isViewAppeard;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)endRefreshing;
- (void)setupUI;
- (void)setupData;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)scrollViewDidEndScrolling;
- (void)setupCollectionView:(id)arg0;

@end
