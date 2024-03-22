//
//     Generated by private class-dump
//

@class NSString, UIActivityIndicatorView, IESLivePhotoTosUploadConfig, UIImagePickerController, IESLiveCreateCoverEditViewController;
@protocol IESLiveInternalRouter, IESLivePhotoLibraryService;

@interface IESLivePhotoTosUploadHelper : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    id<IESLiveInternalRouter> _router;
    id<IESLivePhotoLibraryService> _photoService;
    id /* block */ _completeBlock;
    IESLivePhotoTosUploadConfig *_config;
    UIImagePickerController *_imagePicker;
    UIActivityIndicatorView *_loadingView;
    IESLiveCreateCoverEditViewController *_createCoverEditController;
}

@property (retain, nonatomic) id<IESLiveInternalRouter> router;
@property (retain, nonatomic) id<IESLivePhotoLibraryService> photoService;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) IESLivePhotoTosUploadConfig *config;
@property (retain, nonatomic) UIImagePickerController *imagePicker;
@property (retain, nonatomic) UIActivityIndicatorView *loadingView;
@property (retain, nonatomic) IESLiveCreateCoverEditViewController *createCoverEditController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setCompleteBlock:(id /* block */)arg0;
- (id /* block */)completeBlock;
- (id)photoService;
- (void)setPhotoService:(id)arg0;
- (void)setCreateCoverEditController:(id)arg0;
- (id)createCoverEditController;
- (void)uploadPhotoWithConfig:(id)arg0 withAlbumPrivacyCert:(id)arg1 withSettingPrivacyCert:(id)arg2 withCameraPrivacyCert:(id)arg3 withContext:(id)arg4 completeBlock:(id /* block */)arg5;
- (void)p_willEnterPickerView;
- (void)uploadPhotoWithImage:(id)arg0 sourceType:(long long)arg1;
- (void)closeImagePickerController;
- (BOOL)checkImageSuccess:(id)arg0 sourceType:(long long)arg1;
- (BOOL)checkImageSizeSuccess:(id)arg0;
- (void)stopLoading;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)startLoading;
- (id)config;
- (void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)imagePickerControllerDidCancel:(id)arg0;
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (id)router;
- (void)setRouter:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)imagePicker;
- (void)setImagePicker:(id)arg0;
- (void)image:(id)arg0 didFinishSavingWithError:(id)arg1 contextInfo:(void *)arg2;

@end