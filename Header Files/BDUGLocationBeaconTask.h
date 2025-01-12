//
//     Generated by private class-dump
//

@class NSArray, NSString, CLLocationManager, NSMutableDictionary, NSMutableArray;

@interface BDUGLocationBeaconTask : NSObject <CLLocationManagerDelegate> {
    BOOL _currentScanBeaconIsFinish;
    id /* block */ _finishCallback;
    NSArray *_uuids;
    NSString *_logId;
    CLLocationManager *_locationManager;
    NSMutableDictionary *_results;
    NSMutableArray *_rangedBeacons;
    long long _interval;
    long long _startTime;
}

@property (copy, nonatomic) id /* block */ finishCallback;
@property (copy, nonatomic) NSArray *uuids;
@property (copy, nonatomic) NSString *logId;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) NSMutableDictionary *results;
@property (retain, nonatomic) NSMutableArray *rangedBeacons;
@property (nonatomic) long long interval;
@property long long startTime;
@property BOOL currentScanBeaconIsFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isRangingBeacons;

- (id)logId;
- (void)setLogId:(id)arg0;
- (id /* block */)finishCallback;
- (void)setFinishCallback:(id /* block */)arg0;
- (void)stopMonitorBeacons;
- (id)initWithUUIDS:(id)arg0 interval:(long long)arg1 logId:(id)arg2 finish:(id /* block */)arg3;
- (void)startMonitorBeacons;
- (id)scannedBeacons;
- (id)rangedBeacons;
- (void)_stopInnerMonitorBeacons;
- (void)setCurrentScanBeaconIsFinish:(BOOL)arg0;
- (BOOL)currentScanBeaconIsFinish;
- (void)_updateScannedBeacons:(id)arg0 regionKey:(id)arg1;
- (void)_finishMonitorBeaconsWithError:(id)arg0;
- (void)setRangedBeacons:(id)arg0;
- (void)setStartTime:(long long)arg0;
- (void).cxx_destruct;
- (id)uuids;
- (long long)interval;
- (void)setInterval:(long long)arg0;
- (void)setResults:(id)arg0;
- (id)results;
- (void)setLocationManager:(id)arg0;
- (long long)startTime;
- (void)setUuids:(id)arg0;
- (void)dealloc;
- (id)locationManager;
- (void)locationManager:(id)arg0 didRangeBeacons:(id)arg1 inRegion:(id)arg2;
- (void)locationManager:(id)arg0 rangingBeaconsDidFailForRegion:(id)arg1 withError:(id)arg2;
- (void)locationManager:(id)arg0 didRangeBeacons:(id)arg1 satisfyingConstraint:(id)arg2;
- (void)locationManager:(id)arg0 didFailRangingBeaconsForConstraint:(id)arg1 error:(id)arg2;

@end
