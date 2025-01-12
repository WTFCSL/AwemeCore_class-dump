//
//     Generated by private class-dump
//

@class NSString, RACSignal, ACCRecordAuthStatus, RACSubject;

@interface ACCRecordAuthServiceImpl : NSObject <ACCRecordAuthService, FPPlainInitable> {
    ACCRecordAuthStatus *_authStatus;
    RACSignal *_gotoUploadSignal;
    NSString *_customAuthorityTitle;
    NSString *_customAuthorityMessage;
    unsigned long long _deviceAuthStatus;
    id /* block */ _passMicphoneAuth;
    RACSubject *_confirmAllowUseCameraSubject;
    RACSubject *_passCheckAuthSubject;
    RACSubject *_gotoUploadSubject;
}

@property (retain, nonatomic) RACSubject *confirmAllowUseCameraSubject;
@property (retain, nonatomic) RACSubject *passCheckAuthSubject;
@property (retain, nonatomic) RACSubject *gotoUploadSubject;
@property (readonly, nonatomic) RACSignal *confirmAllowUseCameraSignal;
@property (readonly, nonatomic) RACSignal *passCheckAuthSignal;
@property (retain, nonatomic) ACCRecordAuthStatus *authStatus;
@property (retain, nonatomic) RACSignal *gotoUploadSignal;
@property (copy, nonatomic) NSString *customAuthorityTitle;
@property (copy, nonatomic) NSString *customAuthorityMessage;
@property (nonatomic) unsigned long long deviceAuthStatus;
@property (copy, nonatomic) id /* block */ passMicphoneAuth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)confirmAllowUseCameraSignal;
- (id)passCheckAuthSignal;
- (id)gotoUploadSignal;
- (id /* block */)passMicphoneAuth;
- (unsigned long long)deviceAuthStatus;
- (void)setDeviceAuthStatus:(unsigned long long)arg0;
- (void)setAuthorityTitle:(id)arg0;
- (void)setPassMicphoneAuth:(id /* block */)arg0;
- (void)triggerPassCheckAuthWithAuthStatus:(id)arg0;
- (void)triggerGotoUploadSignal;
- (void)trigger_confirmAllowUseCamera:(BOOL)arg0;
- (id)customAuthorityTitle;
- (id)customAuthorityMessage;
- (id)confirmAllowUseCameraSubject;
- (id)passCheckAuthSubject;
- (id)gotoUploadSubject;
- (void)setCustomAuthorityTitle:(id)arg0;
- (void)setCustomAuthorityMessage:(id)arg0;
- (void)setAuthorityMessage:(id)arg0;
- (void)setGotoUploadSignal:(id)arg0;
- (void)setConfirmAllowUseCameraSubject:(id)arg0;
- (void)setPassCheckAuthSubject:(id)arg0;
- (void)setGotoUploadSubject:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)authStatus;
- (void)setAuthStatus:(id)arg0;

@end
