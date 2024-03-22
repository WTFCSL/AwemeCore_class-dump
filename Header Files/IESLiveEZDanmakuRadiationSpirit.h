//
//     Generated by private class-dump
//

@interface IESLiveEZDanmakuRadiationSpirit : IESLiveEZDanmakuSpirit {
    double _xMoveDistance;
    double _yMoveDistance;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetRect;
    double _alphaDuration;
    BOOL _activated;
    double _baseDuration;
    double _targetAlphaScale;
    double _targetSizeScale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _quadrantFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } quadrantFrame;
@property (nonatomic) double targetAlphaScale;
@property (nonatomic) double targetSizeScale;

- (void)deactive;
- (void)setTargetSizeScale:(double)arg0;
- (void)setTargetAlphaScale:(double)arg0;
- (void)setBaseDuration:(double)arg0;
- (void)updateWithTime:(double)arg0;
- (void)activeWithContext:(id)arg0;
- (double)targetAlphaScale;
- (double)targetSizeScale;
- (void)setQuadrantFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })quadrantFrame;
- (BOOL)isActivated;
- (double)baseDuration;

@end