//
//     Generated by private class-dump
//

@protocol IESLiveMultiAudioSingleSeatViewProtocol <NSObject>

@property (nonatomic) long long index;
@property (readonly, nonatomic) BOOL canStartGuideAnimation;
@property (nonatomic) BOOL occupied;

- (void)stopGuideAnimation;
- (BOOL)isShowingGuideAnimation;
- (void)startGuideAnimationWithEndBlock:(id /* block */)arg0;
- (BOOL)canStartGuideAnimation;
- (void)playBreathingLightAnimation;
- (BOOL)isBreathingLightAnimationShowing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 isAnchor:(BOOL)arg1 index:(long long)arg2;
- (void)setOccupied:(BOOL)arg0;
- (BOOL)occupied;
- (void)setIndex:(long long)arg0;
- (long long)index;

@end
