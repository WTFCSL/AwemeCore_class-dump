//
//     Generated by private class-dump
//

@protocol IESLivePrivacyApiServiceAdapter <NSObject>

@optional

- (BOOL)openURL:(id)arg0 withCert:(id)arg1 error:(id *)arg2;
- (void)startRunningWithCaptureSession:(id)arg0 privacyCert:(id)arg1 error:(id *)arg2;
- (void)stopRunningWithCaptureSession:(id)arg0 privacyCert:(id)arg1 error:(id *)arg2;
- (void)requestAccessMicrophoneWithPrivacyCert:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)setString:(id)arg0 privacyCert:(id)arg1 error:(id *)arg2;
- (void)checkPhotoLibraryPermissionWithCert:(id)arg0 context:(id)arg1 options:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)requestPhotoAlbumAuthorizationWithCert:(id)arg0 context:(id)arg1 completionHandler:(id /* block */)arg2;

@end
