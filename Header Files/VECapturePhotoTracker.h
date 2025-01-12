//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface VECapturePhotoTracker : NSObject {
    BOOL _enableEffect;
    BOOL _flashEnabled;
    BOOL _redEyeReductionEnabled;
    BOOL _stillImageStabilizationEnabled;
    BOOL _virtualDeviceFusionEnabled;
    BOOL _dualCameraFusionEnabled;
    BOOL _contentAwareDistortionCorrectionEnabled;
    long long _captureMode;
    long long _flashMode;
    double _captureStart;
    double _captureEnd;
    double _processStart;
    double _processEnd;
    double _totalStart;
    double _totalEnd;
    long long _photoQualityMode;
    long long _cameraPosition;
    NSString *_sourceDeviceType;
    long long _errorCode;
    NSString *_errorMessage;
    NSDictionary *_metaData;
    struct CGSize { double width; double height; } _cameraPhotoSize;
    struct CGSize { double width; double height; } _photoSize;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _photoProcessingTimeRange;
}

@property (nonatomic) long long captureMode;
@property (nonatomic) BOOL enableEffect;
@property (nonatomic) long long flashMode;
@property (nonatomic) struct CGSize { double width; double height; } cameraPhotoSize;
@property (nonatomic) struct CGSize { double width; double height; } photoSize;
@property (nonatomic) double captureStart;
@property (nonatomic) double captureEnd;
@property (nonatomic) double processStart;
@property (nonatomic) double processEnd;
@property (nonatomic) double totalStart;
@property (nonatomic) double totalEnd;
@property (nonatomic) long long photoQualityMode;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) BOOL flashEnabled;
@property (nonatomic) BOOL redEyeReductionEnabled;
@property (nonatomic) BOOL stillImageStabilizationEnabled;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } photoProcessingTimeRange;
@property (nonatomic) BOOL virtualDeviceFusionEnabled;
@property (nonatomic) BOOL dualCameraFusionEnabled;
@property (nonatomic) BOOL contentAwareDistortionCorrectionEnabled;
@property (nonatomic) NSString *sourceDeviceType;
@property (nonatomic) long long errorCode;
@property (retain, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSDictionary *metaData;
@property (readonly, nonatomic) unsigned long long captureCost;
@property (readonly, nonatomic) unsigned long long processCost;
@property (readonly, nonatomic) unsigned long long totalCost;

- (void)setEnableEffect:(BOOL)arg0;
- (BOOL)enableEffect;
- (double)processEnd;
- (void)setPhotoQualityMode:(long long)arg0;
- (void)setCameraPhotoSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setPhotoProcessingTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (void)setStillImageStabilizationEnabled:(BOOL)arg0;
- (void)setVirtualDeviceFusionEnabled:(BOOL)arg0;
- (void)setDualCameraFusionEnabled:(BOOL)arg0;
- (void)setSourceDeviceType:(id)arg0;
- (struct CGSize { double x0; double x1; })cameraPhotoSize;
- (unsigned long long)captureCost;
- (unsigned long long)processCost;
- (long long)photoQualityMode;
- (double)captureEnd;
- (double)captureStart;
- (double)processStart;
- (double)totalEnd;
- (double)totalStart;
- (void)setCaptureStart:(double)arg0;
- (void)setCaptureEnd:(double)arg0;
- (void)setProcessStart:(double)arg0;
- (void)setProcessEnd:(double)arg0;
- (void)setTotalStart:(double)arg0;
- (void)setTotalEnd:(double)arg0;
- (id)sourceDeviceType;
- (id)metaData;
- (long long)flashMode;
- (long long)cameraPosition;
- (void)setCaptureMode:(long long)arg0;
- (void)setFlashMode:(long long)arg0;
- (void).cxx_destruct;
- (long long)captureMode;
- (void)setErrorCode:(long long)arg0;
- (void)setRedEyeReductionEnabled:(BOOL)arg0;
- (long long)errorCode;
- (BOOL)redEyeReductionEnabled;
- (void)setContentAwareDistortionCorrectionEnabled:(BOOL)arg0;
- (void)setMetaData:(id)arg0;
- (id)errorMessage;
- (struct CGSize { double x0; double x1; })photoSize;
- (void)setPhotoSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setErrorMessage:(id)arg0;
- (BOOL)flashEnabled;
- (BOOL)stillImageStabilizationEnabled;
- (BOOL)virtualDeviceFusionEnabled;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })photoProcessingTimeRange;
- (BOOL)contentAwareDistortionCorrectionEnabled;
- (BOOL)dualCameraFusionEnabled;
- (id)convertToDictionary;
- (void)setCameraPosition:(long long)arg0;
- (unsigned long long)totalCost;
- (void)setFlashEnabled:(BOOL)arg0;

@end
