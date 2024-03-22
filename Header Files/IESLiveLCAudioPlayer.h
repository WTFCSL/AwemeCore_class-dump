//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveRoomRealStreamingService, IESLiveAudioPlayerDelegate, IESLiveAudioPlayerInput;

@interface IESLiveLCAudioPlayer : NSObject <IESLiveAudioPlayerProvider> {
    BOOL isRunning;
    float duration;
    float volume;
    float _overtime;
    id<IESLiveAudioPlayerDelegate> delegate;
    id<IESLiveAudioPlayerInput> audioInput;
    id<IESLiveRoomRealStreamingService> _player;
}

@property (retain, nonatomic) id<IESLiveRoomRealStreamingService> player;
@property (weak, nonatomic) id<IESLiveAudioPlayerDelegate> delegate;
@property (retain, nonatomic) id<IESLiveAudioPlayerInput> audioInput;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) float volume;
@property (readonly, nonatomic) float duration;
@property (nonatomic) float overtime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startPlay;
- (void)stopPlay;
- (void)setOvertime:(float)arg0;
- (float)overtime;
- (void)setIsRunning:(BOOL)arg0;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (float)volume;
- (void)setPlayer:(id)arg0;
- (float)duration;
- (id)delegate;
- (void)setVolume:(float)arg0;
- (void)setDelegate:(id)arg0;
- (void)pause;
- (id)player;
- (id)initWith:(id)arg0;
- (BOOL)prepareToPlay;
- (id)audioInput;
- (void)setAudioInput:(id)arg0;
- (void)playAtTime:(double)arg0;

@end