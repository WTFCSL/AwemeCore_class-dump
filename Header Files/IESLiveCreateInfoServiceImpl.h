//
//     Generated by private class-dump
//

@class NSString, IESLiveOpenLiveApi, CreateInfoResponse_CreateInfo;

@interface IESLiveCreateInfoServiceImpl : NSObject <IESLiveCreateInfoService> {
    CreateInfoResponse_CreateInfo *_openLiveModel;
    IESLiveOpenLiveApi *_api;
}

@property (retain, nonatomic) IESLiveOpenLiveApi *api;
@property (retain, nonatomic) CreateInfoResponse_CreateInfo *openLiveModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestCreateInfoCompletion:(id /* block */)arg0;
- (void)bindAction;
- (id)openLiveModel;
- (void)setOpenLiveModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:(id)arg0;

@end