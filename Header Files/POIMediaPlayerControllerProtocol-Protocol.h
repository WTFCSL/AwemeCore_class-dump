//
//     Generated by private class-dump
//

@protocol POIMediaPlayerControllerProtocol <NSObject>

@property (nonatomic) BOOL mute;
@property (readonly, nonatomic) long long currentPlayState;

- (long long)currentPlayState;
- (BOOL)mute;
- (BOOL)stop;
- (BOOL)play;
- (BOOL)pause;
- (void)setMute:(BOOL)arg0;
- (void)seekToTime:(double)arg0 completion:(id /* block */)arg1;

@end