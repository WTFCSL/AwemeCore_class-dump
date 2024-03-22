//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance;

@interface TIMXOMessageNotifier : NSObject <TIMXStartUpTaskProtocol, TIMXMessageStoreChangesObserver, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)arg0;

- (void)onConversationsDeleted:(id)arg0;
- (void)onConversationCleared:(id)arg0;
- (id)__messageWithIdentifier:(id)arg0;
- (void)onMessagesCreated:(id)arg0 belongingConversationMap:(id)arg1 reason:(id)arg2 context:(id)arg3;
- (void)onMessagesUpdated:(id)arg0 belongingConversationMap:(id)arg1 updateReasonMap:(id)arg2;
- (void)onMessagesDeleted:(id)arg0 belongingConversationMap:(id)arg1 reason:(id)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)arg0;

@end