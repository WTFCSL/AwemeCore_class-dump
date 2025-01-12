//
//     Generated by private class-dump
//

@class UIColor, NSString;

@interface BDXMapKitPolygonPointAnnotationModel : NSObject <MKAnnotation> {
    BOOL _isVertex;
    UIColor *_fillColor;
    UIColor *_strokeColor;
    double _lineWidth;
    double _annotationViewWH;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _coordinate;
    struct CGPoint { double x; double y; } _point;
}

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) struct CGPoint { double x; double y; } point;
@property BOOL isVertex;
@property (retain) UIColor *fillColor;
@property (retain) UIColor *strokeColor;
@property double lineWidth;
@property (nonatomic) double annotationViewWH;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsVertex:(BOOL)arg0;
- (id)changeToVertexPoint;
- (void)setAnnotationViewWH:(double)arg0;
- (double)annotationViewWH;
- (id)init;
- (void)setFillColor:(id)arg0;
- (void).cxx_destruct;
- (id)strokeColor;
- (struct CGPoint { double x0; double x1; })point;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })arg0;
- (double)lineWidth;
- (void)setStrokeColor:(id)arg0;
- (void)setLineWidth:(double)arg0;
- (id)fillColor;
- (struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (void)setPoint:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)isVertex;

@end
