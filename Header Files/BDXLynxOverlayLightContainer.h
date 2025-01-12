//
//     Generated by private class-dump
//

@class BDXLynxOverlayLightSimultaneouslyGestureRecognizer, LynxEventHandler, NSString;
@protocol BDXLynxOverlayLightViewDelegate;

@interface BDXLynxOverlayLightContainer : UIView <UIGestureRecognizerDelegate> {
    LynxEventHandler *_eventHandler;
    id<BDXLynxOverlayLightViewDelegate> _uiDelegate;
    BDXLynxOverlayLightSimultaneouslyGestureRecognizer *_simulGesture;
}

@property (retain, nonatomic) BDXLynxOverlayLightSimultaneouslyGestureRecognizer *simulGesture;
@property (retain, nonatomic) LynxEventHandler *eventHandler;
@property (weak, nonatomic) id<BDXLynxOverlayLightViewDelegate> uiDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleEdgePanGesture:(id)arg0;
- (void)enableTouchOverlayEvent:(BOOL)arg0;
- (id)simulGesture;
- (void)handleSimulGesture:(id)arg0;
- (void)setSimulGesture:(id)arg0;
- (void)ensureEventHandler;
- (BOOL)checkScrollViewCanBeScrolled:(id)arg0 withPanGesture:(id)arg1;
- (id)eventHandler;
- (id)init;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)setUiDelegate:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)uiDelegate;
- (void)setEventHandler:(id)arg0;
- (void)setHidden:(BOOL)arg0;
- (void)willMoveToWindow:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)handlePanGesture:(id)arg0;

@end
