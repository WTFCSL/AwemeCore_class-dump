//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance;

@interface TIMXMessageUpdater : NSObject <TIMXMessageUpdaterProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recallMessage:(id)arg0 inConversation:(id)arg1 role:(long long)arg2 completion:(id /* block */)arg3;
- (void)requestAllFailedMessageProperty;
- (void)requestAllMessageProperty;
- (void)requestPropertyItemForMessage:(id)arg0 inConversation:(id)arg1 arrNewPropertyModify:(id)arg2 allowRefreshTicket:(BOOL)arg3 onCompletion:(id /* block */)arg4;
- (void)modifyPropertyItemsForMessage:(id)arg0 inConversation:(id)arg1 modifyProperties:(id)arg2 force:(BOOL)arg3 onCompletion:(id /* block */)arg4;
- (void)requestMessagePropertyWithStatusArray:(id)arg0;
- (void)modifyPropertyItemsForMessage:(id)arg0 inConversation:(id)arg1 modifyProperties:(id)arg2 dbMsgProperty:(id)arg3 force:(BOOL)arg4 onCompletion:(id /* block */)arg5;
- (void)requestWithMessageModifyRequestModel:(id)arg0 completion:(id /* block */)arg1;
- (void)markMessageInConversation:(id)arg0 serverMessageId:(long long)arg1 doAction:(BOOL)arg2 actionType:(unsigned long long)arg3 sortTime:(long long)arg4 completion:(id /* block */)arg5;
- (void)modifyMessageWithRequestModel:(id)arg0 completion:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)arg0;

@end