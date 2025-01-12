//
//     Generated by private class-dump
//

@protocol ACCRecordMomentCameraLandingProtocol <NSObject>

- (BOOL)isLandingToMomentCameraModeWithPublishModel:(id)arg0;
- (long long)getCachedDefaultLandingMomentCameraModeTimes;
- (void)updateDefaultLandingMomentCameraModeTimes:(long long)arg0;
- (BOOL)isDefaultToMomentCameraModeForFirstLanding;
- (void)markFirstLandingHasLandedToMomentCameraMode;
- (void)storeRecordModeIntoCacheIfNeeded:(id)arg0;
- (long long)getCachedStoryCombinedRecordMode;
- (BOOL)isHighFansAccount;
- (void)markLandingToMomentCameraMode:(BOOL)arg0;
- (BOOL)shouldMainRecorderCreateCameraWithPublishModel:(id)arg0;

@end
