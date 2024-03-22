//
//     Generated by private class-dump
//

@class NSString, NSArray, TIMXSDKInstance, NSObject;
@protocol TIMXMessageStoreProtocol, OS_dispatch_queue;

@interface TIMXMessageChecker : NSObject <TIMXMessageStoreChangesObserver> {
    NSString *_conversationID;
    id<TIMXMessageStoreProtocol> _db;
    NSArray *_checkMessages;
    NSObject<OS_dispatch_queue> *_checkQeueue;
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSString *conversationID;
@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (retain, nonatomic) NSArray *checkMessages;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *checkQeueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootObject:(id)arg0 conversationID:(id)arg1;
- (void)onConversationCheckMessageEnd:(id)arg0 messageIdentifiers:(id)arg1;
- (long long)getCurrentTimeInterval;
- (void)trackCheckMessageWithConversation:(id)arg0 duration:(long long)arg1 preCheckLeakCount:(long long)arg2 leakCount:(long long)arg3 arrRepairedID:(id)arg4;
- (void)setCheckMessages:(id)arg0;
- (void)setCheckQeueue:(id)arg0;
- (id)checkQeueue;
- (void)onConversationCheckMessageEnd;
- (id)localMessagesWithCheckInfoArray:(id)arg0 filterMsgIdSet:(id)arg1 convMinIndex:(long long)arg2;
- (id)checkMessages;
- (void)checkInfoMessageIfNeeded;
- (void)checkInfoMessageOldVersionWithConversationNew:(id)arg0 startTime:(long long)arg1;
- (void)checkInfoMessageOldVersionWithConversation:(id)arg0 startTime:(long long)arg1;
- (void)p_async_on_handle_queue:(id /* block */)arg0;
- (void)setDb:(id)arg0;
- (id)db;
- (void).cxx_destruct;
- (id)conversationID;
- (void)setConversationID:(id)arg0;

@end
