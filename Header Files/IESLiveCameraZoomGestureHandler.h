//
//     Generated by private class-dump
//

@class IESLiveCameraZoomThresholdView, HTSEventContext, IESLiveCountTimer, NSString, NSNumber;

@interface IESLiveCameraZoomGestureHandler : NSObject <IESLiveAnchorPanelTabViewDelegate> {
    double _minCameraZoomFactor;
    double _maxCameraZoomFactor;
    NSNumber *_roomID;
    HTSEventContext *_trackContext;
    id /* block */ _setZoomFactorBlock;
    IESLiveCameraZoomThresholdView *_thresholdView;
    IESLiveCountTimer *_thresholdViewTimer;
}

@property (nonatomic) double minCameraZoomFactor;
@property (nonatomic) double maxCameraZoomFactor;
@property (retain, nonatomic) IESLiveCameraZoomThresholdView *thresholdView;
@property (retain, nonatomic) IESLiveCountTimer *thresholdViewTimer;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ setZoomFactorBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)maxCameraZoomFactor;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)initWithMaxZoomFactor:(double)arg0;
- (void)trackCameraSwitch:(double)arg0 afterFactor:(double)arg1 isLiveRoom:(BOOL)arg2;
- (void)setSetZoomFactorBlock:(id /* block */)arg0;
- (void)setMaxZoomFactorIfNeed;
- (void)setupThresholdViewWithCurrentZoomFactor:(double)arg0 container:(id)arg1;
- (double)minCameraZoomFactor;
- (void)trackPinchZoom:(id)arg0 isLiveRoom:(BOOL)arg1;
- (void)clearThresholdView:(BOOL)arg0;
- (void)setMaxCameraZoomFactor:(double)arg0;
- (void)clearThresholdViewTimer;
- (void)setMinCameraZoomFactor:(double)arg0;
- (id)thresholdView;
- (void)setThresholdView:(id)arg0;
- (void)updateThresholdViewTimer;
- (void)setThresholdViewTimer:(id)arg0;
- (id)thresholdViewTimer;
- (id /* block */)setZoomFactorBlock;
- (void)didSelectedZoomFactor:(double)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)roomID;
- (void)setRoomID:(id)arg0;

@end