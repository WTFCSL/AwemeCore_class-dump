//
//     Generated by private class-dump
//

@class NSString, NSArray, BDECIMClientConfig, NSObject;
@protocol OS_dispatch_queue, BDECIMCloudMessagesInConversationDataSourceInterface;

@interface AWEECOMIMDarenServiceMessageDataSource : NSObject {
    BOOL _firstLoad;
    id<BDECIMCloudMessagesInConversationDataSourceInterface> _messageDataSource;
    BDECIMClientConfig *_clientConfig;
    NSString *_conversationID;
    NSObject<OS_dispatch_queue> *_messageDataQueue;
    NSArray *_preMessageIds;
    unsigned long long _messageCountPerPage;
}

@property (retain, nonatomic) id<BDECIMCloudMessagesInConversationDataSourceInterface> messageDataSource;
@property (retain, nonatomic) BDECIMClientConfig *clientConfig;
@property (retain, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *messageDataQueue;
@property (copy) NSArray *preMessageIds;
@property (nonatomic) unsigned long long messageCountPerPage;
@property (nonatomic) BOOL firstLoad;

- (BOOL)hasOlderMessages;
- (unsigned long long)messageCountPerPage;
- (void)setMessageCountPerPage:(unsigned long long)arg0;
- (void)setMessageDataSource:(id)arg0;
- (id)messageDataSource;
- (void)setPreMessageIds:(id)arg0;
- (void)loadHistoryMessagesWithCurrentNewMessages:(id)arg0 completion:(id /* block */)arg1;
- (void)messageLoadProcessWithCurrentNewMessages:(id)arg0 error:(id)arg1 completion:(id /* block */)arg2;
- (id)messageDataQueue;
- (id)preMessageIds;
- (void)loadHistoryMessagesWithCompletion:(id /* block */)arg0;
- (void)setMessageDataQueue:(id)arg0;
- (id)initWithBizConversationID:(id)arg0 options:(id)arg1 belongeClientConfig:(id)arg2;
- (id)clientConfig;
- (void).cxx_destruct;
- (id)conversationID;
- (void)setClientConfig:(id)arg0;
- (void)setConversationID:(id)arg0;
- (void)setFirstLoad:(BOOL)arg0;
- (BOOL)firstLoad;

@end