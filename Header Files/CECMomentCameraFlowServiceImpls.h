//
//     Generated by private class-dump
//

@class NSURL, AFDMomentCameraContext, NSObject, CECMomentCameraConfigProvider, IESEffectModel, IESMMCameraConfig, IESMMCaptureOptions, UIColor, UIView, NSString, NSPointerArray, NSNumber, HTSVideoData, UIImage;
@protocol AFDMomentContextService, CECMomentCameraSubModeService, CECMomentCameraUploadImageResource, OS_dispatch_group, CECMomentCameraUploadLivePhotoResource, OS_dispatch_queue, CECMomentCameraService, AFDMomentCameraPerformanceTrackService, AFDMCEditService, AFDMomentCameraPublishService, ACCServiceProvideRecipe, CECMomentCameraSwitchTabService;

@interface CECMomentCameraFlowServiceImpls : NSObject <CECMomentCameraLifeCircleEvent, ACCCameraControlEvent, ACCRecorderEvent, CECMomentCameraFlowService> {
    BOOL _isSecondPreviewOnTopLeftCorner;
    BOOL _shouldTakeSecondCapture;
    BOOL _isAlbumShowing;
    BOOL _isLivePhotoOn;
    BOOL _hasOpenScanCamera;
    BOOL _isLandingToFeedAfterPublish;
    BOOL _isHasTextSticker;
    BOOL _isTextModel;
    BOOL _userInteractionEnabled;
    BOOL _isSwitchingCameraPosition;
    NSNumber *_lastBeautyStatus;
    id<CECMomentCameraUploadImageResource> _uploadImageResource;
    id<CECMomentCameraUploadLivePhotoResource> _uploadLivePhotoResource;
    NSURL *_livePhotoProgressedImagePath;
    NSURL *_livePhotoProgressedVideoPath;
    unsigned long long _draftType;
    long long _cameraPositionForScanCamera;
    long long _CountDownTime;
    UIImage *_textCapturedImage;
    UIColor *_textBrushModeBgColor;
    UIView *_locationAnchorView;
    AFDMomentCameraContext *_cameraContext;
    NSString *_momentText;
    UIColor *_momentTextBackgroundColor;
    unsigned long long _currentCaptureRatio;
    long long _currentState;
    double _currentDuration;
    long long _currentCaptureOrder;
    long long _captureOrderForTrack;
    UIImage *_capturedImage;
    UIImage *_publishPreviewImage;
    IESEffectModel *_currentFilter;
    UIImage *_smallWindowCapturedImage;
    UIImage *_smallWindowPublishPreviewImage;
    HTSVideoData *_videoData;
    long long _captureTime;
    NSPointerArray *_subscribers;
    NSObject<OS_dispatch_group> *_syncTakePhotoGroup;
    NSObject<OS_dispatch_queue> *_syncStateChangeQueue;
    IESMMCaptureOptions *_captureOptions;
    id<ACCServiceProvideRecipe> _serviceProvider;
    id<CECMomentCameraService> _cameraService;
    id<AFDMCEditService> _editService;
    id<AFDMomentCameraPerformanceTrackService> _trackService;
    id<AFDMomentContextService> _contextService;
    id<CECMomentCameraSubModeService> _subModeService;
    long long _currentBrushEditState;
    id<AFDMomentCameraPublishService> _publishService;
    IESMMCameraConfig *_config;
    id<CECMomentCameraSwitchTabService> _switchTabService;
    CECMomentCameraConfigProvider *_configProvider;
}

