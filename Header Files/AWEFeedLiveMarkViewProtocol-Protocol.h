//
//     Generated by private class-dump
//

@protocol AWEFeedLiveMarkViewProtocol <NSObject>

@property (readonly, nonatomic) BOOL isPlaying;

- (void)startSlowerAnimationWithView:(id)arg0 syncStartTime:(double)arg1;
- (void)stopAnimationWithView:(id)arg0;
- (void)startAnimationWithView:(id)arg0 showLiveTag:(BOOL)arg1 withURLs:(id)arg2 type:(long long)arg3 interval:(double)arg4;
- (void)startAnimationWithView:(id)arg0 showLiveTag:(BOOL)arg1 type:(long long)arg2;
- (void)startAnimationWithView:(id)arg0 withURLs:(id)arg1 showLiveTag:(BOOL)arg2;
- (void)startAnimationWithView:(id)arg0 showLiveTag:(BOOL)arg1 withURLs:(id)arg2 type:(long long)arg3 interval:(double)arg4 showColorGradient:(BOOL)arg5;
- (void)startAnimationWithView:(id)arg0 showLiveTag:(BOOL)arg1;
- (void)startAnimationWithView:(id)arg0 showLiveTag:(BOOL)arg1 withURLs:(id)arg2 type:(long long)arg3 interval:(double)arg4 viewAnimationScale:(double)arg5 maskAnimationScale:(double)arg6;
- (void)startAnimationWithView:(id)arg0;
- (void)startOuterCircleBreatheAnimationWithView:(id)arg0 syncStartTime:(double)arg1;
- (BOOL)isPlaying;

@optional

- (void)setMarkLayerGradientColorWithType:(long long)arg0;
- (void)adjustSkylightAnimationLayerFrame;
- (void)startNewBreatheAnimationWithView:(id)arg0 syncStartTime:(double)arg1;
- (void)setMarkLayerGradientColor:(id)arg0;
- (void)setStaticLiveStyle:(id)arg0 showLiveTag:(BOOL)arg1;

@end
