//
//     Generated by private class-dump
//

@class NSLock, NSString, NSArray, BDTuringVerifyView, BDTuringConfig, BDTuringSettings;
@protocol BDTuringDelegate;

@interface BDTuring : NSObject <BDTuringVerifyViewDelegate, BDTuringVerifyService> {
    BOOL _isShowVerifyView;
    BOOL _adjustViewWhenKeyboardHiden;
    BOOL _usePreload;
    BOOL _preloadVerifyViewReady;
    NSString *_appID;
    id<BDTuringDelegate> _delegate;
    NSString *_x_tt_token;
    NSString *_serviceName;
    BDTuringConfig *_config;
    BDTuringVerifyView *_verifyView;
    BDTuringVerifyView *_autoVerifyView;
    BDTuringSettings *_settings;
    BDTuringVerifyView *_preloadVerifyView;
    NSLock *_callbackLock;
    NSArray *_skipPathList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isShowVerifyView;
@property (retain, nonatomic) BDTuringConfig *config;
@property (retain, nonatomic) BDTuringSettings *settings;
@property (retain, nonatomic) BDTuringVerifyView *verifyView;
@property (retain, nonatomic) BDTuringVerifyView *autoVerifyView;
@property (nonatomic) BOOL preloadVerifyViewReady;
@property (retain, nonatomic) BDTuringVerifyView *preloadVerifyView;
@property (retain, nonatomic) NSLock *callbackLock;
@property (copy, nonatomic) NSArray *skipPathList;
@property (nonatomic) BOOL isShowVerifyView;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *serviceName;
@property (retain, nonatomic) BDTuringConfig *config;
@property (retain, nonatomic) BDTuringVerifyView *verifyView;
@property (retain, nonatomic) BDTuringVerifyView *autoVerifyView;
@property (retain, nonatomic) BDTuringSettings *settings;
@property (nonatomic) BOOL usePreload;
@property (nonatomic) BOOL preloadVerifyViewReady;
@property (retain, nonatomic) BDTuringVerifyView *preloadVerifyView;
@property (retain, nonatomic) NSLock *callbackLock;
@property (copy, nonatomic) NSArray *skipPathList;
@property (nonatomic) BOOL closeVerifyViewWhenTouchMask;
@property (nonatomic) BOOL adjustViewWhenKeyboardHiden;
@property (weak, nonatomic) id<BDTuringDelegate> delegate;
@property (copy, nonatomic) NSString *x_tt_token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)turingWithAppID:(id)arg0;
+ (id)xorHexString:(id)arg0;
+ (void)postBodyWithURL:(id)arg0 dataDict:(id)arg1 callback:(id /* block */)arg2;
+ (void)passportUpsmsVerify:(id)arg0 isAssistMobile:(BOOL)arg1 verify_ticket:(id)arg2 callback:(id /* block */)arg3;
+ (void)passportAccountInfo:(id)arg0 scene:(int)arg1 callback:(id /* block */)arg2;
+ (void)passportMobileSendCodeV1:(id)arg0 is6Digits:(int)arg1 channelId:(int)arg2 isAssistMobile:(BOOL)arg3 callback:(id /* block */)arg4;
+ (void)passportMobileSendVoiceCode:(id)arg0 channelId:(id)arg1 isAssistMobile:(BOOL)arg2 callback:(id /* block */)arg3;
+ (void)passportMobileValidateCode:(id)arg0 isAssistMobile:(BOOL)arg1 code:(id)arg2 callback:(id /* block */)arg3;
+ (void)passportUpsmsGenVerifyTicket:(id)arg0 callback:(id /* block */)arg1;
+ (void)passportEmailSendCode:(id)arg0 callback:(id /* block */)arg1;
+ (void)passportEmailCheckCode:(id)arg0 verify_ticket:(id)arg1 code:(id)arg2 callback:(id /* block */)arg3;
+ (void)passportEmailVerify:(id)arg0 code:(id)arg1 callback:(id /* block */)arg2;
+ (void)passportAccountGenVerifyTicket:(id)arg0 callback:(id /* block */)arg1;
+ (void)passportAccountVerify:(id)arg0 verifyTicket:(id)arg1 pwd:(id)arg2 callback:(id /* block */)arg3;
+ (void)setDisableLoadingView:(BOOL)arg0;
+ (void)setEmailDigits:(long long)arg0;
+ (void)setForbidLandscape:(BOOL)arg0;
+ (void)setVerifyTheme:(id)arg0;
+ (void)setVerifyText:(id)arg0;
+ (void)setSMSTheme:(id)arg0;
+ (void)setSMSText:(id)arg0;
+ (void)setSMSDigits:(long long)arg0;
+ (void)setQATheme:(id)arg0;
+ (void)setQAText:(id)arg0;
+ (id)turingWithConfig:(id)arg0;
+ (void)initialize;
+ (id)sdkVersion;

