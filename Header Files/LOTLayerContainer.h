//
//     Generated by private class-dump
//

@class NSString, LOTMaskContainer, LOTRenderGroup, CALayer, LOTTransformInterpolator, NSDictionary, LOTNumberInterpolator, NSNumber;

@interface LOTLayerContainer : CALayer {
    LOTTransformInterpolator *_transformInterpolator;
    LOTNumberInterpolator *_opacityInterpolator;
    NSNumber *_inFrame;
    NSNumber *_outFrame;
    CALayer *DEBUG_Center;
    LOTRenderGroup *_contentsGroup;
    LOTMaskContainer *_maskLayer;
    BOOL _asyncLoadingResource;
    NSString *_layerName;
    NSNumber *_timeStretchFactor;
    CALayer *_wrapperLayer;
    NSDictionary *_valueInterpolators;
    id /* block */ _asyncLoadingCallback;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _viewportBounds;
}

@property (readonly, nonatomic) NSString *layerName;
@property (retain, nonatomic) NSNumber *currentFrame;
@property (readonly, nonatomic) NSNumber *timeStretchFactor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewportBounds;
@property (readonly, nonatomic) CALayer *wrapperLayer;
@property (readonly, nonatomic) NSDictionary *valueInterpolators;
@property (nonatomic) BOOL asyncLoadingResource;
@property (copy, nonatomic) id /* block */ asyncLoadingCallback;

+ (BOOL)needsDisplayForKey:(id)arg0;

- (id)currentFrame;
- (void)setCurrentFrame:(id)arg0;
- (void)setAsyncLoadingCallback:(id /* block */)arg0;
- (void)displayWithFrame:(id)arg0 forceUpdate:(BOOL)arg1;
- (void)setViewportBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)searchNodesForKeypath:(id)arg0;
- (id)valueInterpolators;
- (void)setValueDelegate:(id)arg0 forKeypath:(id)arg1;
- (void)commonInitializeWith:(id)arg0 inLayerGroup:(id)arg1;
- (void)_setImageForAsset:(id)arg0;
- (void)buildContents:(id)arg0;
- (void)setAsyncLoadingResource:(BOOL)arg0;
- (id)wrapperLayer;
- (id /* block */)asyncLoadingCallback;
- (void)displayWithFrame:(id)arg0;
- (id)timeStretchFactor;
- (id)initWithModel:(id)arg0 inLayerGroup:(id)arg1;
- (BOOL)asyncLoadingResource;
- (void).cxx_destruct;
- (id)initWithLayer:(id)arg0;
- (void)display;
- (id)layerName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewportBounds;
- (id)actionForKey:(id)arg0;

@end
