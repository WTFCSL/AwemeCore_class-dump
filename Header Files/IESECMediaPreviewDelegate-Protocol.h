//
//     Generated by private class-dump
//

@protocol IESECMediaPreviewDelegate <NSObject>

@optional

- (void)mediaPreviewController:(id)arg0 willDismissWithIndex:(long long)arg1 isCurrentVideoTab:(BOOL)arg2;
- (void)mediaPreviewController:(id)arg0 didDismissWithIndex:(long long)arg1 isCurrentVideoTab:(BOOL)arg2;
- (void)mediaPreviewController:(id)arg0 didSwipeToIndex:(long long)arg1 previousIndex:(long long)arg2;
- (void)mediaPreviewController:(id)arg0 didShowIndex:(long long)arg1;
- (void)mediaPreviewTrackWithEventName:(id)arg0 andParams:(id)arg1 btmID:(id)arg2;
- (void)progressIsSliding:(BOOL)arg0;
- (void)playerMuteStateDidChanged:(BOOL)arg0;
- (void)playerDidChangePlaybackStateWithAction:(unsigned long long)arg0;
- (void)videoPreviewPlaybackStateDidChange:(unsigned long long)arg0;
- (void)kolVideoDetailPreloadWithCompletion:(id /* block */)arg0;
- (id)detailBaseTrackParams;
- (void)mediaPreviewControllerScrollToLeftEdge:(double)arg0;

@end
