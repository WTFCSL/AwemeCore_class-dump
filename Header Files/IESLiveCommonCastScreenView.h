//
//     Generated by private class-dump
//

@class NSString, UIImage, IESLiveCommonCastScreenContainerView, UIView, UIButton;
@protocol IESLiveCastScreenViewDelegate, IESLiveVideoEffectProcessing;

@interface IESLiveCommonCastScreenView : UIView <IESLiveCommonCastScreenContainerViewDelegate> {
    BOOL _minimize;
    BOOL _isBackToAnchorScreen;
    BOOL _isCastScreening;
    BOOL _isShowingElementView;
    id<IESLiveCastScreenViewDelegate> _delegate;
    double _rightPadding;
    double _bottomPadding;
    IESLiveCommonCastScreenContainerView *_castScreenContainer;
    UIImage *_imageIcon;
    UIView *_elementView;
    UIView *_smallWindowView;
    UIButton *_smallWindowSizeButton;
    id<IESLiveVideoEffectProcessing> _videoEffectProcesser;
    struct CGPoint { double x; double y; } _startMovePoint;
    struct CGSize { double width; double height; } _smallWindowSize;
}

@property (nonatomic) BOOL minimize;
@property (nonatomic) BOOL isBackToAnchorScreen;
@property (nonatomic) BOOL isCastScreening;
@property (nonatomic) BOOL isShowingElementView;
@property (nonatomic) struct CGPoint { double x; double y; } startMovePoint;
@property (nonatomic) struct CGSize { double width; double height; } smallWindowSize;
@property (nonatomic) double rightPadding;
@property (nonatomic) double bottomPadding;
@property (retain, nonatomic) IESLiveCommonCastScreenContainerView *castScreenContainer;
@property (retain, nonatomic) UIImage *imageIcon;
@property (retain, nonatomic) UIView *elementView;
@property (retain, nonatomic) UIView *smallWindowView;
@property (retain, nonatomic) UIButton *smallWindowSizeButton;
@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> videoEffectProcesser;
@property (weak, nonatomic) id<IESLiveCastScreenViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)elementView;
- (void)setElementView:(id)arg0;
- (void)setRightPadding:(double)arg0;
- (void)setImageIcon:(id)arg0;
- (id)imageIcon;
- (id)initWithElementView:(id)arg0;
- (BOOL)isCastScreening;
- (void)setStartMovePoint:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })startMovePoint;
- (void)updateCommonCastScreenElementSize:(struct CGSize { double x0; double x1; })arg0;
- (id)smallWindowView;
- (id)videoEffectProcesser;
- (void)setVideoEffectProcesser:(id)arg0;
- (void)setIsCastScreening:(BOOL)arg0;
- (void)switchCastScreenIfNeedClickedAction;
- (void)endCastScreenClickedAction;
- (void)showElementViewButtonClickedAction;
- (void)switchCastScreenIfNeedClickedAction:(BOOL)arg0;
- (BOOL)isShowingElementView;
- (void)backToCastScreenAction:(BOOL)arg0;
- (void)pullElementViewWithCompletion:(id /* block */)arg0;
- (void)updateShowCastScreenButtonWithShowStatus:(BOOL)arg0;
- (void)setIsShowingElementView:(BOOL)arg0;
- (void)foldElementViewWithCompletion:(id /* block */)arg0;
- (void)setMinimize:(BOOL)arg0;
- (void)minimizeSmallWindowWithCompletion:(id /* block */)arg0;
- (void)enlargeSmallWindowWithCompletion:(id /* block */)arg0;
- (void)addAnchorSmallWindowIfNeed:(BOOL)arg0;
- (void)removeCastScreenView;
- (id)castScreenContainer;
- (BOOL)shouldShowSmallWindowView;
- (void)smallWindowChangedWithStatus:(long long)arg0;
- (void)setSmallWindowView:(id)arg0;
- (id)smallWindowSizeButton;
- (void)setSmallWindowSizeButton:(id)arg0;
- (void)setSmallWindowSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })smallWindowSize;
- (void)updateSmallWindowSizeClicked;
- (void)panSmallWindowGesture:(id)arg0;
- (struct CGPoint { double x0; double x1; })updateStartPosition:(struct CGPoint { double x0; double x1; })arg0;
- (void)elementViewButtonImageIfNeedFold:(BOOL)arg0;
- (void)setIsBackToAnchorScreen:(BOOL)arg0;
- (BOOL)isBackToAnchorScreen;
- (void)normalizeCastScreenAction;
- (void)minimizeCastScreenAction;
- (void)endCastScreenIfDuringLiving;
- (void)setupCastScreenContainer:(id)arg0;
- (void)setupSmallWindowChangedWithStatus:(long long)arg0 smallWindowSize:(struct CGSize { double x0; double x1; })arg1 rightPadding:(double)arg2 bottomPadding:(double)arg3;
- (void)setCastScreenContainer:(id)arg0;
- (BOOL)minimize;
- (void).cxx_destruct;
- (double)bottomPadding;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setBottomPadding:(double)arg0;
- (void)panGesture:(id)arg0;
- (double)rightPadding;

@end
