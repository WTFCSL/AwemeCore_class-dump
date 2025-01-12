//
//     Generated by private class-dump
//

@class NSObject, BDTuring, NSString, AWECnryphoctConfig, NSDate, MSManagerML;
@protocol OS_dispatch_queue, AWECnryphoctDelegate;

@interface AWECnryphoct : NSObject <BDTuringConfigDelegate, BDUGTwiceVerifyDelegate, BytedCertProgressDelegate, InstallAndDeviceIDMessage, AWEUserMessage> {
    BOOL _isCameraPermissionNeed;
    BOOL _isGenerateMetaTokenSuccess;
    BDTuring *_turing;
    MSManagerML *_msManager;
    AWECnryphoctConfig *_config;
    id<AWECnryphoctDelegate> _delegate;
    NSDate *_beginDate;
    long long _mssdkCollectMode;
    long long _modeChangeTimes;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) AWECnryphoctConfig *config;
@property (weak, nonatomic) id<AWECnryphoctDelegate> delegate;
@property (retain, nonatomic) MSManagerML *msManager;
@property (retain, nonatomic) NSDate *beginDate;
@property (nonatomic) BOOL isGenerateMetaTokenSuccess;
@property (nonatomic) long long mssdkCollectMode;
@property (nonatomic) long long modeChangeTimes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) BDTuring *turing;
@property (readonly, weak, nonatomic) id<AWECnryphoctDelegate> securityDelegate;
@property (nonatomic) BOOL isCameraPermissionNeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showTwiceVerifyAlertView:(id)arg0 cancelBlock:(id /* block */)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3 enterMethod:(id)arg4;
+ (void)showTwiceVerifyAlertView:(id)arg0 cancelBlock:(id /* block */)arg1 goToVerifyBlock:(id /* block */)arg2 enterMethod:(id)arg3;
+ (void)startForScene:(id)arg0;
+ (void)registerScenePageNameCallback:(long long)arg0 cb:(id)arg1;
+ (void)verificationCheckWithParameter:(id)arg0 completion:(id /* block */)arg1;
+ (void)uploadDataForEvent:(id)arg0;
+ (void)manualScheduleSelas;
+ (void)verificationCheck:(long long)arg0 completion:(id /* block */)arg1;
+ (void)verificationCheckWithParameter:(id)arg0 configString:(id)arg1 completion:(id /* block */)arg2;
+ (double)currentMaxWindowLevel;
+ (void)startMSManager;
+ (void)configTwiceVerify;
+ (void)showNewTwiceVerifyAlertView:(id)arg0 successBlock:(id /* block */)arg1 failBlock:(id /* block */)arg2 enterMethod:(id)arg3;
+ (void)dismissPublishAlertView;
+ (id)licenseForAppId:(id)arg0;
+ (void)startWithConfig:(id)arg0 delegate:(id)arg1;
+ (void)startAutoSafeGuard;
+ (id)encryptURL:(id)arg0 formData:(id)arg1;
+ (id)sharedInstance;
+ (id)config;

- (id)secUserID;
- (void)didFinishLogin;
- (void)dismissLoading;
- (BOOL)isCameraPermissionNeed;
- (id)apiDomain;
- (id)webCommonParams;
- (void)showToastWithTitle:(id)arg0;
- (void)showLoadingWithTitle:(id)arg0;
- (void)openLiveAuthWithParams:(id)arg0;
- (void)openAuthVerifyWithParams:(id)arg0;
- (void)progressFinishWithType:(unsigned long long)arg0 params:(id)arg1;
- (void)didUpdateInstallIDFrom:(id)arg0 to:(id)arg1;
- (void)didUpdateDeviceIDFrom:(id)arg0 to:(id)arg1;
- (id)turing;
- (void)startSMSVerifyWithCompletionBlock:(id /* block */)arg0;
- (void)updateCollectMode:(long long)arg0;
- (void)setMssdkCollectMode:(long long)arg0;
- (void)setTuring:(id)arg0;
- (void)observeDeviceDidRegistered;
- (void)observeUserDidLogin;
- (void)reportColdStart;
- (id)msManager;
- (id)sgm_customDeviceID;
- (id)sgm_installID;
- (id)sgm_sessionID;
- (id)sgm_installChannel;
- (long long)mssdkCollectMode;
- (void)setMsManager:(id)arg0;
- (long long)modeChangeTimes;
- (void)setModeChangeTimes:(long long)arg0;
- (void)metaTokenDidUpdate;
- (BOOL)isGenerateMetaTokenSuccess;
- (void)setIsGenerateMetaTokenSuccess:(BOOL)arg0;
- (id)securityDelegate;
- (BOOL)isUseTTNet;
- (BOOL)sgm_needConfigSelas;
- (void)setIsCameraPermissionNeed:(BOOL)arg0;
- (id)userID;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)beginDate;
- (id)deviceID;
- (id)sessionID;
- (void)setBeginDate:(id)arg0;
- (id)config;
- (id)installID;
- (id)delegate;
- (id)queue;
- (void)setDelegate:(id)arg0;
- (id)appId;
- (void)setQueue:(id)arg0;

@end
