//
//     Generated by private class-dump
//

@class UIView, HalfContainerParams, NSString, HalfContainerAnimationHelper, HalfContainerTouchThroughView, HalfContainerPanGestureRecognizer, HalfContainerDecelerationHelper, UIScrollView;

@interface HalfContainerManagerV1 : HalfContainerManager <UIGestureRecognizerDelegate> {
    BOOL _isDismissing;
    BOOL _hasBeenInitHalfContainer;
    BOOL _didMVPanGestureEnd;
    BOOL _shouldDismissWhenHorizontal;
    BOOL _isInDismissAnimation;
    BOOL _isInHalfAnimation;
    BOOL _isInHalfExpandAnimation;
    BOOL _shouldSwitchState;
    BOOL _closeByHorizontal;
    BOOL _isDeceleration;
    BOOL _shouldForbidSendDidOffsetDidChange;
    long long _currentHalfContainerState;
    double _currentHalfContainerRatio;
    double _currentHalfContainerOffset;
    UIView *_tapView;
    HalfContainerPanGestureRecognizer *_mvStatePanGes;
    double _targetDistance;
    UIView *_containerViewForHorizontal;
    UIView *_containerView;
    UIScrollView *_scrollView;
    HalfContainerParams *_params;
    HalfContainerDecelerationHelper *_decelerationHelper;
    HalfContainerAnimationHelper *_animationHelper;
    double _decelerationRemainContentOffsetY;
    HalfContainerTouchThroughView *_touchThroughView;
    struct CGPoint { double x; double y; } _lastPanPoint;
}

