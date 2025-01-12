//
//     Generated by private class-dump
//

@class ACCRecognitionTrackModel, NSString, NSArray, ACCHotPropDataManager, RACSignal, IESMMEffectMessage, ACCRecordViewControllerInputData;
@protocol ACCRecordPropService, ACCScanService, ACCCameraService;

@protocol ACCRecognitionService

@property (readonly, nonatomic) unsigned long long recognitionState;
@property (readonly, nonatomic) unsigned long long recordState;
@property (readonly, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (readonly, nonatomic) IESMMEffectMessage *recognitionMessage;
@property (readonly, nonatomic) ACCHotPropDataManager *dataManager;
@property (readonly, copy, nonatomic) NSString *currentDetectModeStr;
@property (readonly, copy, nonatomic) NSArray *currentDetectModeArray;
@property (readonly, nonatomic) unsigned long long detectResult;
@property (readonly, nonatomic) RACSignal *recognitionResultSignal;
@property (readonly, nonatomic) RACSignal *recognitionEffectsSignal;
@property (readonly, nonatomic) RACSignal *disableRecognitionSignal;
@property (readonly, nonatomic) RACSignal *hiddenSwitchModeSignal;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCScanService> scanService;
@property (readonly, nonatomic) BOOL disableRecognize;
@property (readonly, nonatomic) ACCRecognitionTrackModel *trackModel;

- (id)trackModel;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void)updateRecordMode:(id)arg0;
- (BOOL)shouldShowBubble:(unsigned long long)arg0;
- (void)markShowedBubble:(unsigned long long)arg0;
- (unsigned long long)recognitionState;
- (id)recognitionMessage;
- (id)recognitionResultSignal;
- (id)recognitionEffectsSignal;
- (id)disableRecognitionSignal;
- (id)hiddenSwitchModeSignal;
- (BOOL)disableRecognize;
- (id)scanService;
- (void)setScanService:(id)arg0;
- (id)currentDetectModeStr;
- (id)currentDetectModeArray;
- (unsigned long long)detectResult;
- (id)dataManager;
- (id)inputData;
- (unsigned long long)recordState;

@end
