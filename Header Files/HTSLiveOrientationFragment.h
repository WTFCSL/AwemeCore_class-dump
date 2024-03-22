//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, IESLiveGCDTimer, UIView, UIButton;
@protocol IESLiveOrientationConfig, HTSLiveHideComponentAction, IESLiveMonitor, IESLiveBubbleGuide, HTSLiveOrientationActions;

@interface HTSLiveOrientationFragment : IESLiveRoomComponent <HTSLiveOrientationRouter, IESLiveReplayActions, IESLiveShareActions, HTSLiveCleanScreenActions, IESLiveMessageInteractionModuleCommentAction, IESLiveOrientationInnerService, HTSLiveMessageSubscriber, HTSLiveStreamPlayerAction, IESLiveLandscapeEnterInnerLiveAction> {
    BOOL _didChangeOrientation;
    BOOL _canSwitchToFullScreen;
    BOOL _shouldHideScreenButton;
    BOOL _isAutoRotate;
    BOOL _isButtonRotate;
    BOOL _autoRotateInLandscape;
    BOOL _sharePanelShow;
    BOOL _shouldResetOrientation;
    BOOL _isScreenOptRotating;
    BOOL _isActive;
    BOOL _allComponentLoadFinish;
    BOOL _isInScreenBeginRotation;
    BOOL _firstFrameLoaded;
    BOOL _isSameRotateOrientation;
    BOOL _isScreenRotated;
    BOOL _isAdjustingOrientation;
    BOOL _isAutoLandscapeFromPreview;
    BOOL _isLandscapeEnter;
    BOOL _hasAutoLandscapeFromPreview;
    UIButton *_fullScreenButton;
    id<IESLiveOrientationConfig> _orientationConfig;
    id<HTSLiveOrientationActions> _orientationActionCreator;
    id<HTSLiveHideComponentAction> _hideActionCreator;
    id<IESLiveMonitor> _monitor;
    long long _orientation;
    double _startOrientationLandscapeTime;
    long long _destOrientation;
    double _startCurrentOrientationTime;
    NSMutableDictionary *_rotateMonitorMetric;
    double _startRotateTime;
    double _lastRotateTime;
    id /* block */ _rotateEndcompletion;
    double _durationRotateTime;
    double _landscapeDuration;
    struct __CFRunLoopObserver { } *_rotationRunLoopObserver;
    IESLiveGCDTimer *_beginRotationTimer;
    IESLiveGCDTimer *_checkOrientationTimer;
    NSString *_previousChangeWay;
    NSString *_currentChangeWay;
    NSString *_passiveTrigger;
    UIView<IESLiveBubbleGuide> *_fullScreenBubble;
    long long _optimizeMethod;
}

