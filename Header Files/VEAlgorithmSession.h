//
//     Generated by private class-dump
//

@class NSString, VEPixelBufferCopyUtils;

@interface VEAlgorithmSession : VERunloopObject <VEAppStatusProtocol> {
    struct IVEAlgorithm { void /* function */ **x0; } *algorithm_;
    long long type_;
    struct IVEAlgorithmParam { void /* function */ **x0; int x1; } *params_;
    BOOL isSync_;
    struct shared_ptr<ITETaskQueue> { struct ITETaskQueue *__ptr_; struct __shared_weak_count *__cntrl_; } processBufferQueue_;
    VEPixelBufferCopyUtils *copyUtils_;
    long long _sessionType;
    id /* block */ _progressCallback;
    id /* block */ _resultCallback;
    id /* block */ _completionCallback;
    id /* block */ _enigmasCallback;
}

@property (copy, nonatomic) id /* block */ completionCallback;
@property (copy, nonatomic) id /* block */ enigmasCallback;
@property (readonly, nonatomic) long long sessionType;
@property (copy, nonatomic) id /* block */ progressCallback;
@property (copy, nonatomic) id /* block */ resultCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setProcessSyncFlag:(BOOL)arg0;
- (void)qrcodeDetectResetZoomFactor:(float)arg0 byUser:(BOOL)arg1;
- (void)setProgressCallback:(id /* block */)arg0;
- (id /* block */)progressCallback;
- (id)p_getResult;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg0 info:(id)arg1;
- (void)p_createOneKeyHdrAlgorithmAndParam:(id)arg0 error:(id *)arg1;
- (void)p_createFaceReenactAlgorithmAndParam:(id)arg0 error:(id *)arg1;
- (void)p_createCommonImageAlgorithm:(id)arg0;
- (void)p_createBorderDetectAlgorithmAndParam:(id)arg0 error:(id *)arg1;
- (void)p_createCameraProcessAlgorithmAndParam:(id)arg0 error:(id *)arg1;
- (id)__generateErrorWithCode:(unsigned long long)arg0 Message:(id)arg1;
- (void)configBachFaceDetectCropAlgoWithParam:(id)arg0 byCameraProcessInstance:(void *)arg1;
- (void)configEnigmaAlgoWithParam:(id)arg0 byCameraProcessInstance:(void *)arg1;
- (void)configBachFaceDetectAlgoWithParam:(id)arg0 byCameraProcessInstance:(void *)arg1;
- (void)configRhythmicMotionAlgoWithParam:(id)arg0 byCameraProcessInstance:(void *)arg1;
- (void)configShakeDetectAlgoWithParam:(id)arg0 byCameraProcessInstance:(void *)arg1;
- (void)configImageDefinitionAlgoWithParam:(id)arg0 byCameraProcessInstance:(void *)arg1;
- (void)configQrcodeDetectAlgoWithParam:(id)arg0 byCameraProcessInstance:(void *)arg1;
- (void)configScanAlgoWithParam:(id)arg0 byCameraProcessInstance:(void *)arg1;
- (void)configSystemQrcodeRecognizeWithParam:(id)arg0 byCameraProcessInstance:(void *)arg1;
- (void)p_processError;
- (void)operationCameraProcessWithParam:(id)arg0;
- (void)setAlgProcessSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setForceEnigmaCallback:(BOOL)arg0;
- (void)setEnigmasCallback:(id /* block */)arg0;
- (void)configScanImageWithParam:(id)arg0 andScanParam:(void *)arg1;
- (void)configScanImageStreamWithParam:(id)arg0 andScanParam:(void *)arg1;
- (void)setAlgorithmProcessSize:(struct TESizei { int x0; int x1; } *)arg0;
- (void)processScanErrorWithParam:(id)arg0 error:(int)arg1 description:(const void *)arg2;
- (void)setScanPostUploader;
- (void)postScanData;
- (id /* block */)enigmasCallback;
- (void)processPixelBuffer:(struct __CVBuffer { } *)arg0 info:(id)arg1;
- (void)becomeActive;
- (long long)sessionType;
- (void).cxx_destruct;
- (void)resignActive;
- (void)enterBackground;
- (int)cancel;
- (void)enterForeground;
- (void)startWithCompletion:(id /* block */)arg0;
- (void)setCompletionCallback:(id /* block */)arg0;
- (void)dealloc;
- (id).cxx_construct;
- (id /* block */)resultCallback;
- (void)setResultCallback:(id /* block */)arg0;
- (id /* block */)completionCallback;
- (void)memoryWarning;
- (id)initWithConfig:(id)arg0 error:(id *)arg1;

@end