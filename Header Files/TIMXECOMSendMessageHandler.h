//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_semaphore;

@interface TIMXECOMSendMessageHandler : NSObject <TIMXInstanceScopeSingleton> {
    NSMutableDictionary *_sendProcessDurationMonitorMap;
    NSObject<OS_dispatch_semaphore> *_durationMonitorMapLock;
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSMutableDictionary *sendProcessDurationMonitorMap;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *durationMonitorMapLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sendMessage:(id)arg0 isSaveDB:(BOOL)arg1 conversationId:(id)arg2 error:(id *)arg3;
- (id)sendMessageWithTemplate:(id)arg0 error:(id *)arg1;
- (id)sendMessageWithTemplateNoSaveDB:(id)arg0 error:(id *)arg1;
- (void)resendMessage:(id)arg0 sessionID:(id)arg1;
- (id)dealOverrideMessage:(id)arg0 conversationId:(id)arg1 error:(id *)arg2;
- (id)generateTemplateModelWithSendMessage:(id)arg0 conversationId:(id)arg1;
- (id)sendMessageWithTemplate:(id)arg0 isSaveDB:(BOOL)arg1 error:(id *)arg2;
- (BOOL)checkIllegalWithMessageTemplate:(id)arg0 isSaveDB:(BOOL)arg1 error:(id *)arg2;
- (id)generateDBMessageWithTemplateModel:(id)arg0 isSaveDB:(BOOL)arg1 error:(id *)arg2;
- (void)addDurationMonitor:(id)arg0 toMessage:(id)arg1;
- (void)sendRealMessage:(id)arg0;
- (void)sendMessageToServer:(id)arg0 allowRefetchTicket:(BOOL)arg1 isSaveDB:(BOOL)arg2;
- (long long)nextOldClientMsgId;
- (void)refreshMentionedUsersToDBExtDictionary:(id)arg0 templateModel:(id)arg1;
- (long long)nextOrderIDForConversation:(id)arg0;
- (id)handleReferMessageKVObjWhenGenerateDBMessage:(id)arg0 templateModel:(id)arg1;
- (void)notifyWillSendMessage:(id)arg0;
- (id)handleReferMessageBeforRealSend:(id)arg0;
- (id)sendFileParts:(id)arg0;
- (void)legacyNotifyUpdateMessage:(id)arg0 inConversationWithIdentifier:(id)arg1;
- (void)trackMsgSendStart:(id)arg0;
- (id)latestMonitorOfMessge:(id)arg0;
- (void)reNewTicketAndSendMessageToServer:(id)arg0 isSaveDB:(BOOL)arg1 needMonitor:(BOOL)arg2;
- (void)onSendMessageSuccessWithMessage:(id)arg0 allowRefetchTicket:(BOOL)arg1 isSaveDB:(BOOL)arg2 responseObject:(id)arg3;
- (void)onSendMessageFailedWithMessage:(id)arg0 allowRefetchTicket:(BOOL)arg1 isSaveDB:(BOOL)arg2 error:(id)arg3;
- (BOOL)checkIllegalWithMessageTemplateFiles:(id)arg0 error:(id *)arg1;
- (void)updateMessage:(id)arg0 withResponse:(id)arg1;
- (id)clearMonitorOfMessage:(id)arg0;
- (void)trackMsgSend:(id)arg0 responseObj:(id)arg1 error:(id)arg2;
- (void)sendOneFile:(id)arg0 forMessage:(id)arg1;
- (id)durationMonitorMapLock;
- (id)sendProcessDurationMonitorMap;
- (void)setSendProcessDurationMonitorMap:(id)arg0;
- (id)insertFilePartsToDBWithTemplateModel:(id)arg0 belongingCovIdentifier:(id)arg1 belongingMsgIdentifier:(id)arg2 error:(id *)arg3;
- (void)setDurationMonitorMapLock:(id)arg0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)arg0;

@end
