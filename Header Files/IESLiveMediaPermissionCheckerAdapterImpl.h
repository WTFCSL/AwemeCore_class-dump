//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveMediaPermissionCheckerAdapterImpl : IESLiveBaseAdapter <IESLiveMediaPermissionCheckerAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkAudioPermissionWithMicCert:(id)arg0 completion:(id /* block */)arg1;
- (void)checkVideoPermissionWithMicCert:(id)arg0 cameraCert:(id)arg1 completion:(id /* block */)arg2;

@end
