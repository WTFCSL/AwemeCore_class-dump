//
//     Generated by private class-dump
//

@class NSString, UIViewController, AWERightSidebarPinchUpdateAnimator;
@protocol AWERightSidebarPinchZoomOuterContextProvider, AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol, AWERightSidebarPinchZoomInnerContextProvider;

@interface AWERightSidebarPinchZoomOutTransition : NSObject <AWETransitionContextProvider> {
    id<AWERightSidebarPinchZoomInnerContextProvider> _fromCP;
    id<AWERightSidebarPinchZoomOuterContextProvider> _toCP;
    UIViewController *_fromVC;
    UIViewController *_toVC;
    AWERightSidebarPinchUpdateAnimator *_pinchAnimator;
    UIViewController<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *_fromVideoController;
    UIViewController<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *_toVideoController;
}

@property (weak, nonatomic) id<AWERightSidebarPinchZoomInnerContextProvider> fromCP;
@property (weak, nonatomic) id<AWERightSidebarPinchZoomOuterContextProvider> toCP;
@property (weak, nonatomic) UIViewController *fromVC;
@property (weak, nonatomic) UIViewController *toVC;
@property (retain, nonatomic) AWERightSidebarPinchUpdateAnimator *pinchAnimator;
@property (weak, nonatomic) UIViewController<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *fromVideoController;
@property (weak, nonatomic) UIViewController<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *toVideoController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCustomAnimationWithFromVC:(id)arg0 toVC:(id)arg1 fromContextProvider:(id)arg2 toContextProvider:(id)arg3 containerView:(id)arg4 context:(id)arg5;
- (void)updateAnimationWithPosition:(struct CGPoint { double x0; double x1; })arg0 startPosition:(struct CGPoint { double x0; double x1; })arg1 scale:(double)arg2 numberOfTouches:(unsigned long long)arg3;
- (void)finishAnimationWithCompletionBlock:(id /* block */)arg0;
- (void)cancelAnimationWithCompletionBlock:(id /* block */)arg0;
- (unsigned long long)allowPinchZoomTypeForContext:(id)arg0;
- (BOOL)shouldCompleteWithScale:(double)arg0 typeMask:(unsigned long long)arg1;
- (void)setFromVC:(id)arg0;
- (id)fromVC;
- (void)setFromCP:(id)arg0;
- (void)setToCP:(id)arg0;
- (id)toCP;
- (id)fromCP;
- (void)setToVC:(id)arg0;
- (id)toVC;
- (void)setFromVideoController:(id)arg0;
- (void)setToVideoController:(id)arg0;
- (id)fromVideoController;
- (id)toVideoController;
- (id)pinchAnimator;
- (void)setPinchAnimator:(id)arg0;
- (void)beforePop;
- (id)getToVideoController;
- (void)popAnimationComplete;
- (double)transitionDuration;
- (unsigned long long)interactionType;
- (void).cxx_destruct;

@end
