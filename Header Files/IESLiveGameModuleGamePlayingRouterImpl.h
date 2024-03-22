//
//     Generated by private class-dump
//

@class NSString, IESLiveSubscriberUtil;
@protocol IESLiveRoomService;

@interface IESLiveGameModuleGamePlayingRouterImpl : NSObject <IESLiveGamePlayingRouter> {
    BOOL _isAnchor;
    BOOL _mIsGamePlaying;
    id<IESLiveRoomService> _roomModel;
    IESLiveSubscriberUtil *_subscriberUtil;
}

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) IESLiveSubscriberUtil *subscriberUtil;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL mIsGamePlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)roomModel;
- (void)setIsAnchor:(BOOL)arg0;
- (void)setRoomModel:(id)arg0;
- (BOOL)isXPlayRunningClearScreen;
- (void)subscribeGamePlayingChange:(id /* block */)arg0 subscriber:(id)arg1;
- (BOOL)isGamePlaying;
- (BOOL)isInteractGameInRunning;
- (id)subscriberUtil;
- (void)setSubscriberUtil:(id)arg0;
- (id)initWithLiveRoom:(id)arg0 diContext:(id)arg1;
- (BOOL)isXPlayRunning;
- (void)p_registObserves;
- (void)observeGamePlayingEventWithVal:(id)arg0;
- (void)setMIsGamePlaying:(BOOL)arg0;
- (id)findModelWithSubscribe:(id)arg0;
- (BOOL)mIsGamePlaying;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (void)removeSubscriber:(id)arg0;

@end
