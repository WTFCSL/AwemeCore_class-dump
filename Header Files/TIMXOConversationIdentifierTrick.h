//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance;

@interface TIMXOConversationIdentifierTrick : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)otherUserFor1to1ChatConversationIdentifier:(id)arg0;
- (id)conversationIDFor1to1ChatWithOtherUser:(long long)arg0 inInbox:(int)arg1;
- (BOOL)dbExistConversationWithIdentifier:(id)arg0;
- (id)syncCreate1to1ConversationWithUser:(long long)arg0 inInbox:(int)arg1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)arg0;

@end