@property (nonatomic) unsigned long long currentCaptureRatio;
@property (nonatomic) long long currentState;
@property (nonatomic) double currentDuration;
@property (nonatomic) long long currentCaptureOrder;
@property (nonatomic) long long captureOrderForTrack;
@property (retain, nonatomic) UIImage *capturedImage;
@property (retain, nonatomic) UIImage *publishPreviewImage;
@property (retain, nonatomic) IESEffectModel *currentFilter;
@property (retain, nonatomic) UIImage *smallWindowCapturedImage;
@property (retain, nonatomic) UIImage *smallWindowPublishPreviewImage;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) long long captureTime;
@property (retain, nonatomic) NSPointerArray *subscribers;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *syncTakePhotoGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncStateChangeQueue;
@property (retain, nonatomic) IESMMCaptureOptions *captureOptions;
@property (weak, nonatomic) id<ACCServiceProvideRecipe> serviceProvider;
@property (weak, nonatomic) id<CECMomentCameraService> cameraService;
@property (weak, nonatomic) id<AFDMCEditService> editService;
@property (weak, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (retain, nonatomic) id<AFDMomentContextService> contextService;
@property (weak, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (nonatomic) long long currentBrushEditState;
@property (weak, nonatomic) id<AFDMomentCameraPublishService> publishService;
@property (retain, nonatomic) IESMMCameraConfig *config;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (nonatomic) BOOL isSwitchingCameraPosition;
@property (retain, nonatomic) CECMomentCameraConfigProvider *configProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *appliedFilterID;
@property (retain, nonatomic) NSNumber *lastBeautyStatus;
@property (nonatomic) BOOL shouldTakeSecondCapture;
@property (nonatomic) BOOL hasOpenScanCamera;
@property (nonatomic) BOOL isLandingToFeedAfterPublish;
@property (nonatomic) BOOL isSecondPreviewOnTopLeftCorner;
@property (nonatomic) long long cameraPositionForScanCamera;
@property (copy, nonatomic) NSString *momentText;
@property (retain, nonatomic) UIColor *momentTextBackgroundColor;
@property (readonly, nonatomic) unsigned long long draftType;
@property (nonatomic) long long CountDownTime;
@property (nonatomic) BOOL isAlbumShowing;
@property (readonly, nonatomic) BOOL isUpload;
@property (retain, nonatomic) id<CECMomentCameraUploadImageResource> uploadImageResource;
@property (retain, nonatomic) id<CECMomentCameraUploadLivePhotoResource> uploadLivePhotoResource;
@property (nonatomic) BOOL isTextMode;
@property (nonatomic) BOOL isHasTextSticker;
@property (retain, nonatomic) UIImage *textCapturedImage;
@property (retain, nonatomic) UIColor *textBrushModeBgColor;
@property (retain, nonatomic) NSURL *livePhotoProgressedImagePath;
@property (retain, nonatomic) NSURL *livePhotoProgressedVideoPath;
@property (nonatomic) BOOL isLivePhotoOn;
@property (retain, nonatomic) UIView *locationAnchorView;
@property (retain, nonatomic) AFDMomentCameraContext *cameraContext;

- (id)videoData;
- (void)setVideoData:(id)arg0;
- (id)cameraContext;
- (void)setCameraContext:(id)arg0;
- (void)pauseVideoRecord;
- (void)setIsTextMode:(BOOL)arg0;
- (id)captureOptions;
- (void)startVideoRecord;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)setCountDownTime:(long long)arg0;
- (void)exportVideo;
- (void)setPublishService:(id)arg0;
- (id)publishService;
- (id)editService;
- (void)setEditService:(id)arg0;
- (id)trackService;
- (void)cameraService:(id)arg0 didChangeDuration:(double)arg1 totalDuration:(double)arg2;
- (void)cameraService:(id)arg0 didReachMaxTimeVideoRecordWithError:(id)arg1;
- (void)onFinishExportVideoDataWithData:(id)arg0 error:(id)arg1;
- (void)setTrackService:(id)arg0;
- (id)locationAnchorView;
- (void)setLocationAnchorView:(id)arg0;
- (id)momentText;
- (BOOL)isHasTextSticker;
- (id)switchTabService;
- (void)setIsHasTextSticker:(BOOL)arg0;
- (void)setMomentText:(id)arg0;
- (void)setSwitchTabService:(id)arg0;
- (void)recordCurrentFilter:(id)arg0;
- (void)configUploadImageResource:(id)arg0 withType:(unsigned long long)arg1;
- (void)configUploadLivePhotoResource:(id)arg0 withType:(unsigned long long)arg1;
- (void)beginTakePhotoWorkFlowByMode:(unsigned long long)arg0;
- (void)takeMomentTextSnapshot;
- (void)takePhotoInSingleMode;
- (void)takePhotos;
- (void)takeSecondPhoto;
- (void)triggerDelayEnableUserInteraction;
- (void)swapImageResources;
- (void)resetCurrentCaptureOrder;
- (BOOL)startCameraVerify;
- (id)currentMomentType;
- (id)currentContentType;
- (void)updateCapturedImage:(id)arg0;
- (long long)getNextDevicePosition:(long long)arg0;
- (void)switchCameraToMultiCameraFromShootWithUseCameraSession:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)switchCameraToMultiCameraFromShootWithCompletion:(id /* block */)arg0;
- (void)switchCameraToMultiCameraWithCompletion:(id /* block */)arg0;
- (void)switchCameraToSingleCameraWithCompletion:(id /* block */)arg0;
- (void)setupConfig:(id)arg0 withMode:(unsigned long long)arg1;
- (long long)devicePositionForMode:(unsigned long long)arg0;
- (long long)currentCaptureOrder;
- (long long)captureOrderForTrack;
- (id)appliedFilterID;
- (id)lastBeautyStatus;
- (void)setLastBeautyStatus:(id)arg0;
- (BOOL)shouldTakeSecondCapture;
- (void)setShouldTakeSecondCapture:(BOOL)arg0;
- (BOOL)hasOpenScanCamera;
- (void)setHasOpenScanCamera:(BOOL)arg0;
- (BOOL)isLandingToFeedAfterPublish;
- (void)setIsLandingToFeedAfterPublish:(BOOL)arg0;
- (BOOL)isSecondPreviewOnTopLeftCorner;
- (void)setIsSecondPreviewOnTopLeftCorner:(BOOL)arg0;
- (long long)cameraPositionForScanCamera;
- (void)setCameraPositionForScanCamera:(long long)arg0;
- (id)momentTextBackgroundColor;
- (void)setMomentTextBackgroundColor:(id)arg0;
- (id)publishPreviewImage;
- (id)smallWindowCapturedImage;
- (id)smallWindowPublishPreviewImage;
- (long long)CountDownTime;
- (BOOL)isAlbumShowing;
- (void)setIsAlbumShowing:(BOOL)arg0;
- (id)uploadImageResource;
- (void)setUploadImageResource:(id)arg0;
- (id)uploadLivePhotoResource;
- (void)setUploadLivePhotoResource:(id)arg0;
- (id)textCapturedImage;
- (void)setTextCapturedImage:(id)arg0;
- (id)textBrushModeBgColor;
- (void)setTextBrushModeBgColor:(id)arg0;
- (id)livePhotoProgressedImagePath;
- (void)setLivePhotoProgressedImagePath:(id)arg0;
- (id)livePhotoProgressedVideoPath;
- (void)setLivePhotoProgressedVideoPath:(id)arg0;
- (BOOL)isLivePhotoOn;
- (void)setIsLivePhotoOn:(BOOL)arg0;
- (id)syncTakePhotoGroup;
- (id)contextService;
- (id)subModeService;
- (void)setContextService:(id)arg0;
- (void)setSubModeService:(id)arg0;
- (void)onDidSwitchToCameraPosition:(long long)arg0;
- (void)changeBrushEditState:(long long)arg0;
- (long long)currentBrushEditState;
- (void)p_clearCacheData;
- (void)p_trackRecordVideo;
- (void)setPublishPreviewImage:(id)arg0;
- (id)syncStateChangeQueue;
- (void)updateDraftTypeIfNeed;
- (void)cleanCacheAfterPublish:(long long)arg0;
- (void)setCurrentBrushEditState:(long long)arg0;
- (void)setSyncTakePhotoGroup:(id)arg0;
- (void)setSyncStateChangeQueue:(id)arg0;
- (void)setCaptureOptions:(id)arg0;
- (BOOL)cameraflowAuthCheckPassed;
- (void)buildCameraWithMode:(unsigned long long)arg0;
- (id)configWithMode:(unsigned long long)arg0;
- (void)cacheMomentCameraCurrectCapturePosition;
- (BOOL)isExchangeMode;
- (void)p_trackMomentCamerRecord;
- (void)setCurrentCaptureOrder:(long long)arg0;
- (void)setCaptureOrderForTrack:(long long)arg0;
- (void)takePhotoFromSmallAreaWithCompletion:(id /* block */)arg0;
- (void)takePhotoFromLargeAreaWithCompletion:(id /* block */)arg0;
- (void)setIsSwitchingCameraPosition:(BOOL)arg0;
- (void)takePhotoForFakeDoubleCaptureWithCompletion:(id /* block */)arg0;
- (void)setSmallWindowPublishPreviewImage:(id)arg0;
- (void)setSmallWindowCapturedImage:(id)arg0;
- (void)p_trackEditPageSwapImage;
- (BOOL)isSwitchingCameraPosition;
- (unsigned long long)flashModeForMode:(unsigned long long)arg0;
- (unsigned long long)currentCaptureRatio;
- (void)setCurrentCaptureRatio:(unsigned long long)arg0;
- (void)setCaptureTime:(long long)arg0;
- (void)setCurrentState:(long long)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)arg0;
- (long long)currentState;
- (id)config;
- (void)setServiceProvider:(id)arg0;
- (void)setCurrentFilter:(id)arg0;
- (void)setConfigProvider:(id)arg0;
- (long long)captureTime;
- (id)subscribers;
- (BOOL)userInteractionEnabled;
- (id)initWithServiceProvider:(id)arg0;
- (id)serviceProvider;
- (id)configProvider;
- (void)deleteAll;
- (void)addSubscriber:(id)arg0;
- (id)currentFilter;
- (void)removeSubscriber:(id)arg0;
- (BOOL)isUpload;
- (id)capturedImage;
- (void)setCapturedImage:(id)arg0;
- (void)changeToState:(long long)arg0;
- (double)currentDuration;
- (void)setCurrentDuration:(double)arg0;
- (BOOL)isTextMode;
- (void)setSubscribers:(id)arg0;
- (unsigned long long)draftType;

@end
