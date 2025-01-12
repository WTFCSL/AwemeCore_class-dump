//
//     Generated by private class-dump
//

@class ACCCameraSubscription, ACCRecordMode, ACCLightningRecordButton, ACCLightningRecordAnimationViewConfig, NSString;
@protocol ACCLightningRecordAnimationViewNewTouchDispatchDelegate, ACCCaptureButtonAnimationViewDelegate;

@interface ACCLightningRecordAnimationView : UIView <ACCLightningCaptureButtonAnimationProtocol> {
    BOOL _isCountdowning;
    BOOL _forbidUserPause;
    BOOL _supportGestureWhenHidden;
    BOOL _isAutoStartRecord;
    BOOL _mainRecorderEnter;
    BOOL _isShowingCaptureAnimating;
    BOOL _isFromCountingMode;
    BOOL _lastTapRecordBtnHasBeenBlocked;
    BOOL _didEndOnTouchBegin;
    id<ACCCaptureButtonAnimationViewDelegate> _delegate;
    id /* block */ _trackRecordVideoEventBlock;
    ACCRecordMode *_recordMode;
    unsigned long long _mixSubtype;
    ACCLightningRecordButton *_animatedRecordButton;
    ACCLightningRecordAnimationViewConfig *_config;
    id<ACCLightningRecordAnimationViewNewTouchDispatchDelegate> _touchDispatchDelegate;
    double _tapStartTime;
    ACCCameraSubscription *_subscription;
    struct CGPoint { double x; double y; } _touchBeginPoint;
}

@property (nonatomic) BOOL isShowingCaptureAnimating;
@property (retain, nonatomic) ACCRecordMode *recordMode;
@property (nonatomic) unsigned long long mixSubtype;
@property (nonatomic) struct CGPoint { double x; double y; } touchBeginPoint;
@property (nonatomic) double tapStartTime;
@property (nonatomic) BOOL isFromCountingMode;
@property (nonatomic) BOOL lastTapRecordBtnHasBeenBlocked;
@property (nonatomic) BOOL didEndOnTouchBegin;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) ACCLightningRecordButton *animatedRecordButton;
@property (retain, nonatomic) ACCLightningRecordAnimationViewConfig *config;
@property (weak, nonatomic) id<ACCLightningRecordAnimationViewNewTouchDispatchDelegate> touchDispatchDelegate;
@property (nonatomic) BOOL mainRecorderEnter;
@property (weak, nonatomic) id<ACCCaptureButtonAnimationViewDelegate> delegate;
@property (nonatomic) BOOL isCountdowning;
@property (copy, nonatomic) id /* block */ trackRecordVideoEventBlock;
@property (nonatomic) BOOL forbidUserPause;
@property (nonatomic) BOOL supportGestureWhenHidden;
@property (nonatomic) BOOL isAutoStartRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)recordMode;
- (void)setRecordMode:(id)arg0;
- (unsigned long long)mixSubtype;
- (void)setMixSubtype:(unsigned long long)arg0;
- (void)switchToMode:(id)arg0 force:(BOOL)arg1;
- (void)setTrackRecordVideoEventBlock:(id /* block */)arg0;
- (id)animatedRecordButton;
- (void)endCountdownModeIfNeed;
- (void)stopWithIgnoreProgress:(BOOL)arg0;
- (void)startCountdownMode;
- (void)switchToMode:(id)arg0;
- (void)updateAnimatedRecordButtonCenter:(struct CGPoint { double x0; double x1; })arg0;
- (void)switchToHoldSubtype;
- (void)executeStopRecordTask;
- (void)executeStartRecordTask;
- (void)switchMixSubtypeToTap;
- (BOOL)supportGestureWhenHidden;
- (BOOL)enableNewDispatch;
- (BOOL)isAccordWithMixHoldTapAndMixSubtypeTap;
- (BOOL)isShowingCaptureAnimating;
- (void)setDidEndOnTouchBegin:(BOOL)arg0;
- (void)setLastTapRecordBtnHasBeenBlocked:(BOOL)arg0;
- (void)setIsFromCountingMode:(BOOL)arg0;
- (void)executeTouchesBeganTask;
- (void)setTapStartTime:(double)arg0;
- (BOOL)forbidUserPause;
- (BOOL)isCountdowning;
- (void)setIsShowingCaptureAnimating:(BOOL)arg0;
- (BOOL)isAccordWithMixHoldTapAndMixSubtypeHold;
- (BOOL)lastTapRecordBtnHasBeenBlocked;
- (void)executeTouchesEndTask;
- (double)tapStartTime;
- (BOOL)didEndOnTouchBegin;
- (BOOL)isFromCountingMode;
- (id /* block */)trackRecordVideoEventBlock;
- (BOOL)isAutoStartRecord;
- (void)switchToTakePictureMode;
- (void)switchToPhotoMMode;
- (BOOL)recordModeIsStandVideo:(id)arg0;
- (BOOL)recordModeIsLongVideo:(id)arg0;
- (void)switchToScanToScanMode;
- (void)switchToMomentCamera;
- (void)switchToMixHoldTapRecordMode:(id)arg0;
- (void)setIsCountdowning:(BOOL)arg0;
- (BOOL)mainRecorderEnter;
- (id)touchDispatchDelegate;
- (void)setForbidUserPause:(BOOL)arg0;
- (void)setSupportGestureWhenHidden:(BOOL)arg0;
- (void)setIsAutoStartRecord:(BOOL)arg0;
- (void)addTouchEventObserver:(id)arg0;
- (void)executeTakePictureTask;
- (void)updateRecordButtonState:(BOOL)arg0;
- (BOOL)isSwitchVideoLengthOnly:(id)arg0;
- (void)updateStateFromButtonService:(long long)arg0;
- (void)updateMixSubtypeFromButtonService:(unsigned long long)arg0;
- (void)setAnimatedRecordButton:(id)arg0;
- (void)setTouchDispatchDelegate:(id)arg0;
- (void)setMainRecorderEnter:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })touchBeginPoint;
- (void)setTouchBeginPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (id)delegate;
- (void)touchesMoved:(id)arg0 withEvent:(id)arg1;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (void)setSubscription:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)subscription;
- (void)vibrate;

@end
