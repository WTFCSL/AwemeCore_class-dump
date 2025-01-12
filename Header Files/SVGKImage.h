//
//     Generated by private class-dump
//

@class SVGSVGElement, NSString, UIImage, SVGKSource, SVGDocument, SVGKParseResult, CALayer;

@interface SVGKImage : NSObject {
    BOOL cameFromGlobalCache;
    SVGDocument *DOMDocument;
    SVGSVGElement *DOMTree;
    CALayer *CALayerTree;
    double _scale;
    SVGKSource *source;
    SVGKParseResult *parseErrorsAndWarnings;
    NSString *_nameUsedToInstantiate;
    struct CGSize { double width; double height; } _internalSizeThatWasSetExplicitlyByUser;
}

@property (nonatomic) struct CGSize { double width; double height; } internalSizeThatWasSetExplicitlyByUser;
@property (retain, nonatomic) SVGKParseResult *parseErrorsAndWarnings;
@property (retain, nonatomic) SVGKSource *source;
@property (retain, nonatomic) SVGDocument *DOMDocument;
@property (retain, nonatomic) SVGSVGElement *DOMTree;
@property (retain, nonatomic) CALayer *CALayerTree;
@property (retain, nonatomic) NSString *nameUsedToInstantiate;
@property (readonly, weak, nonatomic) UIImage *UIImage;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) double scale;

+ (void)didReceiveMemoryWarningOrBackgroundNotification:(id)arg0;
+ (id)imageWithSource:(id)arg0 onCompletion:(id /* block */)arg1;
+ (id)imageWithSource:(id)arg0;
+ (void)initialize;
+ (id)imageWithContentsOfFile:(id)arg0;
+ (id)imageWithContentsOfURL:(id)arg0;

- (struct CGContext { } *)newCGContextAutosizedToFit;
- (void)renderToContext:(struct CGContext { } *)arg0 antiAliased:(BOOL)arg1 curveFlatnessFactor:(double)arg2 interpolationQuality:(int)arg3 flipYaxis:(BOOL)arg4;
- (id)parseErrorsAndWarnings;
- (id)initWithParsedSVG:(id)arg0 fromSource:(id)arg1;
- (void)setNameUsedToInstantiate:(id)arg0;
- (void)setCALayerTree:(id)arg0;
- (void)setParseErrorsAndWarnings:(id)arg0;
- (void)setDOMDocument:(id)arg0;
- (void)setDOMTree:(id)arg0;
- (id)nameUsedToInstantiate;
- (struct CGSize { double x0; double x1; })internalSizeThatWasSetExplicitlyByUser;
- (id)DOMTree;
- (void)setInternalSizeThatWasSetExplicitlyByUser:(struct CGSize { double x0; double x1; })arg0;
- (id)CALayerTree;
- (id)layerWithIdentifier:(id)arg0 layer:(id)arg1;
- (id)newCopyPositionedAbsoluteOfLayer:(id)arg0;
- (id)newCopyPositionedAbsoluteOfLayer:(id)arg0 withSubLayers:(BOOL)arg1;
- (BOOL)isElementVisible:(id)arg0;
- (id)newLayerWithElement:(id)arg0;
- (id)newCALayerTree;
- (void)addSVGLayerTree:(id)arg0 withIdentifier:(id)arg1 toDictionary:(id)arg2;
- (id)newCopyPositionedAbsoluteLayerWithIdentifier:(id)arg0;
- (id)dictionaryOfLayers;
- (void)scaleToFitInside:(struct CGSize { double x0; double x1; })arg0;
- (id)initWithSource:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (void)renderInContext:(struct CGContext { } *)arg0;
- (double)scale;
- (BOOL)hasSize;
- (struct CGSize { double x0; double x1; })size;
- (void)setSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setSource:(id)arg0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (void)setScale:(double)arg0;
- (id)DOMDocument;
- (id)UIImage;
- (id)layerWithIdentifier:(id)arg0;

@end
