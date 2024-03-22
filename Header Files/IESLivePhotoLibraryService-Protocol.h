//
//     Generated by private class-dump
//

@protocol IESLivePhotoLibraryService <NSObject>

- (void)showMultiSelectImagePickerWithMaxImageCount:(long long)arg0 withPrivacyCert:(id)arg1 bottomViewTitle:(id)arg2 nextButtonTitle:(id)arg3 limitTips:(id)arg4 completion:(id /* block */)arg5;
- (void)showImagePickerWithPrivacyCert:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)showImagePickerWithPrivacyHybridCert:(id)arg0 withContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)showVideoPickerWithPrivacyCert:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)showVideoPickerWithPrivacyHybridCert:(id)arg0 withContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)showImagePickerWithHostVC:(id)arg0 withPrivacyCert:(id)arg1 completion:(id /* block */)arg2;
- (void)showPhotoPickerWithPrivacyCert:(id)arg0 options:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)showMultiSelectPickerWithMaxImageCount:(long long)arg0 videoMinSeconds:(long long)arg1 videoMaxSeconds:(long long)arg2 privacyCert:(id)arg3 bottomViewTitle:(id)arg4 nextButtonTitle:(id)arg5 limitTips:(id)arg6 startProcessBlock:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)showPhotoPickerWithPrivacyHybridCert:(id)arg0 withContext:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;

@end
