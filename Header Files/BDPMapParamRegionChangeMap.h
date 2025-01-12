//
//     Generated by private class-dump
//

@class BDPMapRegion;

@interface BDPMapParamRegionChangeMap : BDPBasePluginModel {
    double _rotate;
    double _skew;
    double _scale;
    BDPMapRegion *_region;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _centerLocation;
}

@property (nonatomic) double rotate;
@property (nonatomic) double skew;
@property (nonatomic) double scale;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } centerLocation;
@property (copy, nonatomic) BDPMapRegion *region;

- (void)setSkew:(double)arg0;
- (id)region;
- (void)setRegion:(id)arg0;
- (void).cxx_destruct;
- (double)scale;
- (void)setScale:(double)arg0;
- (double)rotate;
- (void)setRotate:(double)arg0;
- (struct CLLocationCoordinate2D { double x0; double x1; })centerLocation;
- (void)setCenterLocation:(struct CLLocationCoordinate2D { double x0; double x1; })arg0;
- (double)skew;

@end