@property (retain, nonatomic) UIButton *fullScreenButton;
@property (nonatomic) BOOL didChangeOrientation;
@property (retain, nonatomic) id<IESLiveOrientationConfig> orientationConfig;
@property (retain, nonatomic) id<HTSLiveOrientationActions> orientationActionCreator;
@property (retain, nonatomic) id<HTSLiveHideComponentAction> hideActionCreator;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL canSwitchToFullScreen;
@property (nonatomic) double startOrientationLandscapeTime;
@property (nonatomic) BOOL shouldHideScreenButton;
@property (nonatomic) BOOL isAutoRotate;
@property (nonatomic) BOOL isButtonRotate;
@property (nonatomic) BOOL autoRotateInLandscape;
@property (nonatomic) long long destOrientation;
@property (nonatomic) double startCurrentOrientationTime;
@property (nonatomic) BOOL sharePanelShow;
@property (nonatomic) BOOL shouldResetOrientation;
@property (retain, nonatomic) NSMutableDictionary *rotateMonitorMetric;
@property (nonatomic) double startRotateTime;
@property (nonatomic) double lastRotateTime;
@property (nonatomic) BOOL isScreenOptRotating;
@property (copy, nonatomic) id /* block */ rotateEndcompletion;
@property (nonatomic) double durationRotateTime;
@property (nonatomic) double landscapeDuration;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL allComponentLoadFinish;
@property (nonatomic) struct __CFRunLoopObserver { } *rotationRunLoopObserver;
@property (retain, nonatomic) IESLiveGCDTimer *beginRotationTimer;
@property (nonatomic) BOOL isInScreenBeginRotation;
@property (retain, nonatomic) IESLiveGCDTimer *checkOrientationTimer;
@property (nonatomic) BOOL firstFrameLoaded;
@property (nonatomic) BOOL isSameRotateOrientation;
@property (nonatomic) BOOL isScreenRotated;
@property (nonatomic) BOOL isAdjustingOrientation;
@property (nonatomic) BOOL isAutoLandscapeFromPreview;
@property (nonatomic) BOOL isLandscapeEnter;
@property (copy, nonatomic) NSString *previousChangeWay;
@property (copy, nonatomic) NSString *currentChangeWay;
@property (copy, nonatomic) NSString *passiveTrigger;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *fullScreenBubble;
@property (nonatomic) BOOL hasAutoLandscapeFromPreview;
@property (nonatomic) long long optimizeMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)removeTimer;
- (void)setFullScreenButton:(id)arg0;
- (void)componentWillAppear;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (BOOL)shouldShowFullScreen;
- (void)forceUpdateToOrientation:(long long)arg0;
- (BOOL)shouldDisplayFullScreenButton;
- (void)removePortraitFullScreenItem;
- (void)showFullScreenButton:(BOOL)arg0;
- (BOOL)canSwitchToFullScreenNow;
- (void)shouldShowFullScreenButton:(BOOL)arg0;
- (void)setPotraitFullScreenButtonEnable:(BOOL)arg0;
- (void)setLanscapeFullScreenButtonEnable:(BOOL)arg0;
- (double)landscapeWatchDuration;
- (void)forceUpdateToOrientationOpt:(long long)arg0 completion:(id /* block */)arg1;
- (void)gameCheckOrientationChange:(long long)arg0 reportCurStore:(BOOL)arg1 roomID:(id)arg2 anchorID:(id)arg3;
- (id)getPreRoomOrientaion;
- (void)resetStorageRoomOrientaionNeedClean:(BOOL)arg0;
- (void)shouldResetOrientation:(BOOL)arg0;
- (BOOL)isCurrentScreenRotation;
- (void)remoteRoomDataReady:(id)arg0;
- (void)componentOrientationChanged:(long long)arg0;
- (void)sharePanelWillShow;
- (void)sharePanelDidDismiss;
- (void)streamPlayerDidReadyToRender;
- (void)onCameraDidChangeTo:(id)arg0 source:(long long)arg1;
- (id)orientationConfig;
- (void)setOrientationConfig:(id)arg0;
- (BOOL)sharePanelShow;
- (void)setSharePanelShow:(BOOL)arg0;
- (void)removeRunLoopObserver;
- (void)componentOrientationTransitionBegin:(long long)arg0;
- (void)didUpdateReplayStatus:(unsigned long long)arg0;
- (void)triggerLandscapeEnterInnerLiveSlideForbidden;
- (void)screenWillBeginRotation;
- (void)screenDidEndRotation;
- (BOOL)canSwitchToFullScreen;
- (void)setCanSwitchToFullScreen:(BOOL)arg0;
- (void)setPreviousChangeWay:(id)arg0;
- (void)saveCurrentRoomOrientaion:(long long)arg0;
- (id)btnConfig;
- (void)switchToFullScreenMode;
- (BOOL)allComponentLoadFinish;
- (BOOL)firstFrameLoaded;
- (BOOL)shouldHideScreenButton;
- (id)fullScreenBubble;
- (void)setFullScreenBubble:(id)arg0;
- (void)clearFullScreenBubble;
- (void)setIsButtonRotate:(BOOL)arg0;
- (BOOL)isLandscapeEnter;
- (BOOL)isAutoLandscapeFromPreview;
- (BOOL)hasAutoLandscapeFromPreview;
- (void)setIsAutoRotate:(BOOL)arg0;
- (void)setAutoRotateInLandscape:(BOOL)arg0;
- (void)setFirstFrameLoaded:(BOOL)arg0;
- (void)updatePotraitFullScreenItem:(BOOL)arg0;
- (void)setAllComponentLoadFinish:(BOOL)arg0;
- (void)_addOrientationChangedNotification;
- (void)p_enterBackground;
- (void)p_becomeActive;
- (void)_deviceOrientationDidChanged:(id)arg0;
- (long long)destOrientation;
- (BOOL)p_shouldRoate:(long long)arg0;
- (BOOL)_isAutoOrientationChangeForbidden;
- (void)autoSwitchToFullScreenMode:(long long)arg0;
- (BOOL)checkChildernVCForbidden:(id)arg0;
- (void)setShouldHideScreenButton:(BOOL)arg0;
- (double)landscapeDuration;
- (void)setIsScreenRotated:(BOOL)arg0;
- (BOOL)isAutoRotate;
- (BOOL)autoRotateInLandscape;
- (void)setPassiveTrigger:(id)arg0;
- (id)passiveTrigger;
- (id)_trackTypeForOrientation:(long long)arg0;
- (id)_trackTypeForVSOrientation:(long long)arg0;
- (void)setCurrentChangeWay:(id)arg0;
- (void)setDestOrientation:(long long)arg0;
- (void)setDidChangeOrientation:(BOOL)arg0;
- (id)hideActionCreator;
- (id)orientationActionCreator;
- (void)setStartRotateTime:(double)arg0;
- (void)setLastRotateTime:(double)arg0;
- (void)setRotateMonitorMetric:(id)arg0;
- (void)setDurationRotateTime:(double)arg0;
- (long long)optimizeMethod;
- (void)recordPhaseTime:(id)arg0;
- (void)checkOrientaionChangeFinish:(long long)arg0;
- (void)screenBeginRotation:(BOOL)arg0 isUseRotateTimeOpt:(BOOL)arg1;
- (void)handleEndRotation;
- (BOOL)isScreenOptRotating;
- (BOOL)isAdjustingOrientation;
- (void)setIsSameRotateOrientation:(BOOL)arg0;
- (void)setIsScreenOptRotating:(BOOL)arg0;
- (void)removeCheckOrientationTimer;
- (void)forceUpdateToOrientation:(long long)arg0 currentOrientation:(long long)arg1;
- (BOOL)isScreenRotated;
- (void)setIsAdjustingOrientation:(BOOL)arg0;
- (void)setCheckOrientationTimer:(id)arg0;
- (void)setShouldResetOrientation:(BOOL)arg0;
- (double)startCurrentOrientationTime;
- (void)setStartCurrentOrientationTime:(double)arg0;
- (id)previousChangeWay;
- (id)currentChangeWay;
- (double)startOrientationLandscapeTime;
- (void)setLandscapeDuration:(double)arg0;
- (void)setStartOrientationLandscapeTime:(double)arg0;
- (id)rotateMonitorMetric;
- (double)lastRotateTime;
- (double)durationRotateTime;
- (BOOL)isSameRotateOrientation;
- (double)startRotateTime;
- (void)trackRotateFinishWithDelay:(BOOL)arg0;
- (void)trackRotateEnd;
- (id /* block */)rotateEndcompletion;
- (void)setRotateEndcompletion:(id /* block */)arg0;
- (void)_addObserve;
- (void)setupFullScreenButton;
- (void)setIsAutoLandscapeFromPreview:(BOOL)arg0;
- (void)setHasAutoLandscapeFromPreview:(BOOL)arg0;
- (void)_removeObserve;
- (BOOL)shouldResetOrientation;
- (BOOL)didChangeOrientation;
- (void)addScreenBeginRunLoop;
- (void)handleOptRotateEnd;
- (void)setIsInScreenBeginRotation:(BOOL)arg0;
- (BOOL)isInScreenBeginRotation;
- (void)setRotationRunLoopObserver:(struct __CFRunLoopObserver { } *)arg0;
- (struct __CFRunLoopObserver { } *)rotationRunLoopObserver;
- (void)setBeginRotationTimer:(id)arg0;
- (void)removeRotationTimer;
- (void)appearDidFinishForLevel:(long long)arg0;
- (BOOL)couldUnmountComponent;
- (void)setOrientationActionCreator:(id)arg0;
- (void)setHideActionCreator:(id)arg0;
- (BOOL)isButtonRotate;
- (id)beginRotationTimer;
- (id)checkOrientationTimer;
- (void)setIsLandscapeEnter:(BOOL)arg0;
- (void)setOptimizeMethod:(long long)arg0;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (id)monitor;
- (void)setMonitor:(id)arg0;
- (long long)orientation;
- (void)keyboardWillHide;
- (void)setOrientation:(long long)arg0;
- (BOOL)isActive;
- (void)keyboardWillShow;
- (void)messageReceived:(id)arg0;
- (id)fullScreenButton;

@end
