//
//     Generated by private class-dump
//

@class NSDate, AWEAdConversionAreaView, CADisplayLink, AWEAwemeModel, UIView, NSString, BDImageView, UILabel;

@interface AWEADFunPlayingSeasonView : UIView <CAAnimationDelegate, AWEAdFunPlayingSeasonViewProtocol> {
    BOOL _imageLoadSuccess;
    BOOL _isFold;
    BOOL _isAnimating;
    BOOL _dynamicImageLoopCompletion;
    BOOL _shouldTrackPendantShow;
    BOOL _hasTrackPendantShow;
    BOOL _hasConversionArea;
    BOOL _didExecuteAllAnimationCompletionAction;
    long long _scalingMode;
    double _destinationY;
    UIView *_destinationView;
    BDImageView *_adImageView;
    UILabel *_adDescLabel;
    UIView *_operationView;
    UIView *_containerView;
    AWEAwemeModel *_awemeModel;
    id /* block */ _destinationLeftBottomPointBlock;
    id /* block */ _displayFinishedBlock;
    CADisplayLink *_displayLink;
    double _totalTime;
    NSDate *_beginDate;
    AWEAdConversionAreaView *_conversionAreaView;
    long long _resourceStatus;
    struct CGPoint { double x; double y; } _destinationCenter;
    struct CGSize { double width; double height; } _destinationSize;
    struct CGPoint { double x; double y; } _showCenterPoint;
}

@property (nonatomic) struct CGPoint { double x; double y; } destinationCenter;
@property (nonatomic) struct CGSize { double width; double height; } destinationSize;
@property (nonatomic) double destinationY;
@property (weak, nonatomic) UIView *destinationView;
@property (retain, nonatomic) BDImageView *adImageView;
@property (retain, nonatomic) UILabel *adDescLabel;
@property (retain, nonatomic) UIView *operationView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) struct CGPoint { double x; double y; } showCenterPoint;
@property (nonatomic) BOOL imageLoadSuccess;
@property (nonatomic) BOOL isFold;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic, getter=isDynamicImageLoopCompletion) BOOL dynamicImageLoopCompletion;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) id /* block */ destinationLeftBottomPointBlock;
@property (copy, nonatomic) id /* block */ displayFinishedBlock;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double totalTime;
@property BOOL shouldTrackPendantShow;
@property BOOL hasTrackPendantShow;
@property (retain, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) AWEAdConversionAreaView *conversionAreaView;
@property (nonatomic) BOOL hasConversionArea;
@property (nonatomic) long long resourceStatus;
@property (nonatomic) BOOL didExecuteAllAnimationCompletionAction;
@property (nonatomic) long long scalingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (BOOL)shouldResponseTapEventOnLocation:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)isDynamicType;
- (id)adImageView;
- (void)setAdImageView:(id)arg0;
- (void)trackShowClickIfNeeded;
- (id)operationView;
- (id)adDescLabel;
- (void)setDestinationY:(double)arg0;
- (BOOL)isFold;
- (BOOL)shouldShowFunPlayingView:(id)arg0;
- (void)setImageLoadSuccess:(BOOL)arg0;
- (void)trackPreloadModelIfNeeded:(id)arg0;
- (void)setDestinationLeftBottomPointBlock:(id /* block */)arg0;
- (void)configConversionAreaView;
- (void)executeFoldAnimation:(BOOL)arg0;
- (long long)resourceStatus;
- (void)setResourceStatus:(long long)arg0;
- (BOOL)imageLoadSuccess;
- (void)trackPreloadModelResultIfNeeded:(id)arg0 resultType:(long long)arg1;
- (void)updateImageViewResourceWithURLList:(id)arg0 completion:(id /* block */)arg1;
- (id /* block */)destinationLeftBottomPointBlock;
- (id)conversionAreaView;
- (void)setHasConversionArea:(BOOL)arg0;
- (void)setDisplayFinishedBlock:(id /* block */)arg0;
- (void)setShowCenterPoint:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })showCenterPoint;
- (void)trackShowResultIfNeeded:(id)arg0 resultType:(long long)arg1;
- (void)logTimeDuration:(id)arg0;
- (BOOL)hasConversionArea;
- (double)destinationY;
- (void)startFoldAnimationWithDestinationLeftBottomPoint:(struct CGPoint { double x0; double x1; })arg0 animated:(BOOL)arg1;
- (void)setDestinationSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setDestinationCenter:(struct CGPoint { double x0; double x1; })arg0;
- (void)imageViewLoopCompletion;
- (void)setShouldTrackPendantShow:(BOOL)arg0;
- (void)handleWhenAllAnimationCompletion;
- (void)resetAnimationLayer;
- (void)pauseAnimationWithView:(id)arg0;
- (void)resumeAnimationWithView:(id)arg0;
- (void)resetAnimationView:(id)arg0;
- (void)setIsFold:(BOOL)arg0;
- (void)setHasTrackPendantShow:(BOOL)arg0;
- (void)setDynamicImageLoopCompletion:(BOOL)arg0;
- (void)setUpAdDescLabel;
- (void)setConversionAreaView:(id)arg0;
- (void)setDidExecuteAllAnimationCompletionAction:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })destinationCenter;
- (BOOL)shouldTrackPendantShow;
- (id /* block */)displayFinishedBlock;
- (BOOL)hasTrackPendantShow;
- (void)foldEggView;
- (BOOL)isDynamicImageLoopCompletion;
- (void)showAdDescLabelAnimated:(BOOL)arg0;
- (void)handleFoldAnimation;
- (BOOL)containerViewCanResponseWithPoint:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)operationViewCanResponseWithPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)handleOperationViewTapped;
- (BOOL)didExecuteAllAnimationCompletionAction;
- (void)configWithAwemeModel:(id)arg0 destinationLeftBottomPointBlock:(id /* block */)arg1;
- (BOOL)showInView:(id)arg0 animated:(BOOL)arg1 displayFinishedBlock:(id /* block */)arg2;
- (void)handleTappedEventOnLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)setAdDescLabel:(id)arg0;
- (void)setOperationView:(id)arg0;
- (BOOL)isAnimating;
- (void)setDisplayLink:(id)arg0;
- (void)invalidateTimer;
- (void)updateLayout;
- (double)totalTime;
- (void)animationDidStart:(id)arg0;
- (void).cxx_destruct;
- (id)beginDate;
- (void)setBeginDate:(id)arg0;
- (void)setAlpha:(double)arg0;
- (void)pauseAnimation;
- (void)show;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)hide;
- (id)displayLink;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)resumeAnimation;
- (void)dealloc;
- (void)reset;
- (void)setTotalTime:(double)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setupSubviews;
- (long long)scalingMode;
- (void)setScalingMode:(long long)arg0;
- (void)preloadResources;
- (void)setupNotifications;
- (struct CGSize { double x0; double x1; })destinationSize;
- (id)destinationView;
- (void)setDestinationView:(id)arg0;

@end