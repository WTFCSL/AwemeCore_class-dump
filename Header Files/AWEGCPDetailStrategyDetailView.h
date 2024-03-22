//
//     Generated by private class-dump
//

@class NSString, AWEGCPStrategyListView;
@protocol AWEGCPVideoPlayService;

@interface AWEGCPDetailStrategyDetailView : IESGCPDetailBaseView <AWEGCPFullscreenTransitionOuterContextProvider, IESGCPDIContextSubscriber, AWEGCPStrategyListViewDelegate, IESGCPDetailFilterViewDelegate, AWEGCPStrategyActions, IESGCPAudienceDetailActions, IESGCPInteractScrollChildScrollable, IESGCPGameDetailBottomContainerActions, IESGCPGameDetailTabNavigatorActions> {
    id<AWEGCPVideoPlayService> _videoPlayService;
    AWEGCPStrategyListView *_strategyListView;
    double _startWatchTime;
    double _watchDuration;
    NSString *_enterFrom;
}

@property (nonatomic) long long transitionIndex;
@property (nonatomic) long long transitionToIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double startWatchTime;
@property (nonatomic) double watchDuration;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) id<AWEGCPVideoPlayService> videoPlayService;
@property (retain, nonatomic) AWEGCPStrategyListView *strategyListView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveTransitionContext;
- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)arg0;
- (id)videoPlayService;
- (void)modernTransitionUpdateOffset:(long long)arg0 isScrolled:(BOOL)arg1;
- (id)modernTransitionContext;
- (void)modernTransitionDidCompleteWithOffset:(long long)arg0;
- (void)bindViewModel:(id)arg0;
- (void)scrollToDisplayItemAtIndex:(long long)arg0 offset:(double)arg1 animated:(BOOL)arg2;
- (long long)transitionIndex;
- (void)setTransitionToIndex:(long long)arg0;
- (long long)transitionToIndex;
- (void)setTransitionIndex:(long long)arg0;
- (double)watchDuration;
- (void)setWatchDuration:(double)arg0;
- (id)strategyListView;
- (void)modernTransitionUpdateIndexOfMix:(long long)arg0;
- (void)modernTransitionDidCompleteWithIndexOfMix:(long long)arg0;
- (id)modernTransitionContextOfMix:(long long)arg0;
- (id)liveTransitionContextOfMix:(long long)arg0;
- (void)enterDetailWithIndex:(long long)arg0 extra:(id)arg1;
- (void)setVideoPlayService:(id)arg0;
- (void)videoIsMuteDidChange:(BOOL)arg0;
- (void)didCloseGameDetailView;
- (void)bottomContainer:(id)arg0 onBoundsChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)willDisplayTab:(id)arg0 tabId:(id)arg1 withParams:(id)arg2;
- (void)willEndDisplayTab:(id)arg0 tabId:(id)arg1;
- (double)startWatchTime;
- (void)setStartWatchTime:(double)arg0;
- (void)reportDuration;
- (BOOL)shouldResponseToTabActionsWithTabId:(id)arg0 tabView:(id)arg1;
- (void)trackShowForStrategy;
- (void)didSetGameCPDIContext;
- (void)strategyListView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)trackEvent:(id)arg0 extraParams:(id)arg1;
- (void)onTapSeeMoreButtonWithModel:(id)arg0 index:(long long)arg1;
- (void)playViewDidClick:(id)arg0 index:(long long)arg1;
- (void)speakerButtonDidClickedWithModel:(id)arg0 index:(long long)arg1;
- (void)setScrollViewToTopAnimated:(BOOL)arg0;
- (void)doOnContentOffsetChanged:(id /* block */)arg0;
- (void)setStrategyListView:(id)arg0;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (id)scrollView;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
- (void)addObservers;
- (void)appWillResignActive;

@end
