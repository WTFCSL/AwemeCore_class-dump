//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance, TIMXECOMGetUserMessageTrigger;

@interface TIMXECOMMessageBridgeIMPL : NSObject <TIMXStartUpTaskProtocol, TIMXECOMMessageBridge, TIMXInstanceScopeSingleton> {
    TIMXECOMGetUserMessageTrigger *_getUserMessageTrigger;
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXECOMGetUserMessageTrigger *getUserMessageTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)arg0;

- (long long)insertMessages:(id)arg0 conversationExtraMap:(id)arg1 inInbox:(int)arg2 reason:(id)arg3 context:(id)arg4;
- (long long)insertMessages:(id)arg0 conversationExtraMap:(id)arg1 inInbox:(int)arg2 reason:(id)arg3;
- (void)userDidLogout:(id)arg0;
- (void)setGetUserMessageTrigger:(id)arg0;
- (id)getUserMessageTrigger;
- (id)sendMessage:(id)arg0 isSaveDB:(BOOL)arg1 conversationId:(id)arg2 error:(id *)arg3;
- (id)sendMessageWithTemplate:(id)arg0 error:(id *)arg1;
- (id)sendMessageWithTemplateNoSaveDB:(id)arg0 error:(id *)arg1;
- (void)resendMessage:(id)arg0 sessionID:(id)arg1;
- (id)createUserMessageInitHandlerWithInbox:(int)arg0 userID:(long long)arg1;
- (id)createNotifyNewMessageHandlerWithInbox:(int)arg0 userID:(long long)arg1;
- (void)loadOlderMsgesRemedialyFromConversationId:(id)arg0 anchorMsgId:(id)arg1 msgesCount:(long long)arg2 priorityUseDB:(BOOL)arg3 forcePullRemote:(BOOL)arg4 currentMinIndexV2:(long long)arg5 currentMaxIndexV2:(long long)arg6 inboxType:(int)arg7 completionBlock:(id /* block */)arg8;
- (void)fetchAllMessagesFromConversationIdentifier:(id)arg0 minIndexV2:(long long)arg1 maxIndexV2:(long long)arg2 inboxType:(int)arg3 shouldCancelBlock:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)remoteLoadMessagesBetweenMinIndexV2:(long long)arg0 maxIndexV2:(long long)arg1 direction:(unsigned long long)arg2 inConversation:(id)arg3 inboxType:(int)arg4 completionBlock:(id /* block */)arg5;
- (BOOL)checkContinousInRangeWithMinIndexV2:(long long)arg0 maxIndexV2:(long long)arg1 inConversation:(id)arg2 emptyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)arg3 includeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)arg4 inboxType:(int)arg5;
- (BOOL)insertMessagesToDB:(id)arg0 conversationExtraMap:(id)arg1 files:(id)arg2 inbox:(int)arg3 reason:(id)arg4;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)arg0;

@end
