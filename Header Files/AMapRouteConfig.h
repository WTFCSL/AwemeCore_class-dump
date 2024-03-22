//
//     Generated by private class-dump
//

@class NSString;

@interface AMapRouteConfig : NSObject {
    NSString *_appScheme;
    NSString *_appName;
    long long _drivingStrategy;
    long long _transitStrategy;
    long long _routeType;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _startCoordinate;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _destinationCoordinate;
}

@property (copy, nonatomic) NSString *appScheme;
@property (copy, nonatomic) NSString *appName;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } startCoordinate;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } destinationCoordinate;
@property (nonatomic) long long drivingStrategy;
@property (nonatomic) long long transitStrategy;
@property (nonatomic) long long routeType;

- (id)appScheme;
- (void)setAppScheme:(id)arg0;
- (long long)drivingStrategy;
- (long long)transitStrategy;
- (void)setDestinationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })arg0;
- (void)setDrivingStrategy:(long long)arg0;
- (void)setTransitStrategy:(long long)arg0;
- (void)setAppName:(id)arg0;
- (id)appName;
- (long long)routeType;
- (void).cxx_destruct;
- (id)description;
- (void)setRouteType:(long long)arg0;
- (struct CLLocationCoordinate2D { double x0; double x1; })startCoordinate;
- (void)setStartCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })arg0;
- (struct CLLocationCoordinate2D { double x0; double x1; })destinationCoordinate;

@end
