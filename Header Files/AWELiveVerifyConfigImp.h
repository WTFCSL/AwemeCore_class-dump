//
//     Generated by private class-dump
//

@class NSString, AWELiveZMCertManager, AWELiveVerifyApi;

@interface AWELiveVerifyConfigImp : NSObject <IESLiveVerifyConfig> {
    AWELiveVerifyApi *_verifyApi;
    AWELiveZMCertManager *_zmCertManager;
}

@property (retain, nonatomic) AWELiveVerifyApi *verifyApi;
@property (retain, nonatomic) AWELiveZMCertManager *zmCertManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transitionToLiveVerifyPageFrom:(id)arg0 params:(id)arg1 enableOptimization:(BOOL)arg2 completion:(id /* block */)arg3;
- (BOOL)isPhoneBinded;
- (void)needIdentityAuthenticationWithCompleteBlock:(id /* block */)arg0;
- (void)needIdentityAuthenticationWithController:(id)arg0 enterFrom:(id)arg1;
- (void)needPhoneAuthenticationWithController:(id)arg0;
- (void)needZMAssertWithCompleteBlock:(id /* block */)arg0;
- (void)needZMAuthenticationWithController:(id)arg0;
- (void)needZMAuthenticationWithController:(id)arg0 withCompleteBlock:(id /* block */)arg1;
- (void)needIdentityAuthenticationWithController:(id)arg0 enterTrack:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)needWithdrawAuthenticationWithController:(id)arg0;
- (void)needReChargeAuthenticationWithController:(id)arg0;
- (void)multiIDAuth:(id /* block */)arg0;
- (void)verifyForMultiID:(id /* block */)arg0;
- (void)antispamDownSMSVerifyTraceURL:(id)arg0 completion:(id /* block */)arg1;
- (void)openLiveCertWithParams:(id)arg0 identifyParams:(id)arg1 faceOnly:(BOOL)arg2 paramsBuilder:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)zmCertManager;
- (void)openZYLivingBodyAuthenticationWithParams:(id)arg0 withCompleteBlock:(id /* block */)arg1;
- (id)verifyApi;
- (void)setVerifyApi:(id)arg0;
- (void)setZmCertManager:(id)arg0;
- (void).cxx_destruct;

@end
