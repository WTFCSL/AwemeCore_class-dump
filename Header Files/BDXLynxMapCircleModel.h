//
//     Generated by private class-dump
//

@interface BDXLynxMapCircleModel : BDXLynxMapBridgeModel {
    double _radius;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _coordinate;
}

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) double radius;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (double)radius;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })arg0;
- (void)setRadius:(double)arg0;
- (struct CLLocationCoordinate2D { double x0; double x1; })coordinate;

@end