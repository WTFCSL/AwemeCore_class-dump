//
//     Generated by private class-dump
//

@class NSString;

@interface IESGCPPrivacyApiService_Douyin : NSObject <IESGCPPrivacyApiService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openURL:(id)arg0 withCert:(id)arg1 error:(id *)arg2;
- (void)openURL:(id)arg0 withCert:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestAccessMicrophoneWithPrivacyCert:(id)arg0 completionHandler:(id /* block */)arg1;
- (id)createSKStoreWithCert:(id)arg0 error:(id *)arg1;
- (void)openURL:(id)arg0 withCert:(id)arg1 error:(id *)arg2 context:(id)arg3;
- (void)openURL:(id)arg0 withCert:(id)arg1 options:(id)arg2 context:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)createCertWithCert:(id)arg0;
- (id)createCertWithCert:(id)arg0 jsbContext:(id)arg1;

@end