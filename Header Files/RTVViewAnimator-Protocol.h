//
//     Generated by private class-dump
//

@protocol RTVViewAnimator <NSObject>

- (id)addCompletion:(id /* block */)arg0;
- (id)addAnimation:(id /* block */)arg0;
- (id)startAnimation;

@optional

- (id)updateTimingFunction:(long long)arg0;
- (id)updateDelay:(double)arg0;
- (id)enable60FPSAnimation;
- (id)completionPromise;
- (BOOL)isAnimating;
- (double)animationDuration;
- (id)completionBlocks;
- (id)updateOptions:(unsigned long long)arg0;
- (id)animationBlocks;
- (id)updateDuration:(double)arg0;

@end