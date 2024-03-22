//
//     Generated by private class-dump
//

@interface SVGHelperUtilities : NSObject

+ (id)newCALayerForPathBasedSVGElement:(id)arg0 withPath:(struct CGPath { } *)arg1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformAbsoluteIncludingViewportForTransformableOrViewportEstablishingElement:(id)arg0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformRelativeIncludingViewportForTransformableOrViewportEstablishingElement:(id)arg0;
+ (struct CGColor { } *)parseFillForElement:(id)arg0 fromFill:(id)arg1 andOpacity:(id)arg2;
+ (struct CGColor { } *)parseFillForElement:(id)arg0;
+ (void)parsePreserveAspectRatioFor:(id)arg0;
+ (void)configureCALayer:(id)arg0 usingElement:(id)arg1;

@end
