//
//     Generated by private class-dump
//

@class NSString;

@interface AWECollectionButton : UIButton <CAAnimationDelegate> {
    BOOL _scaleWhenHighlighted;
    id /* block */ _animateFinishblock;
    id /* block */ _firstTouchAnimationFinishBlock;
}

@property (copy, nonatomic) id /* block */ animateFinishblock;
@property (copy, nonatomic) id /* block */ firstTouchAnimationFinishBlock;
@property (nonatomic) BOOL scaleWhenHighlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginFirstTouchAnimation;
- (BOOL)scaleWhenHighlighted;
- (id /* block */)firstTouchAnimationFinishBlock;
- (void)beginSecondTouchAnimation;
- (id /* block */)animateFinishblock;
- (void)beginTouchAnimation;
- (void)setAnimateFinishblock:(id /* block */)arg0;
- (void)setFirstTouchAnimationFinishBlock:(id /* block */)arg0;
- (void)setScaleWhenHighlighted:(BOOL)arg0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg0;

@end