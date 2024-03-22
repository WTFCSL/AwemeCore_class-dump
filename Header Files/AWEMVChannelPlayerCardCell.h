//
//     Generated by private class-dump
//

@class NSString, AWEMVChannelPlayVideoViewController, AWEMVChannelPlayerCardInteractionView, AWEMVChannelAutoPlayHandler, AWEMVChannelPlayerCardContext;

@interface AWEMVChannelPlayerCardCell : AWEMVChannelBaseCell <AWEModernFullscreenTransitionOuterContextProvider, AWEMVChannelPlayerCardInteractionViewDelegate, AWEMVChannelPlayerCardPlayerProtocol, AWEMVChannelAutoPlayCardProtocol> {
    BOOL isActive;
    BOOL _isWindowPlaying;
    BOOL _preventContinuePlayIfFromInflow;
    BOOL _hasPreloadNextEpisode;
    AWEMVChannelAutoPlayHandler *autoPlayHandler;
    AWEMVChannelPlayVideoViewController *_videoController;
    AWEMVChannelPlayerCardInteractionView *_interactionView;
    AWEMVChannelPlayerCardContext *_interactionContext;
}

@property (retain, nonatomic) AWEMVChannelPlayVideoViewController *videoController;
@property (retain, nonatomic) AWEMVChannelPlayerCardInteractionView *interactionView;
@property (retain, nonatomic) AWEMVChannelPlayerCardContext *interactionContext;
@property (nonatomic) BOOL hasPreloadNextEpisode;
@property (nonatomic) BOOL isWindowPlaying;
@property (nonatomic) BOOL preventContinuePlayIfFromInflow;
@property (nonatomic) BOOL isJumpingToDetailPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) AWEMVChannelAutoPlayHandler *autoPlayHandler;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadModuleAdapterClass;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })arg0 toBreakPoint:(struct { long long x0; long long x1; })arg1;
- (void)setLogExtra:(id)arg0;
- (void)player:(id)arg0 updatePlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)prepareForDisplayWithoutCoverImage;
- (void)playerWillStartNextLoopFinished:(id)arg0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)arg0;
- (double)currentPlayTime;
- (id)aAWEPadModuleAdapter;
- (id)aAWEPadModuleAdapter;
- (void)modernTransitionUpdateOffset:(long long)arg0 isScrolled:(BOOL)arg1;
- (id)modernTransitionContext;
- (void)modernTransitionDidCompleteWithOffset:(long long)arg0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithToContext:(id)arg0;
- (BOOL)shouldLayoutBeforeGenerateFeedSnapshotImageView;
- (BOOL)updateScaleModeBeforeAnimation;
- (void)modernMagnifyTransitionDidCompleteWithToContext:(id)arg0;
- (void)setAutoPlayHandler:(id)arg0;
- (long long)preferScaleMode;
- (id)autoPlayHandler;
- (BOOL)isWindowPlaying;
- (void)setIsWindowPlaying:(BOOL)arg0;
- (void)seekToPlayTime:(double)arg0 completion:(id /* block */)arg1;
- (void)configWithAwemeModel:(id)arg0 context:(id)arg1;
- (void)setIsJumpingToDetailPage:(BOOL)arg0;
- (id)transitToInflowProvider;
- (void)seekToPlayTimeAfterShrink:(double)arg0;
- (void)handleJumpToInflow;
- (void)willShowActiveViewInVisibleRange;
- (void)configAfterQuitLandscape;
- (BOOL)isSameAwemeInWindowPlayingStatus;
- (void)setPreventContinuePlayIfFromInflow:(BOOL)arg0;
- (void)setHasPreloadNextEpisode:(BOOL)arg0;
- (void)makeVideoControllerLayout;
- (void)updateInfoViewHeight;
- (void)handleDislikeVCWithLocation:(struct CGPoint { double x0; double x1; })arg0 model:(id)arg1 gesture:(id)arg2 isWatchLaterFeedback:(BOOL)arg3;
- (void)handleDoubleSpeedWithGesture:(id)arg0 isWatchLaterFeedback:(BOOL)arg1;
- (void)addInfoView;
- (void)updateVideoControllerLayoutForPad;
- (BOOL)canResponseDislikeVCForGesture:(id)arg0 isWatchLaterFeedback:(BOOL)arg1;
- (BOOL)preventContinuePlayIfFromInflow;
- (BOOL)hasPreloadNextEpisode;
- (void)setupLongPressedBlock;
- (void)prepareForDisplay;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (void)setInteractionView:(id)arg0;
- (void)didResignActive;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)identifier;
- (void)prepareForTransition;
- (BOOL)isActive;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)interactionView;
- (void)play;
- (void)pause;
- (void)reset;
- (unsigned long long)cardType;
- (id)activeView;
- (id)videoController;
- (void)setVideoController:(id)arg0;
- (id)interactionContext;
- (void)setInteractionContext:(id)arg0;

@end