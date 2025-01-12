//
//     Generated by private class-dump
//

@class NSString, NSMutableSet, UIView, UIPanGestureRecognizer;
@protocol AWEMaskWindowLongPressGestureDelegate, AWEMaskWindowFakeGestureDelegate, AWEMaskWindowGestureRecognizerDelegate, UIGestureRecognizerDelegate;

@interface AWEMaskWindow : UIWindow <UIGestureRecognizerDelegate> {
    UIView *_cornerMaskView;
    id<AWEMaskWindowGestureRecognizerDelegate> _maskDelegate;
    id<UIGestureRecognizerDelegate, AWEMaskWindowFakeGestureDelegate> _fakeGestureDelegate;
    UIPanGestureRecognizer *_panGesture;
    NSMutableSet *_delegateSet;
    UIPanGestureRecognizer *_fakePanGesture;
    id<AWEMaskWindowGestureRecognizerDelegate> _currentDelegate;
}

@property (readonly, weak, nonatomic) id<AWEMaskWindowLongPressGestureDelegate> longPressDelegate;
@property (retain, nonatomic) UIView *cornerMaskView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) NSMutableSet *delegateSet;
@property (retain, nonatomic) UIPanGestureRecognizer *fakePanGesture;
@property (weak, nonatomic) id<AWEMaskWindowGestureRecognizerDelegate> currentDelegate;
@property (weak, nonatomic) id<AWEMaskWindowGestureRecognizerDelegate> maskDelegate;
@property (weak, nonatomic) id<UIGestureRecognizerDelegate, AWEMaskWindowFakeGestureDelegate> fakeGestureDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ohr_sendEvent:(id)arg0;
- (void)sendEvent:(id)arg0;
- (void)setCornerMaskView:(id)arg0;
- (void)gestureTriggered:(id)arg0;
- (id)delegateSet;
- (void)setDelegateSet:(id)arg0;
- (id)maskDelegate;
- (id)fakePanGesture;
- (void)windowFakeGestureTriggered:(id)arg0;
- (void)setFakePanGesture:(id)arg0;
- (id)fakeGestureDelegate;
- (void)setCurrentDelegate:(id)arg0;
- (id)currentDelegate;
- (void)appendGesDelegate:(id)arg0;
- (void)removeGesDelegate:(id)arg0;
- (void)setFakeGestureDelegate:(id)arg0;
- (void)setMaskDelegate:(id)arg0;
- (void)setProxyAndGestureIfNeed;
- (id)longPressGestureDelegateProxy;
- (void)setLongPressGestureDelegateProxy:(id)arg0;
- (void)setProgressLongPressDelegate:(id)arg0;
- (id)longPressGesture;
- (void).cxx_destruct;
- (void)becomeKeyWindow;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (id)privateStorage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)addSubview:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setPrivateStorage:(id)arg0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (void)setLongPressGesture:(id)arg0;
- (id)cornerMaskView;
- (id)longPressDelegate;
- (void)setLongPressDelegate:(id)arg0;

@end
