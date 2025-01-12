//
//     Generated by private class-dump
//

@class NSString, BDECPigeonMessagesInConversationDataSource, AWEPOIIMPigeonConversation;

@interface AWEPOIIMCoversationMessagesDataSource : NSObject {
    BOOL _hasMoreHistoryMessages;
    NSString *_bizConversationID;
    AWEPOIIMPigeonConversation *_conversation;
    id /* block */ _dataSourceUpdateCallback;
    id /* block */ _dataSourceInsertCallback;
    id /* block */ _conversationUpdateCallback;
    id /* block */ _dataSourceReadUpdateCallback;
    id /* block */ _readMessageChangeCallback;
    BDECPigeonMessagesInConversationDataSource *_dataSource;
}

@property (weak, nonatomic) AWEPOIIMPigeonConversation *conversation;
@property (copy, nonatomic) NSString *bizConversationID;
@property (nonatomic) BOOL hasMoreHistoryMessages;
@property (retain, nonatomic) BDECPigeonMessagesInConversationDataSource *dataSource;
@property (copy, nonatomic) id /* block */ dataSourceUpdateCallback;
@property (copy, nonatomic) id /* block */ dataSourceInsertCallback;
@property (copy, nonatomic) id /* block */ conversationUpdateCallback;
@property (copy, nonatomic) id /* block */ dataSourceReadUpdateCallback;
@property (copy, nonatomic) id /* block */ readMessageChangeCallback;

+ (id)convertPigeonMessages:(id)arg0 inConversation:(id)arg1;
+ (id)convertPigeonMessage:(id)arg0 inConversation:(id)arg1;

- (id)bizConversationID;
- (id /* block */)readMessageChangeCallback;
- (void)setReadMessageChangeCallback:(id /* block */)arg0;
- (void)setBizConversationID:(id)arg0;
- (BOOL)hasMoreHistoryMessages;
- (id /* block */)conversationUpdateCallback;
- (void)loadHistoryMessagesWithCompletion:(id /* block */)arg0;
- (void)setConversationUpdateCallback:(id /* block */)arg0;
- (id)initDataSourceForConversation:(id)arg0 options:(id)arg1;
- (void)setDataSourceReadUpdateCallback:(id /* block */)arg0;
- (void)setDataSourceInsertCallback:(id /* block */)arg0;
- (void)setDataSourceUpdateCallback:(id /* block */)arg0;
- (void)bindDataSourceCallbackBlock;
- (void)setHasMoreHistoryMessages:(BOOL)arg0;
- (id /* block */)dataSourceInsertCallback;
- (id /* block */)dataSourceUpdateCallback;
- (id /* block */)dataSourceReadUpdateCallback;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:(id)arg0;

@end
