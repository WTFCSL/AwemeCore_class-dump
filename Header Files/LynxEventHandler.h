//
//     Generated by private class-dump
//

@class UIView, UIGestureRecognizer, LynxUI, LongPressGestureRecognizerDelegate, NSMutableSet, LynxTouchHandler, LynxEventEmitter, UIPanGestureRecognizer, LynxUIOwner, PanGestureRecognizerDelegate, CustomGestureRecognizerDelegate;
@protocol LynxEventTarget;

@interface LynxEventHandler : NSObject {
    LynxUIOwner *_uiOwner;
    LynxUI *_rootUI;
    id<LynxEventTarget> _touchTarget;
    struct CGPoint { double x; double y; } _longPressPoint;
    CustomGestureRecognizerDelegate *_tapDelegate;
    LongPressGestureRecognizerDelegate *_longPressDelegate;
    UIPanGestureRecognizer *_panGestureRecognizer;
    PanGestureRecognizerDelegate *_panGestureDelegate;
    float range_;
    NSMutableSet *_set;
    NSMutableSet *_setOfPropsChanged;
    BOOL _gestureRecognized;
    UIView *_rootView;
    LynxEventEmitter *_eventEmitter;
    LynxTouchHandler *_touchRecognizer;
    UIGestureRecognizer *_tapRecognizer;
    UIGestureRecognizer *_longPressRecognizer;
}

@property (nonatomic) BOOL gestureRecognized;
@property (readonly, weak, nonatomic) UIView *rootView;
@property (readonly, weak, nonatomic) LynxEventEmitter *eventEmitter;
@property (readonly, copy, nonatomic) LynxTouchHandler *touchRecognizer;
@property (readonly, copy, nonatomic) UIGestureRecognizer *tapRecognizer;
@property (readonly, copy, nonatomic) UIGestureRecognizer *longPressRecognizer;

- (void)attachLynxView:(id)arg0;
- (id)initWithRootView:(id)arg0;
- (void)setDisableLongpressAfterScroll:(BOOL)arg0;
- (void)setGestureRecognized:(BOOL)arg0;
- (id)initWithRootView:(id)arg0 withRootUI:(id)arg1;
- (void)dispatchTapEvent:(id)arg0;
- (void)dispatchLongPressEvent:(id)arg0;
- (BOOL)canRespondTapOrClickEvent:(id)arg0;
- (BOOL)canRespondTapOrClickWhenUISlideByProps:(id)arg0;
- (id)hitTestInner:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (BOOL)touchUI:(id)arg0 isDescendantOfUI:(id)arg1;
- (id)touchRecognizer;
- (void)resetEventEnv;
- (void)setTapSlop:(id)arg0;
- (BOOL)gestureRecognized;
- (void)dispatchPanEvent:(id)arg0;
- (BOOL)consumeSlideEvents:(double)arg0;
- (void)onGestureRecognized;
- (BOOL)checkCanRespondTapOrClick:(id)arg0 withSet:(id)arg1;
- (id)generateGestureEvent:(id)arg0 withName:(id)arg1 ui:(id)arg2;
- (void)needCheckConsumeSlideEvent;
- (void)updateUiOwner:(id)arg0 eventEmitter:(id)arg1;
- (void)onGestureRecognizedByEventTarget:(id)arg0;
- (void)onPropsChangedByEventTarget:(id)arg0;
- (id)touchTarget;
- (void)setEnableViewReceiveTouch:(BOOL)arg0;
- (void)setEnableSimultaneousTap:(BOOL)arg0;
- (void).cxx_destruct;
- (id)tapRecognizer;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)rootView;
- (id)longPressRecognizer;
- (id)eventEmitter;
- (void)setLongPressDuration:(int)arg0;

@end
