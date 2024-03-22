//
//     Generated by private class-dump
//

@class AWEMusicService, AWEMusicPlayerModel;

@interface AWEMusicPlayDuration : NSObject {
    BOOL _eventBackgroundPlay;
    double _playingDuration;
    AWEMusicService *_player;
    AWEMusicPlayerModel *_tempCurrentModel;
}

@property (nonatomic) double playingDuration;
@property (weak, nonatomic) AWEMusicService *player;
@property (nonatomic) BOOL eventBackgroundPlay;
@property (retain, nonatomic) AWEMusicPlayerModel *tempCurrentModel;

- (void)receiveNotes:(id)arg0;
- (BOOL)eventBackgroundPlay;
- (void)setEventBackgroundPlay:(BOOL)arg0;
- (void)audioOver;
- (void)setPlayingDuration:(double)arg0;
- (void)setTempCurrentModel:(id)arg0;
- (id)tempCurrentModel;
- (void)audioPlay;
- (void)playStatusChanged:(long long)arg0 model:(id)arg1;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)arg0;
- (void)setPlayer:(id)arg0;
- (void)reset;
- (id)player;
- (void)setupNotifications;
- (double)playingDuration;

@end