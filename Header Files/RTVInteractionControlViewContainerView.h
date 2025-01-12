//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, NSString;
@protocol RTVInteractionControlViewContainerViewDelegate;

@interface RTVInteractionControlViewContainerView : UIView <UIGestureRecognizerDelegate> {
    BOOL _enableTapGesture;
    id<RTVInteractionControlViewContainerViewDelegate> _delegate;
    UITapGestureRecognizer *_tapGesture;
}

@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) BOOL enableTapGesture;
@property (weak, nonatomic) id<RTVInteractionControlViewContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableTapGesture;
- (void)setEnableTapGesture:(BOOL)arg0;
- (void)__tapped:(id)arg0;
- (BOOL)__isTapInsideInteractiableArea:(id)arg0;
- (void)enableTapGesture:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)tapGesture;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (void)didMoveToWindow;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end
