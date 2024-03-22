//
//     Generated by private class-dump
//

@class NSDictionary, NSString, UIPanGestureRecognizer;

@interface IESECSliceXCartSlideContainerView : IESECSliceXViewElementView <UIGestureRecognizerDelegate> {
    UIPanGestureRecognizer *_panGesture;
    long long _panOffsetLimit;
    NSDictionary *_attrs;
    struct CGPoint { double x; double y; } _originCenter;
    struct CGPoint { double x; double y; } _slidingCenter;
}

@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) long long panOffsetLimit;
@property (nonatomic) struct CGPoint { double x; double y; } originCenter;
@property (nonatomic) struct CGPoint { double x; double y; } slidingCenter;
@property (copy, nonatomic) NSDictionary *attrs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGPoint { double x0; double x1; })originCenter;
- (void)setOriginCenter:(struct CGPoint { double x0; double x1; })arg0;
- (void)interruptGesture:(id)arg0;
- (BOOL)updateWithSliceXElement:(id)arg0 error:(id *)arg1;
- (void)cartSlideContainerDidSlide:(id)arg0;
- (void)setPanOffsetLimit:(long long)arg0;
- (void)setSlidingCenter:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })slidingCenter;
- (void)handlePanToRight:(id)arg0;
- (void)handlePanToLeft:(id)arg0;
- (BOOL)shouldPanToLeftWhenGestureEnds:(id)arg0;
- (long long)panOffsetLimit;
- (void)trackWithSlideMenuShow;
- (BOOL)shouldPanToRightWhenGestureEnds:(id)arg0;
- (BOOL)shouldInterruptGestureWhenPanToLeft;
- (BOOL)shouldInterruptGestureWhenPanToRight;
- (id)initWithContext:(id)arg0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)layoutSubviews;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (void)handlePanGesture:(id)arg0;
- (id)attrs;
- (void)setAttrs:(id)arg0;
- (void)resetSlideState;

@end
