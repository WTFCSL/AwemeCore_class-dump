//
//     Generated by private class-dump
//

@class LOTShapePath, LOTPathInterpolator;

@interface LOTPathAnimator : LOTAnimatorNode {
    LOTShapePath *_pathConent;
    LOTPathInterpolator *_interpolator;
}

- (BOOL)needsUpdateForFrame:(id)arg0;
- (void)performLocalUpdate;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)arg0 shapePath:(id)arg1;
- (void).cxx_destruct;

@end
