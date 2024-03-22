//
//     Generated by private class-dump
//

@class NSDictionary, NSString, BUPlayableAd;

@interface BUMediaManager : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    BUPlayableAd *_playableAd;
    NSDictionary *_photoParams;
    unsigned long long _eventType;
}

@property (copy, nonatomic) NSDictionary *photoParams;
@property (nonatomic) unsigned long long eventType;
@property (weak, nonatomic) BUPlayableAd *playableAd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPhotosAuthorizationDeclared;
+ (BOOL)isCameraAuthorizationDeclared;
+ (BOOL)isMicrophoneAuthorizationDeclared;
+ (id)downloadDirPath;
+ (void)deleteTempFile:(id)arg0;
+ (void)openCameraOrSettings;
+ (void)openPhotosOrSettingsWithParams:(id)arg0;
+ (void)savePhotosOrOpenSettingsWithParams:(id)arg0;
+ (BOOL)isMediaAuthorizationDeclaredWithType:(unsigned long long)arg0;
+ (BOOL)isMediaAuthorizationEnableWithType:(unsigned long long)arg0;
+ (void)applyMediaAuthorizationWithType:(unsigned long long)arg0 completion:(id /* block */)arg1;
+ (id)shareInstance;

- (id)playableAd;
- (void)setPlayableAd:(id)arg0;
- (void)__openCameraOrSettings;
- (void)setPhotoParams:(id)arg0;
- (void)__openPhotosOrSettings;
- (void)remindToSettingsPageWithTitle:(id)arg0 message:(id)arg1;
- (void)showPhotosLibraryPage;
- (id)handleImageWithMediaInfo:(id)arg0;
- (id)photoParams;
- (void)handleCameraResultWithMediaInfo:(id)arg0;
- (void)handlePhotosResultWithMediaInfo:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (unsigned long long)eventType;
- (void)setEventType:(unsigned long long)arg0;
- (void)imagePickerControllerDidCancel:(id)arg0;
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;

@end
