//
//     Generated by private class-dump
//

@class SVGLength, NSString, SVGViewSpec, SVGKSource, StyleSheetList, SVGAnimatedPreserveAspectRatio;

@interface SVGSVGElement : SVGElement <DocumentCSS, SVGFitToViewBox, ConverterSVGToCALayer> {
    BOOL useCurrentView;
    float pixelUnitToMillimeterX;
    float pixelUnitToMillimeterY;
    float screenPixelToMillimeterX;
    float screenPixelToMillimeterY;
    float currentScale;
    SVGLength *x;
    SVGLength *y;
    SVGLength *width;
    SVGLength *height;
    NSString *contentScriptType;
    NSString *contentStyleType;
    SVGViewSpec *currentView;
    SVGKSource *source;
    SVGAnimatedPreserveAspectRatio *preserveAspectRatio;
    StyleSheetList *styleSheets;
    struct { float x; float y; float width; float height; } viewport;
    struct { float x; float y; float width; float height; } _viewBox;
    struct { float x; float y; float width; float height; } _requestedViewport;
}

@property (nonatomic) struct { float x; float y; float width; float height; } requestedViewport;
@property (retain, nonatomic) SVGLength *x;
@property (retain, nonatomic) SVGLength *y;
@property (retain, nonatomic) SVGLength *width;
@property (retain, nonatomic) SVGLength *height;
@property (retain, nonatomic) NSString *contentScriptType;
@property (retain, nonatomic) NSString *contentStyleType;
@property (nonatomic) struct { float x; float y; float width; float height; } viewport;
@property (nonatomic) float pixelUnitToMillimeterX;
@property (nonatomic) float pixelUnitToMillimeterY;
@property (nonatomic) float screenPixelToMillimeterX;
@property (nonatomic) float screenPixelToMillimeterY;
@property (nonatomic) BOOL useCurrentView;
@property (retain, nonatomic) SVGViewSpec *currentView;
@property (nonatomic) float currentScale;
@property (retain, nonatomic) SVGKSource *source;
@property (readonly) double aspectRatioFromWidthPerHeight;
@property (readonly) double aspectRatioFromViewBox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) StyleSheetList *styleSheets;
@property (nonatomic) struct { float x; float y; float width; float height; } viewBox;
@property (retain, nonatomic) SVGAnimatedPreserveAspectRatio *preserveAspectRatio;

- (void)layoutLayer:(id)arg0;
- (struct { float x0; float x1; float x2; float x3; })viewBox;
- (void)setViewBox:(struct { float x0; float x1; float x2; float x3; })arg0;
- (void)postProcessAttributesAddingErrorsTo:(id)arg0;
- (void)setRequestedViewport:(struct { float x0; float x1; float x2; float x3; })arg0;
- (struct { float x0; float x1; float x2; float x3; })requestedViewport;
- (id)getOverrideStyle:(id)arg0 pseudoElt:(id)arg1;
- (id)preserveAspectRatio;
- (void)setPreserveAspectRatio:(id)arg0;
- (id)createSVGLength;
- (struct { float x0; float x1; float x2; float x3; })createSVGRect;
- (id)findFirstElementOfClass:(Class)arg0;
- (double)aspectRatioFromWidthPerHeight;
- (double)aspectRatioFromViewBox;
- (id)contentScriptType;
- (void)setContentScriptType:(id)arg0;
- (id)contentStyleType;
- (void)setContentStyleType:(id)arg0;
- (float)pixelUnitToMillimeterX;
- (void)setPixelUnitToMillimeterX:(float)arg0;
- (float)pixelUnitToMillimeterY;
- (void)setPixelUnitToMillimeterY:(float)arg0;
- (float)screenPixelToMillimeterX;
- (void)setScreenPixelToMillimeterX:(float)arg0;
- (float)screenPixelToMillimeterY;
- (void)setScreenPixelToMillimeterY:(float)arg0;
- (BOOL)useCurrentView;
- (void)setUseCurrentView:(BOOL)arg0;
- (void)loadDefaults;
- (id)styleSheets;
- (void)setStyleSheets:(id)arg0;
- (void)setViewport:(struct { float x0; float x1; float x2; float x3; })arg0;
- (struct { float x0; float x1; float x2; float x3; })viewport;
- (id)source;
- (void).cxx_destruct;
- (id)height;
- (void)setY:(id)arg0;
- (id)y;
- (id)x;
- (void)setX:(id)arg0;
- (void)setWidth:(id)arg0;
- (void)setSource:(id)arg0;
- (void)setHeight:(id)arg0;
- (void)dealloc;
- (id)width;
- (float)currentScale;
- (void)setCurrentScale:(float)arg0;
- (id)getElementById:(id)arg0;
- (id)currentView;
- (void)setCurrentView:(id)arg0;
- (id)newLayer;

@end
