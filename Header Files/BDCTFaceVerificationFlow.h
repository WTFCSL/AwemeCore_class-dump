//
//     Generated by private class-dump
//

@class NSString;

@interface BDCTFaceVerificationFlow : BDCTFlow <BDCTFaceLiveViewControllerDelegate> {
    id /* block */ _shouldPresentHandler;
    id /* block */ _completionBlock;
}

@property (readonly, nonatomic) long long beginAt;
@property (readonly, nonatomic) long long sdkInitEndAt;
@property (readonly, nonatomic) long long liveDetectEndAt;
@property (readonly, nonatomic) long long faceDetectBeginAt;
@property (copy, nonatomic) id /* block */ shouldPresentHandler;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_beginAliyunVerify;
- (void)p_aliyunQuery:(id)arg0;
- (void)beginAliyunVerify;
- (long long)beginAt;
- (long long)liveDetectEndAt;
- (long long)faceDetectBeginAt;
- (long long)sdkInitEndAt;
- (void)beginVerifyWithAlgoParams:(id)arg0;
- (void)trackFlowBegin;
- (void)sdkInit;
- (void)trackSDKInitRequestComplete;
- (void)finishWithResult:(id)arg0 error:(id)arg1 showAlert:(BOOL)arg2;
- (void)authSubmitIfNeeded;
- (void)beginByteVerify;
- (void)trackLiveDetectRequestComplete;
- (void)prepareForFaceDetectWithAlgoParams:(id)arg0;
- (void)requestAudioResourceIfNonExistWithParams:(id)arg0;
- (void)presentFaceLiveDetectViewControllerWithAlgoParams:(id)arg0;
- (void)trackFaceDetectBegin;
- (void)p_showAudioOpenAlertWithParams:(id)arg0;
- (void)downloadAudioWithCompletion:(id /* block */)arg0;
- (void)p_faceCompareWithPackedParams:(id)arg0 faceData:(id)arg1 resultCode:(int)arg2 completion:(id /* block */)arg3;
- (void)trackFlowFinishWithError:(id)arg0;
- (id)flowTrackParams;
- (void)faceViewController:(id)arg0 faceCompareWithPackedParams:(id)arg1 faceData:(id)arg2 resultCode:(int)arg3 completion:(id /* block */)arg4;
- (void)faceViewController:(id)arg0 retryDesicionWithCompletion:(id /* block */)arg1;
- (void)begin;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)finishWithResult:(id)arg0 error:(id)arg1;
- (void)dealloc;
- (id /* block */)shouldPresentHandler;
- (void)setShouldPresentHandler:(id /* block */)arg0;

@end
