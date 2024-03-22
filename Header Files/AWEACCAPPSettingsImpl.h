//
//     Generated by private class-dump
//

@class NSString;

@interface AWEACCAPPSettingsImpl : NSObject <ACCAPPSettingsProtocol>

@property (readonly, nonatomic) BOOL disableExifPermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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