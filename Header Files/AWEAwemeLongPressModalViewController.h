//
//     Generated by private class-dump
//

@class AWEAwemeModel, UIView, AFDLongPressContext, NSArray, NSString, CAShapeLayer, AWEAwemeLongPressViewController, AFDHoverableContainerView, MASConstraint, UIPanGestureRecognizer, NSObject;
@protocol AFDLongPressDynamicDurationProtocol;

@interface AWEAwemeLongPressModalViewController : UIViewController <UIGestureRecognizerDelegate, AWEAwemeLongPressModalViewControllerProtocol> {
    BOOL _isShowing;
    BOOL _isAnimating;
    BOOL _disableImpactFeedback;
    BOOL _isDraggingHandleView;
    BOOL _scrollEventTracked;
    BOOL _hasScrolled;
    BOOL _fronzeDetectRecording;
    NSString *_referString;
    NSObject<AFDLongPressDynamicDurationProtocol> *_interactionPanelTarget;
    AFDHoverableContainerView *_contentView;
    AFDLongPressContext *_context;
    AWEAwemeLongPressViewController *_collectionViewController;
    UIView *_containerView;
    UIView *_bgMask;
    double _collectionViewHeight;
    MASConstraint *_contentViewShowingConstraint;
    MASConstraint *_contentViewDismissedConstraint;
    UIView *_disabledView;
    UIPanGestureRecognizer *_panGes;
    double _contentViewOffset;
    id /* block */ _triggerBlock;
    id /* block */ _dismissBlock;
    CAShapeLayer *_maskLayer;
    AWEAwemeModel *_adAweme;
    double _panGestureStartTimestamp;
    double _springAnimationVelocity;
    NSArray *_functionModels;
    struct CGPoint { double x; double y; } _wakePosition;
    struct CGPoint { double x; double y; } _lastLocation;
}

@property (retain, nonatomic) AWEAwemeLongPressViewController *collectionViewController;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *bgMask;
@property (nonatomic) double collectionViewHeight;
@property (retain, nonatomic) MASConstraint *contentViewShowingConstraint;
@property (retain, nonatomic) MASConstraint *contentViewDismissedConstraint;
@property (retain, nonatomic) UIView *disabledView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (nonatomic) BOOL isDraggingHandleView;
@property (nonatomic) BOOL scrollEventTracked;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) double contentViewOffset;
@property (copy, nonatomic) id /* block */ triggerBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (nonatomic) BOOL hasScrolled;
@property (retain, nonatomic) AWEAwemeModel *adAweme;
@property (nonatomic) double panGestureStartTimestamp;
@property (nonatomic) double springAnimationVelocity;
@property (retain, nonatomic) AFDLongPressContext *context;
@property (retain, nonatomic) NSArray *functionModels;
@property (nonatomic) BOOL fronzeDetectRecording;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isAnimating;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) NSObject<AFDLongPressDynamicDurationProtocol> *interactionPanelTarget;
@property (nonatomic) struct CGPoint { double x; double y; } wakePosition;
@property (nonatomic) BOOL disableImpactFeedback;
@property (retain, nonatomic) AFDHoverableContainerView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setIsShowing:(BOOL)arg0;
- (void)setReferString:(id)arg0;
- (void)configWithFucntionModels:(id)arg0;
- (id)interactionPanelTarget;
- (void)setInteractionPanelTarget:(id)arg0;
- (struct CGPoint { double x0; double x1; })wakePosition;
- (void)setWakePosition:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)disableImpactFeedback;
- (void)setDisableImpactFeedback:(BOOL)arg0;
- (id)initWithTriggerBlock:(id /* block */)arg0 dismissBlock:(id /* block */)arg1 referString:(id)arg2;
- (void)configWithFucntionModels:(id)arg0 aweme:(id)arg1;
- (void)updateWithReasonModels:(id)arg0;
- (void)unfoldDislikeModelWithInsertModels:(id)arg0;
- (void)unfoldDislikeReasonsListWithModels:(id)arg0 aweme:(id)arg1;
- (void)unfoldDislikeReasonsList;
- (void)dismissByPan:(id)arg0;
- (id)longPressContext;
- (void)showSpeedControl;
- (void)toggleDislikeReasonList:(BOOL)arg0;
- (void)showOnView:(id)arg0;
- (id)panGes;
- (void)setPanGes:(id)arg0;
- (void)slideDismiss;
- (void)setHasScrolled:(BOOL)arg0;
- (BOOL)hasScrolled;
- (void)addPageIdentifierForTranspondIMShareModels:(id)arg0;
- (void)setBgMask:(id)arg0;
- (id)bgMask;
- (id)initWithTriggerBlock:(id /* block */)arg0 dismissBlock:(id /* block */)arg1 referString:(id)arg2 fromProfile:(id)arg3;
- (id)functionModels;
- (void)setFunctionModels:(id)arg0;
- (void)prepareForShareToStory;
- (void)tweakDismissBlock;
- (void)dismissAnimated:(BOOL)arg0 enterMethod:(id)arg1;
- (double)calculateCollectionViewHeightWithAdAttitudeHeight:(double)arg0;
- (double)modalViewHeight;
- (void)tappedDismiss;
- (void)setContentViewDismissedConstraint:(id)arg0;
- (void)setContentViewShowingConstraint:(id)arg0;
- (id)contentViewShowingConstraint;
- (id)disabledView;
- (void)setAdAweme:(id)arg0;
- (id /* block */)triggerBlock;
- (id)adAweme;
- (id)contentViewDismissedConstraint;
- (void)tryStopFronzenDetect;
- (void)tryResumeFronzenDetect;
- (void)dismissWithoutBlockAnimated:(BOOL)arg0;
- (BOOL)scrollEventTracked;
- (void)setScrollEventTracked:(BOOL)arg0;
- (void)setIsDraggingHandleView:(BOOL)arg0;
- (BOOL)isDraggingHandleView;
- (void)trackScrollIfNeeded;
- (void)setSpringAnimationVelocity:(double)arg0;
- (double)panGestureStartTimestamp;
- (double)springAnimationVelocity;
- (void)setPanGestureStartTimestamp:(double)arg0;
- (void)setFronzeDetectRecording:(BOOL)arg0;
- (BOOL)fronzeDetectRecording;
- (void)setDisabledView:(id)arg0;
- (void)setTriggerBlock:(id /* block */)arg0;
- (BOOL)isAnimating;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void)dismissAnimated:(BOOL)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (struct CGPoint { double x0; double x1; })lastLocation;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)setContext:(id)arg0;
- (void)setLastLocation:(struct CGPoint { double x0; double x1; })arg0;
- (id)collectionViewController;
- (void)setContainerView:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)isShowing;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)contentView;
- (double)contentViewOffset;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)containerView;
- (id)context;
- (void)setContentViewOffset:(double)arg0;
- (void)pan:(id)arg0;
- (void)viewDidLoad;
- (void)setCollectionViewController:(id)arg0;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setContentView:(id)arg0;
- (id)maskLayer;
- (void)setupUI;
- (void)setMaskLayer:(id)arg0;
- (void)setCollectionViewHeight:(double)arg0;
- (double)collectionViewHeight;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end