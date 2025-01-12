//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLCMessageHandlerProtocol;

@interface AWEUserListener : NSObject <AWEUserMessage, AWENetworkMessage, HTSAccountMessage, AWEUserSwitchDelegate, AWEDigitalWellbeingMessage, TTAccountMessageFirstResponder, IESLCMessageHandlerService, AWEUserListenerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

+ (id)sharedInstance;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)ieslc_messageHandler:(id)arg0 didReceiveMsg:(id)arg1;
- (void)onAccountSessionExpired:(id)arg0;
- (BOOL)isUserLogin;
- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (void)didReceiveThirdPartyTokenForUploadAtPlatform:(unsigned long long)arg0 authInfo:(id)arg1 error:(id)arg2;
- (void)synchronizeCookiesWithExtension;
- (void)uploadTokenOnColdStartIfNeeded;
- (void)didReceiveApiResponse:(id)arg0 URL:(id)arg1;
- (void)didXTTTokenChanged:(id)arg0;
- (void)p_didReceiveApiResponse:(id)arg0 URL:(id)arg1;
- (BOOL)shouldLogoutWithErrorCode:(id)arg0;
- (BOOL)isValidThirdInfo:(id)arg0 error:(id)arg1;
- (void)uploadTokenWithPlatformTokenInfoModel:(id)arg0;
- (void)p_didFinishLogout;
- (void)p_didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (BOOL)shouldUploadToken;
- (void)p_uploadTokenOnColdStartIfNeeded;
- (void)p_handleMessageWithMsg:(id)arg0;
- (void)checkAntiAddictedAndShowAlertIfNeededWithLockHint:(id)arg0 forbidToastHint:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)showVideoUploadingAlertIfNeeded;
- (void)showDigitalWellbeingLockViewIfNeededWithCompletion:(id /* block */)arg0;
- (id)init;
- (void)dealloc;

@end
