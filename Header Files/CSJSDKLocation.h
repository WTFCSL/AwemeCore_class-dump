//
//     Generated by private class-dump
//

@class NSString, CLLocationManager, NSDate, NSNumber;

@interface CSJSDKLocation : NSObject <CLLocationManagerDelegate> {
    NSNumber *_latitude;
    NSNumber *_longitude;
    CLLocationManager *_locationManager;
    NSDate *_latestUpdateTimestamp;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _latestLocation;
}

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) NSDate *latestUpdateTimestamp;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } latestLocation;
@property (retain) NSNumber *latitude;
@property (retain) NSNumber *longitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)locationService;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;

- (void)requestLatestStatus;
- (id)downNumber:(double)arg0;
- (BOOL)serviceEnable;
- (void)asyncStartUpdate;
- (void)setLatestUpdateTimestamp:(id)arg0;
- (id)latestUpdateTimestamp;
- (void)setLongitude:(id)arg0;
- (id)longitude;
- (id)latitude;
- (void)setLatitude:(id)arg0;
- (void).cxx_destruct;
- (void)locationManager:(id)arg0 didFailWithError:(id)arg1;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setLocationManager:(id)arg0;
- (void)setLatestLocation:(struct CLLocationCoordinate2D { double x0; double x1; })arg0;
- (id)locationManager;
- (struct CLLocationCoordinate2D { double x0; double x1; })latestLocation;
- (void)locationManager:(id)arg0 didUpdateLocations:(id)arg1;

@end