@property (nonatomic) long long currentHalfContainerState;
@property (nonatomic) double currentHalfContainerRatio;
@property (nonatomic) double currentHalfContainerOffset;
@property (retain, nonatomic) UIView *tapView;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL hasBeenInitHalfContainer;
@property (retain, nonatomic) HalfContainerPanGestureRecognizer *mvStatePanGes;
@property (nonatomic) struct CGPoint { double x; double y; } lastPanPoint;
@property (nonatomic) BOOL didMVPanGestureEnd;
@property (nonatomic) BOOL shouldDismissWhenHorizontal;
@property (nonatomic) BOOL isInDismissAnimation;
@property (nonatomic) BOOL isInHalfAnimation;
@property (nonatomic) BOOL isInHalfExpandAnimation;
@property (nonatomic) BOOL shouldSwitchState;
@property (nonatomic) double targetDistance;
@property (nonatomic) BOOL closeByHorizontal;
@property (retain, nonatomic) UIView *containerViewForHorizontal;
@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) HalfContainerParams *params;
@property (retain, nonatomic) HalfContainerDecelerationHelper *decelerationHelper;
@property (retain, nonatomic) HalfContainerAnimationHelper *animationHelper;
@property (nonatomic) double decelerationRemainContentOffsetY;
@property (nonatomic) BOOL isDeceleration;
@property (retain, nonatomic) HalfContainerTouchThroughView *touchThroughView;
@property (nonatomic) BOOL shouldForbidSendDidOffsetDidChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleHorizontalPan:(id)arg0;
- (id)tapView;
- (void)setTapView:(id)arg0;
- (id)animationHelper;
- (void)setAnimationHelper:(id)arg0;
- (double)halfContainerOffsetWithState:(long long)arg0;
- (BOOL)halfContainerShouldShowTapView;
- (void)updateHalfContainerParams:(id)arg0;
- (double)initialHalfContainerRatio;
- (void)setupLeftPanCloseWithTargetView:(id)arg0 shouldCloseByHorizontal:(BOOL)arg1;
- (BOOL)alwaysHalfScreen;
- (BOOL)alwaysFullScreen;
- (long long)halfContainerState;
- (void)interruptGesture:(id)arg0;
- (void)setShouldDismissWhenHorizontal:(BOOL)arg0;
- (double)convertRatioByOriginY:(double)arg0;
- (double)getRatioForHorizontalDismiss;
- (double)convertOriginYByRatio:(double)arg0;
- (BOOL)shouldDismissWhenHorizontal;
- (double)slowCloseCoefficient;
- (BOOL)supportFullToHalf;
- (BOOL)mustCloseToHalf;
- (void)dismissWithDismissType:(id)arg0;
- (BOOL)supportCloseByGesture;
- (void)forbidContentInteraction;
- (void)prepareToDismiss;
- (void)resumeContentInteraction;
- (double)fastCloseCoefficient;
- (double)expandOffset;
- (BOOL)isExpandStates:(long long)arg0;
- (double)targetRatioByTargetOffset:(double)arg0 upperRatio:(double)arg1 lowerRatio:(double)arg2 upperOffset:(double)arg3 lowerOffset:(double)arg4;
- (void)addTapViewInPlaceHolder;
- (void)removeTapViewInPlaceHolder;
- (id)mvStatePanGes;
- (void)setLastPanPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setDidMVPanGestureEnd:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })lastPanPoint;
- (void)handleVerticalPan:(id)arg0;
- (double)speedLimitForHorizontal;
- (BOOL)shouldSwitchState;
- (double)speedLimitForVertical;
- (BOOL)didMVPanGestureEnd;
- (void)handleMVStatePanGes:(id)arg0;
- (void)didTapPlaceHolder;
- (double)offsetToTopWhenFullScreen;
- (BOOL)shouldLockContentOffset;
- (void)setMvStatePanGes:(id)arg0;
- (void)setShouldSwitchState:(BOOL)arg0;
- (unsigned long long)directionWithVelocity:(struct CGPoint { double x0; double x1; })arg0;
- (void)cancelDecelaration;
- (id)initWithContainerView:(id)arg0 scrollView:(id)arg1 params:(id)arg2;
- (void)changeHalfContainerToState:(long long)arg0 animated:(BOOL)arg1;
- (double)halfContainerOffset;
- (void)scrollToOffset:(double)arg0 animation:(BOOL)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (BOOL)isHalfContainerHigherThanOrEqualToTargetState:(long long)arg0;
- (double)halfContainerRatio;
- (id)decelerationHelper;
- (BOOL)hasExceedSpeedLimit;
- (BOOL)shouldHandleCritical:(id)arg0;
- (void)handleCriticalStatePanEnd:(id)arg0;
- (double)currentHalfContainerRatio;
- (long long)currentHalfContainerState;
- (void)halfContainerGestureDidEnd:(id)arg0 deltaOffset:(double)arg1 currentRatio:(double)arg2 currentStatus:(long long)arg3 scrollDirection:(unsigned long long)arg4 hasExceedSpeedLimit:(BOOL)arg5 gestureRecognizer:(id)arg6;
- (BOOL)shouldIgnoreWhenHalfContainerGestureHasChanged:(id)arg0 deltaOffset:(double)arg1 currentRatio:(double)arg2 currentStatus:(long long)arg3 scrollDirection:(unsigned long long)arg4 hasExceedSpeedLimit:(BOOL)arg5 gestureRecognizer:(id)arg6;
- (void)changeHalfContainerRatioWithOriginY:(double)arg0;
- (double)lowerBoundaryFromHalfExpandToExpand;
- (double)upperBoundaryFromHalfExpandToExpand;
- (void)setDecelerationRemainContentOffsetY:(double)arg0;
- (double)decelerationRemainContentOffsetY;
- (void)willStartDecelaration;
- (BOOL)isDeceleration;
- (void)allocateOffsetDeltaYInCritical:(double)arg0 startOriginY:(double)arg1 startContentOffsetY:(double)arg2;
- (double)lowerBoundaryOriginYCanChange;
- (BOOL)isInCritical;
- (void)updateScrolViewContentOffsetYTo:(double)arg0;
- (void)setIsDeceleration:(BOOL)arg0;
- (id)touchThroughView;
- (double)upperBoundaryFromCollapseToHalfExpand;
- (void)relocateWithHalfContainerRatio:(double)arg0 state:(long long)arg1;
- (void)trychangeToHalfExpandStateWithAnimation;
- (void)tryChangeToCollapseStateWithAnimation:(long long)arg0;
- (void)tryDismissWithDismissType:(id)arg0 halfContainerState:(long long)arg1;
- (void)horizontalRelocateWithHalfContainerRatio:(double)arg0 state:(long long)arg1;
- (void)showAsHalfContainerWithRatio:(double)arg0;
- (id)containerViewForHorizontal;
- (void)changeContainerViewForHorizontalFrameWithOriginY:(double)arg0;
- (BOOL)shouldInterruptWhenUpToHalfExpand:(unsigned long long)arg0 deltaOffset:(double)arg1;
- (BOOL)isStateWillChangeFromCollapseToHalfExpandWithOffset:(double)arg0;
- (BOOL)hasExceedSpeedLimitInVerticalWithVelocity:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)hasExceedSpeedLimitInHorizontalWithVelocity:(struct CGPoint { double x0; double x1; })arg0;
- (double)lowerBoundaryFromCollapseToHalfExpand;
- (double)upperBoundaryFromDismissToCollapse;
- (double)lowerBoundaryFromDismissToCollapse;
- (double)targetOffsetByTargetRatio:(double)arg0 upperRatio:(double)arg1 lowerRatio:(double)arg2 upperOffset:(double)arg3 lowerOffset:(double)arg4;
- (double)initialHalfContainerOriginY;
- (double)upperBoundaryOriginYCanChange;
- (BOOL)isChangeFrameFromHalfExpandToExpand:(double)arg0;
- (void)setCurrentHalfContainerRatio:(double)arg0;
- (void)halfContainerDidChangeToRatio:(double)arg0;
- (void)updateContentOffsetWithOriginY:(double)arg0;
- (void)setCurrentHalfContainerOffset:(double)arg0;
- (void)setHalfContainerStateWithOffset:(double)arg0;
- (void)halfContainerContentOffsetDidChange:(double)arg0;
- (void)setIsInDismissAnimation:(BOOL)arg0;
- (void)interruptGestures:(id)arg0;
- (void)dismissWithDismissType:(id)arg0 halfContainerState:(long long)arg1;
- (void)changeToCollapseStateWithHalfContainerState:(long long)arg0;
- (void)changeToCollapseStateWithAnimation;
- (void)changeToHalfExpandStateWithAnimation;
- (BOOL)isInHalfExpandAnimation;
- (void)changeToHalfExpandState;
- (void)setIsInHalfExpandAnimation:(BOOL)arg0;
- (BOOL)isInHalfAnimation;
- (void)changeToCollapseState;
- (void)setIsInHalfAnimation:(BOOL)arg0;
- (void)disMissHalfContainer;
- (BOOL)isInDismissAnimation;
- (void)setCurrentHalfContainerState:(long long)arg0;
- (unsigned long long)dismissTypeWithTypeString:(id)arg0;
- (BOOL)shouldForbidSendDidOffsetDidChange;
- (double)currentHalfContainerOffset;
- (void)changeToCollapseStateWithAnimation:(BOOL)arg0;
- (void)changeToHalfExpandStateWithAnimation:(BOOL)arg0;
- (void)changeToFullExpandState;
- (void)setContainerViewForHorizontal:(id)arg0;
- (void)setCloseByHorizontal:(BOOL)arg0;
- (void)initialHalfContainer;
- (BOOL)hasBeenInitHalfContainer;
- (void)setHasBeenInitHalfContainer:(BOOL)arg0;
- (void)setShouldForbidSendDidOffsetDidChange:(BOOL)arg0;
- (void)scrollToOffset:(double)arg0;
- (void)handleHorizontalPanChanged:(id)arg0 deltaOffset:(double)arg1 currentStatus:(long long)arg2 scrollDirection:(unsigned long long)arg3 gestureRecognizer:(id)arg4;
- (BOOL)closeByHorizontal;
- (void)setDecelerationHelper:(id)arg0;
- (void)setTouchThroughView:(id)arg0;
- (void)setScrollView:(id)arg0;
- (void)dismiss;
- (struct CGPoint { double x0; double x1; })currentLocation;
- (void).cxx_destruct;
- (BOOL)isDismissing;
- (void)setContainerView:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)scrollViewDidScroll:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)containerView;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveEvent:(id)arg1;
- (id)params;
- (id)scrollView;
- (void)dismissWithAnimation:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })currentVelocity;
- (void)setIsDismissing:(BOOL)arg0;
- (void)setParams:(id)arg0;
- (double)targetDistance;
- (void)setTargetDistance:(double)arg0;
- (void)updatePlaceHolderView;

@end
