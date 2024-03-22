//
//     Generated by private class-dump
//

@class NSString, IESLiveCheckExistChatroomAPI;

@interface IESLiveResumeChatRoomFragment : IESLiveGuideComponent <IESLiveResumeChatRoomRouter> {
    BOOL _isChecking;
    IESLiveCheckExistChatroomAPI *_api;
    id _chatroomResumeModel;
}

@property (retain, nonatomic) IESLiveCheckExistChatroomAPI *api;
@property (nonatomic) BOOL isChecking;
@property (retain, nonatomic) id chatroomResumeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isChecking;
- (void)setIsChecking:(BOOL)arg0;
- (void)componentBindService;
- (void)componentUnmount;
- (id)chatroomResumeModel;
- (BOOL)enableResumeWithRoom:(id)arg0;
- (void)checkExistChatroomWithRoomID:(id)arg0 completion:(id /* block */)arg1;
- (void)setChatroomResumeModel:(id)arg0;
- (void)monitorWithAPIPath:(id)arg0 requestTime:(double)arg1 response:(id)arg2 error:(id)arg3 extra:(id)arg4;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:(id)arg0;

@end