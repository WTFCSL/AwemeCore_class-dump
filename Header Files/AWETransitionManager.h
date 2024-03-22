//
//     Generated by private class-dump
//

@class NSLock, NSString, AWETransitionContext, NSMutableArray, UIViewController;
@protocol UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning, UIViewControllerContextTransitioning;

@interface AWETransitionManager : NSObject <UIGestureRecognizerDelegate> {
    NSLock *_patternLock;
    BOOL _enablePopTransitionFix;
    BOOL _enableCancelPanFix;
    BOOL _enableTransitionPatternsMatchOpt;
    BOOL _isAnimating;
    AWETransitionContext *_currentContext;
    UIViewController *_lastestNavigationControllerCaller;
    id<UIViewControllerAnimatedTransitioning> _currentAnimationController;
    id<UIViewControllerInteractiveTransitioning> _currentInteractionController;
    id<UIViewControllerContextTransitioning> _currentTransitioningContext;
    id /* block */ _gestureShouldBeginBlock;
    id /* block */ _transitionDidBeginBlock;
    id /* block */ _transitionDidEndBlock;
    id /* block */ _transitionRestoreBlock;
    NSMutableArray *_registeredPatterns;
    UIViewController *_fromViewController;
    UIViewController *_toViewController;
    id _fromContextProvider;
    id _toContextProvider;
    NSString *_nextContextProviderClassName;
    unsigned long long _transitionType;
    AWETransitionContext *_precalculatedContext;
    long long _lastPanGestureState;
}

@property (retain, nonatomic) NSMutableArray *registeredPatterns;
@property (weak, nonatomic) UIViewController *fromViewController;
@property (weak, nonatomic) UIViewController *toViewController;
@property (weak, nonatomic) id fromContextProvider;
@property (weak, nonatomic) id toContextProvider;
@property (copy, nonatomic) NSString *nextContextProviderClassName;
@property (nonatomic) unsigned long long transitionType;
@property (retain, nonatomic) AWETransitionContext *precalculatedContext;
@property (retain, nonatomic) AWETransitionContext *currentContext;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) long long lastPanGestureState;
@property (readonly, nonatomic) UIViewController *currentFromViewController;
@property (readonly, nonatomic) UIViewController *currentToViewController;
@property (readonly, nonatomic) id currentFromContextProvider;
@property (readonly, nonatomic) id currentToContextProvider;
@property (readonly, nonatomic) BOOL animating;
@property (nonatomic) BOOL enablePopTransitionFix;
@property (nonatomic) BOOL enableCancelPanFix;
@property (nonatomic) BOOL enableTransitionPatternsMatchOpt;
@property (weak, nonatomic) UIViewController *lastestNavigationControllerCaller;
@property (retain, nonatomic) id<UIViewControllerAnimatedTransitioning> currentAnimationController;
@property (retain, nonatomic) id<UIViewControllerInteractiveTransitioning> currentInteractionController;
@property (retain, nonatomic) id<UIViewControllerContextTransitioning> currentTransitioningContext;
@property (copy, nonatomic) id /* block */ gestureShouldBeginBlock;
@property (copy, nonatomic) id /* block */ transitionDidBeginBlock;
@property (copy, nonatomic) id /* block */ transitionDidEndBlock;
@property (copy, nonatomic) id /* block */ transitionRestoreBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)runOnceForLazyRegister;
+ (id)sharedInstance;

