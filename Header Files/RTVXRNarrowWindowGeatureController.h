//
//     Generated by private class-dump
//

@class NSString, UIPinchGestureRecognizer, UIView, UIPanGestureRecognizer;
@protocol RTVXRNarrowWindowGeatureControllerDelegate;

@interface RTVXRNarrowWindowGeatureController : NSObject <UIGestureRecognizerDelegate> {
    id<RTVXRNarrowWindowGeatureControllerDelegate> _delegate;
    UIPanGestureRecognizer *_panGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UIView *_containerView;
}

@property (readonly, nonatomic) UIPanGestureRecognizer *panGesture;
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (readonly, weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<RTVXRNarrowWindowGeatureControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__handlePanGesture:(id)arg0;
- (void)renderContainerView:(id)arg0;
- (void)updateGestureType:(long long)arg0 enabled:(BOOL)arg1;
- (void)cancelInteractiveGesture;
- (void)__handlePinchGesture:(id)arg0;
- (void).cxx_destruct;
- (id)pinchGesture;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)delegate;
- (id)containerView;
- (void)setDelegate:(id)arg0;
- (id)panGesture;

@end
