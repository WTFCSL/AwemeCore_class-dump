//
//     Generated by private class-dump
//

@class UIBezierPath, CAShapeLayer;

@interface DTFOpenPlatformHeaderLayer : DTFOpenPlatformBaseLayer {
    UIBezierPath *_topCurvePath;
    UIBezierPath *_finalTopCurvePath;
    CAShapeLayer *_topCurveLayer;
    UIBezierPath *_bottomCurvePath;
    UIBezierPath *_finalBottomCurvePath;
    CAShapeLayer *_bottomCurveLayer;
    UIBezierPath *_leftEyePath;
    UIBezierPath *_finalLeftEyePath;
    CAShapeLayer *_leftEyeLayer;
    UIBezierPath *_lPath;
    UIBezierPath *_finalLPath;
    CAShapeLayer *_lLayer;
    UIBezierPath *_rightEyePath;
    UIBezierPath *_finalRightEyePath;
    CAShapeLayer *_rightEyeLayer;
    UIBezierPath *_rightZPath;
    CAShapeLayer *_rightZLayer;
    UIBezierPath *_leftZPath;
    CAShapeLayer *_leftZLayer;
}

- (void)_addTopCurveLayer;
- (void)_addBottomCurveLayer;
- (id)finalTopCurvePath;
- (id)_layerWithPath:(id)arg0;
- (id)finalBottomCurvePath;
- (id)finalLPath;
- (id)finalLeftEyePath;
- (id)finalRightEyePath;
- (id)leftZPath;
- (id)rightZPath;
- (void)_addLLayer;
- (void)_addLeftEyeLayer;
- (void)_addRightEyeLayer;
- (void)_addLeftZLayer;
- (void)_addRightZLayer;
- (id)init;
- (void).cxx_destruct;

@end
