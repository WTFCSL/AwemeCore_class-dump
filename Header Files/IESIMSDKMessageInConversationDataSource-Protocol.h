//
//     Generated by private class-dump
//

@class NSString;

@protocol IESIMSDKMessageInConversationDataSource <NSObject>

@property (readonly, nonatomic) NSString *conversationID;
@property (weak, nonatomic) id delegate;
@property (readonly, nonatomic) BOOL hasOlderMessages;
@property (readonly, nonatomic) BOOL hasNewerMessages;
@property (readonly, nonatomic) long long lastReadIndex;
@property (nonatomic) BOOL forcePullRemoteForFirstPage;

- (BOOL)hasOlderMessages;
- (BOOL)hasNewerMessages;
- (id)itemForMessageId:(id)arg0;
- (long long)lastReadIndex;
- (BOOL)forcePullRemoteForFirstPage;
- (void)setForcePullRemoteForFirstPage:(BOOL)arg0;
- (void)loadNewestMessagesWithCompletionBlock:(id /* block */)arg0;
- (void)loadMessageDetailWithServerMessageID:(long long)arg0 conversationShortId:(long long)arg1 conversationId:(id)arg2 conversationType:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)fetchSpecifiedMessageWithConversationID:(id)arg0 ConversationShortID:(long long)arg1 specifiedMessageListType:(unsigned long long)arg2 offset:(long long)arg3 pageLimit:(unsigned long long)arg4 completionBlock:(id /* block */)arg5;
- (void)fetchMarkMessagesWithConversationID:(id)arg0 offset:(long long)arg1 limit:(unsigned long long)arg2 ascending:(BOOL)arg3 actionType:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (id)itemAtIndex:(unsigned long long)arg0;
- (unsigned long long)numberOfItems;
- (id)conversationID;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
