//
//     Generated by private class-dump
//

@protocol IESLivePlayerProtocol;

@interface IESLiveSmallWindowPlayerController : NSObject {
    id<IESLivePlayerProtocol> _player;
}

@property (retain, nonatomic) id<IESLivePlayerProtocol> player;

- (void)reloadWithStreamData:(id)arg0 defaultSDKKey:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)stop;
- (void)setPlayer:(id)arg0;
- (void)play;
- (void)pause;
- (void)setMute:(BOOL)arg0;
- (id)player;
- (BOOL)isMute;

@end
