//
//     Generated by private class-dump
//

@class MKMapView;

@interface BDXMapKitPolylineRenderer : MKOverlayPathRenderer {
    MKMapView *_mapView;
    double _prevZoomScale;
}

@property (weak, nonatomic) MKMapView *mapView;
@property (nonatomic) double prevZoomScale;

- (double)prevZoomScale;
- (void)setPrevZoomScale:(double)arg0;
- (struct CGPath { } *)constructPath;
- (void).cxx_destruct;
- (void)setMapView:(id)arg0;
- (id)mapView;
- (void)drawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })arg0 zoomScale:(double)arg1 inContext:(struct CGContext { } *)arg2;

@end
