//
//     Generated by private class-dump
//

@class NSNumber, NSString;
@protocol AWERelatedMixDetailViewControllerDelegate;

@interface AWEImmersiveDetailTableViewController : AWEAwemeDetailTableViewController <AWERouterViewControllerProtocol> {
    BOOL _isNeedDelayTrackImmersiveShow;
    id<AWERelatedMixDetailViewControllerDelegate> _relatedMixDetailViewControllerDelegate;
    NSNumber *_rightSlideUsing;
    struct CGPoint { double x; double y; } _panGestureLastPoint;
}

@property (nonatomic) struct CGPoint { double x; double y; } panGestureLastPoint;
@property (retain, nonatomic) NSNumber *rightSlideUsing;
@property (nonatomic) BOOL isNeedDelayTrackImmersiveShow;
@property (weak, nonatomic) id<AWERelatedMixDetailViewControllerDelegate> relatedMixDetailViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mixRelatedFeedImmersiveDetailWithDataController:(id)arg0 model:(id)arg1 logExtraDict:(id)arg2;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)awe_onReturnButtonClicked:(id)arg0;
- (void)clickExitButton;
- (id)cellReuseIdentifierForRowWithModel:(id)arg0;
- (void)cellWillDisplay:(id)arg0 forRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)onScrollDidEndWithIndexPath:(id)arg0;
- (BOOL)shouldShowDiscoverEntranceView;
- (id)configCellLogExtraDictWithModel:(id)arg0 indexPath:(id)arg1;
- (void)detailCellViewController:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (BOOL)shouldUseSearchEntranceBarStyle;
- (id)enterFromForEnterSearch;
- (BOOL)fpsOptimizationEnabled;
- (BOOL)getCanShowFixedBottomBar;
- (BOOL)p_enableFullScreenSlide;
- (BOOL)shouldActiveInCurrentTopViewController;
- (BOOL)shouldHideCommentInputViewOnAweme:(id)arg0;
- (void)setIsNeedDelayTrackImmersiveShow:(BOOL)arg0;
- (void)trackShowCompilationEntranceForCellViewController:(id)arg0 index:(long long)arg1;
- (BOOL)isNeedDelayTrackImmersiveShow;
- (id)relatedMixDetailViewControllerDelegate;
- (void)exitOnScroll;
- (void)trackMoreCompilationStayTime;
- (void)trackExitMoreCompilationTabWithExitMethod:(id)arg0 isEnterMixVideo:(BOOL)arg1;
- (void)setPanGestureLastPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setRightSlideUsing:(id)arg0;
- (id)rightSlideUsing;
- (struct CGPoint { double x0; double x1; })panGestureLastPoint;
- (void)setRelatedMixDetailViewControllerDelegate:(id)arg0;
- (void)setTableView:(id)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)viewDidLoad;
- (void)panGesture:(id)arg0;

@end
