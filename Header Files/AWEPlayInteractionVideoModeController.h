//
//     Generated by private class-dump
//

@class AWEPlayInteractionProgressCoordinatorController, NSObject, CADisplayLink, NSString, AWEProgressPauseTimeLabelView, UIView, UIButton;
@protocol AWEFeedAnchorViewManager;

@interface AWEPlayInteractionVideoModeController : AWEPlayInteractionBaseController <AWEPlayInteractionPlayerLifeCycleProtocol> {
    BOOL _danmakuPostPauseVideoPlay;
    UIView *_containerView;
    UIView *_topContainerView;
    UIButton *_danmakuInputButton;
    UIButton *_speedButton;
    UIButton *_playButton;
    UIButton *_rotateButton;
    AWEProgressPauseTimeLabelView *_progressView;
    AWEPlayInteractionProgressCoordinatorController *_progressController;
    double _totalTime;
    CADisplayLink *_displayLink;
    NSObject<AWEFeedAnchorViewManager> *_anchorManager;
    NSString *_playIconName;
    NSString *_pauseIconName;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) UIButton *danmakuInputButton;
@property (retain, nonatomic) UIButton *speedButton;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIButton *rotateButton;
@property (retain, nonatomic) AWEProgressPauseTimeLabelView *progressView;
@property (retain, nonatomic) AWEPlayInteractionProgressCoordinatorController *progressController;
@property (nonatomic) BOOL danmakuPostPauseVideoPlay;
@property (readonly, nonatomic) double totalTime;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSObject<AWEFeedAnchorViewManager> *anchorManager;
@property (copy, nonatomic) NSString *playIconName;
@property (copy, nonatomic) NSString *pauseIconName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)arg0;
- (void)onPlayer:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (id)topContainerView;
- (void)setTopContainerView:(id)arg0;
- (void)updateAnchorView:(id)arg0;
- (id)anchorManager;
- (id)formateDuration:(id)arg0;
- (void)resetDisplayLink;
- (id)speedButton;
- (void)setSpeedButton:(id)arg0;
- (id)speedArray;
- (void)updatePlaySpeed:(double)arg0;
- (void)handlePlayButtonClicked;
- (id)danmakuInputButton;
- (void)setDanmakuInputButton:(id)arg0;
- (void)updateSpeedButtonForLongPressPanelOpti:(double)arg0;
- (void)setAnchorManager:(id)arg0;
- (void)setDanmakuPostPauseVideoPlay:(BOOL)arg0;
- (BOOL)danmakuPostPauseVideoPlay;
- (void)handleInputButtonClick;
- (double)nextSpeedWithCurrentSpeed:(double)arg0;
- (void)addAnchorViewIfNeeded:(id)arg0;
- (void)refreshPlayTime:(double)arg0 totalTime:(double)arg1;
- (id)pauseIconName;
- (id)playIconName;
- (void)setPlayIconName:(id)arg0;
- (void)setPauseIconName:(id)arg0;
- (void)updatePureModeBlock:(BOOL)arg0;
- (void)updateAnimation:(BOOL)arg0;
- (void)updateAnchorLayout;
- (void)handleSpeedButtonClicked;
- (void)handleRotateButtonClicked;
- (void)setDisplayLink:(id)arg0;
- (id)init;
- (double)totalTime;
- (void).cxx_destruct;
- (id)playerController;
- (void)setData:(id)arg0;
- (void)resumeDisplayLink;
- (void)setContainerView:(id)arg0;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (id)containerView;
- (id)displayLink;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateUI;
- (void)setupContext;
- (id)playButton;
- (id)progressController;
- (void)setProgressController:(id)arg0;
- (id)rotateButton;
- (void)setRotateButton:(id)arg0;
- (void)setPlayButton:(id)arg0;
- (void)willDisplay;

@end
