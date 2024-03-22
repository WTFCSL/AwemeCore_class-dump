//
//     Generated by private class-dump
//

@class IESLiveRecordStateApi;
@protocol IESLiveAnchorRoomStatusChangeEvents, IESLiveRoomService;

@interface HTSLivMediaPreviewRoomStatusManager : NSObject {
    id<IESLiveRoomService> _room;
    IESLiveRecordStateApi *_stateApi;
    id<IESLiveAnchorRoomStatusChangeEvents> _dispatcher;
}

@property (retain, nonatomic) IESLiveRecordStateApi *stateApi;
@property (retain, nonatomic) id<IESLiveAnchorRoomStatusChangeEvents> dispatcher;
@property (retain, nonatomic) id<IESLiveRoomService> room;

- (void)stopLiveByForce:(BOOL)arg0 reason:(long long)arg1 trace:(id)arg2 completion:(id /* block */)arg3;
- (void)setStateApi:(id)arg0;
- (void)updateRemoteRoomStatus:(long long)arg0 reason:(long long)arg1 source:(unsigned long long)arg2 trace:(id)arg3;
- (id)stateApi;
- (id)dispatcher;
- (void)setDispatcher:(id)arg0;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;

@end