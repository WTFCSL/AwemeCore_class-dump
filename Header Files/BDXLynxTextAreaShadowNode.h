//
//     Generated by private class-dump
//

@class NSString;

@interface BDXLynxTextAreaShadowNode : LynxCustomMeasureShadowNode <LynxCustomMeasureDelegate> {
    double _minHeight;
    double _maxHeight;
    BOOL _needRelayout;
    BOOL _isAutoSize;
    double _mHeightAtMost;
    double _mWidthAtMost;
}

@property (nonatomic) BOOL needRelayout;
@property (readonly, nonatomic) BOOL isAutoSize;
@property (nonatomic) double mHeightAtMost;
@property (nonatomic) double mWidthAtMost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__561;
+ (id)__lynx_prop_config__652;

- (void)adoptNativeLayoutNode:(long long)arg0;
- (BOOL)needRelayout;
- (void)setNeedRelayout:(BOOL)arg0;
- (BOOL)updateSizeIfNeeded;
- (id)initWithSign:(long long)arg0 tagName:(id)arg1;
- (void)customAlignLayoutNode:(id)arg0 alignContext:(id)arg1;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })customMeasureLayoutNode:(id)arg0 measureContext:(id)arg1;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })measureWithMeasureParam:(id)arg0 MeasureContext:(id)arg1;
- (void)alignWithAlignParam:(id)arg0 AlignContext:(id)arg1;
- (double)mHeightAtMost;
- (void)setMHeightAtMost:(double)arg0;
- (double)mWidthAtMost;
- (void)setMWidthAtMost:(double)arg0;
- (double)floatWithNSStr:(id)arg0;
- (void)setMinHeight:(id)arg0 requestReset:(BOOL)arg1;
- (void)setMaxHeight:(id)arg0 requestReset:(BOOL)arg1;
- (BOOL)isAutoSize;

@end
