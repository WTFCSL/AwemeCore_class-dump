//
//     Generated by private class-dump
//

@interface BDPMapRegion : BDPBasePluginModel {
    struct CLLocationCoordinate2D { double latitude; double longitude; } _southwest;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _northeast;
}

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } southwest;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } northeast;

- (struct CLLocationCoordinate2D { double x0; double x1; })southwest;
- (struct CLLocationCoordinate2D { double x0; double x1; })northeast;
- (void)setSouthwest:(struct CLLocationCoordinate2D { double x0; double x1; })arg0;
- (void)setNortheast:(struct CLLocationCoordinate2D { double x0; double x1; })arg0;

@end
