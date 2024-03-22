//
//     Generated by private class-dump
//

@class HTSEventContext;

@protocol IESLiveRoomExtensionCommunicator <NSObject>

@property (retain, nonatomic) HTSEventContext *eventContext;

- (void)setEventContext:(id)arg0;
- (void)listenMessageWithKey:(long long)arg0 handler:(id /* block */)arg1;
- (void)closeConnect;
- (void)passMessage:(id)arg0 forKey:(long long)arg1;
- (void)listenEncodedVideoDataFromExtension:(id /* block */)arg0;
- (void)listenAppAudioDataFromExtension:(id /* block */)arg0;
- (id)eventContext;

@end
