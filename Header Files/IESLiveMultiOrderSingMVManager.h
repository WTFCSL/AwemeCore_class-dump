//
//     Generated by private class-dump
//

@class HTSLiveOrderSingMVInfo, NSString, IESLiveMultiOrderSingApi, HTSEventContext, IESLiveGCDTimer, NSMutableDictionary;
@protocol IESLiveRoomService;

@interface IESLiveMultiOrderSingMVManager : NSObject {
    id /* block */ _didStartAction;
    id /* block */ _didStopAction;
    NSString *_currentSingItemId;
    long long _currentSingUserId;
    HTSLiveOrderSingMVInfo *_currentMVInfo;
    id<IESLiveRoomService> _room;
    IESLiveMultiOrderSingApi *_api;
    HTSEventContext *_trackContext;
    IESLiveGCDTimer *_stopPlayCountdownTimer;
    NSMutableDictionary *_itemMVBindedTabNameDict;
    NSMutableDictionary *_itemMVBindedVidDict;
}

@property (copy, nonatomic) NSString *currentSingItemId;
@property (nonatomic) long long currentSingUserId;
@property (retain, nonatomic) HTSLiveOrderSingMVInfo *currentMVInfo;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveMultiOrderSingApi *api;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveGCDTimer *stopPlayCountdownTimer;
@property (retain, nonatomic) NSMutableDictionary *itemMVBindedTabNameDict;
@property (retain, nonatomic) NSMutableDictionary *itemMVBindedVidDict;
@property (copy, nonatomic) id /* block */ didStartAction;
@property (copy, nonatomic) id /* block */ didStopAction;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (id)initWithRoom:(id)arg0 trackContext:(id)arg1;
- (void)openMVSelectPanelWithItemID:(id)arg0;
- (id /* block */)didStartAction;
- (id /* block */)didStopAction;
- (void)setDidStartAction:(id /* block */)arg0;
- (void)setDidStopAction:(id /* block */)arg0;
- (void)handleOrderSingWRDSReceived:(id)arg0;
- (void)handleOrderSingMessage:(id)arg0;
- (id)currentMVInfo;
- (void)setCurrentMVInfo:(id)arg0;
- (void)handleOrderSingActionContent:(id)arg0;
- (void)setCurrentSingItemId:(id)arg0;
- (id)currentSingItemId;
- (id)stopPlayCountdownTimer;
- (void)fetchOrderSingPlayModeInfoIfNeed;
- (void)startMVBackgroundWithMVInfo:(id)arg0 itemID:(id)arg1;
- (void)handleOrderSingMVActionContent:(id)arg0;
- (void)setCurrentSingUserId:(long long)arg0;
- (void)stopMVBackgroundWithActionContent:(id)arg0;
- (BOOL)isCurrentUserSinging;
- (id)itemMVBindedTabNameDict;
- (id)itemMVBindedVidDict;
- (void)trackMVPlayDurationWithMVInfo:(id)arg0 itemID:(id)arg1 mvTab:(id)arg2 endType:(id)arg3 duration:(long long)arg4;
- (void)trackMVPlayWithMVInfo:(id)arg0 itemID:(id)arg1 mvTab:(id)arg2;
- (void)askCloseMVWithMVInfo:(id)arg0 itemID:(id)arg1 source:(id)arg2;
- (void)setStopPlayCountdownTimer:(id)arg0;
- (BOOL)isCurrentUserWithUserId:(long long)arg0;
- (void)hideCurrentMVPanel;
- (void)updateMVBindInfoWithItemID:(id)arg0 tabName:(id)arg1 vid:(id)arg2;
- (long long)currentSingUserId;
- (void)setItemMVBindedTabNameDict:(id)arg0;
- (void)setItemMVBindedVidDict:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)api;
- (void)setApi:(id)arg0;

@end
