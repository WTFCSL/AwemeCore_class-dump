//
//     Generated by private class-dump
//

@class NSString, CSSStyleDeclaration;

@interface BaseClassForAllSVGBasicShapes : SVGElement <SVGStylable, SVGTransformable, ConverterSVGToCALayer> {
    NSString *_styleClass;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _layerRect;
    struct CGPath { } *_pathForShapeInRelativeCoords;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
}

@property (nonatomic) struct CGPath { } *pathForShapeInRelativeCoords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *className;
@property (retain, nonatomic) CSSStyleDeclaration *style;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;

- (void)setPathForShapeInRelativeCoords:(struct CGPath { } *)arg0;
- (struct CGPath { } *)pathForShapeInRelativeCoords;
- (void)layoutLayer:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void)dealloc;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (id)newLayer;

@end
