//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIImage, UIView;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService, ACCAdvancedRecordSettingService, ACCRecordPropService, ACCRecordFlowService;

@interface ACCRecordFusionMomentReplaceComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, ACCCameraControlEvent, ACCCameraLifeCircleEvent, ACCRecordPropServiceSubscriber, ACCRecordFlowServiceSubscriber> {
    BOOL _firstMaskViewShow;
    BOOL _switchRecordModeShowAnimation;
    BOOL _removeBlurViewFlag;
    BOOL _componentHasAppeared;
    BOOL _componentAppear;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCCameraService> _cameraService;
    id<ACCAdvancedRecordSettingService> _advanceSettingService;
    id<ACCRecordPropService> _propService;
    id<ACCRecordFlowService> _flowService;
    UIImageView *_blurImageView;
    UIView *_blurContentView;
    UIView *_topMaskView;
    UIView *_bottomMaskView;
    UIImage *_lastFrameImage;
    double _switchStreamBegainTime;
}

@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCAdvancedRecordSettingService> advanceSettingService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) UIImageView *blurImageView;
@property (retain, nonatomic) UIView *blurContentView;
@property (retain, nonatomic) UIView *topMaskView;
@property (retain, nonatomic) UIView *bottomMaskView;
@property (nonatomic) BOOL firstMaskViewShow;
@property (nonatomic) BOOL switchRecordModeShowAnimation;
@property (retain, nonatomic) UIImage *lastFrameImage;
@property (nonatomic) BOOL removeBlurViewFlag;
@property (nonatomic) BOOL componentHasAppeared;
@property (nonatomic) double switchStreamBegainTime;
@property (nonatomic) BOOL componentAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)topMaskView;
- (id)bottomMaskView;
- (void)setTopMaskView:(id)arg0;
- (void)setBottomMaskView:(id)arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentWillDisappear;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (BOOL)componentHasAppeared;
- (void)setComponentHasAppeared:(BOOL)arg0;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (id)switchModeService;
- (void)flowServiceStateDidChanged:(unsigned long long)arg0 preState:(unsigned long long)arg1;
- (void)flowServiceWillBeginTakePicture;
- (void)flowServiceWillEnterNextPageWithMode:(id)arg0;
- (void)switchModeServiceDidChangeMode:(id)arg0 oldMode:(id)arg1;
- (void)setFlowService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (void)onCameraFirstFrameDidRender:(id)arg0;
- (id)propService;
- (id)blurImageView;
- (void)setBlurImageView:(id)arg0;
- (void)setPropService:(id)arg0;
- (void)propServiceWillApplyProp:(id)arg0 propSource:(long long)arg1;
- (void)propServiceDidApplyProp:(id)arg0 success:(BOOL)arg1;
- (void)onDidStopVideoCapture:(BOOL)arg0;
- (id)advanceSettingService;
- (void)setAdvanceSettingService:(id)arg0;
- (BOOL)shouldAddCorner;
- (void)switchBegainColdOperation;
- (void)switchEndRecoveOperation;
- (struct CGSize { double x0; double x1; })getSizeWithSwitchStreamCamera:(unsigned long long)arg0;
- (void)setSwitchStreamBegainTime:(double)arg0;
- (double)switchStreamBegainTime;
- (void)directShowMaskViewNoAnimation;
- (BOOL)removeBlurViewFlag;
- (void)switchOperationCompletion;
- (void)setRemoveBlurViewFlag:(BOOL)arg0;
- (void)setSwitchRecordModeShowAnimation:(BOOL)arg0;
- (void)showBlurViewWithSwitchStream:(BOOL)arg0 captureIs4_3:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)firstMaskViewShow;
- (void)setFirstMaskViewShow:(BOOL)arg0;
- (void)updateCameraPreviewPainting;
- (void)updateCameraGridViewLayoutFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)removeBlurViewWhenFirstRenderCompleted:(unsigned long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cacluateGridViewLayoutFrameIfNeed;
- (BOOL)switchRecordModeShowAnimation;
- (void)showBlurViewAnimationWithSwitchStream:(BOOL)arg0 captureIs4_3:(BOOL)arg1 image:(id)arg2 completion:(id /* block */)arg3;
- (void)showMaskAnimationViewWithCompletion:(id /* block */)arg0;
- (void)dimissMaskAnimationViewWithCompletion:(id /* block */)arg0;
- (void)removeMaskOperationCompletion;
- (id)createMaskView;
- (void)customAnimationBlock:(id /* block */)arg0 completion:(id /* block */)arg1;
- (id)blurContentView;
- (void)createShowBlurViewIfNeed;
- (void)dimissBlurImageViewAnimationWithCompletion:(id /* block */)arg0;
- (void)setBlurContentView:(id)arg0;
- (void)setComponentAppear:(BOOL)arg0;
- (BOOL)modeIdChangedIgnoreSwitchStreamWithOldMode:(id)arg0 currentMode:(id)arg1;
- (BOOL)cacluateSwitchRecordModeShowAnimationWithOldMode:(id)arg0 currentMode:(id)arg1;
- (void)switchVideoRecordModeIfNeed;
- (void)switchTakePictureRecordModeIfNeed;
- (BOOL)supportSwitchStreamSettings;
- (void)startVideoCaptureIfNeed:(unsigned long long)arg0;
- (void)resetCameraTo16_9VideoStream;
- (BOOL)componentAppear;
- (void)changeCameraPreviewSize;
- (void).cxx_destruct;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (id)lastFrameImage;
- (void)setLastFrameImage:(id)arg0;

@end
