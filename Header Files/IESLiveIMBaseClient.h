//
//     Generated by private class-dump
//

@protocol IESLiveMessageConfig;

@interface IESLiveIMBaseClient : IESLiveIMClientWrapper {
    id<IESLiveMessageConfig> _bizConfig;
}

@property (retain, nonatomic) id<IESLiveMessageConfig> bizConfig;

- (id)bizConfig;
- (void)setBizConfig:(id)arg0;
- (void)setupHttpFetcherWithConfig:(id)arg0;
- (BOOL)isWebsocketFirst;
- (id)initWithConfig:(id)arg0 netConfig:(id)arg1;
- (void).cxx_destruct;

@end