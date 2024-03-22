//
//     Generated by private class-dump
//

@class CALayer, LOTNumberInterpolator, LOTColorInterpolator;

@interface LOTFillRenderer : LOTRenderNode {
    LOTColorInterpolator *colorInterpolator_;
    LOTNumberInterpolator *opacityInterpolator_;
    BOOL _evenOddFillRule;
    CALayer *centerPoint_DEBUG;
}

- (BOOL)needsUpdateForFrame:(id)arg0;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)arg0 shapeFill:(id)arg1;
- (id)actionsForRenderLayer;
- (void).cxx_destruct;

@end