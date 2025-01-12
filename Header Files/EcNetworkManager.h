//
//     Generated by private class-dump
//

@class EcClient;

@interface EcNetworkManager : NSObject {
    EcClient *_client;
}

@property (weak, nonatomic) EcClient *client;

- (id)httpURL:(id)arg0;
- (id)commonHeader;
- (id)post:(id)arg0 headerField:(id)arg1 bodyParam:(id)arg2 ecTask:(id)arg3 complete:(id /* block */)arg4;
- (void)ttNetInit;
- (id)downloadWithRequest:(id)arg0 parameters:(id)arg1 headerField:(id)arg2 progress:(id *)arg3 destination:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)uploadRequest:(id)arg0 method:(id)arg1 offset:(long long)arg2 partSize:(long long)arg3 path:(id)arg4 headerField:(id)arg5 timeout:(long long)arg6 complete:(id /* block */)arg7;
- (id)PostSyncTagcommands:(id)arg0 complete:(id /* block */)arg1;
- (id)post:(id)arg0 headerField:(id)arg1 bodyParam:(id)arg2 complete:(id /* block */)arg3;
- (void).cxx_destruct;
- (void)setClient:(id)arg0;
- (id)client;
- (id)initWithClient:(id)arg0;

@end
