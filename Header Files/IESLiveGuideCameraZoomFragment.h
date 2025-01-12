//
//     Generated by private class-dump
//

@class IESLiveCameraZoomGestureHandler, NSString, UIPinchGestureRecognizer;

@interface IESLiveGuideCameraZoomFragment : IESLiveRoomComponent <IESLiveCameraZoomAction, IESLiveGuideActions, UIGestureRecognizerDelegate> {
    BOOL _isSupportZoom;
    BOOL _hasCameraSet;
    BOOL _isVRLiveMode;
    UIPinchGestureRecognizer *_zoomGesture;
    IESLiveCameraZoomGestureHandler *_handle;
    double _lastCameraZoomFactor;
}

@property (retain, nonatomic) UIPinchGestureRecognizer *zoomGesture;
@property (nonatomic) BOOL isSupportZoom;
@property (nonatomic) BOOL hasCameraSet;
@property (retain, nonatomic) IESLiveCameraZoomGestureHandler *handle;
@property (nonatomic) double lastCameraZoomFactor;
@property (nonatomic) BOOL isVRLiveMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (id)zoomGesture;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)liveTypeChangeAction:(unsigned long long)arg0;
- (void)cameraDidSet;
- (void)switchVRLiveMode:(BOOL)arg0;
- (BOOL)isVRLiveMode;
- (void)cameraPositionChanged;
- (void)setIsVRLiveMode:(BOOL)arg0;
- (void)setIsSupportZoom:(BOOL)arg0;
- (void)setLastCameraZoomFactor:(double)arg0;
- (double)lastCameraZoomFactor;
- (void)handleCameraZoomGesture:(id)arg0;
- (BOOL)isSupportZoom;
- (BOOL)hasCameraSet;
- (void)setHasCameraSet:(BOOL)arg0;
- (void)setZoomGesture:(id)arg0;
- (void)addZoomGestureIfNeed;
- (void).cxx_destruct;
- (void)setHandle:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)handle;

@end
