//
//     Generated by private class-dump
//

@class NSString, BDECIMClient, NSArray;
@protocol BDECIMCloudMessagesInConversationDataSourceInterface;

@interface BDECIMMessagesInConversationDataSource : NSObject {
    id /* block */ _messageDataSourceUpdated;
    id /* block */ _readMessageChangeCallback;
    id<BDECIMCloudMessagesInConversationDataSourceInterface> _messageDataSource;
    BDECIMClient *_client;
    NSString *_conversationID;
}

@property (retain, nonatomic) id<BDECIMCloudMessagesInConversationDataSourceInterface> messageDataSource;
@property (retain, nonatomic) BDECIMClient *client;
@property (retain, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSArray *currentMessageIDs;
@property (readonly, nonatomic) BOOL hasOlderMessages;
@property (copy, nonatomic) id /* block */ messageDataSourceUpdated;
@property (copy, nonatomic) id /* block */ readMessageChangeCallback;

- (void)loadOlderMessagesWithCompletionBlock:(id /* block */)arg0;
- (void)firstLoadOlderMessagesWithCompletionBlock:(id /* block */)arg0;
- (BOOL)hasOlderMessages;
- (id)currentMessageIDs;
- (id /* block */)messageDataSourceUpdated;
- (void)setMessageDataSourceUpdated:(id /* block */)arg0;
- (void)setMessageDataSource:(id)arg0;
- (id)messageDataSource;
- (id /* block */)readMessageChangeCallback;
- (void)onReadMessageChange:(id)arg0;
- (id)initWithInitialLocationLatestMessageForConversationID:(id)arg0 options:(id)arg1 client:(id)arg2;
- (void)setReadMessageChangeCallback:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)setClient:(id)arg0;
- (id)conversationID;
- (id)client;
- (void)dealloc;
- (void)setConversationID:(id)arg0;

@end
