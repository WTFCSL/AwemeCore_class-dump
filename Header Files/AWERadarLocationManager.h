//
//     Generated by private class-dump
//

@class AWERadarLocation, AWELocationDisposable;

@interface AWERadarLocationManager : NSObject {
    AWERadarLocation *_location;
    AWERadarLocation *_groupLocation;
    AWELocationDisposable *_disposable;
    AWELocationDisposable *_groupDisposable;
}

@property (retain, nonatomic) AWERadarLocation *location;
@property (retain, nonatomic) AWERadarLocation *groupLocation;
@property (retain, nonatomic) AWELocationDisposable *disposable;
@property (retain, nonatomic) AWELocationDisposable *groupDisposable;

+ (BOOL)isValidLatitude:(double)arg0;
+ (BOOL)isValidLongitude:(double)arg0;
+ (void)showLocationAuthAlert:(BOOL)arg0 trackParams:(id)arg1 descriptionContent:(id)arg2 completion:(id /* block */)arg3 cancelBlock:(id /* block */)arg4;
+ (BOOL)clearLocationCacheWhenStopUpdate;
+ (void)trackLocationAuthAction:(BOOL)arg0 insideRadar:(BOOL)arg1 trackParams:(id)arg2;
+ (void)trackLocationAuthViewShow:(BOOL)arg0 trackParams:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)__trackEvent:(id)arg0 params:(id)arg1;
- (void)stopUpdateLocation;
- (void)startUpdateLocationGroup;
- (void)stopUpdateLocationGroup;
- (void)requestBluetoothLocationInGroup:(BOOL)arg0;
- (id)transLocation:(id)arg0;
- (id)groupDisposable;
- (void)setGroupDisposable:(id)arg0;
- (void)requestExactLocationPermissionWithCompletion:(id /* block */)arg0 insideRadar:(BOOL)arg1 trackParams:(id)arg2;
- (void)requestCurrentLocationIfNeeded:(id /* block */)arg0 shouldCheckLocationStatus:(BOOL)arg1;
- (BOOL)needCheckUpdateStatus;
- (void)startUpdateLocation;
- (void)requestExactLocationPermissionWithCompletion:(id /* block */)arg0;
- (id)currentLocationGroup;
- (void)requestCurrentLocationIfNeeded:(id /* block */)arg0;
- (void)requestCurrentLocationIfNeededInGroup:(id /* block */)arg0;
- (void)requestBluetoothLocation;
- (id)init;
- (id)currentLocation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)location;
- (void)setLocation:(id)arg0;
- (BOOL)hasPermission;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;
- (id)groupLocation;
- (void)setGroupLocation:(id)arg0;

@end
