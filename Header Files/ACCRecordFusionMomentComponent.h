//
//     Generated by private class-dump
//

@class ACCRecordMode, UIImageView, UIImage, UIView, NSString;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService, ACCRecordModeFactory, ACCAdvancedRecordSettingService, ACCRecordPropService;

@interface ACCRecordFusionMomentComponent : ACCFeatureComponent <ACCCameraControlEvent, ACCCameraLifeCircleEvent, ACCRecordSwitchModeServiceSubscriber, ACCRecordPropServiceSubscriber> {
    BOOL _componentHasAppeared;
    BOOL _removeBlurViewFlag;
    BOOL _firstMaskViewShow;
    BOOL _switchRecordModeShowAnimation;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCCameraService> _cameraService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordModeFactory> _modeFactory;
    id<ACCAdvancedRecordSettingService> _advanceSettingService;
    id<ACCRecordPropService> _propService;
    ACCRecordMode *_currectNewMode;
    ACCRecordMode *_leaveOldMode;
    unsigned long long _currectRecordTabInFusion;
    UIView *_topMaskView;
    UIView *_bottomMaskView;
    UIImageView *_blurImageView;
    UIView *_blurContentView;
    double _switchStreamBegainTime;
    UIImage *_lastFrameImage;
}

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordModeFactory> modeFactory;
@property (retain, nonatomic) id<ACCAdvancedRecordSettingService> advanceSettingService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) ACCRecordMode *currectNewMode;
@property (retain, nonatomic) ACCRecordMode *leaveOldMode;
@property (nonatomic) unsigned long long currectRecordTabInFusion;
@property (nonatomic) BOOL componentHasAppeared;
@property (nonatomic) BOOL removeBlurViewFlag;
@property (nonatomic) BOOL firstMaskViewShow;
@property (retain, nonatomic) UIView *topMaskView;
@property (retain, nonatomic) UIView *bottomMaskView;
@property (retain, nonatomic) UIImageView *blurImageView;
@property (retain, nonatomic) UIView *blurContentView;
@property (nonatomic) BOOL switchRecordModeShowAnimation;
@property (nonatomic) double switchStreamBegainTime;
@property (retain, nonatomic) UIImage *lastFrameImage;
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
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (void)componentDidDisappear;
- (BOOL)componentHasAppeared;
- (void)setComponentHasAppeared:(BOOL)arg0;
- (void)bindServices:(id)arg0;
- (id)switchModeService;
- (void)switchModeServiceDidChangeMode:(id)arg0 oldMode:(id)arg1;
- (void)setSwitchModeService:(id)arg0;
- (void)onCameraFirstFrameDidRender:(id)arg0;
- (id)modeFactory;
- (void)setModeFactory:(id)arg0;
- (id)propService;
- (id)blurImageView;
- (void)setBlurImageView:(id)arg0;
- (void)setPropService:(id)arg0;
- (void)propServiceWillApplyProp:(id)arg0 propSource:(long long)arg1;
- (void)propServiceDidApplyProp:(id)arg0 success:(BOOL)arg1;
- (void)onDidStopVideoCapture:(BOOL)arg0;
- (double)captureRatio4_3HeightWithWidth:(double)arg0;
- (double)captureRatio4_3TopMarginWithSize:(struct CGSize { double x0; double x1; })arg0;
- (id)advanceSettingService;
- (void)setAdvanceSettingService:(id)arg0;
- (void)switchBegainColdOperation;
- (void)switchEndRecoveOperation;
- (struct CGSize { double x0; double x1; })getSizeWithSwitchStreamCamera:(unsigned long long)arg0;
- (void)setSwitchStreamBegainTime:(double)arg0;
- (double)switchStreamBegainTime;
- (void)directShowMaskViewNoAnimation;
- (BOOL)removeBlurViewFlag;
- (void)switchOperationCompletion;
- (void)setRemoveBlurViewFlag:(BOOL)arg0;
- (void)setCurrectNewMode:(id)arg0;
- (void)setLeaveOldMode:(id)arg0;
- (BOOL)modeIdChangedIgnoreSwitchStreamWithOldMode;
- (BOOL)cacluateSwitchRecordModeShowAnimationWithOldMode;
- (void)setSwitchRecordModeShowAnimation:(BOOL)arg0;
- (id)currectNewMode;
- (id)leaveOldMode;
- (BOOL)isPhotoMRecordMode:(id)arg0;
- (void)switchScanOrVideoModeIfNeed;
- (void)setCurrectRecordTabInFusion:(unsigned long long)arg0;
- (void)switchPhotoMRecordModeIfNeed;
- (void)switchLeaveRecordModeIfNeed;
- (void)switchProportionUserVideoStream:(BOOL)arg0 currectCaptureStreamIsVideo:(BOOL)arg1;
- (void)showBlurViewWithSwitchStream:(BOOL)arg0 captureIs4_3:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)firstMaskViewShow;
- (unsigned long long)currectRecordTabInFusion;
- (void)setFirstMaskViewShow:(BOOL)arg0;
- (void)switchTo4_3ProportionUserCaptureStream;
- (void)updateCameraPreviewPainting;
- (void)updateCameraGridViewLayoutFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)removeBlurViewWhenFirstRenderCompleted:(BOOL)arg0;
- (void)startVideoCaptureIfNeed;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cacluateGridViewLayoutFrameIfNeed;
- (BOOL)switchRecordModeShowAnimation;
- (BOOL)isStoryPictureRecordMode:(id)arg0;
- (void)showBlurViewAnimationWithSwitchStream:(BOOL)arg0 captureIs4_3:(BOOL)arg1 image:(id)arg2 completion:(id /* block */)arg3;
- (void)showMaskAnimationViewWithCompletion:(id /* block */)arg0;
- (void)dimissMaskAnimationViewWithCompletion:(id /* block */)arg0;
- (void)removeMaskOperationCompletion;
- (id)createMaskView;
- (void)customAnimationBlock:(id /* block */)arg0 completion:(id /* block */)arg1;
- (id)blurContentView;
- (void)createShowBlurViewIfNeed;
- (void)dimissBlurImageViewAnimationWithCompletion:(id /* block */)arg0;
- (BOOL)isVideoRecordMode:(id)arg0;
- (BOOL)recordModeIsOffShoot:(id)arg0;
- (BOOL)isSwitchBetweenPhotoMAndStory;
- (void)setBlurContentView:(id)arg0;
- (void).cxx_destruct;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (id)lastFrameImage;
- (void)setLastFrameImage:(id)arg0;

@end
