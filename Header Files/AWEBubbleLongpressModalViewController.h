//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, AFDLongPressContext, UIView, UIButton, AFDHoverableContainerView, MASConstraint, UIViewController, NSObject;
@protocol AWEAwemeLongPressViewControllerProtocol, AFDLongPressDynamicDurationProtocol;

@interface AWEBubbleLongpressModalViewController : UIViewController <UIGestureRecognizerDelegate, AWEAwemeLongPressModalViewControllerProtocol> {
    BOOL _isShowing;
    BOOL _isAnimating;
    BOOL _disableImpactFeedback;
    BOOL _hasScrolled;
    NSString *_referString;
    NSObject<AFDLongPressDynamicDurationProtocol> *_interactionPanelTarget;
    AFDHoverableContainerView *_contentView;
    UIViewController<AWEAwemeLongPressViewControllerProtocol> *_collectionViewController;
    UIView *_backgroundView;
    UIView *_containerView;
    double _collectionViewHeight;
    MASConstraint *_contentViewShowingConstraint;
    MASConstraint *_contentViewDismissedConstraint;
    UIView *_disabledView;
    id /* block */ _triggerBlock;
    id /* block */ _dismissBlock;
    AWEAwemeModel *_adAweme;
    AFDLongPressContext *_context;
    UIButton *_closeButton;
    struct CGPoint { double x; double y; } _wakePosition;
}

@property (retain, nonatomic) UIViewController<AWEAwemeLongPressViewControllerProtocol> *collectionViewController;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) double collectionViewHeight;
@property (retain, nonatomic) MASConstraint *contentViewShowingConstraint;
@property (retain, nonatomic) MASConstraint *contentViewDismissedConstraint;
@property (retain, nonatomic) UIView *disabledView;
@property (copy, nonatomic) id /* block */ triggerBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) BOOL hasScrolled;
@property (retain, nonatomic) AWEAwemeModel *adAweme;
@property (retain, nonatomic) AFDLongPressContext *context;
@property (retain, nonatomic) UIButton *closeButton;
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
- (void)closeButtonDidClick:(id)arg0;
- (void)setHasScrolled:(BOOL)arg0;
- (BOOL)hasScrolled;
- (void)addPageIdentifierForTranspondIMShareModels:(id)arg0;
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
- (void)dismissWithoutBlockAnimated:(BOOL)arg0;
- (void)setDisabledView:(id)arg0;
- (void)setTriggerBlock:(id /* block */)arg0;
- (void)clickedDismiss;
- (BOOL)isAnimating;
- (id)backgroundView;
- (void)viewDidAppear:(BOOL)arg0;
- (void)dismissAnimated:(BOOL)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setContext:(id)arg0;
- (id)collectionViewController;
- (void)setContainerView:(id)arg0;
- (BOOL)isShowing;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)contentView;
- (id)containerView;
- (id)context;
- (void)viewDidLoad;
- (void)setCollectionViewController:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setContentView:(id)arg0;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setCollectionViewHeight:(double)arg0;
- (double)collectionViewHeight;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
