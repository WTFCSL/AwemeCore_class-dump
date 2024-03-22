//
//     Generated by private class-dump
//

@class AWEElementContainer, AWELandscapePageContext, AWEFeedLongPressRatePlayView, UITapGestureRecognizer, AWELandscapeElementConfigs, UIPinchGestureRecognizer, UIViewController, NSString, UILongPressGestureRecognizer, NSTimer, AWEAwemeModel, AWEGradientView, AWELandscapeInteractioinDispatchManager, NSArray, UIPanGestureRecognizer;
@protocol AWELanscapePlayerInteractionViewDelegate, AWEDemaciaContainerProtocol;

@interface AWELandscapeInteractionView : UIView <AWEVideoPlayControllerDispatchProtocol, AWEVideoPlayerLifeCycleProtocol, AWELandscapeControllerDispatchProtocol, UIGestureRecognizerDelegate> {
    BOOL _disablePanGesture;
    BOOL _disableDoubleTap;
    BOOL _showControlViewFromTap;
    AWELandscapePageContext *_pageContext;
    id<AWELanscapePlayerInteractionViewDelegate> _delegate;
    long long _state;
    AWEGradientView *_topGradientView;
    AWEGradientView *_bottomGradientView;
    double _topHeight;
    NSTimer *_quietTimer;
    AWEAwemeModel *_model;
    UIViewController<AWEDemaciaContainerProtocol> *_viewController;
    AWELandscapeElementConfigs *_elementConfigs;
    AWEElementContainer *_topContainer;
    AWEElementContainer *_videoInfoContainer;
    AWEElementContainer *_middleContainer;
    AWEElementContainer *_bottomContainer;
    AWELandscapeInteractioinDispatchManager *_dispatchManagerBelowBaseUI;
    AWELandscapeInteractioinDispatchManager *_dispatchManagerAboveBaseUI;
    UITapGestureRecognizer *_tap;
    UITapGestureRecognizer *_doubleTap;
    UIPanGestureRecognizer *_pan;
    UIPanGestureRecognizer *_twoFingerPanGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UILongPressGestureRecognizer *_longPress;
    NSArray *_gestureList;
    AWEFeedLongPressRatePlayView *_ratePlayView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEGradientView *topGradientView;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (nonatomic) long long state;
@property (nonatomic) double topHeight;
@property (retain, nonatomic) NSTimer *quietTimer;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) UIViewController<AWEDemaciaContainerProtocol> *viewController;
@property (retain, nonatomic) AWELandscapeElementConfigs *elementConfigs;
@property (retain, nonatomic) AWEElementContainer *topContainer;
@property (retain, nonatomic) AWEElementContainer *videoInfoContainer;
@property (retain, nonatomic) AWEElementContainer *middleContainer;
@property (retain, nonatomic) AWEElementContainer *bottomContainer;
@property (retain, nonatomic) AWELandscapeInteractioinDispatchManager *dispatchManagerBelowBaseUI;
@property (retain, nonatomic) AWELandscapeInteractioinDispatchManager *dispatchManagerAboveBaseUI;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTap;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (retain, nonatomic) UIPanGestureRecognizer *twoFingerPanGesture;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPress;
@property (retain, nonatomic) NSArray *gestureList;
@property (retain, nonatomic) AWEFeedLongPressRatePlayView *ratePlayView;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (weak, nonatomic) id<AWELanscapePlayerInteractionViewDelegate> delegate;
@property (nonatomic) BOOL disablePanGesture;
@property (nonatomic) BOOL disableDoubleTap;
@property (nonatomic) BOOL showControlViewFromTap;

