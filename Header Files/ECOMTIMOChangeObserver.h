//
//     Generated by private class-dump
//

@class ECOMTIMMulticastDelegate, NSString, ECOMTIMThreadSafeMutableDictionary;
@protocol ECOMTIMMessageStoreProtocol;

@interface ECOMTIMOChangeObserver : NSObject <ECOMTIMStartUpTaskProtocol, ECOMTIMMessageStoreChangesObserver, ECOMTIMNotifierDelegate> {
    ECOMTIMMulticastDelegate *_multicastDelegate;
    NSString *_token;
    id<ECOMTIMMessageStoreProtocol> _db;
    ECOMTIMThreadSafeMutableDictionary *_pendingNotifyMessages;
}

@property (retain, nonatomic) ECOMTIMMulticastDelegate *multicastDelegate;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) id<ECOMTIMMessageStoreProtocol> db;
@property (retain, nonatomic) ECOMTIMThreadSafeMutableDictionary *pendingNotifyMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (id)sharedInstance;
+ (void)startUp;

- (id)addWeakChangeObserver:(id)arg0;
- (void)conversationDidDissolved:(id)arg0;
- (void)onSilentMembers:(id)arg0 silentStatus:(long long)arg1 silentMembers:(id)arg2;
- (void)onSilentConversation:(id)arg0 silentStatus:(long long)arg1;
- (void)onStrangerConversationChange:(id)arg0;
- (void)newP2PMessageNotifyConversation:(id)arg0 message:(id)arg1;
- (void)onDatabaseDamageWithError:(id)arg0 accountID:(long long)arg1;
- (void)userDidLogin:(id)arg0;
- (void)setMulticastDelegate:(id)arg0;
- (id)multicastDelegate;
- (void)userDidLogout:(id)arg0;
- (void)willInsertNewMessagesWithMessageIdentifiers:(id)arg0 belongingConversationMap:(id)arg1;
- (void)onMessagesCreated:(id)arg0 belongingConversationMap:(id)arg1 reason:(id)arg2;
- (void)onMessagesUpdated:(id)arg0 belongingConversationMap:(id)arg1;
- (void)onMessagesNewPropertiesUpdated:(id)arg0 belongingConversationMap:(id)arg1 messageOldPropertiesMap:(id)arg2 messageNewPropertiesMap:(id)arg3 reason:(id)arg4;
- (void)onConversationsUpdated:(id)arg0;
- (void)onFilesUpdated:(id)arg0;
- (void)onStrangerConversationUpdated:(id)arg0;
- (void)setPendingNotifyMessages:(id)arg0;
- (void)userWillLogout:(id)arg0;
- (id)pendingNotifyMessages;
- (unsigned long long)convertReasonStringToReason:(id)arg0;
- (void)setDb:(id)arg0;
- (id)init;
- (id)db;
- (void).cxx_destruct;
- (void)setToken:(id)arg0;
- (id)token;
- (void)dealloc;
- (void)setUp;
- (void)removeChangeObserverWithIdentifier:(id)arg0;

@end
