//
//     Generated by private class-dump
//

@class LOTNumberInterpolator, NSArray, NSDictionary, LOTAnimationView, CALayer, NSNumber, NSMutableDictionary;

@interface LOTCompositionContainer : LOTLayerContainer {
    NSNumber *_frameOffset;
    CALayer *DEBUG_Center;
    NSMutableDictionary *_keypathCache;
    LOTNumberInterpolator *_timeInterpolator;
    NSArray *_childLayers;
    NSDictionary *_childMap;
    long long _asyncLoadingCount;
    LOTAnimationView *_referencedAnimationView;
}

@property (readonly, nonatomic) NSArray *childLayers;
@property (readonly, nonatomic) NSDictionary *childMap;
@property (nonatomic) long long asyncLoadingCount;
@property (weak, nonatomic) LOTAnimationView *referencedAnimationView;

- (void)setReferencedAnimationView:(id)arg0;
- (id)initWithModel:(id)arg0 inLayerGroup:(id)arg1 withLayerGroup:(id)arg2 withAssestGroup:(id)arg3;
- (long long)asyncLoadingCount;
- (id)keysForKeyPath:(id)arg0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })arg0 toKeypathLayer:(id)arg1 withParentLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 toKeypathLayer:(id)arg1 withParentLayer:(id)arg2;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })arg0 fromKeypathLayer:(id)arg1 withParentLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 fromKeypathLayer:(id)arg1 withParentLayer:(id)arg2;
- (void)addSublayer:(id)arg0 toKeypathLayer:(id)arg1;
- (void)maskSublayer:(id)arg0 toKeypathLayer:(id)arg1;
- (id)childMap;
- (void)displayWithFrame:(id)arg0 forceUpdate:(BOOL)arg1;
- (void)setViewportBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)searchNodesForKeypath:(id)arg0;
- (void)setValueDelegate:(id)arg0 forKeypath:(id)arg1;
- (id)referencedAnimationView;
- (void)initializeWithChildGroup:(id)arg0 withAssetGroup:(id)arg1;
- (void)setAsyncLoadingCount:(long long)arg0;
- (id)_layerForKeypath:(id)arg0;
- (void)perf_analysis_displayWithFrame:(id)arg0 forceUpdate:(BOOL)arg1;
- (double)lastCheckHiddenTime;
- (void)setLastCheckHiddenTime:(double)arg0;
- (double)lastCheckInScreenTime;
- (void)setLastCheckInScreenTime:(double)arg0;
- (void).cxx_destruct;
- (id)childLayers;

@end
