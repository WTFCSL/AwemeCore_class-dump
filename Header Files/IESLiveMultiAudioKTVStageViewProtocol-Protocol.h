//
//     Generated by private class-dump
//

@protocol IESLivePlayerProtocol;

@protocol IESLiveMultiAudioKTVStageViewProtocol <NSObject>

@property (retain, nonatomic) id<IESLivePlayerProtocol> player;

- (void)handleSEIData:(id)arg0;
- (void)updateIsPreview:(BOOL)arg0;
- (void)didSwitchToStageMode:(unsigned long long)arg0;
- (void)updateSeatsUserInfo:(id)arg0;
- (void)updateAnchorInfo:(id)arg0;
- (void)updateLyricMode:(BOOL)arg0;
- (void)setPlayer:(id)arg0;
- (id)player;

@optional

- (void)smoothExitRoomToPreview;
- (void)onMessageReceivedFromPrestream:(id)arg0 withDict:(id)arg1;
- (void)smoothEnterRoomFromPreview;
- (id)ktvPreStreamContext;
- (id)reuseKTVStageView;
- (void)attachDIContextFromPrestream:(id)arg0;
- (void)liveRoomDidEndWithActiveURLList:(id)arg0;

@end