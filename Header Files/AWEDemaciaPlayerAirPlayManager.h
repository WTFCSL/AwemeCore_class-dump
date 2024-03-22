//
//     Generated by private class-dump
//

@class MPVolumeView, AVPlayer, AVRoutePickerView;
@protocol AWEDemaciaPlayerAirPlayManagerDelegate;

@interface AWEDemaciaPlayerAirPlayManager : NSObject {
    BOOL _connectedToAirPlay;
    BOOL _didStartPlaying;
    id<AWEDemaciaPlayerAirPlayManagerDelegate> _delegate;
    AVRoutePickerView *_pickerView;
    MPVolumeView *_volumnView;
    AVPlayer *_player;
}

@property (retain, nonatomic) AVRoutePickerView *pickerView;
@property (retain, nonatomic) MPVolumeView *volumnView;
@property (nonatomic) BOOL connectedToAirPlay;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) BOOL didStartPlaying;
@property (readonly, nonatomic) BOOL isConnectedToAirPlay;
@property (weak, nonatomic) id<AWEDemaciaPlayerAirPlayManagerDelegate> delegate;

+ (id)sharedInstance;

- (void)setVolumnView:(id)arg0;
- (void)audioSessionDidChange:(id)arg0;
- (id)volumnView;
- (BOOL)connectedToAirPlay;
- (void)setConnectedToAirPlay:(BOOL)arg0;
- (void)stopAirPlay;
- (id)currentAirPlayDeviceName;
- (void)reCreatePlayerAndPlay:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setDidStartPlaying:(BOOL)arg0;
- (BOOL)isConnectedToAirPlay;
- (BOOL)didStartPlaying;
- (id)observingPlayerKeyPath;
- (void)showAirPlayDevicePicker;
- (void)startAirPlayIfNeeded;
- (long long)currentTimeControlStatus;
- (id)init;
- (void).cxx_destruct;
- (void)setPlayer:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)play;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (id)player;
- (id)pickerView;
- (void)setPickerView:(id)arg0;
- (void)appWillTerminate:(id)arg0;
- (void)seekToTime:(double)arg0 completion:(id /* block */)arg1;

@end
