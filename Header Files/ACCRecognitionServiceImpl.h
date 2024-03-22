//
//     Generated by private class-dump
//

@class ACCRecognitionTrackModel, NSString, NSArray, ACCRecordMode, RACSubject, ACCRecordViewControllerInputData, ACCHotPropDataManager, IESMMEffectMessage;
@protocol ACCRecordPropService, ACCScanService, ACCCameraService;

@interface ACCRecognitionServiceImpl : NSObject <ACCRecognitionService> {
    ACCRecordViewControllerInputData *_inputData;
    id<ACCCameraService> _cameraService;
    id<ACCRecordPropService> _propService;
    id<ACCScanService> _scanService;
    unsigned long long _recognitionState;
    NSString *_currentDetectModeStr;
    NSArray *_currentDetectModeArray;
    unsigned long long _detectResult;
    ACCHotPropDataManager *_dataManager;
    ACCRecordMode *_recordMode;
    unsigned long long _recordState;
    unsigned long long _recognizeDisable;
    RACSubject *_recognitionResultSignal;
    RACSubject *_recognitionEffectsSignal;
    RACSubject *_disableRecognitionSignal;
    RACSubject *_hiddenSwitchModeSignal;
    IESMMEffectMessage *_recognitionMessage;
    ACCRecognitionTrackModel *_trackModel;
}

@property (nonatomic) unsigned long long recognitionState;
@property (copy, nonatomic) NSString *currentDetectModeStr;
@property (copy, nonatomic) NSArray *currentDetectModeArray;
@property (nonatomic) unsigned long long detectResult;
@property (retain, nonatomic) ACCHotPropDataManager *dataManager;
@property (retain, nonatomic) ACCRecordMode *recordMode;
@property (nonatomic) unsigned long long recordState;
@property (nonatomic) unsigned long long recognizeDisable;
@property (retain, nonatomic) RACSubject *recognitionResultSignal;
@property (retain, nonatomic) RACSubject *recognitionEffectsSignal;
@property (retain, nonatomic) RACSubject *disableRecognitionSignal;
@property (retain, nonatomic) RACSubject *hiddenSwitchModeSignal;
@property (retain, nonatomic) IESMMEffectMessage *recognitionMessage;
@property (retain, nonatomic) ACCRecognitionTrackModel *trackModel;
@property (readonly, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCScanService> scanService;
@property (readonly, nonatomic) BOOL disableRecognize;

- (void)setDetectResult:(unsigned long long)arg0;
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
- (void)updateRecordMode:(id)arg0;
- (void)willRelease;
- (BOOL)shouldShowBubble:(unsigned long long)arg0;
- (void)markShowedBubble:(unsigned long long)arg0;
- (unsigned long long)recognitionState;
- (id)recognitionMessage;
- (id)recognitionResultSignal;
- (id)recognitionEffectsSignal;
- (id)disableRecognitionSignal;
- (id)hiddenSwitchModeSignal;
- (BOOL)disableRecognize;
- (unsigned long long)recognizeDisable;
- (void)setRecognitionState:(unsigned long long)arg0;
- (void)setRecognizeDisable:(unsigned long long)arg0;
- (BOOL)bubbleShowed:(unsigned long long)arg0;
- (BOOL)isTodayFirstRecord;
- (id)keyForBubble:(unsigned long long)arg0;
- (void)setRecognitionMessage:(id)arg0;
- (void)setRecognitionResultSignal:(id)arg0;
- (void)setRecognitionEffectsSignal:(id)arg0;
- (void)setDisableRecognitionSignal:(id)arg0;
- (void)setHiddenSwitchModeSignal:(id)arg0;
- (id)scanService;
- (void)setScanService:(id)arg0;
- (id)currentDetectModeStr;
- (id)currentDetectModeArray;
- (unsigned long long)detectResult;
- (unsigned long long)checkInputData:(id)arg0;
- (BOOL)isReadyForRecognition;
- (void)setCurrentDetectModeStr:(id)arg0;
- (void)setCurrentDetectModeArray:(id)arg0;
- (id)dataManager;
- (void).cxx_destruct;
- (void)setDataManager:(id)arg0;
- (id)inputData;
- (unsigned long long)recordState;

@end