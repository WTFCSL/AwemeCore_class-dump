//
//     Generated by private class-dump
//

@class DitoPageContext, NSString, UIView, AWEPOIModalViewPanGestureRecognizer, UIScrollView;
@protocol AWEPOIModalViewDelegateProtocol;

@interface AWEPOIModalViewManager : NSObject <UIGestureRecognizerDelegate, AWEPOIModalViewManagerProtocol> {
    BOOL _isDismissing;
    BOOL _shouldUnLockScrollInHalfState;
    BOOL _shouldSwitchState;
    BOOL _shouldBounces;
    BOOL _didMVPanGestureEnd;
    BOOL _shouldChangeGestureDirection;
    double _tapViewBottomValue;
    DitoPageContext *_context;
    id<AWEPOIModalViewDelegateProtocol> _mvManagerDelegate;
    AWEPOIModalViewPanGestureRecognizer *_mvStatePanGes;
    long long _modalViewState;
    double _currentModalViewRatio;
    UIScrollView *_scrollView;
    double _speedLimitForVertical;
    double _speedLimitForHorizontal;
    double _placeHolderHeight;
    double _panStartOriginY;
    UIView *_tapView;
    double _scrollViewDiffY;
    struct CGPoint { double x; double y; } _panStartPoint;
    struct CGPoint { double x; double y; } _lastPanPoint;
    struct CGPoint { double x; double y; } _lastContentOffset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _currentFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalScrollViewFrame;
}

@property (nonatomic) long long modalViewState;
@property (retain, nonatomic) AWEPOIModalViewPanGestureRecognizer *mvStatePanGes;
@property (nonatomic) struct CGPoint { double x; double y; } panStartPoint;
@property (nonatomic) double panStartOriginY;
@property (nonatomic) struct CGPoint { double x; double y; } lastPanPoint;
@property (retain, nonatomic) UIView *tapView;
@property (nonatomic) BOOL shouldSwitchState;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalScrollViewFrame;
@property (nonatomic) BOOL shouldBounces;
@property (nonatomic) BOOL didMVPanGestureEnd;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (nonatomic) double scrollViewDiffY;
@property (nonatomic) BOOL shouldChangeGestureDirection;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<AWEPOIModalViewDelegateProtocol> mvManagerDelegate;
@property (nonatomic) double currentModalViewRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentFrame;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double speedLimitForVertical;
@property (nonatomic) double speedLimitForHorizontal;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) double placeHolderHeight;
@property (nonatomic) BOOL shouldUnLockScrollInHalfState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double tapViewBottomValue;

- (void)handleHorizontalPan:(id)arg0;
- (id)tapView;
- (void)setTapView:(id)arg0;
- (struct CGPoint { double x0; double x1; })panStartPoint;
- (void)setPanStartPoint:(struct CGPoint { double x0; double x1; })arg0;
- (double)initialModalViewRatio;
- (long long)modalViewState;
- (double)currentModalViewRatio;
- (double)modalViewOffsetForModalViewRatio:(double)arg0;
- (BOOL)isFirstComponentVisible;
- (void)interruptGesture:(id)arg0;
- (double)convertRatioByOriginY:(double)arg0;
- (void)showAsModalViewWithRatio:(double)arg0;
- (double)convertOriginYByRatio:(double)arg0;
- (void)forbidContentInteraction;
- (void)prepareToDismiss;
- (void)resumeContentInteraction;
- (void)collapseToModalView;
- (void)expandToFullScreen;
- (void)setTapViewBottomValue:(double)arg0;
- (double)modalViewIgnoreHeightWhenEnterFullScreen;
- (id)mvManagerDelegate;
- (double)tapViewBottomValue;
- (void)setModalViewState:(long long)arg0;
- (void)setCurrentModalViewRatio:(double)arg0;
- (void)setMvManagerDelegate:(id)arg0;
- (void)handleHalfModePan:(id)arg0;
- (void)handleFullModePan:(id)arg0;
- (void)setShouldUnLockScrollInHalfState:(BOOL)arg0;
- (void)addTapViewInPlaceHolder;
- (void)removeTapViewInPlaceHolder;
- (id)mvStatePanGes;
- (void)setLastPanPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setDidMVPanGestureEnd:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })lastPanPoint;
- (void)setPanStartOriginY:(double)arg0;
- (void)setShouldChangeGestureDirection:(BOOL)arg0;
- (BOOL)shouldChangeGestureDirection;
- (void)handleVerticalPan:(id)arg0;
- (double)speedLimitForHorizontal;
- (BOOL)shouldSwitchState;
- (double)speedLimitForVertical;
- (void)changeModalViewRatioWithOriginY:(double)arg0;
- (BOOL)shouldBounces;
- (BOOL)didMVPanGestureEnd;
- (void)handleMVStatePanGes:(id)arg0;
- (void)didTapPlaceHolder;
- (void)setOriginalScrollViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)aCoefficientInZeroToEnterRatio;
- (double)bCoefficientInZeroToEnterRatio;
- (double)aCoefficientInEnterRatioToFullScreen;
- (double)bCoefficientInEnterRatioToFullScreen;
- (double)offsetToTopWhenFullScreen;
- (double)placeHolderHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalScrollViewFrame;
- (void)setScrollViewDiffY:(double)arg0;
- (double)scrollViewDiffY;
- (BOOL)shouldChangeFrameWhenScrollViewDidScrollWithDirection:(unsigned long long)arg0;
- (BOOL)shouldLockContentOffset;
- (BOOL)shouldUnLockScrollInHalfState;
- (void)setShouldBounces:(BOOL)arg0;
- (void)setSpeedLimitForVertical:(double)arg0;
- (void)setSpeedLimitForHorizontal:(double)arg0;
- (void)setPlaceHolderHeight:(double)arg0;
- (double)protectOriginYWithOriginY:(double)arg0;
- (void)setMvStatePanGes:(id)arg0;
- (double)panStartOriginY;
- (void)setShouldSwitchState:(BOOL)arg0;
- (void)setScrollView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)setContext:(id)arg0;
- (BOOL)isDismissing;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)scrollViewDidScroll:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)context;
- (id)scrollView;
- (struct CGPoint { double x0; double x1; })lastContentOffset;
- (void)setLastContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentFrame;
- (void)setIsDismissing:(BOOL)arg0;
- (void)setCurrentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
