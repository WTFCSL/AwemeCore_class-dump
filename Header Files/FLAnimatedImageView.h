//
//     Generated by private class-dump
//

@class NSString, FLAnimatedImage, UIImage, CADisplayLink;

@interface FLAnimatedImageView : UIImageView {
    BOOL _shouldAnimate;
    BOOL _needsDisplayWhenImageBecomesAvailable;
    NSString *_runLoopMode;
    FLAnimatedImage *_animatedImage;
    id /* block */ _loopCompletionBlock;
    UIImage *_currentFrame;
    unsigned long long _currentFrameIndex;
    unsigned long long _loopCountdown;
    double _accumulator;
    CADisplayLink *_displayLink;
}

@property (retain, nonatomic) UIImage *currentFrame;
@property (nonatomic) unsigned long long currentFrameIndex;
@property (nonatomic) unsigned long long loopCountdown;
@property (nonatomic) double accumulator;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL shouldAnimate;
@property (nonatomic) BOOL needsDisplayWhenImageBecomesAvailable;
@property (retain, nonatomic) FLAnimatedImage *animatedImage;
@property (copy, nonatomic) id /* block */ loopCompletionBlock;
@property (copy, nonatomic) NSString *runLoopMode;

+ (id)defaultRunLoopMode;

- (id /* block */)loopCompletionBlock;
- (void)setLoopCompletionBlock:(id /* block */)arg0;
- (void)setLoopCountdown:(unsigned long long)arg0;
- (void)updateShouldAnimate;
- (double)frameDelayGreatestCommonDivisor;
- (BOOL)needsDisplayWhenImageBecomesAvailable;
- (void)setNeedsDisplayWhenImageBecomesAvailable:(BOOL)arg0;
- (unsigned long long)loopCountdown;
- (void)stopAnimating;
- (void)startAnimating;
- (BOOL)isAnimating;
- (void)setDisplayLink:(id)arg0;
- (id)initWithImage:(id)arg0 highlightedImage:(id)arg1;
- (id)initWithImage:(id)arg0;
- (void).cxx_destruct;
- (void)setAlpha:(double)arg0;
- (id)image;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)commonInit;
- (BOOL)shouldAnimate;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)displayLayer:(id)arg0;
- (void)didMoveToWindow;
- (void)setImage:(id)arg0;
- (double)accumulator;
- (id)initWithCoder:(id)arg0;
- (id)displayLink;
- (void)setHighlighted:(BOOL)arg0;
- (void)dealloc;
- (void)setHidden:(BOOL)arg0;
- (id)currentFrame;
- (void)displayDidRefresh:(id)arg0;
- (void)setAnimatedImage:(id)arg0;
- (id)animatedImage;
- (void)setShouldAnimate:(BOOL)arg0;
- (void)setAccumulator:(double)arg0;
- (id)runLoopMode;
- (void)setRunLoopMode:(id)arg0;
- (unsigned long long)currentFrameIndex;
- (void)setCurrentFrameIndex:(unsigned long long)arg0;
- (void)setCurrentFrame:(id)arg0;

@end
