//
//     Generated by private class-dump
//

@class IESLiveSendSyncStreamInfoAPI, IESLiveGCDTimer, NSMutableArray, NSObject;
@protocol IESLiveRoomService, OS_dispatch_queue;

@interface IESLiveSEISenderIMRequestManager : NSObject {
    long long _sendInterval;
    NSMutableArray *_infoArray;
    id<IESLiveRoomService> _room;
    NSObject<OS_dispatch_queue> *_controlQueue;
    long long _emptyCount;
    IESLiveSendSyncStreamInfoAPI *_api;
    IESLiveGCDTimer *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
}

@property (retain, nonatomic) NSMutableArray *infoArray;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *controlQueue;
@property (nonatomic) long long emptyCount;
@property (retain, nonatomic) IESLiveSendSyncStreamInfoAPI *api;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;

- (void)p_stopTimer;
- (void)sendInfo:(id)arg0 key:(id)arg1;
- (void)p_startTimerWithSeconds:(double)arg0;
- (id)popCurrentInfoArray;
- (long long)emptyCount;
- (void)setEmptyCount:(long long)arg0;
- (void)p_requestInfo;
- (void)setInfoArray:(id)arg0;
- (id)timer;
- (void).cxx_destruct;
- (id)timerQueue;
- (void)setTimer:(id)arg0;
- (void)dealloc;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)controlQueue;
- (void)setControlQueue:(id)arg0;
- (id)api;
- (id)initWithRoom:(id)arg0;
- (void)setTimerQueue:(id)arg0;
- (void)setApi:(id)arg0;
- (id)infoArray;

@end
