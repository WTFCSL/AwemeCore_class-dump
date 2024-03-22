//
//     Generated by private class-dump
//

@class NSString, IESLiveCountTimer;
@protocol IESLiveVerifyConfig, IESLiveNoticeActions, IESLiveAuthorizationService;

@interface IESLiveAudienceInteractPermissionChecker : NSObject <IESLiveUserActions> {
    BOOL _hasRealNameVerified;
    BOOL _isGoingToRealNameVerified;
    id<IESLiveVerifyConfig> _verifyConfig;
    id<IESLiveNoticeActions> _noticeActionCreator;
    id<IESLiveAuthorizationService> _authorizationService;
    id /* block */ _completion;
    IESLiveCountTimer *_verifiedTimer;
}

@property (retain, nonatomic) id<IESLiveVerifyConfig> verifyConfig;
@property (retain, nonatomic) id<IESLiveNoticeActions> noticeActionCreator;
@property (retain, nonatomic) id<IESLiveAuthorizationService> authorizationService;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL hasRealNameVerified;
@property (nonatomic) BOOL isGoingToRealNameVerified;
@property (retain, nonatomic) IESLiveCountTimer *verifiedTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterFrom;
- (void)didSetAttachingDIContext;
- (id)verifyScene;
- (void)verifyRealnameSuccessed;
- (id)verifyConfig;
- (void)setVerifyConfig:(id)arg0;
- (id)noticeActionCreator;
- (void)setNoticeActionCreator:(id)arg0;
- (void)setAuthorizationService:(id)arg0;
- (BOOL)hasRealNameVerified;
- (void)setHasRealNameVerified:(BOOL)arg0;
- (BOOL)isGoingToRealNameVerified;
- (void)setIsGoingToRealNameVerified:(BOOL)arg0;
- (id)verifiedTimer;
- (void)setVerifiedTimer:(id)arg0;
- (void)checkApplyPermissionError:(id)arg0 completion:(id /* block */)arg1;
- (void)onShowUnderAgeAlert;
- (void)onShowBindMobileAlert;
- (void)tryToVerify;
- (void)needIdentityAuthenticationWithCompletion:(id /* block */)arg0 description:(id)arg1;
- (void)onShowAssistPhoneAlert;
- (void)onShowAppNeedUpdateAlert;
- (void)checkApplyPermissionError:(id)arg0 needErrorToast:(BOOL)arg1 completion:(id /* block */)arg2;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (id)authorizationService;

@end
