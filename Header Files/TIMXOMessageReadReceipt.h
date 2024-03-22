//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableSet, TIMXSDKInstance;
@protocol TIMXConversationModelProtocol;

@interface TIMXOMessageReadReceipt : NSObject <IESIMSDKMessageReadReceiptFetcher, TIMXMessageStoreChangesObserver> {
    BOOL _needReloadLoadMinIndex;
    BOOL _isFlushing;
    TIMXSDKInstance *_r;
    NSString *_conversationID;
    id<TIMXConversationModelProtocol> _conversation;
    NSMutableDictionary *_readReceiptItems;
    NSMutableDictionary *_messageIndexOrderMap;
    NSMutableDictionary *_lastResult;
    long long _reloadCount;
    NSMutableSet *_activeTokens;
    double _lastFetchTimestamp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) id<TIMXConversationModelProtocol> conversation;
@property (retain, nonatomic) NSMutableDictionary *readReceiptItems;
@property (retain, nonatomic) NSMutableDictionary *messageIndexOrderMap;
@property (retain, nonatomic) NSMutableDictionary *lastResult;
@property (nonatomic) long long reloadCount;
@property (retain, nonatomic) NSMutableSet *activeTokens;
@property (nonatomic) BOOL needReloadLoadMinIndex;
@property (nonatomic) BOOL isFlushing;
@property (nonatomic) double lastFetchTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootObject:(id)arg0 conversationID:(id)arg1;
- (void)onMessagesCreated:(id)arg0 belongingConversationMap:(id)arg1 reason:(id)arg2;
- (void)onConversationsUpdated:(id)arg0;
- (id)reloadReadReceiptForMessage:(id)arg0 syncFromServer:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)cancelReloadReadReceiptWithToken:(id)arg0;
- (double)lastFetchTimestamp;
- (void)setLastFetchTimestamp:(double)arg0;
- (void)reloadReadReceiptItemsFromDatabase;
- (void)updateReceiptItemsWithMinIndexes:(id)arg0;
- (void)fetchMinIndexOfParticipantsWithCompletion:(id /* block */)arg0;
- (id)readReceiptItems;
- (void)setReadReceiptItems:(id)arg0;
- (id)messageIndexOrderMap;
- (void)setNeedFlushData;
- (void)setNeedReloadLoadMinIndex:(BOOL)arg0;
- (void)__OnMessagesCreated:(id)arg0 belongingConversationMap:(id)arg1;
- (void)updateReadIndex:(long long)arg0 andReadOrder:(long long)arg1 ofParticipant:(long long)arg2;
- (BOOL)isFlushing;
- (void)setIsFlushing:(BOOL)arg0;
- (id)activeTokens;
- (void)__reloadReadReceiptForMessage:(id)arg0 syncFromServer:(BOOL)arg1 withToken:(id)arg2 completion:(id /* block */)arg3;
- (long long)reloadCount;
- (void)setReloadCount:(long long)arg0;
- (void)updateReceiptItemsWithReadIndexes:(id)arg0;
- (void)calculateResultForMessage:(id)arg0 finishedParticipantIDs:(id *)arg1 expectedParticipantIDs:(id *)arg2 useCache:(BOOL)arg3;
- (BOOL)needReloadLoadMinIndex;
- (void)fetchReadIndexOfParticipantsWithCompletion:(id /* block */)arg0;
- (void)setMessageIndexOrderMap:(id)arg0;
- (void)setActiveTokens:(id)arg0;
- (void).cxx_destruct;
- (id)conversationID;
- (id)conversation;
- (void)setConversationID:(id)arg0;
- (void)setConversation:(id)arg0;
- (id)lastResult;
- (void)setLastResult:(id)arg0;

@end
