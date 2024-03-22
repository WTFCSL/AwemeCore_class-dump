//
//     Generated by private class-dump
//

@class BDXAudioService, NSString, BDXAudioModel;

@interface BDXAudioEventService : NSObject <BDXAudioEventServiceDelegate, AWEAudioFocusProtocol> {
    BOOL _eventProgressBarMove;
    BOOL _eventBackgroundPlay;
    BOOL _eventIsLyricMove;
    double _eventSingleDuration;
    double _eventTotalDuration;
    double _eventStarTime;
    double _firstSeekTime;
    BDXAudioModel *_currentModel;
    BDXAudioService *_playService;
}

@property (nonatomic) double eventSingleDuration;
@property (nonatomic) double eventTotalDuration;
@property (nonatomic) BOOL eventProgressBarMove;
@property (nonatomic) BOOL eventBackgroundPlay;
@property (nonatomic) BOOL eventIsLyricMove;
@property (nonatomic) double eventStarTime;
@property (nonatomic) double firstSeekTime;
@property (retain, nonatomic) BDXAudioModel *currentModel;
@property (retain, nonatomic) BDXAudioService *playService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)audioIsPlaying;
- (void)audioPause;
- (void)receiveNotes:(id)arg0;
- (BOOL)eventBackgroundPlay;
- (void)setEventBackgroundPlay:(BOOL)arg0;
- (id)playService;
- (void)calculateSingleDuration:(BOOL)arg0;
- (void)audioOver:(long long)arg0;
- (void)audioFinish;
- (void)eventClear;
- (void)setEventProgressBarMove:(BOOL)arg0;
- (void)setFirstSeekTime:(double)arg0;
- (void)audioPlay:(long long)arg0;
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
- (void)audioService:(id)arg0 didFinishedWithError:(id)arg1;
- (void)audioService:(id)arg0 playStatusChanged:(long long)arg1;
- (void)audioServiceReadyToPlay:(id)arg0;
- (void)audioServiceDidPlay:(id)arg0;
- (void)audioServiceDidPause:(id)arg0 pauseType:(long long)arg1;
- (void)audioServiceDidStop:(id)arg0;
- (void)audioServiceDidSeek:(id)arg0;
- (void)audioServiceInPlaying:(id)arg0;
- (void)audioServiceAudioChanged:(id)arg0;
- (void)audioServicePeriodicTimeObserverForInterval:(id)arg0;
- (void)setPlayService:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;
- (void)setupNotifications;

@end