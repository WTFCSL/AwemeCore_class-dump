//
//     Generated by private class-dump
//

@class NSString, AFEAlertView, NSDate, APBDTFUploadToastView;

@interface APBToygerCherryUploadTask : APBToygerUploadTask <APBToygerDataCenterDelegate> {
    BOOL _keepUploadPage;
    BOOL _mergeRpc;
    APBDTFUploadToastView *_uploadView;
    AFEAlertView *_alertView;
    NSDate *_starUploadTimer;
}

@property (retain, nonatomic) APBDTFUploadToastView *uploadView;
@property (retain, nonatomic) AFEAlertView *alertView;
@property (nonatomic) BOOL keepUploadPage;
@property (nonatomic) BOOL mergeRpc;
@property (retain, nonatomic) NSDate *starUploadTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeWithPipeInfo:(id)arg0;
- (void)didFinishUploadWithSuccess:(BOOL)arg0 retCode:(id)arg1 retMessage:(id)arg2 extInfo:(id)arg3;
- (void)processEvent:(id)arg0 withCompletionCallback:(id /* block */)arg1;
- (void)setUploadView:(id)arg0;
- (void)_addDarkScreen;
- (void)setKeepUploadPage:(BOOL)arg0;
- (id)flipImage:(id)arg0;
- (void)uploadImage;
- (void)_uploadImage;
- (void)setStarUploadTimer:(id)arg0;
- (void)requestValidateData;
- (void)dataCenterClear;
- (BOOL)keepUploadPage;
- (void)handleRetry;
- (BOOL)checkUploadImageData:(id)arg0;
- (id)starUploadTimer;
- (void)handleNetworkErrorWith1006;
- (void)handleNetworkErrorWithRetCode:(id)arg0 retMessage:(id)arg1 extInfo:(id)arg2;
- (long long)remoteCommandFromString:(id)arg0;
- (void)handleRemoteCommand:(long long)arg0 retCodeSub:(id)arg1 retMessageSub:(id)arg2;
- (void)requestAgain;
- (id)uploadView;
- (BOOL)mergeRpc;
- (void)setMergeRpc:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setAlertView:(id)arg0;
- (void)dealloc;
- (void)reset;
- (id)alertView;

@end
