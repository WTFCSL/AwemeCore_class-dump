//
//     Generated by private class-dump
//

@protocol IESLiveVerifyConfigAdapter <NSObject>

@optional

- (void)needIdentityAuthenticationWithController:(id)arg0 enterFrom:(id)arg1;
- (void)needPhoneAuthenticationWithController:(id)arg0;
- (void)needIdentityAuthenticationWithController:(id)arg0 createRoomTypeTrack:(id)arg1;
- (void)openLiveCertWithParams:(id)arg0 identifyParams:(id)arg1 faceOnly:(BOOL)arg2 paramsBuilder:(id /* block */)arg3 completion:(id /* block */)arg4;

@end