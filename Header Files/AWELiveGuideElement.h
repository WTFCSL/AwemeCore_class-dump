//
//     Generated by private class-dump
//

@class NSString, AWELiveAutoEnterAnimationView, AWELivePrestreamGuideView, NSTimer, UIView, AWELiveFeedStatusViewModel, NSDictionary;
@protocol IESLiveRoomService;

@interface AWELiveGuideElement : AWELiveBaseElement <AWELivePreStreamEnterRoomDataProvider> {
    id<IESLiveRoomService> _roomModel;
    AWELivePrestreamGuideView *_liveStatusTipView;
    AWELiveAutoEnterAnimationView *_autoEnterView;
    UIView *_bottomGradientView;
    AWELiveFeedStatusViewModel *_liveStatusTipViewModel;
    double _lastAutoEnterTime;
    NSTimer *_autoEnterTimer;
    NSTimer *_autoEnterNewTimer;
    NSDictionary *_autoEnterConfig;
    double _bottomGradientAlphaBeforeGuide;
}

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) AWELivePrestreamGuideView *liveStatusTipView;
@property (retain, nonatomic) AWELiveAutoEnterAnimationView *autoEnterView;
@property (retain, nonatomic) UIView *bottomGradientView;
@property (retain, nonatomic) AWELiveFeedStatusViewModel *liveStatusTipViewModel;
@property (nonatomic) double lastAutoEnterTime;
@property (retain, nonatomic) NSTimer *autoEnterTimer;
@property (retain, nonatomic) NSTimer *autoEnterNewTimer;
@property (retain, nonatomic) NSDictionary *autoEnterConfig;
@property (nonatomic) double bottomGradientAlphaBeforeGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWECommerceLiveHTSAdapterClass;

- (id)roomModel;
- (void)setRoomModel:(id)arg0;
- (id)liveStatusView;
- (void)prepareForDisPlay;
- (id)autoEnterConfig;
- (void)onUserEnterLiveRoom:(id)arg0;
- (void)streamPlayer_stop;
- (void)streamPlayer_finish;
- (void)provideEenterLiveRoomParamasWithContext:(id)arg0;
- (void)streamPlayer_firstFrame;
- (void)invalidNewEnterTimer;
- (id)liveStatusTipView;
- (void)layoutLiveStatusTipView;
- (id)liveStatusTipViewModel;
- (void)setAutoEnterConfig:(id)arg0;
- (BOOL)enableNewAutoEnter;
- (BOOL)enableAutoEnterRoom;
- (double)statusHeight;
- (void)streamPlayer_startToPlay;
- (void)performCancelByExit;
- (void)startAutoEnterTimerIfNeed;
- (BOOL)enableNewAutoEnterCountdownTimer;
- (void)startNewAutoEnterTimerIfNeed;
- (void)stopContentAnimation;
- (void)p_stopNewAutoEnter;
- (id)autoEnterView;
- (void)performCancelBySlide;
- (void)setLastAutoEnterTime:(double)arg0;
- (void)resetLiveStatusTipView;
- (void)onUserQuitLiveRoom;
- (id)autoEnterTimer;
- (void)p_startAutoEnter;
- (void)resetAutoEnterTimer;
- (void)trackStartAutoEnterEvent;
- (void)autoEnterNewAnimation:(BOOL)arg0;
- (void)trackCancelAutoEnterEventWithAction:(id)arg0;
- (void)startAutoEnterAnimation:(id /* block */)arg0 cancelAction:(id /* block */)arg1 duration:(long long)arg2;
- (double)lastAutoEnterTime;
- (void)p_startNewAutoEnter;
- (BOOL)shouldShowNewAutoEnter;
- (void)creatAutoEnterAnimationView:(BOOL)arg0;
- (void)layoutAutoEnterView;
- (void)changeCenterContainerBottom;
- (void)creatBottomGradientView;
- (void)setBottomGradientAlphaBeforeGuide:(double)arg0;
- (void)removeAutoEnterAnimationView;
- (double)bottomGradientAlphaBeforeGuide;
- (void)removeBottomGradientView;
- (void)setAutoEnterView:(id)arg0;
- (id)aAWECommerceLiveHTSAdapter;
- (void)streamPlayer_closeAutoEnter;
- (void)streamPlayer_enableAutoEnter;
- (BOOL)shouldShieldAutoEnterRoomWhenCommerce;
- (void)setLiveStatusTipView:(id)arg0;
- (void)setLiveStatusTipViewModel:(id)arg0;
- (void)setAutoEnterTimer:(id)arg0;
- (id)autoEnterNewTimer;
- (void)setAutoEnterNewTimer:(id)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)prepareForReuse;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg0;

@end