//
//     Generated by private class-dump
//

@class RTVXRNarrowWindowGeatureController, RTVXRContainerLayoutAttributesSnapshot, NSString, UIView, NSMutableArray, RTVFeedTracker;
@protocol RxInjector, RTVFeedSessionInterface, RTVStateRecorder, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector, RTVXRStateRecorder, RTVPerformanceMonitorInterface, RTVInteractionContainerController;

@interface RTVFeedContentPinchController : NSObject <RTVXRNarrowWindowGeatureControllerDelegate, RTVFeedContentPinchController> {
    id<RxInjector> _injector;
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVXRRoomSessionControllerInterface> _roomController;
    id<RTVXRStateRecorder> _xrStateRecorder;
    id<RTVFeedSessionInterface> _feedSession;
    id<RTVPerformanceMonitorInterface> _performanceMonitor;
    RTVFeedTracker *_tracker;
    id<RTVStateRecorder> _stateRecorder;
    NSMutableArray *_stateRecorderTokens;
    RTVXRNarrowWindowGeatureController *_gestureController;
    UIView *_containerView;
    id<RTVInteractionContainerController> _interactionContainer;
    RTVXRContainerLayoutAttributesSnapshot *_snapshot;
    NSString *_oncePinchToken;
    struct CGPoint { double x; double y; } _initialAnchorPoint;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, weak, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (readonly, weak, nonatomic) id<RTVFeedSessionInterface> feedSession;
@property (retain, nonatomic) id<RTVPerformanceMonitorInterface> performanceMonitor;
@property (retain, nonatomic) RTVFeedTracker *tracker;
@property (readonly, nonatomic) id<RTVStateRecorder> stateRecorder;
@property (readonly, nonatomic) NSMutableArray *stateRecorderTokens;
@property (readonly, nonatomic) RTVXRNarrowWindowGeatureController *gestureController;
@property (readonly, weak, nonatomic) UIView *containerView;
@property (readonly, weak, nonatomic) id<RTVInteractionContainerController> interactionContainer;
@property (retain, nonatomic) RTVXRContainerLayoutAttributesSnapshot *snapshot;
@property (nonatomic) struct CGPoint { double x; double y; } initialAnchorPoint;
@property (copy, nonatomic) NSString *oncePinchToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)deactive;
- (void)__addObserver;
- (void)setInitialAnchorPoint:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })initialAnchorPoint;
- (id)interactionContainer;
- (id)controllerInjector;
- (void)renderBusinessHandler:(id)arg0 context:(id)arg1;
- (void)__log:(id)arg0;
- (id)xrStateRecorder;
- (id)roomController;
- (id)stateRecorderTokens;
- (id)stateRecorder;
- (id)feedSession;
- (void)activeIfNeeded;
- (id)performanceMonitor;
- (BOOL)__isSupportPinch;
- (id)oncePinchToken;
- (void)setOncePinchToken:(id)arg0;
- (id)layoutSnapShot;
- (void)gestureController:(id)arg0 didBeginGesture:(long long)arg1 snapshot:(id)arg2;
- (void)gestureController:(id)arg0 didChangeState:(long long)arg1 snapshot:(id)arg2;
- (void)gestureController:(id)arg0 didEndGesture:(long long)arg1 snapshot:(id)arg2;
- (double)gestureControllerMaxPinchScale:(id)arg0;
- (double)gestureControllerMinPinchScale:(id)arg0;
- (void)renderContainerView:(id)arg0 context:(id)arg1;
- (void)setPerformanceMonitor:(id)arg0;
- (id)gestureController;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;
- (id)injector;
- (void)setSnapshot:(id)arg0;
- (id)containerView;
- (void)cancel;
- (id)snapshot;
- (void)dealloc;

@end
