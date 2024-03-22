//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_semaphore;

@interface TIMXSendMessageCacheManager : NSObject <TIMXInstanceScopeSingleton, TIMXSendMessageCacheManagerProtocol> {
    TIMXSDKInstance *_r;
    NSMutableDictionary *_insertMessageCompletionDict;
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *insertMessageCompletionDict;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearMessageWithConversationId:(id)arg0 messageID:(id)arg1;
- (id)queryTimoMessageWithConversationId:(id)arg0 messageID:(id)arg1;
- (void)cacheMessageWithMessage:(id)arg0;
- (id)queryOriginalMessageBeingSentWithConversationId:(id)arg0 messageID:(id)arg1;
- (id)insertMessageCompletionDict;
- (id)queryOriginalMessageBeingSentWithConversationIdCore:(id)arg0 messageID:(id)arg1;
- (void)setInsertMessageCompletionDict:(id)arg0;
- (void).cxx_destruct;
- (id)lock;
- (void)setLock:(id)arg0;
- (id)initWithRootObject:(id)arg0;

@end