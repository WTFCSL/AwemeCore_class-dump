//
//     Generated by private class-dump
//

@class LynxEventHandler;
@protocol BDXLynxOverlayContentViewDelegate;

@interface BDXLynxOverlayContentView : UIView {
    BOOL _eventsPassThrough;
    LynxEventHandler *_eventHandler;
    id<BDXLynxOverlayContentViewDelegate> _delegate;
}

@property (retain, nonatomic) LynxEventHandler *eventHandler;
@property (nonatomic) BOOL eventsPassThrough;
@property (weak, nonatomic) id<BDXLynxOverlayContentViewDelegate> delegate;

- (void)handleEdgePanGesture:(id)arg0;
- (void)ensureEventHandler;
- (BOOL)eventsPassThrough;
- (void)setEventsPassThrough:(BOOL)arg0;
- (id)eventHandler;
- (void).cxx_destruct;
- (id)delegate;
- (void)setEventHandler:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end
