//
//     Generated by private class-dump
//

@class VECaptureProcessParamImageDefinitionDetect, VECaptureProcessParamQrcodeDetect, VECaptureProcessParamEnigma, VECaptureProcessParamShakingDetect, VECaptureProcessParamScan;

@protocol ACCRecordScanModeParamFactory <NSObject>

@property (readonly, nonatomic) VECaptureProcessParamShakingDetect *shakingDetectParam;
@property (readonly, nonatomic) VECaptureProcessParamImageDefinitionDetect *imageDefinitionDetectParam;
@property (readonly, nonatomic) VECaptureProcessParamEnigma *scanCameraQRCodeParam;
@property (readonly, nonatomic) VECaptureProcessParamScan *scanAnythingParam;
@property (readonly, nonatomic) VECaptureProcessParamQrcodeDetect *captureProcessParamQrcodeDetectParam;

- (id)scanAnythingParam;
- (void)oberserStableStatus:(id /* block */)arg0;
- (id)shakingDetectParam;
- (id)imageDefinitionDetectParam;
- (id)scanCameraQRCodeParam;
- (id)captureProcessParamQrcodeDetectParam;

@end
