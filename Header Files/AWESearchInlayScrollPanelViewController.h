//
//     Generated by private class-dump
//

@class NSLayoutConstraint, NSString, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol AWESearchInlayScrollPanelActionDelegate, AWESearchInlayScrollPanelContentViewProtocol, AWESearchInlayScrollPanelTopViewProtocol;

@interface AWESearchInlayScrollPanelViewController : UIViewController <UIGestureRecognizerDelegate> {
    BOOL _enableTabDismiss;
    BOOL _forbidTopViewPanGesture;
    BOOL _forceFoldContentScroll;
    BOOL _forbidContainerScroll;
    BOOL _enableCustomContentScroll;
    BOOL _isArriveTop;
    BOOL _isArriveNinePercent;
    BOOL _isHitDragView;
    BOOL _isSlideHorizontally;
    UIView<AWESearchInlayScrollPanelContentViewProtocol> *_contentView;
    UIView<AWESearchInlayScrollPanelTopViewProtocol> *_topView;
    long long _inlayScrollPanelStyle;
    double _toppestHeight;
    double _bottomPositionHeight;
    double _initialPositionHeight;
    id<AWESearchInlayScrollPanelActionDelegate> _delegate;
    unsigned long long _contentViewPositionType;
    double _topViewOverlapHeight;
    unsigned long long _panelAtPosition;
    double _originalTopMargin;
    NSString *_referString;
    UIView *_containerView;
    UIView *_backgroundView;
    UITapGestureRecognizer *_backgroundTapGesture;
    UIPanGestureRecognizer *_topBarPanGesture;
    UIPanGestureRecognizer *_syncContentPanGesture;
    NSLayoutConstraint *_containerTopConstraint;
    NSLayoutConstraint *_containerBottomConstraint;
    double _currentPanSessionStartWebOffset;
    double _currentPanSessionStartGeneralOffset;
    double _arriveTopOffset;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UITapGestureRecognizer *backgroundTapGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *topBarPanGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *syncContentPanGesture;
@property (retain, nonatomic) NSLayoutConstraint *containerTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *containerBottomConstraint;
@property (nonatomic) double currentPanSessionStartWebOffset;
@property (nonatomic) double currentPanSessionStartGeneralOffset;
@property (nonatomic) double arriveTopOffset;
@property (nonatomic) BOOL isArriveTop;
@property (nonatomic) BOOL isArriveNinePercent;
@property (nonatomic) BOOL isHitDragView;
@property (nonatomic) BOOL isSlideHorizontally;
@property (retain, nonatomic) UIView<AWESearchInlayScrollPanelContentViewProtocol> *contentView;
@property (retain, nonatomic) UIView<AWESearchInlayScrollPanelTopViewProtocol> *topView;
@property (nonatomic) long long inlayScrollPanelStyle;
@property (nonatomic) double toppestHeight;
@property (nonatomic) double bottomPositionHeight;
@property (nonatomic) double initialPositionHeight;
@property (weak, nonatomic) id<AWESearchInlayScrollPanelActionDelegate> delegate;
@property (nonatomic) unsigned long long contentViewPositionType;
@property (nonatomic) BOOL enableTabDismiss;
@property (nonatomic) BOOL forbidTopViewPanGesture;
@property (nonatomic) BOOL forceFoldContentScroll;
@property (nonatomic) double topViewOverlapHeight;
@property (nonatomic) BOOL forbidContainerScroll;
@property (nonatomic) BOOL enableCustomContentScroll;
@property (nonatomic) unsigned long long panelAtPosition;
@property (nonatomic) double originalTopMargin;
@property (retain, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)p_setupViews;
- (void)setContainerBottomConstraint:(id)arg0;
- (id)containerBottomConstraint;
- (void)setContentViewPositionType:(unsigned long long)arg0;
- (void)setToppestHeight:(double)arg0;
- (void)setBottomPositionHeight:(double)arg0;
- (id)initWithContentView:(id)arg0 topView:(id)arg1 backgroundView:(id)arg2 builder:(id /* block */)arg3;
- (void)expandContentViewWithAnimation:(BOOL)arg0 duration:(double)arg1 originalTopMargin:(double)arg2 completion:(id /* block */)arg3;
- (double)topestMargin;
- (void)setOriginalTopMargin:(double)arg0;
- (id)backgroundTapGesture;
- (double)imageViewInitialBottom;
- (double)topViewHeight;
- (id)topBarPanGesture;
- (BOOL)forbidTopViewPanGesture;
- (BOOL)enableTopViewOverlapStyle;
- (double)topViewOverlapHeight;
- (id)syncContentPanGesture;
- (long long)inlayScrollPanelStyle;
- (void)p_moveContainerToSuperview:(id)arg0 constraintView:(id)arg1;
- (void)p_updateContainerTopMargin:(double)arg0 changeEnded:(BOOL)arg1;
- (double)originalTopMargin;
- (BOOL)hasCustomPanelPullAction;
- (void)p_updateContainerTopMargin:(double)arg0 changeEnded:(BOOL)arg1 gestureRecognizerStateEnded:(BOOL)arg2;
- (void)triggercustomPanelPullAction;
- (double)dropPanelMargin;
- (double)closeVelocity;
- (BOOL)backgroundViewNeedAdjustToCenter;
- (double)bottomPosion;
- (void)setPanelAtPosition:(unsigned long long)arg0;
- (void)onPanelViewEndDrag;
- (void)foldAnimationUpdateTopMargin:(double)arg0 completion:(id /* block */)arg1;
- (double)foldPanelAnimationDuration:(double)arg0;
- (double)containerViewInitialBottom;
- (double)containerViewInitialTop;
- (BOOL)forbidContainerScroll;
- (void)onPanelViewWillDrag;
- (unsigned long long)panelAtPosition;
- (double)p_containerViewEndTopWithOffset:(double)arg0;
- (double)p_containerViewEndBottomWithOffset:(double)arg0;
- (void)p_handlePanReleaseWithOffset:(double)arg0 velocity:(double)arg1;
- (BOOL)enableTabDismiss;
- (void)p_closeWithType:(unsigned long long)arg0;
- (double)currentPanSessionStartWebOffset;
- (BOOL)hitDragView:(id)arg0;
- (void)setIsHitDragView:(BOOL)arg0;
- (BOOL)isHitDragView;
- (void)setCurrentPanSessionStartWebOffset:(double)arg0;
- (BOOL)needFixGeneralScanScroll;
- (void)generalSearchScanFoldContentScrollDidScroll:(id)arg0;
- (BOOL)enableCustomContentScroll;
- (void)customScrollWithGesture:(id)arg0;
- (BOOL)customNeededSupportPanGestureGoBack;
- (void)goBackIfNeedByPanGestureOffSetPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setIsArriveTop:(BOOL)arg0;
- (BOOL)isArriveTop;
- (void)setArriveTopOffset:(double)arg0;
- (double)arriveTopOffset;
- (double)currentPanSessionStartGeneralOffset;
- (void)setCurrentPanSessionStartGeneralOffset:(double)arg0;
- (BOOL)isScanQuestionMode;
- (BOOL)enableFocusSixPercentageScreen;
- (void)setIsArriveNinePercent:(BOOL)arg0;
- (void)setIsSlideHorizontally:(BOOL)arg0;
- (BOOL)isSlideHorizontally;
- (BOOL)needFixMultiScroll;
- (double)middlePositionMargin;
- (BOOL)needPanBackAction;
- (id)fetchSlidingScrollView;
- (void)panRightSideAction;
- (void)panLeftSideAction;
- (double)toppestHeight;
- (double)bottomPositionHeight;
- (double)initialPositionHeight;
- (unsigned long long)contentViewPositionType;
- (double)customImageViewInitialBottom;
- (double)imageViewTargetBottom;
- (void)handleTopViewPan:(id)arg0;
- (void)handleTapDismiss:(id)arg0;
- (BOOL)forceFoldContentScroll;
- (void)contentScrollDidScroll:(id)arg0;
- (void)foldContentScrollDidScroll:(id)arg0;
- (id)initWithContentView:(id)arg0 topView:(id)arg1 delegate:(id)arg2 backgroundView:(id)arg3 contentViewPositionType:(unsigned long long)arg4;
- (void)updateTopView:(id)arg0;
- (void)expandContentViewWithAnimation:(BOOL)arg0 duration:(double)arg1 completion:(id /* block */)arg2;
- (void)customUpdateBackgroundView:(double)arg0;
- (void)setInlayScrollPanelStyle:(long long)arg0;
- (void)setInitialPositionHeight:(double)arg0;
- (void)setEnableTabDismiss:(BOOL)arg0;
- (void)setForbidTopViewPanGesture:(BOOL)arg0;
- (void)setForceFoldContentScroll:(BOOL)arg0;
- (void)setTopViewOverlapHeight:(double)arg0;
- (void)setForbidContainerScroll:(BOOL)arg0;
- (void)setEnableCustomContentScroll:(BOOL)arg0;
- (void)setBackgroundTapGesture:(id)arg0;
- (void)setTopBarPanGesture:(id)arg0;
- (void)setSyncContentPanGesture:(id)arg0;
- (BOOL)isArriveNinePercent;
- (id)backgroundView;
- (void).cxx_destruct;
- (double)screenWidth;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)setContainerView:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)contentView;
- (id)delegate;
- (double)screenHeight;
- (id)containerView;
- (void)setDelegate:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)topView;
- (void)setTopView:(id)arg0;
- (id)containerTopConstraint;
- (void)setContainerTopConstraint:(id)arg0;

@end
