//
//     Generated by private class-dump
//

@protocol AWEEcomSearchLynxEngineDelegate <NSObject>

@optional

- (void)lynxEngine:(id)arg0 viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)lynxEngineDidMount:(id)arg0;
- (void)lynxEngineDidUpdate:(id)arg0;
- (void)lynxEngine:(id)arg0 didFailLoadWithError:(id)arg1;
- (void)lynxEngine:(id)arg0 didRecieveError:(id)arg1;
- (void)lynxEngineSearchLynxElementDidMount:(id)arg0;
- (void)lynxEngineSearchLynxElementDidBecomeActive:(id)arg0;
- (void)lynxEngineSearchLynxElementWillEnterFullScreen:(id)arg0;
- (void)lynxEngineSearchLynxElementDidResignActive:(id)arg0;
- (void)lynxEngineSearchLynxElementWillBecomeActive:(id)arg0;
- (void)lynxEngineSearchLynxElementScrollToTopWithOffset:(double)arg0 animated:(BOOL)arg1;
- (void)lynxEngineSearchLynxElementScrollelement:(id)arg0 toPosition:(id)arg1 offset:(double)arg2;
- (void)lynxEngineSearchLynxElemenVideoPlayerDidEnd:(id)arg0;
- (void)lynxEngineSearchLynxElemenVideoPlayerDidPlayError:(id)arg0;
- (void)lynxEngineRegistAutoplayDistribute:(id)arg0;
- (void)lynxEngineWillTransitionBackToVideoFeed;
- (void)lynxEngineDidTransitionBackToVideoFeed;
- (void)lynxEngine:(id)arg0 updateAwemeList:(id)arg1;
- (void)lynxEngine:(id)arg0 didFailDownloadWithError:(id)arg1;
- (BOOL)lynxEngine:(id)arg0 shouldHandlebackFallbackOutside:(id)arg1;
- (void)lynxEngine:(id)arg0 didFallbackWithError:(id)arg1;
- (void)lynxEngine:(id)arg0 didReceiveFirstLoad:(double)arg1;
- (void)lynxEngineDidFirstScreen:(id)arg0;

@end
