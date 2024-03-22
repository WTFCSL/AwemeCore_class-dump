//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface BDXLynxSwiperCollectionView : UICollectionView <UIGestureRecognizerDelegate> {
    BOOL _duringCustomScroll;
    double _customDuration;
    unsigned long long _touchBehavior;
    UIView *_bounceBeginView;
    UIView *_bounceEndView;
}

@property (weak, nonatomic) UIView *bounceBeginView;
@property (weak, nonatomic) UIView *bounceEndView;
@property (nonatomic) double customDuration;
@property (nonatomic) BOOL duringCustomScroll;
@property (nonatomic) unsigned long long touchBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBounceBeginView:(id)arg0;
- (void)setBounceEndView:(id)arg0;
- (id)bounceBeginView;
- (id)bounceEndView;
- (double)customDuration;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })arg0 withDuration:(double)arg1 interception:(id /* block */)arg2;
- (void)setDuringCustomScroll:(BOOL)arg0;
- (void)addBouncesView:(id)arg0 and:(id)arg1;
- (void)decelerateToContentOffset:(struct CGPoint { double x0; double x1; })arg0 duration:(double)arg1;
- (void)setCustomDuration:(double)arg0;
- (BOOL)duringCustomScroll;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })arg0 animated:(BOOL)arg1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void).cxx_destruct;
- (unsigned long long)touchBehavior;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)layoutSubviews;
- (void)setTouchBehavior:(unsigned long long)arg0;

@end
