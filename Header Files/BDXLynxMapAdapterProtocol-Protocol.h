//
//     Generated by private class-dump
//

@class NSArray, BDXLynxMapVisibleRectModel, LynxUIContext, BDXLynxMapAnnotationModel;

@protocol BDXLynxMapAdapterProtocol <NSObject>

@property (weak, nonatomic) LynxUIContext *context;
@property (nonatomic) long long sign;
@property (nonatomic) unsigned long long mapType;
@property (copy, nonatomic) NSArray *districtData;
@property (copy, nonatomic) NSArray *circleData;
@property (copy, nonatomic) NSArray *polygonData;
@property (copy, nonatomic) NSArray *areaHeatData;
@property (copy, nonatomic) NSArray *lineData;
@property (copy, nonatomic) NSArray *annotationData;
@property (copy, nonatomic) NSArray *multiPointData;
@property (copy, nonatomic) NSArray *tileHeatData;
@property (nonatomic) BOOL shouldZoomCallback;
@property (nonatomic) BOOL shouldViewDrawCallback;
@property (nonatomic) BOOL shouldSelectAnnotationCallback;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } centerCoordinate;
@property (nonatomic) double zoomLevel;
@property (copy, nonatomic) BDXLynxMapVisibleRectModel *visibleRectData;
@property (nonatomic) BOOL needsUserLocationHeading;
@property (retain, nonatomic) BDXLynxMapAnnotationModel *userLocationData;
@property (nonatomic) BOOL zoomEnabled;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) BOOL rotateEnabled;
@property (nonatomic) BOOL pitchEnabled;
@property (nonatomic) BOOL showsPointsOfInterest;
@property (nonatomic) BOOL showsBuildings;
@property (nonatomic) BOOL showsTraffic;
@property (nonatomic) BOOL enableAnnotationContentCollision;
@property (nonatomic) double collisionPercent;

- (long long)sign;
- (void)setSign:(long long)arg0;
- (void)layoutDidFinished;
- (void)setVisibleRectData:(id)arg0;
- (void)setEnableAnnotationContentCollision:(BOOL)arg0;
- (void)setCollisionPercent:(double)arg0;
- (void)setShouldViewDrawCallback:(BOOL)arg0;
- (void)setShouldZoomCallback:(BOOL)arg0;
- (void)setShouldSelectAnnotationCallback:(BOOL)arg0;
- (void)setDistrictData:(id)arg0;
- (void)setAreaHeatData:(id)arg0;
- (void)setAnnotationData:(id)arg0;
- (void)setMultiPointData:(id)arg0;
- (void)setTileHeatData:(id)arg0;
- (void)setLineData:(id)arg0;
- (void)setCircleData:(id)arg0;
- (void)setPolygonData:(id)arg0;
- (void)setZoomLevel:(double)arg0 animated:(BOOL)arg1;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })arg0 zoomLevel:(double)arg1 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg2 animated:(BOOL)arg3;
- (void)setVisibleRectData:(id)arg0 animated:(BOOL)arg1;
- (struct CLLocationCoordinate2D { double x0; double x1; })getMapViewCenterCoordinate;
- (struct CLLocationCoordinate2D { double x0; double x1; } *)visibleRectVertexCoordinates;
- (struct CLLocationCoordinate2D { double x0; double x1; } *)visibleRectVertexCoordinatesWithEdgePadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setNeedsUserLocationHeading:(BOOL)arg0;
- (void)setUserLocationData:(id)arg0;
- (void)updateAnnotations:(id)arg0 withType:(unsigned long long)arg1;
- (void)updateLines:(id)arg0 params:(id)arg1 withType:(unsigned long long)arg2;
- (void)updateCircles:(id)arg0 withType:(unsigned long long)arg1;
- (void)updatePolygons:(id)arg0 withType:(unsigned long long)arg1;
- (void)selectAnnotationWithIdentifier:(id)arg0;
- (void)deselectAnnotationWithIdentifier:(id)arg0;
- (void)startAnnotationAnimation:(id)arg0;
- (void)startEditPolygonWithIdentifier:(id)arg0;
- (void)stopEditPolygonWithIdentifier:(id)arg0;
- (id)getPolygonPointsWithIdentifier:(id)arg0;
- (BOOL)needsUserLocationHeading;
- (BOOL)enableAnnotationContentCollision;
- (BOOL)shouldSelectAnnotationCallback;
- (id)userLocationData;
- (double)collisionPercent;
- (BOOL)shouldViewDrawCallback;
- (BOOL)shouldZoomCallback;
- (id)districtData;
- (id)circleData;
- (id)polygonData;
- (id)areaHeatData;
- (id)lineData;
- (id)annotationData;
- (id)multiPointData;
- (id)tileHeatData;
- (id)visibleRectData;
- (BOOL)zoomEnabled;
- (BOOL)showsBuildings;
- (void)setZoomEnabled:(BOOL)arg0;
- (struct CLLocationCoordinate2D { double x0; double x1; })centerCoordinate;
- (void)setScrollEnabled:(BOOL)arg0;
- (void)setMapType:(unsigned long long)arg0;
- (BOOL)scrollEnabled;
- (void)setShowsPointsOfInterest:(BOOL)arg0;
- (unsigned long long)mapType;
- (void)setContext:(id)arg0;
- (void)setZoomLevel:(double)arg0;
- (BOOL)showsTraffic;
- (double)zoomLevel;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })arg0;
- (id)context;
- (void)setShowsTraffic:(BOOL)arg0;
- (void)setShowsBuildings:(BOOL)arg0;
- (BOOL)showsPointsOfInterest;
- (void)setRotateEnabled:(BOOL)arg0;
- (void)setPitchEnabled:(BOOL)arg0;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })arg0 animated:(BOOL)arg1;
- (BOOL)rotateEnabled;
- (BOOL)pitchEnabled;
- (id)createView;

@end