//
//     Generated by private class-dump
//

@class CAReplicatorLayer, CAShapeLayer;

@interface CECRadarAnimationView : UIView {
    CAReplicatorLayer *_replicatorLayer;
    CAShapeLayer *_circleLayer;
}

@property (retain, nonatomic) CAReplicatorLayer *replicatorLayer;
@property (retain, nonatomic) CAShapeLayer *circleLayer;

- (void)setRadarCircleColor:(id)arg0;
- (void)p_setupLayers;
- (void)setRadarCircleCount:(long long)arg0;
- (void)setReplicatorLayer:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)startAnimation;
- (id)circleLayer;
- (void)setCircleLayer:(id)arg0;
- (id)replicatorLayer;
- (void)cancelAnimation;

@end