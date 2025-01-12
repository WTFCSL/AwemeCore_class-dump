//
//     Generated by private class-dump
//

@class TIMXNewMessageStore, NSString, TIMXSDKInstance;

@interface TIMXECOMMessageNewStore : NSObject <TIMXInstanceScopeSingleton> {
    TIMXNewMessageStore *_store;
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXNewMessageStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sharedWritableQueue;
- (BOOL)insertMessagesAndUpdateConversation:(id)arg0 conversationExtraMap:(id)arg1 files:(id)arg2 inbox:(int)arg3 reason:(id)arg4;
- (void)updateMessageExtWithMessage:(id)arg0 reason:(id)arg1;
- (void)updateMessagePropertyWithMessage:(id)arg0 reason:(id)arg1;
- (BOOL)updateConversationWithMessage:(id)arg0 conversationExtraMap:(id)arg1 inbox:(int)arg2 reason:(id)arg3;
- (id)conversationDatabase;
- (void)dealWithRecallWhenUpdateMessageExtWithMessage:(id)arg0 savedMessage:(id)arg1 update:(id)arg2 reason:(id)arg3;
- (void)updateMessageReferAndMention:(id)arg0 update:(id)arg1;
- (void)updateMessage:(id)arg0 withRemoteMessage:(id)arg1 update:(id)arg2;
- (id)getConversationUpdatedAtFromCoreInfoOrSettingInfoWithMessage:(id)arg0 conversation:(id)arg1;
- (BOOL)insertMessages:(id)arg0 files:(id)arg1 inbox:(int)arg2 reason:(id)arg3;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;
- (id)initWithRootObject:(id)arg0;

@end
