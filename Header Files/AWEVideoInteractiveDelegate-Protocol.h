//
//     Generated by private class-dump
//

@protocol AWEVideoInteractiveDelegate <NSObject>

@optional

- (void)setPureMode:(BOOL)arg0;
- (BOOL)detailSlide;
- (void)videoInteractiveViewWillShowBubbleView;
- (void)videoInteractiveViewTapWithStickerShow;
- (void)resumePlaying;
- (BOOL)videoInteractiveViewTapInCenter;
- (void)stickerDoubleTap:(id)arg0;
- (long long)videoScaleType;
- (BOOL)supportStickerMask;
- (id)imagePlayerView;
- (id)clipVideoDelegate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imagePlayerFrame;
- (void)videoInteractiveViewJumpScheme;
- (double)currentPlayerPlaybackTime;
- (void)stickerLongPress;
- (void)pausePlaying;
- (BOOL)isVideoPlaying;
- (id)videoPlayerView;

@end
