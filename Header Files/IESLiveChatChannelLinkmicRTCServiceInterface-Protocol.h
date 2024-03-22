//
//     Generated by private class-dump
//

@protocol IESLiveChatChannelLinkmicRTCServiceInterface <NSObject>

@property (readonly, nonatomic) BOOL isInLinkmic;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL isAudioMixEnable;

- (void)setupWithRTCExtInfo:(id)arg0;
- (BOOL)isAudioMixEnable;
- (void)setPlayerAudioMixVolume:(long long)arg0;
- (void)enableStreamPlayerAudioMix:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)joinChatChannelRTCRoom;
- (void)joinChatChannelRTCLinkmic;
- (void)leaveChatChannelRTCLinkmic;
- (void)leaveChatChannelRTCRoom;
- (void)leaveChatChannelRTCRoomAndDestroy;
- (BOOL)isInLinkmic;
- (long long)state;

@end