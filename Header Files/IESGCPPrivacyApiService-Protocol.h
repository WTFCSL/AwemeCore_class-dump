//
//     Generated by private class-dump
//

@protocol IESGCPPrivacyApiService <NSObject>

- (void)openURL:(id)arg0 withCert:(id)arg1 error:(id *)arg2;
- (void)openURL:(id)arg0 withCert:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestAccessMicrophoneWithPrivacyCert:(id)arg0 completionHandler:(id /* block */)arg1;
- (id)createSKStoreWithCert:(id)arg0 error:(id *)arg1;
- (void)openURL:(id)arg0 withCert:(id)arg1 error:(id *)arg2 context:(id)arg3;
- (void)openURL:(id)arg0 withCert:(id)arg1 options:(id)arg2 context:(id)arg3 completionHandler:(id /* block */)arg4;

@end
