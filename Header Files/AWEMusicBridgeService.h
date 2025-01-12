//
//     Generated by private class-dump
//

@class NSString, AWEMusicPlayerModel, AWEMusicPlayEventService;

@interface AWEMusicBridgeService : HTSService <MusicBridgeService, AWEMusicServiceDelegate> {
    BOOL _eventProgressBarMove;
    BOOL _eventBackgroundPlay;
    BOOL _eventIsLyricMove;
    id /* block */ callRNHandle;
    id /* block */ callLynxHandle;
    id /* block */ _callH5Handle;
    NSString *_reactID;
    NSString *_deallocReactID;
    double _eventSingleDuration;
    double _eventTotalDuration;
    double _eventStarTime;
    double _firstSeekTime;
    AWEMusicPlayerModel *_currentModel;
    double _currentMusicDuration;
    AWEMusicPlayEventService *_eventService;
}

@property (copy, nonatomic) id /* block */ callH5Handle;
@property (copy, nonatomic) NSString *reactID;
@property (copy, nonatomic) NSString *deallocReactID;
@property (nonatomic) double eventSingleDuration;
@property (nonatomic) double eventTotalDuration;
@property (nonatomic) BOOL eventProgressBarMove;
@property (nonatomic) BOOL eventBackgroundPlay;
@property (nonatomic) BOOL eventIsLyricMove;
@property (nonatomic) double eventStarTime;
@property (nonatomic) double firstSeekTime;
@property (weak, nonatomic) AWEMusicPlayerModel *currentModel;
@property (nonatomic) double currentMusicDuration;
@property (retain, nonatomic) AWEMusicPlayEventService *eventService;
@property (copy, nonatomic) id /* block */ callRNHandle;
@property (copy, nonatomic) id /* block */ callLynxHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)musicService:(id)arg0 didFinishedWithError:(id)arg1;
- (void)musicService:(id)arg0 playStatusChanged:(long long)arg1;
- (void)musicServicePreparedToPlay:(id)arg0;
- (void)musicServiceReadyToPlay:(id)arg0;
- (void)musicServiceDidPlay:(id)arg0;
- (void)musicServiceDidPause:(id)arg0 pauseType:(long long)arg1;
- (void)musicServiceDidStop:(id)arg0;
- (void)musicServiceDidSeek:(id)arg0;
- (void)musicServiceInPlaying:(id)arg0;
- (void)musicServiceMusicChanged:(id)arg0;
- (id)reactID;
- (void)setReactID:(id)arg0;
- (BOOL)eventBackgroundPlay;
- (void)setEventBackgroundPlay:(BOOL)arg0;
- (void)musicCollectedStatusChanged:(id)arg0;
- (void)setEventProgressBarMove:(BOOL)arg0;
- (void)setFirstSeekTime:(double)arg0;
- (double)firstSeekTime;
- (void)setEventSingleDuration:(double)arg0;
- (void)setEventTotalDuration:(double)arg0;
- (void)setEventStarTime:(double)arg0;
- (void)setEventIsLyricMove:(BOOL)arg0;
- (double)eventStarTime;
- (double)eventSingleDuration;
- (double)eventTotalDuration;
- (BOOL)eventProgressBarMove;
- (BOOL)eventIsLyricMove;
- (void)musicExecJSBParams:(id)arg0 completion:(id /* block */)arg1 callH5Handle:(id /* block */)arg2;
- (void)musicExecRNJSBParams:(id)arg0 completion:(id /* block */)arg1;
- (void)registerForceStopNotifications:(id)arg0;
- (void)registerRNDeallocNotification:(id)arg0;
- (void)registerFavoriteActionNotification:(id)arg0;
- (void)registerFollowNotification:(id)arg0;
- (void)registerUnFollowNotification:(id)arg0;
- (id /* block */)callRNHandle;
- (void)setCallRNHandle:(id /* block */)arg0;
- (id /* block */)callLynxHandle;
- (void)setCallLynxHandle:(id /* block */)arg0;
- (void)musicServiceInit;
- (void)setCallH5Handle:(id /* block */)arg0;
- (void)commonExecAction:(id)arg0 data:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)deallocReactID;
- (void)rnDeallocNote:(id)arg0;
- (void)userFollowStatusChanged:(id)arg0;
- (void)userUnFollowStatusChanged:(id)arg0;
- (void)setDeallocReactID:(id)arg0;
- (id /* block */)callH5Handle;
- (void)execActionSetData:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)execActionPlay:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)execActionPlayData:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)execActionStop:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)execActionPause:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)execActionResume:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)execActionSeek:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)execActionCurrentTime:(id)arg0 completion:(id /* block */)arg1;
- (void)execActionUpdateEventData:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)invokeState:(id)arg0;
- (void)commonCallWebWithEventID:(id)arg0 data:(id)arg1;
- (id)playQueueWithJSBDict:(id)arg0;
- (BOOL)IsNotCurrentModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)setCurrentMusicDuration:(double)arg0;
- (void)broadcastDuration;
- (double)currentMusicDuration;
- (void).cxx_destruct;
- (void)forceStop;
- (void)setEventService:(id)arg0;
- (id)eventService;
- (void)dealloc;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;

@end
