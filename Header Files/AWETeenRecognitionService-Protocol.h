//
//     Generated by private class-dump
//

@class RACSignal, ACCRecognitionTrackModel, IESMMEffectMessage, ACCRecordViewControllerInputData;
@protocol ACCRecordPropService, ACCCameraService;

@protocol AWETeenRecognitionService <NSObject>

@property (readonly, nonatomic) unsigned long long recognitionState;
@property (readonly, nonatomic) unsigned long long recordState;
@property (readonly, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (readonly, nonatomic) IESMMEffectMessage *recognitionMessage;
@property (readonly, nonatomic) RACSignal *recognitionResultSignal;
@property (readonly, nonatomic) RACSignal *recognitionGrootSignal;
@property (readonly, nonatomic) RACSignal *recognitionEffectsSignal;
@property (readonly, nonatomic) RACSignal *disableRecognitionSignal;
@property (readonly, nonatomic) RACSignal *hiddenSwitchModeSignal;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (readonly, nonatomic) BOOL disableRecognize;
@property (readonly, nonatomic) ACCRecognitionTrackModel *trackModel;
@property (readonly, nonatomic) BOOL forbidShowRecognitionGuide;

- (id)trackModel;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void)updateRecordState:(unsigned long long)arg0;
- (void)updateRecordMode:(id)arg0;
- (void)updateDisableRecognize:(BOOL)arg0;
- (void)askingHideSwithModeView:(BOOL)arg0;
- (void)startAutoScanWithFilter:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)stopAutoScan;
- (void)releaseScanner;
- (void)willRelease;
- (void)recoverRecognitionStateIfNeeded;
- (BOOL)shouldShowSwitchMode;
- (void)captureImagesAndRecognize:(id)arg0;
- (void)resetRecognition;
- (BOOL)shouldShowBubble:(unsigned long long)arg0;
- (void)markShowedBubble:(unsigned long long)arg0;
- (double)thresholdFor:(unsigned long long)arg0;
- (void)updateTrackModel;
- (void)forbidShowRecognitionGuideStatus:(BOOL)arg0;
- (unsigned long long)recognitionState;
- (id)recognitionMessage;
- (id)recognitionResultSignal;
- (id)recognitionGrootSignal;
- (id)recognitionEffectsSignal;
- (id)disableRecognitionSignal;
- (id)hiddenSwitchModeSignal;
- (BOOL)disableRecognize;
- (BOOL)forbidShowRecognitionGuide;
- (id)inputData;
- (void)updateMessage:(id)arg0;
- (unsigned long long)recordState;

@end
