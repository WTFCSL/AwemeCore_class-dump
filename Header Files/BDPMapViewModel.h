//
//     Generated by private class-dump
//

@class NSArray, BDPMapIncludePointsModel, NSString, BDPMapPointModel;

@interface BDPMapViewModel : BDPBasePluginModel {
    BOOL _showLocation;
    BOOL _showCompass;
    BOOL _showScale;
    BOOL _enableOverlooking;
    BOOL _enableRotate;
    BOOL _enable3D;
    BOOL _enableZoom;
    BOOL _enableSatellite;
    BOOL _enableTraffic;
    BOOL _enablePoi;
    BOOL _enableBuilding;
    BOOL _enableScroll;
    BDPMapPointModel *_point;
    double _width;
    double _height;
    double _scale;
    double _minScale;
    double _maxScale;
    double _rotate;
    double _skew;
    NSArray *_markers;
    NSArray *_circles;
    NSArray *_polyline;
    NSArray *_polygons;
    BDPMapIncludePointsModel *_includePoints;
    NSString *_data;
}

@property (copy, nonatomic) BDPMapPointModel *point;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double scale;
@property (nonatomic) double minScale;
@property (nonatomic) double maxScale;
@property (nonatomic) double rotate;
@property (nonatomic) double skew;
@property (copy, nonatomic) NSArray *markers;
@property (copy, nonatomic) NSArray *circles;
@property (copy, nonatomic) NSArray *polyline;
@property (copy, nonatomic) NSArray *polygons;
@property (copy, nonatomic) BDPMapIncludePointsModel *includePoints;
@property (nonatomic) BOOL showLocation;
@property (nonatomic) BOOL showCompass;
@property (nonatomic) BOOL showScale;
@property (nonatomic) BOOL enableOverlooking;
@property (nonatomic) BOOL enableRotate;
@property (nonatomic) BOOL enable3D;
@property (nonatomic) BOOL enableZoom;
@property (nonatomic) BOOL enableSatellite;
@property (nonatomic) BOOL enableTraffic;
@property (nonatomic) BOOL enablePoi;
@property (nonatomic) BOOL enableBuilding;
@property (nonatomic) BOOL enableScroll;
@property (copy, nonatomic) NSString *data;

+ (id)modelContainerPropertyGenericClass;

- (id)modelCustomWillTransformFromDictionary:(id)arg0;
- (BOOL)modelCustomTransformFromDictionary:(id)arg0;
- (void)setEnableScroll:(BOOL)arg0;
- (BOOL)enableRotate;
- (BOOL)enableScroll;
- (BOOL)showLocation;
- (void)setShowLocation:(BOOL)arg0;
- (void)setSkew:(double)arg0;
- (id)circles;
- (void)setCircles:(id)arg0;
- (id)includePoints;
- (void)setIncludePoints:(id)arg0;
- (BOOL)showCompass;
- (void)setShowCompass:(BOOL)arg0;
- (void)setShowScale:(BOOL)arg0;
- (BOOL)enableOverlooking;
- (void)setEnableOverlooking:(BOOL)arg0;
- (void)setEnableRotate:(BOOL)arg0;
- (BOOL)enable3D;
- (void)setEnable3D:(BOOL)arg0;
- (void)setEnableZoom:(BOOL)arg0;
- (BOOL)enableSatellite;
- (void)setEnableSatellite:(BOOL)arg0;
- (BOOL)enablePoi;
- (void)setEnablePoi:(BOOL)arg0;
- (BOOL)enableBuilding;
- (void)setEnableBuilding:(BOOL)arg0;
- (id)polygons;
- (double)maxScale;
- (id)init;
- (id)data;
- (void).cxx_destruct;
- (double)height;
- (id)point;
- (void)setData:(id)arg0;
- (double)scale;
- (void)setMaxScale:(double)arg0;
- (void)setWidth:(double)arg0;
- (void)setHeight:(double)arg0;
- (double)width;
- (void)setScale:(double)arg0;
- (double)minScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setPoint:(id)arg0;
- (BOOL)enableTraffic;
- (void)setEnableTraffic:(BOOL)arg0;
- (id)polyline;
- (void)setPolygons:(id)arg0;
- (double)rotate;
- (void)setRotate:(double)arg0;
- (id)markers;
- (void)setMarkers:(id)arg0;
- (void)setMinScale:(double)arg0;
- (double)skew;
- (BOOL)showScale;
- (void)setPolyline:(id)arg0;
- (BOOL)enableZoom;

@end
