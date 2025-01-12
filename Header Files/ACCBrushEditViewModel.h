//
//     Generated by private class-dump
//

@class NLEInterface_OC, NSString, NSArray, RACSignal, RACSubject, AWEVideoPublishViewModel, DVEBrushEditHelper, DVEEffectValue, NSNumber;
@protocol ACCSequenceEditServiceProtocol, ACCEditServiceProtocol;

@interface ACCBrushEditViewModel : ACCEditViewModel <ACCBrushEditServiceProtocol> {
    BOOL _completeLoadColors;
    BOOL _largeSliderChangeState;
    BOOL _isLoadingResource;
    DVEBrushEditHelper *_brushHelper;
    NSArray *_brushValues;
    DVEEffectValue *_currentBrushValue;
    NSString *_lastBrushPath;
    double _sliderValue;
    NSString *_currentBrushSlotId;
    NSNumber *_selectedColorIndex;
    NSString *_currentProjectUUID;
    AWEVideoPublishViewModel *_currentPublishModel;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    RACSignal *_willShowBrushEditVCSignal;
    RACSubject *_willShowBrushEditVCSubject;
    RACSignal *_didDismissBrushEditVCSignal;
    RACSubject *_didDismissBrushEditVCSubject;
    id<ACCEditServiceProtocol> _editService;
    long long _restartResourceLoadingTimes;
}

@property (retain, nonatomic) NSArray *brushValues;
@property (nonatomic) BOOL completeLoadColors;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) AWEVideoPublishViewModel *currentPublishModel;
@property (retain, nonatomic) RACSignal *willShowBrushEditVCSignal;
@property (retain, nonatomic) RACSubject *willShowBrushEditVCSubject;
@property (retain, nonatomic) RACSignal *didDismissBrushEditVCSignal;
@property (retain, nonatomic) RACSubject *didDismissBrushEditVCSubject;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (nonatomic) BOOL isLoadingResource;
@property (nonatomic) long long restartResourceLoadingTimes;
@property (retain, nonatomic) DVEBrushEditHelper *brushHelper;
@property (retain, nonatomic) DVEEffectValue *currentBrushValue;
@property (copy, nonatomic) NSString *lastBrushPath;
@property (nonatomic) double sliderValue;
@property (copy, nonatomic) NSString *currentBrushSlotId;
@property (retain, nonatomic) NSNumber *selectedColorIndex;
@property (nonatomic) BOOL largeSliderChangeState;
@property (copy, nonatomic) NSString *currentProjectUUID;
@property (readonly, weak, nonatomic) NLEInterface_OC *nle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nle;
- (id)currentBrushValue;
- (void)setBrushValues:(id)arg0;
- (void)setCurrentBrushValue:(id)arg0;
- (id)brushHelper;
- (void)setCurrentBrushSlotId:(id)arg0;
- (id)currentBrushSlotId;
- (void)setBrushHelper:(id)arg0;
- (id)brushValues;
- (id)editService;
- (void)setEditService:(id)arg0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (id)currentProjectUUID;
- (id)willShowBrushEditVCSignal;
- (id)didDismissBrushEditVCSignal;
- (void)reloadBrushResourcesIfNeeded;
- (void)resetCurrentRepositoryProjectIfNeeded;
- (void)willShowBrushEditVC;
- (void)continuePlayMusic;
- (BOOL)largeSliderChangeState;
- (void)setLargeSliderChangeState:(BOOL)arg0;
- (id)currentPublishModel;
- (id)lastBrushPath;
- (void)setLastBrushPath:(id)arg0;
- (BOOL)completeLoadColors;
- (void)didDismissBrushEditVC;
- (void)saveBrushStickerWithNle:(id)arg0 brushSlot:(id)arg1 savePath:(id)arg2;
- (BOOL)isLoadingResource;
- (void)setRestartResourceLoadingTimes:(long long)arg0;
- (void)preLoadBrushResources;
- (long long)restartResourceLoadingTimes;
- (void)setIsLoadingResource:(BOOL)arg0;
- (void)setCompleteLoadColors:(BOOL)arg0;
- (id)willShowBrushEditVCSubject;
- (id)didDismissBrushEditVCSubject;
- (void)setCurrentProjectUUID:(id)arg0;
- (void)setCurrentPublishModel:(id)arg0;
- (void)setWillShowBrushEditVCSignal:(id)arg0;
- (void)setWillShowBrushEditVCSubject:(id)arg0;
- (void)setDidDismissBrushEditVCSignal:(id)arg0;
- (void)setDidDismissBrushEditVCSubject:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setSliderValue:(double)arg0;
- (double)sliderValue;
- (void)setSelectedColorIndex:(id)arg0;
- (id)selectedColorIndex;

@end
