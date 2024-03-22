//
//     Generated by private class-dump
//

@interface LynxSwiperShadowNode : LynxCustomMeasureShadowNode {
    BOOL _compatible;
    BOOL _vertical;
    double _previousMargin;
    double _nextMargin;
    double _itemSpacing;
    double _itemHeight;
    double _itemWidth;
    double _xScale;
    double _yScale;
    unsigned long long _layoutType;
}

@property (nonatomic) double previousMargin;
@property (nonatomic) double nextMargin;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double itemHeight;
@property (nonatomic) double itemWidth;
@property (nonatomic) double xScale;
@property (nonatomic) double yScale;
@property (nonatomic) BOOL compatible;
@property (nonatomic) BOOL vertical;
@property (nonatomic) unsigned long long layoutType;

+ (id)__lynx_prop_config__552;
+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__441;
+ (id)__lynx_prop_config__14610;
+ (id)__lynx_prop_config__946;
+ (id)__lynx_prop_config__663;
+ (id)__lynx_prop_config__774;
+ (id)__lynx_prop_config__855;
+ (id)__lynx_prop_config__1057;
+ (id)__lynx_prop_config__1158;
+ (id)__lynx_prop_config__1389;

- (id)initWithSign:(long long)arg0 tagName:(id)arg1;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })measureWithMeasureParam:(id)arg0 MeasureContext:(id)arg1;
- (void)alignWithAlignParam:(id)arg0 AlignContext:(id)arg1;
- (double)previousMargin;
- (void)setPreviousMargin:(double)arg0;
- (double)nextMargin;
- (void)setNextMargin:(double)arg0;
- (void)setCompatible:(BOOL)arg0;
- (void)swiperMode:(id)arg0 requestReset:(BOOL)arg1;
- (void)itemWidth:(id)arg0 requestReset:(BOOL)arg1;
- (void)itemHeight:(id)arg0 requestReset:(BOOL)arg1;
- (void)pageMargin:(id)arg0 requestReset:(BOOL)arg1;
- (void)previousMargin:(id)arg0 requestReset:(BOOL)arg1;
- (void)nextMargin:(id)arg0 requestReset:(BOOL)arg1;
- (void)minXScale:(id)arg0 requestReset:(BOOL)arg1;
- (void)minYScale:(id)arg0 requestReset:(BOOL)arg1;
- (void)vertical:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)markCompatible:(BOOL)arg0 requestReset:(BOOL)arg1;
- (unsigned long long)layoutType;
- (void)setLayoutType:(unsigned long long)arg0;
- (double)itemSpacing;
- (void)setItemSpacing:(double)arg0;
- (void)setItemWidth:(double)arg0;
- (void)setVertical:(BOOL)arg0;
- (double)itemWidth;
- (BOOL)vertical;
- (double)itemHeight;
- (BOOL)compatible;
- (double)xScale;
- (void)setXScale:(double)arg0;
- (double)yScale;
- (void)setYScale:(double)arg0;
- (void)setItemHeight:(double)arg0;

@end