//
//     Generated by private class-dump
//

@class UIView, IESLiveAudioBackgroundVideoPlayerView, RACDisposable, IESLiveAudioBackgroundViewModel, UIImageView, CAShapeLayer, IESLiveGCDTimer, CAGradientLayer, IESLiveInteractBackGroundCutProvider, IESLiveAudioBackgroundAnimatedView;

@interface IESLiveAudioBackgroundView : UIView {
    BOOL _isImageViewAnimating;
    BOOL _isCutLayerOnSuperLayer;
    BOOL _hasCutBackground;
    BOOL _isPreLoadIniting;
    BOOL _isPreLoadCutingFirst;
    BOOL _shouldShowWhenRenderReady;
    BOOL _hasReportFirstRender;
    IESLiveAudioBackgroundViewModel *_viewModel;
    IESLiveInteractBackGroundCutProvider *_cutProvider;
    UIImageView *_backgroundImageView;
    UIView *_backgroundMaskView;
    CAGradientLayer *_maskViewLayer;
    UIView *_transitionBackgroundView;
    IESLiveAudioBackgroundAnimatedView *_backgroundAnimatedImageView;
    IESLiveAudioBackgroundVideoPlayerView *_videoPlayerView;
    UIView *_mvBackgroundContainerView;
    UIImageView *_backgroundInAuditMaskView;
    RACDisposable *_delayUpdateDefaultBackgroundImageDispose;
    CAShapeLayer *_currentCutLayer;
    IESLiveGCDTimer *_renderTaskTimerBackground;
    id /* block */ _onImageShowBlock;
    id /* block */ _firstRenderBlock;
}

@property (retain, nonatomic) IESLiveAudioBackgroundViewModel *viewModel;
@property (retain, nonatomic) IESLiveInteractBackGroundCutProvider *cutProvider;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) CAGradientLayer *maskViewLayer;
@property (retain, nonatomic) UIView *transitionBackgroundView;
@property (retain, nonatomic) IESLiveAudioBackgroundAnimatedView *backgroundAnimatedImageView;
@property (retain, nonatomic) IESLiveAudioBackgroundVideoPlayerView *videoPlayerView;
@property (retain, nonatomic) UIView *mvBackgroundContainerView;
@property (retain, nonatomic) UIImageView *backgroundInAuditMaskView;
@property (retain, nonatomic) RACDisposable *delayUpdateDefaultBackgroundImageDispose;
@property (retain, nonatomic) CAShapeLayer *currentCutLayer;
@property (nonatomic) BOOL isImageViewAnimating;
@property (nonatomic) BOOL isCutLayerOnSuperLayer;
@property (nonatomic) BOOL hasCutBackground;
@property (nonatomic) BOOL isPreLoadIniting;
@property (nonatomic) BOOL isPreLoadCutingFirst;
@property (nonatomic) BOOL shouldShowWhenRenderReady;
@property (retain, nonatomic) IESLiveGCDTimer *renderTaskTimerBackground;
@property (copy, nonatomic) id /* block */ onImageShowBlock;
@property (copy, nonatomic) id /* block */ firstRenderBlock;
@property (nonatomic) BOOL hasReportFirstRender;

- (id /* block */)firstRenderBlock;
- (void)setFirstRenderBlock:(id /* block */)arg0;
- (void)bindViewModel:(id)arg0;
- (void)setIsPreLoadIniting:(BOOL)arg0;
- (BOOL)isPreLoadIniting;
- (void)setIsPreLoadCutingFirst:(BOOL)arg0;
- (void)setupBackgroundMaskViewLayer;
- (void)setBackgroundAnimatedImageView:(id)arg0;
- (id)backgroundAnimatedImageView;
- (void)setMvBackgroundContainerView:(id)arg0;
- (id)mvBackgroundContainerView;
- (id)delayUpdateDefaultBackgroundImageDispose;
- (void)updateBackgroundImage:(id)arg0 placeholder:(id)arg1;
- (void)setDelayUpdateDefaultBackgroundImageDispose:(id)arg0;
- (void)setBackgroundInAuditMaskView:(id)arg0;
- (id)backgroundInAuditMaskView;
- (id)maskViewLayer;
- (void)setMaskViewLayer:(id)arg0;
- (void)backgroundObserver:(id)arg0;
- (void)imageBgObserver:(id)arg0;
- (void)videoBgFileUrlObserver:(id)arg0;
- (void)gifImageDataObserver:(id)arg0;
- (void)imageAnimatedBgObserver:(id)arg0;
- (void)downgradingBgObserver:(id)arg0;
- (void)bgViewHiddenObserver:(id)arg0;
- (void)backGroundCutInfoObserver:(id)arg0;
- (void)maskFrameFor1v6Observer:(id)arg0;
- (void)backGroundFrameMergeSlotsObserver:(id)arg0;
- (void)enableCutObserver:(id)arg0;
- (void)backgroundTypeObserver:(id)arg0;
- (void)videoMVBackgroundObserver:(id)arg0;
- (void)updateWithAnimatedBgUrls:(id)arg0;
- (id)cutProvider;
- (void)refreshCut:(BOOL)arg0;
- (void)enableCutLayer:(BOOL)arg0;
- (id)currentCutLayer;
- (void)setCurrentCutLayer:(id)arg0;
- (void)setIsCutLayerOnSuperLayer:(BOOL)arg0;
- (BOOL)isCutLayerOnSuperLayer;
- (BOOL)isImageViewAnimating;
- (BOOL)shouldShowWhenRenderReady;
- (void)setIsImageViewAnimating:(BOOL)arg0;
- (id /* block */)onImageShowBlock;
- (void)setOnImageShowBlock:(id /* block */)arg0;
- (void)setShouldShowWhenRenderReady:(BOOL)arg0;
- (void)setAllImageViewHidden:(BOOL)arg0;
- (void)updateBackGroundImage:(id)arg0;
- (void)updateBackGroundImage:(id)arg0 isDeafault:(BOOL)arg1;
- (BOOL)isPreLoadCutingFirst;
- (void)invokeTrackRenderFirstBlock;
- (id)renderTaskTimerBackground;
- (void)setRenderTaskTimerBackground:(id)arg0;
- (BOOL)hasReportFirstRender;
- (void)setHasReportFirstRender:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1 isPreLoad:(BOOL)arg2;
- (void)checkIfImageHidden:(id /* block */)arg0;
- (void)delayImageShowUntilNextCutReady;
- (void)setCutProvider:(id)arg0;
- (BOOL)hasCutBackground;
- (void)setHasCutBackground:(BOOL)arg0;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (void)show;
- (void)setup;
- (void)setViewModel:(id)arg0;
- (void)hide;
- (id)viewModel;
- (void)refreshUI;
- (void)layoutSubviews;
- (void)startAnimation;
- (void)setupConstraints;
- (void)stopAnimation;
- (id)defaultImage;
- (void)setupViews;
- (void)setBackgroundImageView:(id)arg0;
- (id)backgroundMaskView;
- (void)setBackgroundMaskView:(id)arg0;
- (void)updateWithViewModel:(id)arg0;
- (id)videoPlayerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;
- (void)setVideoPlayerView:(id)arg0;
- (id)transitionBackgroundView;
- (void)setTransitionBackgroundView:(id)arg0;

@end