- (void)player:(id)arg0 didChangePlaybackRate:(double)arg1;
- (void)setHide:(BOOL)arg0;
- (void)player:(id)arg0 updatePlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)onPlayerWillLoopPlaying:(id)arg0;
- (void)onPlayer:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)onPlayer:(id)arg0 didChangeStallState:(long long)arg1 actionType:(long long)arg2 reason:(unsigned long long)arg3;
- (void)onPlayerDidReadyForDisplay:(id)arg0;
- (void)hideAllPanels;
- (void)showInviteWatchToolTip;
- (void)didEnterLandscape;
- (BOOL)shouldFailedGestureRecognizer:(id)arg0;
- (BOOL)shouldResponseGestureRecognizer:(id)arg0;
- (BOOL)shouldReceiveGestureRecognizer:(id)arg0 touch:(id)arg1;
- (void)onPlayerMaskInfoCallBack:(id)arg0 svg:(id)arg1 pts:(unsigned long long)arg2;
- (void)player:(id)arg0 willInStallAction:(BOOL)arg1;
- (BOOL)isShowingPanel;
- (void)willExitLandscape;
- (void)willEnterSplitScreen:(BOOL)arg0 movePoint:(struct CGPoint { double x0; double x1; })arg1 scale:(double)arg2;
- (void)showReminderTips:(BOOL)arg0;
- (void)updateScreenCastProgress;
- (void)showScreenCastViewWithConnecting:(BOOL)arg0;
- (void)showScreenCastView:(BOOL)arg0 showFeedBack:(BOOL)arg1;
- (void)changeDanmakuMaskTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (void)updateScreenCastPlayStatus:(unsigned long long)arg0;
- (void)configUIForFeedShare:(id)arg0 allowSelectEpisode:(BOOL)arg1;
- (void)configMicroButtonForFeedShare:(id)arg0;
- (void)setDoubleTap:(id)arg0;
- (void)showBottomGradientView:(BOOL)arg0;
- (void)resetQuietTimer;
- (void)triggerQuietTimerWithState:(long long)arg0;
- (id)quietTimer;
- (void)setQuietTimer:(id)arg0;
- (id)twoFingerPanGesture;
- (void)setGestureList:(id)arg0;
- (BOOL)hasRespondedGestureRecognizer:(id)arg0;
- (id)dispatchManagerAboveBaseUI;
- (id)containerList;
- (id)dispatchManagerBelowBaseUI;
- (id)gestureList;
- (void)handleResponseTapAction:(id)arg0;
- (void)handleResponseDoubleTapAction:(id)arg0;
- (void)handleResponsePanAction:(id)arg0;
- (void)handleResponseTwoFingerPanAction:(id)arg0;
- (void)handleResponsePinchGesture:(id)arg0;
- (void)handleResponseLongPressAction:(id)arg0;
- (void)setupDispatchManager;
- (void)configContainers;
- (void)setupContainers;
- (void)setTopHeight:(double)arg0;
- (id)topContainer;
- (id)videoInfoContainer;
- (id)elementConfigs;
- (id)middleContainer;
- (void)setElementConfigs:(id)arg0;
- (void)setTopContainer:(id)arg0;
- (void)setVideoInfoContainer:(id)arg0;
- (void)setMiddleContainer:(id)arg0;
- (void)setDispatchManagerBelowBaseUI:(id)arg0;
- (void)setDispatchManagerAboveBaseUI:(id)arg0;
- (void)setTwoFingerPanGesture:(id)arg0;
- (void)bindEvents;
- (void)updateState:(long long)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)showControlViewFromTap;
- (id)ratePlayView;
- (void)setDisablePanGesture:(BOOL)arg0;
- (void)setShowControlViewFromTap:(BOOL)arg0;
- (BOOL)disableDoubleTap;
- (void)trackPlayTimeWithSpeedMethod:(id)arg0;
- (void)traceSpeedValueSelected:(id)arg0 enterMethod:(id)arg1 extraDict:(id)arg2;
- (void)setDisableDoubleTap:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewController:(id)arg1 pageContext:(id)arg2;
- (void)setRatePlayView:(id)arg0;
- (void)updateState:(long long)arg0 animated:(BOOL)arg1 layoutAnimated:(BOOL)arg2 completion:(id /* block */)arg3;
- (BOOL)disablePanGesture;
- (BOOL)shouldResponseFullScreenGesture;
- (void)cancelLongPressGesture;
- (void)updateContainersWithModel:(id)arg0;
- (void)updateSubviewsForFeedShare;
- (void)updateContainersWithState:(long long)arg0;
- (void)updateLayoutWithState:(long long)arg0 animated:(BOOL)arg1;
- (void)updateGradientViewWithState:(long long)arg0;
- (void)updateLayoutWithState:(long long)arg0;
- (void)realUpdateLayoutWithState:(long long)arg0;
- (void)calculateTopHieghtIfNeeded;
- (id)pan;
- (void)updateState:(long long)arg0;
- (void)setModel:(id)arg0;
- (void)resetState;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)pinchGesture;
- (long long)state;
- (id)model;
- (void)setState:(long long)arg0;
- (BOOL)isInteracting;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)applicationWillResignActive;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)longPress;
- (void)setLongPress:(id)arg0;
- (void)setPinchGesture:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;
- (void)setPan:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (double)topHeight;
- (id)tap;
- (void)setTap:(id)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg0;
- (void)updateWithModel:(id)arg0;
- (id)topGradientView;
- (void)setTopGradientView:(id)arg0;
- (void)setupGestures;
- (id)bottomContainer;
- (void)setBottomContainer:(id)arg0;
- (id)doubleTap;

@end
