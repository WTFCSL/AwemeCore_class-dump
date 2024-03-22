//
//     Generated by private class-dump
//

@class IESLiveIMWebSocketFetcher, NSDictionary, NSString, IESLiveIMMessageChannel;
@protocol IESLiveIMMessageReciever, IESLiveMessageConfig;

@interface IESLiveGameOpenPlatformIMMessageClient : NSObject <IESLiveIMChannelDelegate> {
    BOOL _isStarted;
    id<IESLiveMessageConfig> _bizConfig;
    id<IESLiveIMMessageReciever> _receiver;
    IESLiveIMMessageChannel *_channel;
    IESLiveIMWebSocketFetcher *_webSocketFetcher;
    NSDictionary *_context;
    NSString *_cursor;
    NSString *_pushServer;
    NSDictionary *_routeParams;
}

@property (retain, nonatomic) id<IESLiveMessageConfig> bizConfig;
@property (weak, nonatomic) id<IESLiveIMMessageReciever> receiver;
@property (nonatomic) BOOL isStarted;
@property (retain, nonatomic) IESLiveIMMessageChannel *channel;
@property (retain, nonatomic) IESLiveIMWebSocketFetcher *webSocketFetcher;
@property (retain, nonatomic) NSDictionary *context;
@property (retain, nonatomic) NSString *cursor;
@property (retain, nonatomic) NSString *pushServer;
@property (retain, nonatomic) NSDictionary *routeParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRouteParams:(id)arg0;
- (id)routeParams;
- (id)bizConfig;
- (void)setBizConfig:(id)arg0;
- (id)initWithConfig:(id)arg0 receiver:(id)arg1;
- (id)webSocketFetcher;
- (id)pushServer;
- (void)setPushServer:(id)arg0;
- (void)channel:(id)arg0 received:(id)arg1;
- (void)channel:(id)arg0 opened:(id)arg1;
- (void)channel:(id)arg0 closed:(id)arg1;
- (void)channel:(id)arg0 transportChanged:(id)arg1;
- (void)setWebSocketFetcher:(id)arg0;
- (void)setReceiver:(id)arg0;
- (id)cursor;
- (id)channel;
- (id)receiver;
- (BOOL)isStarted;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (void)setContext:(id)arg0;
- (void)stop;
- (id)context;
- (void)start;
- (void)setCursor:(id)arg0;
- (void)setIsStarted:(BOOL)arg0;

@end