- (id)commonParameters;
- (id)x_tt_token;
- (BOOL)usePreload;
- (void)setUsePreload:(BOOL)arg0;
- (void)popVerifyViewWithModel:(id)arg0;
- (id)stringFromDelegateSelector:(SEL)arg0;
- (void)verifyWebViewLoadDidSuccess:(id)arg0;
- (void)verifyWebViewLoadDidFail:(id)arg0;
- (void)preloadFinishWithVerifyView:(id)arg0;
- (void)setCallbackLock:(id)arg0;
- (void)setAdjustViewWhenKeyboardHiden:(BOOL)arg0;
- (void)setVerifyView:(id)arg0;
- (void)setPreloadVerifyViewReady:(BOOL)arg0;
- (void)setPreloadVerifyView:(id)arg0;
- (void)setIsShowVerifyView:(BOOL)arg0;
- (void)onWillChangeStatusBarOrientation:(id)arg0;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)setCloseVerifyViewWhenTouchMask:(BOOL)arg0;
- (BOOL)isShowVerifyView;
- (id)verifyView;
- (void)turingVerifyConflictWithCode:(long long)arg0;
- (id)preloadVerifyView;
- (void)startPreloadWithModel:(id)arg0 startTime:(long long)arg1;
- (void)turingVerifyParamReceived:(long long)arg0;
- (BOOL)preloadVerifyViewReady;
- (void)popPreloadVerifyView;
- (void)popAutoVerifyViewWithConfig:(id)arg0 model:(id)arg1;
- (void)popTuringVerifyViewWithConfig:(id)arg0 model:(id)arg1;
- (void)setAutoVerifyView:(id)arg0;
- (void)closeVerifyView;
- (BOOL)closeVerifyViewWhenTouchMask;
- (void)popVerifyViewWithCallback:(id /* block */)arg0;
- (void)preloadVerifyViewWithModel:(id)arg0;
- (void)popPictureVerifyViewWithRegionType:(long long)arg0 challengeCode:(long long)arg1 callback:(id /* block */)arg2;
- (void)popSMSVerifyViewWithRegionType:(long long)arg0 scene:(id)arg1 callback:(id /* block */)arg2;
- (void)setX_tt_token:(id)arg0;
- (id)autoVerifyView;
- (id)callbackLock;
- (id)skipPathList;
- (void)setSkipPathList:(id)arg0;
- (BOOL)adjustViewWhenKeyboardHiden;
- (void)verifyViewDidShow:(id)arg0;
- (void)verifyViewDidHide:(id)arg0;
- (id)parametersFromResponse:(id)arg0;
- (void)setupProcessorForTTNetworkManager;
- (void)setAppID:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setSettings:(id)arg0;
- (id)config;
- (id)settings;
- (id)initWithConfig:(id)arg0;
- (id)delegate;
- (id)appID;
- (id)serviceName;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setServiceName:(id)arg0;

@end
