//
//     Generated by private class-dump
//

@class NSString, NSDictionary, IESLiveIMMessageChannel, IESLiveIMConfig;
@protocol IESLiveIMMessageReciever, IESLiveMessageConfig;

@interface IESVSSeekIMMessageClient : NSObject <IESLiveIMChannelDelegate> {
    BOOL _isStarted;
    id /* block */ _fetchParametersCallback;
    id /* block */ _fetchCompletionCallback;
    id<IESLiveMessageConfig> _bizConfig;
    id<IESLiveIMMessageReciever> _receiver;
    IESLiveIMConfig *_imConfig;
    IESLiveIMMessageChannel *_channel;
    NSDictionary *_context;
    NSString *_currentFetchCursor;
}

@property (retain, nonatomic) id<IESLiveMessageConfig> bizConfig;
@property (retain, nonatomic) id<IESLiveIMMessageReciever> receiver;
@property (retain, nonatomic) IESLiveIMConfig *imConfig;
@property (nonatomic) BOOL isStarted;
@property (retain, nonatomic) IESLiveIMMessageChannel *channel;
@property (retain, nonatomic) NSDictionary *context;
@property (retain, nonatomic) NSString *currentFetchCursor;
@property (copy, nonatomic) id /* block */ fetchParametersCallback;
@property (copy, nonatomic) id /* block */ fetchCompletionCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bizConfig;
- (void)setBizConfig:(id)arg0;
- (id)initWithConfig:(id)arg0 receiver:(id)arg1;
- (void)channel:(id)arg0 received:(id)arg1;
- (id)imConfig;
- (void)setImConfig:(id)arg0;
- (id)messageFetchPath;
- (void)setCurrentFetchCursor:(id)arg0;
- (id)currentFetchCursor;
- (void)setFetchParametersCallback:(id /* block */)arg0;
- (void)setFetchCompletionCallback:(id /* block */)arg0;
- (id /* block */)fetchParametersCallback;
- (id /* block */)fetchCompletionCallback;
- (void)setReceiver:(id)arg0;
- (id)channel;
- (id)receiver;
- (BOOL)isStarted;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (void)setContext:(id)arg0;
- (void)stop;
- (id)context;
- (void)start;
- (void)setIsStarted:(BOOL)arg0;

@end