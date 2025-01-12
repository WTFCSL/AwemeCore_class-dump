//
//     Generated by private class-dump
//

@class IESLiveAnchorDataPanelView, IESLiveAnchorDataGuideGestureView, IESLiveCountTimer, IESLiveAnchorDataPanelInfo, IESLiveGetRoomPanelApi, NSTimer, NSString;

@interface IESLiveAnchorRealTimeDataPanelFragment : IESLiveRoomComponent <IESLiveAnchorDataPanelInterface, HTSLiveMessageSubscriber, UIGestureRecognizerDelegate> {
    BOOL _hasShowGuideGesture;
    BOOL _isVRMode;
    double _startTime;
    IESLiveAnchorDataPanelInfo *_panelInfo;
    IESLiveAnchorDataPanelView *_dataPanelView;
    IESLiveAnchorDataGuideGestureView *_guideGestureView;
    IESLiveCountTimer *_startShowSwipeDownGuideGestureCountTimer;
    IESLiveCountTimer *_showSwipeDownGestureCountTimer;
    IESLiveCountTimer *_showSwipeUpGestureCountTimer;
    IESLiveGetRoomPanelApi *_getRoomPanelApi;
    NSTimer *_updatePanelTimer;
    struct CGPoint { double x; double y; } _startMovePoint;
}

@property (nonatomic) double startTime;
@property (nonatomic) BOOL hasShowGuideGesture;
@property (retain, nonatomic) IESLiveAnchorDataPanelInfo *panelInfo;
@property (retain, nonatomic) IESLiveAnchorDataPanelView *dataPanelView;
@property (retain, nonatomic) IESLiveAnchorDataGuideGestureView *guideGestureView;
@property (nonatomic) struct CGPoint { double x; double y; } startMovePoint;
@property (retain, nonatomic) IESLiveCountTimer *startShowSwipeDownGuideGestureCountTimer;
@property (retain, nonatomic) IESLiveCountTimer *showSwipeDownGestureCountTimer;
@property (retain, nonatomic) IESLiveCountTimer *showSwipeUpGestureCountTimer;
@property (retain, nonatomic) IESLiveGetRoomPanelApi *getRoomPanelApi;
@property (retain, nonatomic) NSTimer *updatePanelTimer;
@property (nonatomic) BOOL isVRMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (BOOL)isVRMode;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (id)panelInfo;
- (void)setPanelInfo:(id)arg0;
- (void)displayAnchorDataPanelActionWithSource:(long long)arg0 abnormalType:(id)arg1;
- (void)setGetRoomPanelApi:(id)arg0;
- (void)setHasShowGuideGesture:(BOOL)arg0;
- (BOOL)hasShowGuideGesture;
- (void)setGuideGestureView:(id)arg0;
- (void)setupShowSwipeDownGuideGestureCountTimer;
- (void)addGestureForPanel;
- (id)dataPanelView;
- (void)setDataPanelView:(id)arg0;
- (id)updatePanelTimer;
- (void)setUpdatePanelTimer:(id)arg0;
- (void)hideDataPanel;
- (id)getRoomPanelApi;
- (void)trackDataPanelAbnormalInfoClickWithPanelAbnormalType:(id)arg0;
- (void)showDataPanelWithSource:(id)arg0 abnormalType:(id)arg1;
- (id)guideGestureView;
- (void)setupDataPanelView;
- (void)request2UpdateDatePanel;
- (void)trackDataPanelShow;
- (id)showSwipeUpGestureCountTimer;
- (void)setShowSwipeUpGestureCountTimer:(id)arg0;
- (void)trackDataPanelStayDuration:(id)arg0;
- (void)clearDataPanel;
- (id)showSwipeDownGestureCountTimer;
- (id)startShowSwipeDownGuideGestureCountTimer;
- (void)setStartShowSwipeDownGuideGestureCountTimer:(id)arg0;
- (void)setShowSwipeDownGestureCountTimer:(id)arg0;
- (void)setStartMovePoint:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })startMovePoint;
- (void)handleProfileDataChangeMessage:(id)arg0;
- (void)trackProfileInfoShowWithExtra:(id)arg0;
- (void)setIsVRMode:(BOOL)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)shouldReceiveTouch:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (double)startTime;
- (void)messageReceived:(id)arg0;
- (void)handlePanGestureRecognizer:(id)arg0;

@end
