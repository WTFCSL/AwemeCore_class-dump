//
//     Generated by private class-dump
//

@class ACCRecordGestureActionHandler, UITapGestureRecognizer, NSString, UIPinchGestureRecognizer, NSMutableSet, ACCEffectGestureActionHandler, UIPanGestureRecognizer, ACCRecordTapGestureRecognizer;
@protocol ACCRecordSwitchModeService, ACCRecordPropService, ACCCameraSwapService, ACCRecorderViewContainer, ACCRecordGestureService, ACCRecordDualService, ACCRecordARService, ACCFilterService, ACCCameraService;

@interface ACCRecordGestureComponent : ACCFeatureComponent <UIGestureRecognizerDelegate> {
    BOOL _hasAddGesture;
    BOOL _sdkGestureHasDisabled;
    BOOL _hasAddDuetLayoutGesture;
    BOOL _manuallyDisableSDKGestures;
    BOOL _disableDoubleTapGesture;
    BOOL _disablePinchZoomGesture;
    NSMutableSet *_sdkGesturesSet;
    UITapGestureRecognizer *_cameraTapGesture;
    ACCRecordTapGestureRecognizer *_doubleTapSwitchCamera;
    UIPinchGestureRecognizer *_recordPinchGesture;
    UIPanGestureRecognizer *_exposureCompensationPanGesture;
    UIPanGestureRecognizer *_sdkDuetLayoutPanGesture;
    id<ACCRecorderViewContainer> _viewContainer;
    ACCRecordGestureActionHandler *_cameraActionHandler;
    ACCEffectGestureActionHandler *_sdkActionHandler;
    id<ACCRecordARService> _arService;
    id<ACCCameraService> _cameraService;
    id<ACCCameraSwapService> _cameraSwapService;
    id<ACCFilterService> _filterService;
    id<ACCRecordPropService> _propService;
    id<ACCRecordGestureService> _gestureService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordDualService> _dualService;
}

@property (retain, nonatomic) NSMutableSet *sdkGesturesSet;
@property (retain, nonatomic) UITapGestureRecognizer *cameraTapGesture;
@property (retain, nonatomic) ACCRecordTapGestureRecognizer *doubleTapSwitchCamera;
@property (retain, nonatomic) UIPinchGestureRecognizer *recordPinchGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *exposureCompensationPanGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *sdkDuetLayoutPanGesture;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) ACCRecordGestureActionHandler *cameraActionHandler;
@property (retain, nonatomic) ACCEffectGestureActionHandler *sdkActionHandler;
@property (nonatomic) BOOL hasAddGesture;
@property (nonatomic) BOOL sdkGestureHasDisabled;
@property (nonatomic) BOOL hasAddDuetLayoutGesture;
@property (nonatomic) BOOL manuallyDisableSDKGestures;
@property (retain, nonatomic) id<ACCRecordARService> arService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCCameraSwapService> cameraSwapService;
@property (retain, nonatomic) id<ACCFilterService> filterService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordGestureService> gestureService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (nonatomic) BOOL disableDoubleTapGesture;
@property (nonatomic) BOOL disablePinchZoomGesture;
@property (retain, nonatomic) id<ACCRecordDualService> dualService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)p_handleSDKPanGesture:(id)arg0;
- (void)addGestures;
- (void)addLongPressGesture;
- (id)serviceBinding;
- (void)setFilterService:(id)arg0;
- (id)filterService;
- (id)switchModeService;
- (void)setSwitchModeService:(id)arg0;
- (void)addPanGesture;
- (BOOL)disableDoubleTapGesture;
- (id)gestureService;
- (void)setGestureService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (id)cameraSwapService;
- (void)setCameraSwapService:(id)arg0;
- (void)disablePinchZoomGesture:(BOOL)arg0;
- (void)disableDoubleTapGesture:(BOOL)arg0;
- (id)dualService;
- (void)setDualService:(id)arg0;
- (void)p_bindViewModels;
- (id)arService;
- (void)setArService:(id)arg0;
- (void)p_readExistData;
- (void)handleCameraDoubleTapGesture:(id)arg0;
- (void)handleCameraLongPressGesture:(id)arg0;
- (BOOL)hasAddGesture;
- (id)cameraTapGesture;
- (id)exposureCompensationPanGesture;
- (id)sdkGesturesSet;
- (void)setSdkGestureHasDisabled:(BOOL)arg0;
- (void)_setupActionHandler;
- (id)filterCameraPreviewDeliveryTouches:(id)arg0;
- (void)setCameraActionHandler:(id)arg0;
- (void)setSdkActionHandler:(id)arg0;
- (void)updateGestureStateForSticker:(id)arg0;
- (void)manuallyDisableSDKGesturesIfNeeded;
- (void)manuallyEnableSDKGesturesIfNeeded;
- (void)setHasAddGesture:(BOOL)arg0;
- (void)addPinchGestureForZoom;
- (void)addSingleTapGesture;
- (void)addDoubleTapGesture;
- (void)addGesturesForSDK;
- (void)disableSDKGesturesAndDisableTapFocus:(BOOL)arg0;
- (void)addSwipeDirectionUpGestureRecognizer;
- (id)doubleTapSwitchCamera;
- (void)addPinchGestureForZoomWithView:(id)arg0;
- (void)handlePinchGestureForZoom:(id)arg0;
- (void)setRecordPinchGesture:(id)arg0;
- (void)setDisablePinchZoomGesture:(BOOL)arg0;
- (void)addSingleTapGestureWithView:(id)arg0;
- (void)handleCameraTapGesture:(id)arg0;
- (void)setCameraTapGesture:(id)arg0;
- (void)setDisableDoubleTapGesture:(BOOL)arg0;
- (void)addDoubleTapGestureWithView:(id)arg0;
- (void)addLongPressGestureWithView:(id)arg0;
- (void)handleSwipDirectionUpGesture:(id)arg0;
- (void)addPanGestureWithView:(id)arg0;
- (void)handleExposureCompensationPanGesture:(id)arg0;
- (void)setExposureCompensationPanGesture:(id)arg0;
- (BOOL)disablePinchZoomGesture;
- (void)addSDKPanGestureRecognizer;
- (void)addSDKPinchGestureRecognizer;
- (void)addSDKRotationGestureRecognizer;
- (void)addSDKTapGestureRecognizer;
- (void)addSDKLongPressGestureRecognizer;
- (void)handleSDKPanGesture:(id)arg0;
- (id)sdkDuetLayoutPanGesture;
- (void)handleDuetSDKPanGesture:(id)arg0;
- (void)setSdkDuetLayoutPanGesture:(id)arg0;
- (void)handleSDKPinchGesture:(id)arg0;
- (void)handleSDKRotationGesture:(id)arg0;
- (void)handleSDKTapGesture:(id)arg0;
- (void)handleSDKLongPressGesture:(id)arg0;
- (BOOL)hasAddDuetLayoutGesture;
- (id)recordPinchGesture;
- (void)setHasAddDuetLayoutGesture:(BOOL)arg0;
- (void)addSDKDuetLayoutPanGestureRecognizer;
- (void)disableNormalRecordGestures;
- (BOOL)manuallyDisableSDKGestures;
- (BOOL)sdkGestureHasDisabled;
- (void)setManuallyDisableSDKGestures:(BOOL)arg0;
- (void)duetLayoutDidApplyDuetEffect:(BOOL)arg0;
- (id)p_currentEffectIdentifier;
- (void)setSdkGesturesSet:(id)arg0;
- (void)setDoubleTapSwitchCamera:(id)arg0;
- (id)cameraActionHandler;
- (id)sdkActionHandler;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end