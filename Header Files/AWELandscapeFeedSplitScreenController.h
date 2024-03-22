//
//     Generated by private class-dump
//

@class AWELandscapeSplitScreenViewController, NSString, NSIndexPath, DUXToast;

@interface AWELandscapeFeedSplitScreenController : AWELandscapeFeedBaseController <AWELandscapeSplitScreenDelegate, AWELandscapeFeedSplitScreenControllerProtocol> {
    AWELandscapeSplitScreenViewController *_splitScreenVC;
    DUXToast *_toast;
    double _startSpliteInterval;
    NSIndexPath *_beginDragIndexInMixSplit;
    NSIndexPath *_endDragIndexInMixSplit;
}

@property (retain, nonatomic) AWELandscapeSplitScreenViewController *splitScreenVC;
@property (retain, nonatomic) DUXToast *toast;
@property (nonatomic) double startSpliteInterval;
@property (retain, nonatomic) NSIndexPath *beginDragIndexInMixSplit;
@property (retain, nonatomic) NSIndexPath *endDragIndexInMixSplit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateScreenCastModels;
- (void)exitLandscapeWithCompletion:(id /* block */)arg0;
- (void)exitSplitScreenWithMethod:(id)arg0 completion:(id /* block */)arg1;
- (void)enterSplitScreenToMode:(long long)arg0 dataController:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)insertAndScrollCollectionViewToModel:(id)arg0;
- (void)addSplitScreenVCIfNeeded;
- (void)setupCollectionViewFooter:(id)arg0;
- (void)configCollectionViewHeader;
- (id)splitScreenVC;
- (void)showAnimationForEnterSplitScreen:(long long)arg0 completion:(id /* block */)arg1;
- (void)enterSplitPostModeWithCurrentUserModel:(id)arg0 completion:(id /* block */)arg1;
- (void)changeDataToSpiltScreen:(long long)arg0 dataController:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)enterSplitMixModeWithBlock:(id /* block */)arg0;
- (void)enterSpiltScreen:(long long)arg0 completionBlock:(id /* block */)arg1;
- (void)enterSplitLVSelectEpisodeModeWithCompletionBlock:(id /* block */)arg0;
- (void)enterSplitScreenWithType:(long long)arg0;
- (void)configCollectionViewAfterEnterSplit:(long long)arg0;
- (void)transfromDataSourceToSplitData:(long long)arg0 dataController:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setStartSpliteInterval:(double)arg0;
- (void)changeDataToFullScreenWithCompletion:(id /* block */)arg0;
- (void)showAnimationForExitSplitScreen:(id /* block */)arg0;
- (void)transfromDataSourceToOriginDataWithCompletion:(id /* block */)arg0;
- (void)recoverCollectionViewHeaderIfNeed;
- (void)recoverCollectionViewFooterForSplitIfNeed;
- (void)trackSplitModeStayTime;
- (double)startSpliteInterval;
- (id)endDragIndexInMixSplit;
- (id)beginDragIndexInMixSplit;
- (BOOL)shouldShowAlbumSkipToastInMixSplit;
- (void)setEndDragIndexInMixSplit:(id)arg0;
- (void)showSkipAlbumToastInMixSplitIfNeed;
- (void)scrollCollectionViewToItemAtIndexPath:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)setSplitScreenVC:(id)arg0;
- (void)setBeginDragIndexInMixSplit:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)viewDidLoad;
- (void)scrollViewDidEndScrolling;
- (void)setToast:(id)arg0;
- (id)toast;
- (void)setupCollectionView:(id)arg0;

@end
