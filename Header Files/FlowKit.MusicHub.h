//
//     Generated by private class-dump
//

@interface FlowKit.MusicHub : NSObject <TTAccountMulticastProtocol, FlowMusicPlayerDelegate> {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ messageId;
    void /* unknown type, empty encoding */ botId;
    void /* unknown type, empty encoding */ conversationId;
    void /* unknown type, empty encoding */ musicInfo;
    void /* unknown type, empty encoding */ playerStateChange;
    void /* unknown type, empty encoding */ autoPlayMessageId;
    void /* unknown type, empty encoding */ startPlayTime;
    void /* unknown type, empty encoding */ listeners;
    void /* unknown type, empty encoding */ seekPosition;
    void /* unknown type, empty encoding */ $__lazy_storage_$_player;
}

- (void)onAccountLogout;
- (void)playerAudioRendered:(id)arg0;
- (void)playerReadyToPlay:(id)arg0;
- (void)playerCloseAysncFinish:(id)arg0;
- (void)playerDidFinish:(id)arg0 error:(id)arg1;
- (void)player:(id)arg0 playbackStateDidChanged:(long long)arg1;
- (id)init;
- (void).cxx_destruct;

@end
