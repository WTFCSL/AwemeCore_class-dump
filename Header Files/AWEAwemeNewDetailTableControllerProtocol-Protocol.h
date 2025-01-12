//
//     Generated by private class-dump
//

@protocol AWEAwemeNewDetailTableControllerProtocol <AWEViewControllerLifeCycle, AWETableViewLifeCycle, AWEAppLifeCycle>

@optional

- (void)configWithRouterParamDict:(id)arg0;
- (void)playerWillStartNextLoop:(id)arg0;
- (void)willStartAnimationWithToCP:(id)arg0 withFromCP:(id)arg1;
- (void)updateBottomBarWithAweme:(id)arg0 updateTiming:(long long)arg1;
- (void)playIfActive;
- (void)autoScrollToNextVideo;
- (void)cellWillDisplay:(id)arg0 forRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)initialDataSourceFetchDidFinished;
- (void)cellViewControllerDidRenderFirstFrame:(id)arg0;
- (void)beginInitialFetch;
- (void)beginLoadMore;
- (void)initialFetchCompletion:(id)arg0 error:(id)arg1;
- (void)loadMoreCompletion:(id)arg0 error:(id)arg1 isFooterRefreshing:(BOOL)arg2;
- (void)willInitialFetch;
- (void)viewDidLoadBeforeTableviewSetup;
- (void)viewDidLoadAfterTableviewSetup;
- (void)tableView:(id)arg0 didEndDisplayingCellBeforeReset:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScrollEndWithActive;
- (void)transitionDidStartTransitionWithContext:(id)arg0;
- (void)transitionPerformCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)transitionDestinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)configVoiceOverElements;
- (void)onScrollWillChangeVideo:(id)arg0 index:(long long)arg1 directTop:(BOOL)arg2;
- (void)hideInteractionView:(BOOL)arg0 andMoreView:(BOOL)arg1;
- (void)onScrollViewWillBeginDragging:(double)arg0;
- (void)onScrollBackToIndex:(long long)arg0;
- (void)configCell:(id)arg0 atIndexPath:(id)arg1 tableView:(id)arg2;
- (void)tableViewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 isLiveRoomRotate:(BOOL)arg1;
- (void)onScrollDidEndWithIndexPath:(id)arg0;
- (void)onCellDidEndDisplay:(id)arg0;
- (void)onScrollDidScroll:(id)arg0 nextModel:(id)arg1 percentage:(double)arg2;
- (void)didEndConfigingCell:(id)arg0 atIndexPath:(id)arg1 tableView:(id)arg2;
- (void)viewWillEndCoordinatorTransitionAnimation:(struct CGSize { double x0; double x1; })arg0;
- (void)configCell:(id)arg0 model:(id)arg1;
- (void)loadPreviousCompletion:(id)arg0 error:(id)arg1 isHeaderRefreshing:(BOOL)arg2;
- (void)loadMoreCompletionWithData:(id)arg0;
- (void)willConfigCell:(id)arg0 model:(id)arg1;
- (void)onScrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)configCellLogExtraDictWithModel:(id)arg0 indexPath:(id)arg1;
- (void)beforeRouterToScene:(long long)arg0 withModel:(id)arg1;
- (void)beforeTrackEvent:(id)arg0 withModel:(id)arg1;
- (void)updateSearchEntranceStatusWithModel:(id)arg0;
- (void)updateSearchEntranceStyleWithModel:(id)arg0;
- (void)willPlay;
- (void)willPause;
- (void)willPauseWithAnimation;
- (void)willPlayWithAnimation;
- (void)detailCellViewController:(id)arg0 awemeModel:(id)arg1 playerPlayTime:(double)arg2 canPlayTime:(double)arg3 totalTime:(double)arg4;
- (void)detailCellViewController:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)transtionCustomDidPopDoneTransitionWithContext:(id)arg0;
- (void)transitionDidCancelPercentDrivenTransitionWithContext:(id)arg0;
- (void)customAwemeNewDetailTouchForType:(unsigned long long)arg0;
- (void)detailCellViewController:(id)arg0 didChangeAlbumIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)viewDidAppear:(BOOL)arg0;
- (void)stop;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)play;
- (void)pause;
- (void)willStop;

@end
