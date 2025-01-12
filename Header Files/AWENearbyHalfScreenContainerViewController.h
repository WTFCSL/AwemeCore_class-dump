//
//     Generated by private class-dump
//

@class UIView, AWENearbyHalfScreenContainerModel, NSString, NSArray, CAShapeLayer, UIButton, AWENearbylHafScreenContentAnimator, NSMutableArray, UIPanGestureRecognizer, UIScrollView;

@interface AWENearbyHalfScreenContainerViewController : UIViewController <UIGestureRecognizerDelegate, BDXPoolContainerDelegate, AWENearbyHalfScreenContainerProtocol> {
    BOOL _isMaxStatusWhenPanStart;
    BOOL _isRedirectContent;
    BOOL _showCompleted;
    BOOL _needFrezzedContainerHeight;
    unsigned long long containerViewState;
    UIView *_containerView;
    UIButton *_maskViewButton;
    NSString *_arrowColor;
    NSArray *_viewInjectorList;
    unsigned long long _containerViewStyle;
    id /* block */ _dismissCompletion;
    AWENearbyHalfScreenContainerModel *_containerModel;
    CAShapeLayer *_containerShapeLayer;
    UIPanGestureRecognizer *_panGesture;
    id _containerContent;
    UIScrollView *_contentScrollView;
    UIView *_contentView;
    NSMutableArray *_subscribeList;
    AWENearbylHafScreenContentAnimator *_animator;
    long long _originHeightPercent;
    long long _maxHeightPercent;
    double _containerShowedTimeStamp;
    UIButton *_highLightBtn;
    struct CGPoint { double x; double y; } _containerViewPanStartPoint;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _angleTargetRect;
}

@property (retain, nonatomic) AWENearbyHalfScreenContainerModel *containerModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) CAShapeLayer *containerShapeLayer;
@property (retain, nonatomic) UIButton *maskViewButton;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGPoint { double x; double y; } containerViewPanStartPoint;
@property (nonatomic) BOOL isMaxStatusWhenPanStart;
@property (nonatomic) BOOL isRedirectContent;
@property (retain, nonatomic) id containerContent;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSMutableArray *subscribeList;
@property (retain, nonatomic) AWENearbylHafScreenContentAnimator *animator;
@property (nonatomic) long long originHeightPercent;
@property (nonatomic) long long maxHeightPercent;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } angleTargetRect;
@property (nonatomic) double containerShowedTimeStamp;
@property (nonatomic) BOOL showCompleted;
@property (retain, nonatomic) UIButton *highLightBtn;
@property (nonatomic) BOOL needFrezzedContainerHeight;
@property (copy, nonatomic) NSString *arrowColor;
@property (retain, nonatomic) NSArray *viewInjectorList;
@property (nonatomic) unsigned long long containerViewStyle;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long containerViewState;

- (void)setDismissCompletion:(id /* block */)arg0;
- (id /* block */)dismissCompletion;
- (id)containerModel;
- (id)subscribeList;
- (void)setSubscribeList:(id)arg0;
- (void)setContainerModel:(id)arg0;
- (void)setArrowColor:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })angleTargetRect;
- (void)setAngleTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)updateHalfScreenAngleTargetRect:(id)arg0 dialogProps:(id)arg1;
- (void)hiddenHalfScreenHighLight;
- (id)maskViewButton;
- (void)setupContainerContent:(id)arg0;
- (void)maskViewButtonClicked:(id)arg0;
- (void)setMaskViewButton:(id)arg0;
- (long long)originHeightPercent;
- (void)setOriginHeightPercent:(long long)arg0;
- (long long)maxHeightPercent;
- (void)setMaxHeightPercent:(long long)arg0;
- (id)arrowColor;
- (id)initWithContent:(id)arg0 containerModel:(id)arg1;
- (void)setViewInjectorList:(id)arg0;
- (void)showContentViewWithCompletion:(id /* block */)arg0;
- (void)setContainerViewState:(unsigned long long)arg0;
- (id)containerContent;
- (void)setShowCompleted:(BOOL)arg0;
- (unsigned long long)containerViewStyle;
- (id)containerShapeLayer;
- (void)setContainerShapeLayer:(id)arg0;
- (id)highLightBtn;
- (void)setContainerShowedTimeStamp:(double)arg0;
- (void)registerHalfScreenJSEvent;
- (void)sendHalfScreenInjectedViewEvent:(SEL)arg0 funcBlock:(id /* block */)arg1;
- (void)transparentAngleTargetRect;
- (id)__hafScreenContentSheetAnimator;
- (id)__hafScreenContentAlertAnimator;
- (void)updateHalfScreenHeightAndAngleTargetRect;
- (BOOL)showCompleted;
- (BOOL)isRedirectContent;
- (double)containerShowedTimeStamp;
- (BOOL)needFrezzedContainerHeight;
- (unsigned long long)containerViewState;
- (id)findScrollViewInContent;
- (double)containerViewLimitTopY;
- (void)dismissHalfScreenWithCloseType:(id)arg0;
- (void)handleFullScreenPanGesture:(id)arg0;
- (void)setContainerViewPanStartPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setIsMaxStatusWhenPanStart:(BOOL)arg0;
- (void)publishJSBEvent:(id)arg0 params:(id)arg1;
- (double)containerViewLimitBottomY;
- (BOOL)isMaxStatusWhenPanStart;
- (void)trackNearbyHalfScreenInteractionMonitorWithParams:(id)arg0;
- (void)changeContainerViewPositionWithNewHeight:(double)arg0;
- (void)updateContainerViewState:(unsigned long long)arg0;
- (void)trackNearbyHalfScreenBecomeFull:(id)arg0;
- (void)highLightButtonClicked:(id)arg0;
- (void)trackNearbyHalfScreenJSBMonitorWithParam:(id)arg0;
- (void)redirectContentWithSchema:(id)arg0;
- (void)setNeedFrezzedContainerHeight:(BOOL)arg0;
- (void)halfScreenChangeStatusWithType:(unsigned long long)arg0;
- (void)setIsRedirectContent:(BOOL)arg0;
- (void)setContainerContent:(id)arg0;
- (id)viewInjectorList;
- (id)__findScrollViewWithParentView:(id)arg0;
- (void)xpoolContainerDidFinishLoad:(id)arg0;
- (void)xpoolContainer:(id)arg0 didLoadFailedWithError:(id)arg1;
- (void)xpoolContainerDidFirstScreen:(id)arg0;
- (void)setContainerViewStyle:(unsigned long long)arg0;
- (struct CGPoint { double x0; double x1; })containerViewPanStartPoint;
- (void)setHighLightBtn:(id)arg0;
- (id)animator;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)setContainerView:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)contentView;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)containerView;
- (id)contentScrollView;
- (void)setAnimator:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setContentView:(id)arg0;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (void)setupUI;
- (void)setContentScrollView:(id)arg0;
- (void)handlePanGesture:(id)arg0;
- (void)setupLayout;

@end
