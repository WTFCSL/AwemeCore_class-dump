//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMainJsBridgeRegister : NSObject <AWEMainJsBridgeRegisterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerJSBridgeHandler;
+ (id)findWebViewController:(id)arg0;
+ (void)saveImageAction:(id)arg0 jsBridge:(id)arg1 success:(BOOL)arg2 apiContext:(id)arg3 pageContext:(id)arg4;
+ (void)registerJSLocationHandler;
+ (void)registerJSZMCertHandler;
+ (void)registerJSComplianceHandler;
+ (void)registerJSOpenHalfDialogHandler;
+ (id)coverForAVAsset:(id)arg0;
+ (void)registerJSProAccountHandler:(id)arg0 callbackId:(id)arg1;
+ (void)registerJSSocialHandler;
+ (void)registerJSActivityHandler;
+ (void)registerJSMusicHandler;
+ (void)registerJSLaunchCutSame;
+ (void)registerJSVoipCall;
+ (void)showReportSuccessAlert;
+ (BOOL)shouldEncrypted;

@end
