//
//     Generated by private class-dump
//

@class UIView;

@interface IESLivePlaybackPauseParallel : UIView {
    BOOL _isLandscape;
    id /* block */ _parallelAnimationCompletionBlock;
    UIView *_left;
    UIView *_right;
}

@property (retain, nonatomic) UIView *left;
@property (retain, nonatomic) UIView *right;
@property (nonatomic) BOOL isLandscape;
@property (readonly, nonatomic) double r;
@property (readonly, nonatomic) double h;
@property (readonly, nonatomic) double totalWidth;
@property (readonly, nonatomic) double deltaWidth;
@property (readonly, nonatomic) double leftLineCenterX;
@property (readonly, nonatomic) double rightLineCenterX;
@property (copy, nonatomic) id /* block */ parallelAnimationCompletionBlock;

- (void)setParallelAnimationCompletionBlock:(id /* block */)arg0;
- (void)updateIsLandscape:(BOOL)arg0 isPlaying:(BOOL)arg1;
- (void)seperateParallel:(double)arg0 time:(double)arg1;
- (void)mergeParallel:(double)arg0 time:(double)arg1;
- (double)leftLineCenterX;
- (void)updateLine:(id)arg0 centerX:(double)arg1 height:(double)arg2;
- (double)rightLineCenterX;
- (id /* block */)parallelAnimationCompletionBlock;
- (double)deltaWidth;
- (double)h;
- (id)left;
- (id)right;
- (void).cxx_destruct;
- (void)setIsLandscape:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isLandscape;
- (void)setupView;
- (void)setLeft:(id)arg0;
- (double)totalWidth;
- (double)r;
- (void)setRight:(id)arg0;

@end