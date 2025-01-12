//
//     Generated by private class-dump
//

@protocol AWERelatedVideoVideoPlayerViewControllerDelegate <NSObject>

@optional

- (void)retryButtonDidClicked:(id)arg0;
- (void)playButtonDidClicked:(id)arg0;
- (void)pauseButtonDidClicked:(id)arg0;
- (BOOL)videoNeedRepeat:(id)arg0;
- (void)playFinish:(id)arg0;
- (void)ioniaPlayerControlFullScreenClicked:(id)arg0;
- (void)player:(id)arg0 playNextVideo:(id)arg1 isMixVideo:(BOOL)arg2;
- (void)ioniaVideoViewController:(id)arg0 didEnterQuietMode:(BOOL)arg1;
- (void)ioniaVideoViewController:(id)arg0 sliderTouchStart:(id)arg1 bySlideScreen:(BOOL)arg2;
- (void)ioniaVideoViewController:(id)arg0 touchStartDuration:(double)arg1 bySlideScreen:(BOOL)arg2;
- (void)ioniaVideoViewController:(id)arg0 sliderTouchEnded:(id)arg1 bySlideScreen:(BOOL)arg2;
- (void)ioniaVideoViewController:(id)arg0 sliderEndDuration:(double)arg1 bySlideScreen:(BOOL)arg2;
- (void)ioniaVideoViewController:(id)arg0 updatePlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)ioniaVideoViewController:(id)arg0 didChangePlaybackToAction:(long long)arg1;
- (void)ioniaVideoViewController:(id)arg0 didChangeStallState:(long long)arg1;
- (void)ioniaVideoViewController:(id)arg0 playbackFailedWithError:(id)arg1;
- (BOOL)enableDefaultContinuePlayStrategy;
- (BOOL)shouldResponseToPinchTransitionWithioniaVideoViewController:(id)arg0;
- (BOOL)isDisablePlay;

@end
