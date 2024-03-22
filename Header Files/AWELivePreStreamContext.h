//
//     Generated by private class-dump
//

@class AWELivePreStreamPlayer, NSDictionary, NSString, AWELivePreStreamView, NSNumber;
@protocol AWELiveElementInfoDelegate, AWELivePreStreamBizStatusService, AWELivePreStreamSEIProvider, AWELivePreStreamAlertElementService, AWELivePreStreamEventService, AWELivePreStreamEnterRoomService, AWELivePreStreamMessageProvider;

@interface AWELivePreStreamContext : AWEPageContext {
    BOOL _isIntimateChatOn;
    BOOL _enableLandscapeInRoom;
    BOOL _hasClickPKArea;
    BOOL _isExplicitComment;
    id<AWELiveElementInfoDelegate> _infoDelegate;
    id<AWELivePreStreamMessageProvider> _messageProvider;
    id<AWELivePreStreamSEIProvider> _seiProvider;
    AWELivePreStreamView *_streamView;
    AWELivePreStreamPlayer *_player;
    id<AWELivePreStreamEnterRoomService> _enterRoomService;
    id<AWELivePreStreamBizStatusService> _bizStatusService;
    id<AWELivePreStreamAlertElementService> _alertElementService;
    id<AWELivePreStreamEventService> _eventService;
    NSDictionary *_logExtraDict;
    NSNumber *_paidLiveLeftTime;
    NSString *_guideType;
    NSString *_clickType;
}

@property (weak, nonatomic) id<AWELiveElementInfoDelegate> infoDelegate;
@property (weak, nonatomic) id<AWELivePreStreamMessageProvider> messageProvider;
@property (weak, nonatomic) id<AWELivePreStreamSEIProvider> seiProvider;
@property (weak, nonatomic) AWELivePreStreamView *streamView;
@property (weak, nonatomic) AWELivePreStreamPlayer *player;
@property (weak, nonatomic) id<AWELivePreStreamEnterRoomService> enterRoomService;
@property (weak, nonatomic) id<AWELivePreStreamBizStatusService> bizStatusService;
@property (weak, nonatomic) id<AWELivePreStreamAlertElementService> alertElementService;
@property (weak, nonatomic) id<AWELivePreStreamEventService> eventService;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) NSNumber *paidLiveLeftTime;
@property (nonatomic) BOOL isIntimateChatOn;
@property (nonatomic) BOOL enableLandscapeInRoom;
@property (copy, nonatomic) NSString *guideType;
@property (copy, nonatomic) NSString *clickType;
@property (nonatomic) BOOL hasClickPKArea;
@property (nonatomic) BOOL isExplicitComment;

- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)clickType;
- (void)setClickType:(id)arg0;
- (id)guideType;
- (void)setGuideType:(id)arg0;
- (id)bizStatusService;
- (void)setBizStatusService:(id)arg0;
- (id)enterRoomService;
- (void)setEnableLandscapeInRoom:(BOOL)arg0;
- (BOOL)enableLandscapeInRoom;
- (id)messageProvider;
- (id)streamView;
- (id)paidLiveLeftTime;
- (BOOL)isIntimateChatOn;
- (BOOL)hasClickPKArea;
- (BOOL)isExplicitComment;
- (id)alertElementService;
- (void)setStreamView:(id)arg0;
- (void)setIsExplicitComment:(BOOL)arg0;
- (void)setHasClickPKArea:(BOOL)arg0;
- (void)setPaidLiveLeftTime:(id)arg0;
- (void)setIsIntimateChatOn:(BOOL)arg0;
- (void)setEnterRoomService:(id)arg0;
- (void)setAlertElementService:(id)arg0;
- (void)setSeiProvider:(id)arg0;
- (void)setMessageProvider:(id)arg0;
- (id)seiProvider;
- (void).cxx_destruct;
- (void)setPlayer:(id)arg0;
- (void)setEventService:(id)arg0;
- (id)eventService;
- (id)player;
- (id)infoDelegate;
- (void)setInfoDelegate:(id)arg0;

@end
