//
//     Generated by private class-dump
//

@protocol AWERVLVSlidingPanelProtocol <NSObject>

- (id)panelVC;
- (void)startRequestAnimating;
- (void)refreshModel:(id)arg0 params:(id)arg1;
- (BOOL)canScrollToDownDirection;
- (BOOL)slidingPanelAvailable;
- (id)slidingPanelTitle;
- (void)didScrollToPanel:(BOOL)arg0 prevPanel:(id)arg1;
- (void)didPanelButtonClicked;
- (void)scrollPanelToTop;
- (void)scrollPanelToTop:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })scrollOffset;

@optional

- (void)showInputView;
- (void)setupWithRelatedPreloadVideos:(id)arg0 forModel:(id)arg1;
- (void)refreshRelatedVideos:(id)arg0 scene:(id)arg1 params:(id)arg2 awemeModel:(id)arg3 completion:(id /* block */)arg4;

@end