- (void)notifyFromContextProvider:(id)arg0;
- (void)notifyToContextProvider:(id)arg0;
- (id)currentTransitioningContext;
- (void)notifyExternalTransitionAnimatingDidStart;
- (void)notifyExternalTransitionAnimatingDidEnd;
- (void)notifyNextTransitionProviderClassName:(id)arg0;
- (id)currentAnimationController;
- (void)tryToCancelPinchTransitionWithFromProtocol:(id)arg0;
- (double)scaleThresholdForPatternType:(unsigned long long)arg0;
- (void)registerWithFromProtocol:(id)arg0 toProtocol:(id)arg1 contextProvider:(Class)arg2 typeMask:(unsigned long long)arg3 interactionMask:(unsigned long long)arg4;
- (id)toContextProvider;
- (void)setCurrentTransitioningContext:(id)arg0;
- (void)setFromViewController:(id)arg0;
- (void)setToViewController:(id)arg0;
- (id)fromContextProvider;
- (void)setFromContextProvider:(id)arg0;
- (void)setToContextProvider:(id)arg0;
- (unsigned long long)directionForPan:(id)arg0;
- (id)currentFromViewController;
- (void)notifyTransitionFromViewController:(id)arg0 toViewController:(id)arg1 withTransitionType:(unsigned long long)arg2;
- (void)setEnableCancelPanFix:(BOOL)arg0;
- (id)currentToViewController;
- (void)setGestureShouldBeginBlock:(id /* block */)arg0;
- (void)setTransitionDidBeginBlock:(id /* block */)arg0;
- (void)setTransitionDidEndBlock:(id /* block */)arg0;
- (id)currentToContextProvider;
- (id)currentFromContextProvider;
- (void)setRegisteredPatterns:(id)arg0;
- (id)registeredPatterns;
- (void)setEnableTransitionPatternsMatchOpt:(BOOL)arg0;
- (id)possiblePatternsForContext:(id)arg0;
- (BOOL)panGestureRecognizerShouldBegin:(id)arg0;
- (BOOL)pinchGestureRecognizerShouldBegin:(id)arg0;
- (id /* block */)gestureShouldBeginBlock;
- (void)setPrecalculatedContext:(id)arg0;
- (BOOL)enableTransitionPatternsMatchOpt;
- (id)nextContextProviderClassName;
- (id)candidatePatternsWithRegisteredPatterns:(id)arg0 context:(id)arg1;
- (id /* block */)transitionDidBeginBlock;
- (id /* block */)transitionDidEndBlock;
- (id)precalculatedContext;
- (double)progressForDirection:(unsigned long long)arg0 startLocation:(struct CGPoint { double x0; double x1; })arg1 currentLocation:(struct CGPoint { double x0; double x1; })arg2;
- (struct CGPoint { double x0; double x1; })vectorForDirection:(unsigned long long)arg0;
- (BOOL)enablePopTransitionFix;
- (long long)lastPanGestureState;
- (void)handleEndPercentageDrive:(id)arg0 shouldComplete:(BOOL)arg1;
- (void)finishPanAnimation;
- (void)cancelPanAnimation;
- (void)setLastPanGestureState:(long long)arg0;
- (BOOL)enableCancelPanFix;
- (void)setCurrentAnimationController:(id)arg0;
- (void)setCurrentInteractionController:(id)arg0;
- (void)setNextContextProviderClassName:(id)arg0;
- (double)progressForPatternType:(unsigned long long)arg0 currentScale:(double)arg1;
- (void)finishPinchAnimation;
- (void)cancelPinchAnimation;
- (unsigned long long)zoomTypeForPinch:(id)arg0;
- (void)cancelOrFinishPinchAnimation:(BOOL)arg0;
- (double)scrollDistanceForDirection:(unsigned long long)arg0 startLocation:(struct CGPoint { double x0; double x1; })arg1 currentLocation:(struct CGPoint { double x0; double x1; })arg2;
- (void)setEnablePopTransitionFix:(BOOL)arg0;
- (id)lastestNavigationControllerCaller;
- (void)setLastestNavigationControllerCaller:(id)arg0;
- (id /* block */)transitionRestoreBlock;
- (void)setTransitionRestoreBlock:(id /* block */)arg0;
- (BOOL)isAnimating;
- (unsigned long long)transitionType;
- (id)init;
- (void)setTransitionType:(unsigned long long)arg0;
- (id)toViewController;
- (void).cxx_destruct;
- (id)fromViewController;
- (id)currentContext;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)setCurrentContext:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)dealloc;
- (void)setIsAnimating:(BOOL)arg0;
- (id)currentInteractionController;
- (BOOL)animating;
- (void)clearSession;
- (void)handlePinchGesture:(id)arg0;
- (void)handlePanGesture:(id)arg0;

@end
