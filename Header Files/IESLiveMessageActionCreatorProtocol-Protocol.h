//
//     Generated by private class-dump
//

@protocol IESLiveMessageActionCreatorProtocol <NSObject>

@property (nonatomic) BOOL enableStartEarlier;
@property (nonatomic) BOOL enableMessageReplay;

- (void)remoteRoomDataReady:(id)arg0;
- (void)startMessageDispatch;
- (void)stopMessageDispatch;
- (id)initWithDIContext:(id)arg0 config:(id)arg1;
- (void)addFakeMessage:(id)arg0;
- (BOOL)enableMessageReplay;
- (void)setEnableMessageReplay:(BOOL)arg0;
- (void)setEnableStartEarlier:(BOOL)arg0;
- (BOOL)enableStartEarlier;
- (void)startEarlier;
- (void)startMessageReplay;
- (void)startMessageDispatchSync;
- (void)stopMessageReplay;
- (void)stop;
- (void)start;

@end
