//
//     Generated by private class-dump
//

@class CALayer, NSString;
@protocol AWEAnimatedRecordLayerProtocol;

@interface AWEAnimatedRecordButton : UIButton <CAAnimationDelegate> {
    CALayer<AWEAnimatedRecordLayerProtocol> *_innerLayer;
    CALayer<AWEAnimatedRecordLayerProtocol> *_outterLayer;
    unsigned long long _type;
    double _widthDiff;
}

@property (nonatomic) double widthDiff;
@property (retain, nonatomic) CALayer<AWEAnimatedRecordLayerProtocol> *innerLayer;
@property (retain, nonatomic) CALayer<AWEAnimatedRecordLayerProtocol> *outterLayer;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)innerLayer;
- (void)setInnerLayer:(id)arg0;
- (id)acc_innerLayer;
- (void)addSubviews;
- (void)setWidthDiff:(double)arg0;
- (double)widthDiff;
- (id)outterLayer;
- (void)p_switchToHoldVideoType;
- (void)p_switchToTapVideoType;
- (void)p_switchToTapPictureType;
- (void)p_switchToCountDownType;
- (void)p_switchToMixTapHoldVideoType;
- (void)p_beginHoldVideoAnimation;
- (void)p_beginTapVideoAnimation;
- (void)p_beginTapPictureAnimation;
- (void)p_beginCountDownAnimation;
- (void)p_beginMixHoldTapAnimation;
- (void)p_endHoldVideoAnimation;
- (void)p_endTapVideoAnimation;
- (void)p_endTapPictureAnimation;
- (void)p_endCountDownAnimation;
- (void)p_endMixHoldTapAnimation;
- (void)setOutterLayer:(id)arg0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)endAnimation;
- (unsigned long long)type;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setType:(unsigned long long)arg0;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)beginAnimation;

@end