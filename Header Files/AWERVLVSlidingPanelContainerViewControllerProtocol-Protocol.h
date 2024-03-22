//
//     Generated by private class-dump
//

@class AWERVDetailPageContext;
@protocol AWERelatedVideoDetailVideoRelatedVideoViewControllerProtocol, AWERelatedVideoDetailVideoContainerViewControllerDelegate;

@protocol AWERVLVSlidingPanelContainerViewControllerProtocol <NSObject>

@property (weak, nonatomic) id<AWERelatedVideoDetailVideoContainerViewControllerDelegate> delegate;
@property (retain, nonatomic) id<AWERelatedVideoDetailVideoRelatedVideoViewControllerProtocol> relatedWaterFlowView;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (nonatomic) double maxAndMinVideoDiff;

- (void)showInputView;
- (void)commentButtonDidClicked;
- (void)startRequestAnimating;
- (void)refreshModel:(id)arg0 params:(id)arg1;
- (BOOL)canScrollToDownDirection;
- (void)scrollToRelatedVideos:(BOOL)arg0;
- (void)scrollToComment:(BOOL)arg0;
- (void)scrollToFeedShare:(BOOL)arg0;
- (long long)selectTabIndex;
- (void)setupWithRelatedPreloadVideos:(id)arg0 forModel:(id)arg1;
- (id)relatedWaterFlowView;
- (id)initWithTabIndex:(long long)arg0;
- (void)refreshRelatedVideos:(id)arg0 scene:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)commentScrollToTopIfCurrentShow;
- (id)currentSelectScrollView;
- (BOOL)isLastTab;
- (void)setRelatedWaterFlowView:(id)arg0;
- (double)maxAndMinVideoDiff;
- (void)setMaxAndMinVideoDiff:(double)arg0;
- (struct CGPoint { double x0; double x1; })currentScrollOffset;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)willStartScroll;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (void)scrollToTop:(BOOL)arg0;

@optional

- (BOOL)shouldShowTagWordsTab;
- (id)multiTabListView;
- (void)updateContainerWithPanelViewModelArray:(id)arg0;
- (void)tryShowTagListView;
- (void)tryHideTagListView;
- (id)mutiTabView;
- (void)recallVideoReloadTab;

@end