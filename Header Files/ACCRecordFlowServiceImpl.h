//
//     Generated by private class-dump
//

@class ACCCameraSubscription, NSString, RACSubject, AWEVideoPublishViewModel, NSMutableArray;
@protocol ACCRecordConfigService, ACCRecordPropService, ACCCameraService;

@interface ACCRecordFlowServiceImpl : NSObject <ACCRecordFlowService> {
    BOOL _isFirstDuration;
    BOOL _exporting;
    BOOL _hasStopCaptureWhenEnterEdit;
    BOOL _isDelayRecord;
    double _selectedSpeed;
    unsigned long long _flowState;
    double _currentDuration;
    double _lastCapturedVideoDuration;
    double _reactLastCapturedVideoDuration;
    unsigned long long _mixSubtype;
    id /* block */ _segmentDurationEnumerator;
    id /* block */ _totalDurationCalculatortail;
    id<ACCCameraService> _cameraService;
    id<ACCRecordConfigService> _recordConfigService;
    id<ACCRecordPropService> _propService;
    AWEVideoPublishViewModel *_repository;
    NSMutableArray *_markedTimes;
    ACCCameraSubscription *_subscription;
    RACSubject *_captureStillImageSubject;
}

@property (nonatomic) unsigned long long flowState;
@property (retain, nonatomic) NSMutableArray *markedTimes;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) RACSubject *captureStillImageSubject;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordConfigService> recordConfigService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) double selectedSpeed;
@property (nonatomic) BOOL isFirstDuration;
@property (nonatomic, getter=isExporting) BOOL exporting;
@property (nonatomic) double currentDuration;
@property (nonatomic) double lastCapturedVideoDuration;
@property (nonatomic) double reactLastCapturedVideoDuration;
@property (nonatomic) unsigned long long mixSubtype;
@property (nonatomic) BOOL hasStopCaptureWhenEnterEdit;
@property (nonatomic) BOOL isDelayRecord;
@property (readonly, nonatomic) unsigned long long videoSegmentsCount;
@property (copy, nonatomic) id /* block */ totalDurationCalculator;
@property (copy, nonatomic) id /* block */ segmentDurationEnumerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopRecord;
- (void)startRecord;
- (void)cancelRecord;
- (void)setSelectedSpeed:(double)arg0;
- (void)pauseRecord;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)exportVideo;
- (long long)markedTimesCount;
- (void)restoreVideoDuration;
- (void)restoreDuration;
- (void)deleteAllSegments;
- (void)removeLastSegment;
- (void)fillChallengeNameForFragmentInfo;
- (BOOL)allowComplete;
- (void)setupMaxLimitTime;
- (void)startRecordWithDelayRecord:(BOOL)arg0;
- (void)pauseRecordWithSuccess:(BOOL)arg0;
- (void)picturePauseRecordWithSuccess:(BOOL)arg0;
- (void)stopRecordAndPossiblyExportVideo;
- (void)stopRecordAndExportVideo;
- (void)finishExportVideo:(BOOL)arg0;
- (void)executeExportCompletionWithVideoData:(id)arg0 error:(id)arg1;
- (void)willEnterNextPageWithMode:(id)arg0;
- (void)didEnterNextPageWithMode:(id)arg0;
- (void)notifyWillCancelRecord;
- (id)captureStillImageSignal;
- (void)cancelDelayFetchIfNeeded;
- (void)startShowCountDownAnimation;
- (void)countDownAnimationCompleted;
- (BOOL)isFirstDuration;
- (void)setIsFirstDuration:(BOOL)arg0;
- (void)setExporting:(BOOL)arg0;
- (double)lastCapturedVideoDuration;
- (void)setLastCapturedVideoDuration:(double)arg0;
- (double)reactLastCapturedVideoDuration;
- (void)setReactLastCapturedVideoDuration:(double)arg0;
- (unsigned long long)mixSubtype;
- (void)setMixSubtype:(unsigned long long)arg0;
- (BOOL)hasStopCaptureWhenEnterEdit;
- (void)setHasStopCaptureWhenEnterEdit:(BOOL)arg0;
- (BOOL)isDelayRecord;
- (void)setIsDelayRecord:(BOOL)arg0;
- (unsigned long long)videoSegmentsCount;
- (id)markedTimes;
- (id /* block */)totalDurationCalculator;
- (void)setTotalDurationCalculator:(id /* block */)arg0;
- (id /* block */)segmentDurationEnumerator;
- (void)setSegmentDurationEnumerator:(id /* block */)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void)setRecordConfigService:(id)arg0;
- (id)recordConfigService;
- (BOOL)p_handleTorchModeOnStartWithBlock:(id /* block */)arg0;
- (void)judgeIsFirstVideoDuration:(double)arg0;
- (void)removeAllMarkedTime;
- (void)markDuration:(double)arg0;
- (void)p_deleteAllSegmentsStickerSavePhotos;
- (void)p_deleteAllSegmentsFrames;
- (void)p_deleteLastSegmentFrames;
- (void)p_deleteLastSegmentStickerSavePhotos;
- (void)adjustPublishTitleAfterRemoveLastVideoFragmentInfo:(id)arg0;
- (void)removeLastMarkedTime;
- (void)removeLastVideoFragmentInfo;
- (void)fillChallengeInfo:(id)arg0;
- (void)realStartRecordWithSpeed:(double)arg0;
- (void)addFragmentInfo;
- (void)addPictureToVideoInfo;
- (void)fillChallengeNameForPictureInfo;
- (void)startCaptureSystemImage:(BOOL)arg0 delayFrame:(BOOL)arg1;
- (void)startCapturePreviewImage:(BOOL)arg0;
- (id)captureStillImageSubject;
- (void)p_didFinishTakePicture:(id)arg0 error:(id)arg1 delayFrame:(BOOL)arg2;
- (void)notifyDidTakePicture:(id)arg0 error:(id)arg1;
- (void)setCaptureStillImageSubject:(id)arg0;
- (void)p_trackTackPictureInfo:(id)arg0;
- (void)setMarkedTimes:(id)arg0;
- (id)init;
- (double)selectedSpeed;
- (void).cxx_destruct;
- (BOOL)complete;
- (BOOL)isExporting;
- (void)stopCapture;
- (void)setRepository:(id)arg0;
- (id)repository;
- (void)setSubscription:(id)arg0;
- (void)deleteAllSegments:(id /* block */)arg0;
- (void)addSubscriber:(id)arg0;
- (id)subscription;
- (void)removeSubscriber:(id)arg0;
- (void)takePicture;
- (unsigned long long)flowState;
- (void)setFlowState:(unsigned long long)arg0;
- (double)currentDuration;
- (void)setCurrentDuration:(double)arg0;

@end
