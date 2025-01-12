//
//     Generated by private class-dump
//

@class NSString, CLLocationManager;

@interface TMLocationPermissionHandler : TMPrivacyPermissionHandler <CLLocationManagerDelegate> {
    int _locationAuthorizationStatus;
    CLLocationManager *_locationManager;
}

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (nonatomic) int locationAuthorizationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)permissionState;
- (id)permssionType;
- (id)init;
- (void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1;
- (void).cxx_destruct;
- (void)setLocationManager:(id)arg0;
- (int)locationAuthorizationStatus;
- (id)locationManager;
- (void)locationManagerDidChangeAuthorization:(id)arg0;
- (void)setLocationAuthorizationStatus:(int)arg0;

@end
