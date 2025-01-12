//
//     Generated by private class-dump
//

@class AWELivePreStreamContext, NSNumber, NSString, IESLiveGCDTimer, AWEAwemeModel, AWELivePreStreamInnerRoomPKDisplayView, AWELivePreStreamInnerRoomDisplayManager;

@interface AWELivePreStreamInnerRoomPKConfig : NSObject <AWELivePreStreamInnerRoomDisplayConfigProtocol> {
    BOOL _canShowPKView;
    BOOL _isClickedArea;
    NSNumber *_msgType;
    AWEAwemeModel *_model;
    AWELivePreStreamInnerRoomDisplayManager *_displayManager;
    IESLiveGCDTimer *_startTimer;
    IESLiveGCDTimer *_showTimer;
    AWELivePreStreamContext *_context;
    AWELivePreStreamInnerRoomPKDisplayView *_contentView;
    NSNumber *_priority;
    id /* block */ _actionBlock;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWELivePreStreamInnerRoomDisplayManager *displayManager;
@property (retain, nonatomic) IESLiveGCDTimer *startTimer;
@property (retain, nonatomic) IESLiveGCDTimer *showTimer;
@property (retain, nonatomic) AWELivePreStreamContext *context;
@property (retain, nonatomic) AWELivePreStreamInnerRoomPKDisplayView *contentView;
@property (nonatomic) BOOL canShowPKView;
@property (nonatomic) BOOL isClickedArea;
@property (retain, nonatomic) NSNumber *priority;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) NSNumber *msgType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setShowTimer:(id)arg0;
- (id)enterRoomParams;
- (void)onUserQuitLiveRoom;
- (void)setStartTimer:(id)arg0;
- (BOOL)canDisplayElementWithModel:(id)arg0;
- (void)startCountDownTimerIfNeeded:(id /* block */)arg0;
- (id)enterFirstRoomParams;
- (id)initWithModel:(id)arg0 displayManager:(id)arg1 context:(id)arg2;
- (void)setIsClickedArea:(BOOL)arg0;
- (BOOL)isClickedArea;
- (BOOL)p_checkFrequenceControlWithMsgType:(long long)arg0;
- (void)cleanFrequency;
- (void)setCanShowPKView:(BOOL)arg0;
- (void)didRevenueInteractPlayStatusChanged:(BOOL)arg0;
- (void)showPKViewWithBlock:(id /* block */)arg0;
- (BOOL)canShowPKView;
- (void)setModel:(id)arg0;
- (void)invalidateTimer;
- (void)setDisplayManager:(id)arg0;
- (id)startTimer;
- (id)displayManager;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (void)setPriority:(id)arg0;
- (id)contentView;
- (id)context;
- (id /* block */)actionBlock;
- (void)reset;
- (id)priority;
- (void)setContentView:(id)arg0;
- (id)showTimer;
- (void)setActionBlock:(id /* block */)arg0;
- (id)msgType;
- (void)setMsgType:(id)arg0;

@end
