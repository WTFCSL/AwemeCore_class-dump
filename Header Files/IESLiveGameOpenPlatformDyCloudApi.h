//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveGameOpenPlatformDyCloudApi : HTSLiveApi {
    NSString *_appId;
}

@property (copy, nonatomic) NSString *appId;

- (id)initWithAppId:(id)arg0 DIContext:(id)arg1;
- (void)requestLoginWithCompletion:(id /* block */)arg0;
- (void)requestSidWithCloudCode:(id)arg0 completion:(id /* block */)arg1;
- (void)refreshSid:(id)arg0 completion:(id /* block */)arg1;
- (void)callContainerWithRequestParam:(id)arg0 completion:(id /* block */)arg1;
- (void)setAppId:(id)arg0;
- (void).cxx_destruct;
- (id)appId;

@end
