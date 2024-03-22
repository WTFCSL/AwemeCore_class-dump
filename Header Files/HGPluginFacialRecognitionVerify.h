//
//     Generated by private class-dump
//

@class HGUniqueID, HGFacialRecognitionAlertControllerLogic;

@interface HGPluginFacialRecognitionVerify : HGPluginBase {
    HGUniqueID *_uniqueID;
    HGFacialRecognitionAlertControllerLogic *_alertVCLogic;
}

@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (retain, nonatomic) HGFacialRecognitionAlertControllerLogic *alertVCLogic;

- (id)encryptString:(id)arg0 key:(id)arg1 iv:(id)arg2;
- (void)setAlertVCLogic:(id)arg0;
- (id)errorMsgForErrorCode:(long long)arg0;
- (long long)callBackTypeForErrorCode:(long long)arg0;
- (void)_startFacialRecognitionVerifyWithUserName:(id)arg0 idCard:(id)arg1 callback:(id /* block */)arg2 instance:(id)arg3;
- (void)loginIfNeeded:(id /* block */)arg0;
- (void)handleError:(id)arg0 andCallBack:(id /* block */)arg1;
- (BOOL)isValidServiceType:(long long)arg0;
- (id)alertVCLogic;
- (id)callBackMsgForError:(id)arg0;
- (long long)errorCodeForAILabErrorCode:(long long)arg0;
- (void)handleHostFacialRecognitionComplteForServiceType:(long long)arg0 errorCode:(long long)arg1 orderNumber:(id)arg2 completion:(id /* block */)arg3;
- (void)checkCameraPermissionAndRequest:(id /* block */)arg0;
- (void)fetchServiceParamsWithUniqueId:(id)arg0 hostAppId:(id)arg1 hostVersion:(id)arg2 identifyName:(id)arg3 identifyCode:(id)arg4 completion:(id /* block */)arg5;
- (id)commonRequestParamWithURL:(id)arg0 params:(id)arg1;
- (long long)errorCodeForServerErrorCode:(long long)arg0;
- (id)errorForAILabFacialRecognitionErrorCode:(long long)arg0;
- (BOOL)needReportCancelForAILabCode:(long long)arg0;
- (void)updateFacialRecognitionResultForServiceType:(long long)arg0 errorCode:(long long)arg1 cancel:(BOOL)arg2 orderNumber:(id)arg3 completion:(id /* block */)arg4;
- (id)facialSdkVersionForServiceType:(long long)arg0;
- (id)hostApplicationid;
- (id)decryptString:(id)arg0 key:(id)arg1 iv:(id)arg2;
- (long long)errorCodeForAILabV3ErrorCode:(long long)arg0;
- (void)startFacialRecognitionVerifyWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)init;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)errorWithCode:(long long)arg0;

@end