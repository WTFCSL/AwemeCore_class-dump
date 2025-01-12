//
//     Generated by private class-dump
//

@class BDUGLocationBeaconTask;

@interface BDLBeaconManager : NSObject {
    BDUGLocationBeaconTask *_task;
    long long _errorCode;
}

@property (retain, nonatomic) BDUGLocationBeaconTask *task;
@property long long errorCode;

+ (id)logId;
+ (id)_getScannedBeaconsParamsWithBeacons:(id)arg0;
+ (void)removeBeaconsDiskCache;
+ (id)scannedBeacons;
+ (id)sharedManager;

- (void)startWithUuids:(id)arg0 logID:(id)arg1 interval:(long long)arg2 isSubmitBleNow:(BOOL)arg3;
- (void)scanningCheck;
- (BOOL)isDisabledBLE;
- (id)init;
- (void).cxx_destruct;
- (void)setErrorCode:(long long)arg0;
- (long long)errorCode;
- (void)setTask:(id)arg0;
- (id)task;

@end
