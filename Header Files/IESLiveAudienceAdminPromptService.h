//
//     Generated by private class-dump
//

@class NSString, IESLiveAudienceAdminPromptAPI;

@interface IESLiveAudienceAdminPromptService : IESLiveAdminPromptService <IESLiveAudienceAdminPromptService> {
    IESLiveAudienceAdminPromptAPI *_api;
}

@property (retain, nonatomic) IESLiveAudienceAdminPromptAPI *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)postPromptWithRoomID:(id)arg0 content:(id)arg1 finished:(id /* block */)arg2;
- (void)getPromptListWithRoomID:(id)arg0 finished:(id /* block */)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:(id)arg0;

@end
