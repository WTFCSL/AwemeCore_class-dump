//
//     Generated by private class-dump
//

@class ACCRecordViewControllerInputData, ACCRecordMode, RACSubject, NSString, ACCRecognitionTrackModel, AWETeenRecognitionScannerWrapper, IESMMEffectMessage;
@protocol ACCRecordPropService, ACCCameraService;

@interface AWETeenRecognitionServiceImpl : NSObject <AWETeenRecognitionService> {
    BOOL _forbidShowRecognitionGuide;
    ACCRecordViewControllerInputData *_inputData;
    id<ACCCameraService> _cameraService;
    id<ACCRecordPropService> _propService;
    unsigned long long _recognitionState;
    ACCRecordMode *_recordMode;
    unsigned long long _recordState;
    unsigned long long _recognizeDisable;
    AWETeenRecognitionScannerWrapper *_scanner;
    RACSubject *_recognitionResultSignal;
    RACSubject *_recognitionGrootSignal;
    RACSubject *_recognitionEffectsSignal;
    RACSubject *_disableRecognitionSignal;
    RACSubject *_hiddenSwitchModeSignal;
    IESMMEffectMessage *_recognitionMessage;
    ACCRecognitionTrackModel *_trackModel;
}

@property (nonatomic) unsigned long long recognitionState;
@property (retain, nonatomic) ACCRecordMode *recordMode;
@property (nonatomic) unsigned long long recordState;
@property (nonatomic) unsigned long long recognizeDisable;
@property (retain, nonatomic) AWETeenRecognitionScannerWrapper *scanner;
@property (retain, nonatomic) RACSubject *recognitionResultSignal;
@property (retain, nonatomic) RACSubject *recognitionGrootSignal;
@property (retain, nonatomic) RACSubject *recognitionEffectsSignal;
@property (retain, nonatomic) RACSubject *disableRecognitionSignal;
@property (retain, nonatomic) RACSubject *hiddenSwitchModeSignal;
@property (retain, nonatomic) IESMMEffectMessage *recognitionMessage;
@property (retain, nonatomic) ACCRecognitionTrackModel *trackModel;
@property (nonatomic) BOOL forbidShowRecognitionGuide;
@property (readonly, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (readonly, nonatomic) BOOL disableRecognize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)recordMode;
- (void)setRecordMode:(id)arg0;
- (void)setTrackModel:(id)arg0;
- (id)trackModel;
- (void)setRecordState:(unsigned long long)arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (id)initWithInputData:(id)arg0;
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
- (unsigned long long)recognizeDisable;
- (void)setRecognitionState:(unsigned long long)arg0;
- (void)setupTrackModel:(id)arg0;
- (void)setRecognizeDisable:(unsigned long long)arg0;
- (BOOL)bubbleShowed:(unsigned long long)arg0;
- (BOOL)isTodayFirstRecord;
- (id)keyForBubble:(unsigned long long)arg0;
- (void)setRecognitionMessage:(id)arg0;
- (void)setForbidShowRecognitionGuide:(BOOL)arg0;
- (id)getMaxClarityScoreResult:(id)arg0;
- (void)setRecognitionResultSignal:(id)arg0;
- (void)setRecognitionGrootSignal:(id)arg0;
- (void)setRecognitionEffectsSignal:(id)arg0;
- (void)setDisableRecognitionSignal:(id)arg0;
- (void)setHiddenSwitchModeSignal:(id)arg0;
- (void).cxx_destruct;
- (id)scanner;
- (void)setScanner:(id)arg0;
- (id)inputData;
- (void)updateMessage:(id)arg0;
- (unsigned long long)recordState;

@end