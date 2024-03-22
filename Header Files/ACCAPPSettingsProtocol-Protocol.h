//
//     Generated by private class-dump
//

@protocol ACCAPPSettingsProtocol <NSObject>

@property (readonly, nonatomic) BOOL disableExifPermission;

- (BOOL)isAppVersionUpdated;
- (BOOL)disableExifPermission;
- (void)removeVolumeViewWithVC:(id)arg0;
- (BOOL)needShowErrorDescription:(id)arg0;
- (BOOL)enableBOE;
- (id)acc_deviceID;
- (BOOL)isLowPublishActiveness;
- (long long)userPublishActiveness;
- (double)xmojiGeneratePollTimeoutDuration;
- (double)xmojiGenerateProgressLineMinTime;
- (id)xmojiGeneratePrivacyHintURLString;
- (id)takePhotoXmojiPictureURLString;
- (id)scanToLoginPathBlockList;
- (BOOL)enableNLETemplateForCutsame;
- (BOOL)enableFeatureBitsForCutsame;
- (id)oneClickFilmingMaxConcurrentOpSetting;
- (id)oneClickFilmingHalfLoadingConfig;
- (id)oneClickFilmingModelList;

@end
