//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSHashTable, IESLiveGuideCameraPermissionChecker, IESLiveGuideToolBarItem, IESLiveGuideCameraMicroChecker;
@protocol IESLiveGuideToolBarProvider, IESLivePerfSampler;

@interface IESLiveGuideCameraFragment : IESLiveGuideComponent <IESLiveGuideCameraRouter, IESLiveGuideActions, IESLiveAnchorCameraPermissionProtocol, IESLiveVRSwitchRouter> {
    BOOL _isCaptureResetting;
    BOOL _isWillEnterLive;
    BOOL _hasCheckDirtyCamera;
    BOOL _isolateConfigEnable;
    BOOL _iesliveGuideUseNewCameraMicroChecker;
    BOOL _isVRLiveMode;
    BOOL _iesliveGuideCameraDelay;
    BOOL _hadSetCamera;
    BOOL _componentAllAppear;
    BOOL _isFixCameraHotCutPosition;
    NSHashTable *_permissionHandlerTable;
    NSString *_originCaptureSessionPreset;
    NSString *_waitingCaptureSessionPreset;
    id<IESLiveGuideToolBarProvider> _toolbarProvider;
    id<IESLivePerfSampler> _perfSampler;
    IESLiveGuideToolBarItem *_cameraSwitchItem;
    long long _captureDevicePosition;
    IESLiveGuideCameraPermissionChecker *_permissionChecker;
    IESLiveGuideCameraMicroChecker *_permissionCheckerNew;
    NSHashTable *_permissionHandlers;
    unsigned long long _reportType;
    NSNumber *_recorderOriginFrameRate;
    unsigned long long _liveType;
    double _enterLiveTabTime;
}

@property (retain, nonatomic) NSHashTable *permissionHandlerTable;
@property (copy, nonatomic) NSString *originCaptureSessionPreset;
@property (copy, nonatomic) NSString *waitingCaptureSessionPreset;
@property (nonatomic) BOOL isCaptureResetting;
@property (retain, nonatomic) id<IESLiveGuideToolBarProvider> toolbarProvider;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) IESLiveGuideToolBarItem *cameraSwitchItem;
@property (nonatomic) long long captureDevicePosition;
@property (retain, nonatomic) IESLiveGuideCameraPermissionChecker *permissionChecker;
@property (retain, nonatomic) IESLiveGuideCameraMicroChecker *permissionCheckerNew;
@property (nonatomic) BOOL isWillEnterLive;
@property (retain, nonatomic) NSHashTable *permissionHandlers;
@property (nonatomic) unsigned long long reportType;
@property (nonatomic) BOOL hasCheckDirtyCamera;
@property (retain, nonatomic) NSNumber *recorderOriginFrameRate;
@property (nonatomic) BOOL isolateConfigEnable;
@property (nonatomic) BOOL iesliveGuideUseNewCameraMicroChecker;
@property (nonatomic) BOOL isVRLiveMode;
@property (nonatomic) unsigned long long liveType;
@property (nonatomic) double enterLiveTabTime;
@property (nonatomic) BOOL iesliveGuideCameraDelay;
@property (nonatomic) BOOL hadSetCamera;
@property (nonatomic) BOOL componentAllAppear;
@property (nonatomic) BOOL isFixCameraHotCutPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerCameraPermissionHandler:(id)arg0;
- (void)removeCameraPermissionHandler:(id)arg0;
- (void)setLiveType:(unsigned long long)arg0;
- (unsigned long long)liveType;
- (void)setCaptureDevicePosition:(long long)arg0;
- (void)componentDidAppear;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (id)permissionHandlers;
- (void)setPermissionHandlers:(id)arg0;
- (void)willSwitchToOtherTab;
- (void)willSwitchToLiveTab;
- (void)liveTypeChangeAction:(unsigned long long)arg0;
- (void)willStartLive;
- (void)cameraDidSet;
- (void)mountDidFinishForLevel:(long long)arg0;
- (id)trackClickParams:(id)arg0;
- (void)switchVRLiveMode:(BOOL)arg0;
- (BOOL)isVRLiveMode;
- (id)toolbarProvider;
- (void)setToolbarProvider:(id)arg0;
- (BOOL)canSetCameraActive;
- (void)changeCameraPosition;
- (void)startLiveCheckDirtyCamera;
- (void)cancelReportDirtyInfo;
- (void)setIsVRLiveMode:(BOOL)arg0;
- (void)resetCapturePreset:(id)arg0;
- (void)initCaptureDevicePosition;
- (void)setIsFixCameraHotCutPosition:(BOOL)arg0;
- (void)setIesliveGuideCameraDelay:(BOOL)arg0;
- (BOOL)iesliveGuideCameraDelay;
- (BOOL)iesliveGuideUseNewCameraMicroChecker;
- (void)setIesliveGuideUseNewCameraMicroChecker:(BOOL)arg0;
- (void)setPermissionCheckerNew:(id)arg0;
- (id)permissionCheckerNew;
- (void)setIsolateConfigEnable:(BOOL)arg0;
- (id)cameraSwitchItem;
- (id)permissionChecker;
- (void)setPermissionChecker:(id)arg0;
- (BOOL)liveTypeNeedsCamera;
- (void)checkDirtyCamera;
- (void)switchCameraPositionDidClick:(id)arg0;
- (BOOL)isWillEnterLive;
- (void)setIsWillEnterLive:(BOOL)arg0;
- (void)setEnterLiveTabTime:(double)arg0;
- (BOOL)isolateConfigEnable;
- (void)setHadSetCamera:(BOOL)arg0;
- (id)recorderOriginFrameRate;
- (id)originCaptureSessionPreset;
- (void)setComponentAllAppear:(BOOL)arg0;
- (void)configCamera;
- (BOOL)hadSetCamera;
- (void)isolateRecorderConfig;
- (void)originRecorderConfig;
- (BOOL)isFixCameraHotCutPosition;
- (void)updateVRLive;
- (void)updateHorizontalLive;
- (BOOL)componentAllAppear;
- (void)setRecorderOriginFrameRate:(id)arg0;
- (void)checkShouldResetCapturePreset;
- (void)resetCameraPositionWithoutAnimation;
- (void)trackPreviewLoadingDuration;
- (double)enterLiveTabTime;
- (void)setOriginCaptureSessionPreset:(id)arg0;
- (BOOL)isCaptureResetting;
- (void)setWaitingCaptureSessionPreset:(id)arg0;
- (void)setIsCaptureResetting:(BOOL)arg0;
- (id)waitingCaptureSessionPreset;
- (id)getDirtyCameraTipDict;
- (void)setReportDirtyCameraType:(unsigned long long)arg0;
- (void)setHasCheckDirtyCamera:(BOOL)arg0;
- (id)permissionHandlerTable;
- (void)setPermissionHandlerTable:(id)arg0;
- (void)setCameraSwitchItem:(id)arg0;
- (BOOL)hasCheckDirtyCamera;
- (void).cxx_destruct;
- (unsigned long long)reportType;
- (void)setReportType:(unsigned long long)arg0;
- (void)startVideoCapture;
- (void)stopVideoCapture;
- (void)setCameraActive:(BOOL)arg0;
- (long long)captureDevicePosition;

@end
