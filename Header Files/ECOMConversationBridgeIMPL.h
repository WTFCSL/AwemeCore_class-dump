//
//     Generated by private class-dump
//

@class ECOMTIMBatchUpdateAggregater, NSString;

@interface ECOMConversationBridgeIMPL : NSObject <ECOMTIMStartUpTaskProtocol, ECOMConversationBridge, ECOMTIMBatchUpdateAggregaterDelegate> {
    ECOMTIMBatchUpdateAggregater *_updateAggregater;
}

@property (retain, nonatomic) ECOMTIMBatchUpdateAggregater *updateAggregater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (id)sharedInstance;
+ (void)startUp;

- (void)updateConversation:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchConversationInfo:(long long)arg0 conversationID:(id)arg1 type:(int)arg2 inInbox:(int)arg3 completion:(id /* block */)arg4;
- (void)createConversationWithOtherParticipants:(id)arg0 participantsBizRoleObjects:(id)arg1 type:(int)arg2 name:(id)arg3 inInbox:(int)arg4 idempotentID:(id)arg5 bizExtension:(id)arg6 completion:(id /* block */)arg7;
- (void)createSubConversationWithParentConvShortID:(long long)arg0 parentConvID:(id)arg1 inInbox:(int)arg2 participantsObjects:(id)arg3 bizExtension:(id)arg4 completion:(id /* block */)arg5;
- (void)upsertWithLocalConversationSettingsObject:(id)arg0 completion:(id /* block */)arg1;
- (void)upsertWithLocalConversationObject:(id)arg0 inbox:(int)arg1 completion:(id /* block */)arg2;
- (void)upsertWithLocalSubConversationObject:(id)arg0 completion:(id /* block */)arg1;
- (void)hardDeleteConversation:(id)arg0 withOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)setMute:(BOOL)arg0 onConversation:(id)arg1 completion:(id /* block */)arg2;
- (void)setStickOnTop:(BOOL)arg0 onConversation:(id)arg1 completion:(id /* block */)arg2;
- (long long)minIndexV2ForConversation:(id)arg0 useDefaultValue:(BOOL)arg1;
- (BOOL)setLocalRealDeleteIndex:(long long)arg0 forConversation:(id)arg1;
- (long long)localRealDeleteIndexForConversation:(id)arg0;
- (BOOL)clearConversationUnreadCountDataSheet;
- (id)conversationUnreadCountModelsWithIdentifier:(id)arg0;
- (id)convUnreadUnionWithIdentifier:(id)arg0;
- (BOOL)markConversationNewUnreadModelReadWithConversationID:(id)arg0;
- (BOOL)updateConversationUnreadCountModelWithConversationID:(id)arg0 convUnreadUnion:(id)arg1;
- (void)updateSubConversation:(long long)arg0 parentConversationID:(id)arg1 parentConversationShortID:(long long)arg2 inInbox:(int)arg3;
- (void)updateConversationAndFetchNewestMessageIndex:(id)arg0 completion:(id /* block */)arg1;
- (void)setUpdateAggregater:(id)arg0;
- (id)updateAggregater;
- (BOOL)shouldUseBatchUpdate;
- (void)_updateSubConversations:(id)arg0;
- (void)batchUpdateAggregater:(id)arg0 needProcessBatch:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)setUp;

@end
