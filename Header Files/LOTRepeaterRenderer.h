//
//     Generated by private class-dump
//

@class LOTNumberInterpolator, CALayer, CAReplicatorLayer, LOTTransformInterpolator;

@interface LOTRepeaterRenderer : LOTRenderNode {
    LOTTransformInterpolator *_transformInterpolator;
    LOTNumberInterpolator *_copiesInterpolator;
    LOTNumberInterpolator *_offsetInterpolator;
    LOTNumberInterpolator *_startOpacityInterpolator;
    LOTNumberInterpolator *_endOpacityInterpolator;
    CALayer *_instanceLayer;
    CAReplicatorLayer *_replicatorLayer;
    CALayer *centerPoint_DEBUG;
}

- (BOOL)needsUpdateForFrame:(id)arg0;
- (void)performLocalUpdate;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)arg0 shapeRepeater:(id)arg1;
- (void)recursivelyAddChildLayers:(id)arg0;
- (void).cxx_destruct;

@end