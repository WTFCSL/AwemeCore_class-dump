//
//     Generated by private class-dump
//

@interface AWEDeviceManager : NSObject

+ (void)requestPhotoLibraryPermission:(id /* block */)arg0;
+ (BOOL)isCameraAuth;
+ (BOOL)isCameraDenied;
+ (BOOL)isCameraNotDetermined;
+ (BOOL)isMicroPhoneAuth;
+ (BOOL)isMicroPhoneNotDetermined;
+ (BOOL)isMicroPhoneDenied;
+ (void)getIsNotificationEnabledWithCompletionHandler:(id /* block */)arg0;
+ (void)requestPhotoLibraryPermission:(id /* block */)arg0 withCert:(id)arg1;
+ (void)requestPhotoLibraryPermission:(id /* block */)arg0 withCert:(id)arg1 forLevel:(long long)arg2;
+ (BOOL)isWearingEarPhone;
+ (unsigned long long)defaultAudioSessionCategoryOptions;

@end
