//
//     Generated by private class-dump
//

@class NSTimer, NSString, PuzzleHybridContainer, HTSLiveBottomRightCardArea, NSMutableDictionary, IESLiveRightBottomMutuallyExclusiveItem, IESLiveBottomRightSliceView, NSMutableArray, BDXBridgeEventSubscriber;
@protocol IESLiveRoomService, IESLiveBottomRightCardViewDelegate;

@interface IESLiveBottomRightCardView : UIView <IESHYHybridViewLifecycleProtocol, HTSLivePluginLayoutView, IESLiveSliceXEventForwardDelegate> {
    BOOL _didLoad;
    BOOL _stayWait;
    BOOL _isLandscapeSupportSizeChange;
    int _cardId;
    id<IESLiveRoomService> _room;
    id<IESLiveBottomRightCardViewDelegate> _delegate;
    HTSLiveBottomRightCardArea *_cardArea;
    NSMutableDictionary *_trackParams;
    long long _duration;
    PuzzleHybridContainer *_hybridView;
    IESLiveBottomRightSliceView *_sliceView;
    NSMutableArray *_events;
    IESLiveRightBottomMutuallyExclusiveItem *_rightBottomItem;
    BDXBridgeEventSubscriber *_subscriber;
    long long _closeType;
    double _costTime;
    long long _interfaceOrientation;
    double _durationTime;
    double _currentDisplayTime;
    NSTimer *_countDownTimer;
    double _cardShowedTime;
    double _startTime;
    double _endTime;
    struct CGSize { double width; double height; } _cardSize;
    struct CGSize { double width; double height; } _landscapeCardSize;
    struct CGPoint { double x; double y; } _tapPoint;
}

@property (nonatomic) long long duration;
@property (retain, nonatomic) PuzzleHybridContainer *hybridView;
@property (retain, nonatomic) IESLiveBottomRightSliceView *sliceView;
@property (nonatomic) BOOL didLoad;
@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *rightBottomItem;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (nonatomic) long long closeType;
@property (nonatomic) BOOL stayWait;
@property (nonatomic) double costTime;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) BOOL isLandscapeSupportSizeChange;
@property (nonatomic) struct CGSize { double width; double height; } cardSize;
@property (nonatomic) struct CGSize { double width; double height; } landscapeCardSize;
@property (nonatomic) struct CGPoint { double x; double y; } tapPoint;
@property (nonatomic) double durationTime;
@property (nonatomic) double currentDisplayTime;
@property (retain, nonatomic) NSTimer *countDownTimer;
@property (nonatomic) double cardShowedTime;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) int cardId;
@property (weak, nonatomic) id<IESLiveBottomRightCardViewDelegate> delegate;
@property (retain, nonatomic) HTSLiveBottomRightCardArea *cardArea;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)durationTime;
- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (void)refreshData:(id)arg0;
- (void)setDurationTime:(double)arg0;
- (long long)closeType;
- (void)setCloseType:(long long)arg0;
- (void)setCostTime:(double)arg0;
- (double)costTime;
- (void)viewDidFirstScreen;
- (void)viewDidFinishLoadWithURL:(id)arg0;
- (void)viewDidLoadFailedWithUrl:(id)arg0 error:(id)arg1;
- (id)hybridView;
- (void)unregisterSubscriber;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (void)triggerSliceXEvent:(id)arg0;
- (id)queryURLWithString;
- (void)setHybridView:(id)arg0;
- (void)registerJSB;
- (id)sliceView;
- (void)setSliceView:(id)arg0;
- (id)rightBottomItem;
- (void)setRightBottomItem:(id)arg0;
- (void)setStayWait:(BOOL)arg0;
- (void)handleOrientationTranstionBegin:(long long)arg0;
- (void)handleOrientationTranstionEnd:(long long)arg0;
- (void)renderCardView;
- (void)closeCardView;
- (id)initWithCardArea:(id)arg0;
- (id)cardArea;
- (void)addFollowObserver;
- (void)removeShutdownTimer;
- (BOOL)useSlice;
- (void)renderCardViewWithSlice;
- (void)renderCardViewWithHybrid;
- (void)showRightBottomView;
- (void)setCardViewHidden:(BOOL)arg0 processResult:(id /* block */)arg1;
- (id)currentRoomOwner;
- (void)startShutdownTimer;
- (void)setCurrentDisplayTime:(double)arg0;
- (void)removeCardView:(long long)arg0;
- (void)showCardView;
- (void)handleShutdownTimer;
- (double)cardShowedTime;
- (void)setCardShowedTime:(double)arg0;
- (void)setCardArea:(id)arg0;
- (BOOL)stayWait;
- (BOOL)isLandscapeSupportSizeChange;
- (void)setIsLandscapeSupportSizeChange:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })landscapeCardSize;
- (void)setLandscapeCardSize:(struct CGSize { double x0; double x1; })arg0;
- (id)events;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)updateLayout;
- (long long)interfaceOrientation;
- (double)currentDisplayTime;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (void)setInterfaceOrientation:(long long)arg0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (long long)duration;
- (double)endTime;
- (void)setEvents:(id)arg0;
- (id)delegate;
- (double)startTime;
- (void)notify:(id)arg0;
- (id)subscriber;
- (id)viewType;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setEndTime:(double)arg0;
- (void)setDuration:(long long)arg0;
- (int)cardId;
- (void)setupAccessibility;
- (id)room;
- (void)setRoom:(id)arg0;
- (struct CGSize { double x0; double x1; })cardSize;
- (void)setCardSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setCardId:(int)arg0;
- (void)setTapPoint:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })tapPoint;
- (void)setCountDownTimer:(id)arg0;
- (id)countDownTimer;
- (BOOL)didLoad;
- (void)setDidLoad:(BOOL)arg0;
- (void)setSubscriber:(id)arg0;

@end
