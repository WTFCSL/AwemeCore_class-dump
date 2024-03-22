//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEAdPitayaHARServiceDataCollectionManager : HTSService <AWEAdPitayaHARServiceDataCollectionProtocol> {
    BOOL _isCharging;
    NSNumber *_battery;
}

@property (retain, nonatomic) NSNumber *battery;
@property (nonatomic) BOOL isCharging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initHARServiceDataCollectionManager;
- (BOOL)batteryStatus;
- (id)batteryParams;
- (void)startPredictingHARService;
- (id)collectSensorDataFromHARService;
- (id)collectSensorDataFromHARServiceForSearch;
- (id)batteryLevel;
- (void).cxx_destruct;
- (void)setIsCharging:(BOOL)arg0;
- (BOOL)isCharging;
- (id)battery;
- (void)setBattery:(id)arg0;

@end