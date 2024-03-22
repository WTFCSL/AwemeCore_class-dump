//
//     Generated by private class-dump
//

@protocol TIMXTIMXNewMessageStoreInternalProtocol <NSObject>

- (id)internal_conversationIDsToDBIndexConvIDsDict:(id)arg0;
- (void)internal_calculateSortOrderForConversation:(id)arg0;
- (void)internal_deleteMessagesWithConversationIdentifiers:(id)arg0;
- (void)internal_deleteFilesWithConversationIdentifiers:(id)arg0;
- (void)internal_batchDeleteConversationsOtherInfoWithConversationIdentifiers:(id)arg0;
- (void)internal_batchUpdateReferMessageStatus:(int)arg0 serverMessageID:(long long)arg1 updater:(id)arg2 inConversationWithIdentifier:(id)arg3;
- (struct WCTExpr { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; Class x1; struct shared_ptr<WCTColumnBinding> { struct WCTColumnBinding *x0; struct __shared_weak_count *x1; } x2; Class x3; })internal_assembleCondition:(struct WCTExpr { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; Class x1; struct shared_ptr<WCTColumnBinding> { struct WCTColumnBinding *x0; struct __shared_weak_count *x1; } x2; Class x3; })arg0 withBelongedAcquaintanceTypes:(id)arg1;
- (long long)internal_unreadCountOfMessagesWithoutIndexV2InConversation:(id)arg0 afterPullIndex:(long long)arg1;
- (void)internal_updateMessageForMarkReadWithConversationID:(id)arg0 pullIndex:(id)arg1;
- (id)internal_getOneMessageOrderByPullIndexWithConversationIdentifier:(id)arg0;
- (void)internal_updateMessageForMarkReadWithConversationIDs:(id)arg0;
- (long long)internal_conversationCountWithBelongedAcquaintanceTypes:(id)arg0;
- (id)internal_messageKVObjectsForkey:(id)arg0;
- (void)internal_setup;
- (void)internal_applyDBPropertyToMessageArray:(id)arg0;
- (void)internal_batchRollBackReferMessageHintWithReason:(id)arg0 serverMessageID:(long long)arg1 updater:(id)arg2 inConversationWithIdentifier:(id)arg3;
- (void)internal_batchRollBackReferMessageHintWithServerMessageID:(long long)arg0 updater:(id)arg1 inConversationWithIdentifier:(id)arg2 msg:(id)arg3;
- (long long)internal_messagePullIndexWithIndexV2:(long long)arg0 inConversationWithIdentifier:(id)arg1;
- (void)internal_deleteMessageIndexRangeInConversation:(id)arg0 beforeOrderIndex:(long long)arg1;
- (void)internal_deleteMessageAllNewProperty:(id)arg0;
- (void)internal_deleteMessageProperty:(id)arg0 conversationID:(id)arg1 propertyKey:(id)arg2 idempotentID:(id)arg3;
- (void)internal_insertMessagePropertys:(id)arg0;
- (void)internal_updateConversationForDeleteMessage:(id)arg0;

@end