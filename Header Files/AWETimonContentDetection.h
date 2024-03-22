//
//     Generated by private class-dump
//

@class NSString;

@interface AWETimonContentDetection : NSObject <TMContentDetctionSerivce> {
    long long _locationPermissionState;
    long long _contactPermissionState;
}

@property (nonatomic) long long locationPermissionState;
@property (nonatomic) long long contactPermissionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getPermissionStateForDateType:(id)arg0;
- (void)locationPermissionStatus;
- (long long)contactPermissionStatus;
- (long long)locationPermissionState;
- (long long)contactPermissionState;
- (void)setLocationPermissionState:(long long)arg0;
- (void)setContactPermissionState:(long long)arg0;
- (id)init;

@end