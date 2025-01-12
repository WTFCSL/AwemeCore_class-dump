//
//     Generated by private class-dump
//

@class NSString, CMMotionManager;

@interface IESLivePlaybackAutoRotateFragment : IESLivePlaybackComponent <IESLivePlaybackComponentLifeCycle, IESLivePlaybackAutoRotateRouter> {
    BOOL _disableAutoRotate;
    BOOL _isAutoRotating;
    BOOL _isManualRotating;
    BOOL _onceAutoRotated;
    CMMotionManager *_motionManager;
    unsigned long long _errorCnt;
    long long _lastDetectOrientation;
    double _sensitivityThresh;
    double _startTimestampForLandscape;
    double _startTimestampForOrientationSwitch;
    long long _lastOrientation;
}

@property (nonatomic) BOOL isAutoRotating;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (nonatomic) unsigned long long errorCnt;
@property (nonatomic) long long lastDetectOrientation;
@property (nonatomic) double sensitivityThresh;
@property (nonatomic) BOOL isManualRotating;
@property (nonatomic) BOOL onceAutoRotated;
@property (nonatomic) BOOL disableAutoRotate;
@property (nonatomic) double startTimestampForLandscape;
@property (nonatomic) double startTimestampForOrientationSwitch;
@property (nonatomic) long long lastOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)componentDidUnmount;
- (BOOL)disableAutoRotate;
- (void)setDisableAutoRotate:(BOOL)arg0;
- (void)componentBindService;
- (void)willAutoRotateToSize:(struct CGSize { double x0; double x1; })arg0;
- (void)animationRotateToSize:(struct CGSize { double x0; double x1; })arg0 duration:(double)arg1;
- (void)didAutoRotateToSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)isAutoRotating;
- (void)setSensitivityThresh:(double)arg0;
- (void)installMotionDectector;
- (void)uninstallMotionDectector;
- (void)setLastDetectOrientation:(long long)arg0;
- (void)setErrorCnt:(unsigned long long)arg0;
- (unsigned long long)errorCnt;
- (void)setOnceAutoRotated:(BOOL)arg0;
- (void)setIsAutoRotating:(BOOL)arg0;
- (double)sensitivityThresh;
- (long long)lastDetectOrientation;
- (void)didDetectOrientationChangeFrom:(long long)arg0 to:(long long)arg1;
- (id)descForMotionDirection:(long long)arg0;
- (void)dispatchOrientationChangeFrom:(long long)arg0 to:(long long)arg1;
- (void)showToastIfNeed;
- (BOOL)onceAutoRotated;
- (void)setIsManualRotating:(BOOL)arg0;
- (void)rotateOrientation:(long long)arg0 rotateModel:(unsigned long long)arg1;
- (BOOL)isManualRotating;
- (void)setStartTimestampForOrientationSwitch:(double)arg0;
- (void)setStartTimestampForLandscape:(double)arg0;
- (double)startTimestampForLandscape;
- (double)startTimestampForOrientationSwitch;
- (long long)roomOrientationState:(long long)arg0;
- (void)setLastOrientation:(long long)arg0;
- (void).cxx_destruct;
- (void)setup;
- (long long)lastOrientation;
- (void)clear;
- (long long)currentInterfaceOrientation;
- (void)dealloc;
- (id)motionManager;
- (void)setMotionManager:(id)arg0;
- (void)processMotionData:(id)arg0;

@end
