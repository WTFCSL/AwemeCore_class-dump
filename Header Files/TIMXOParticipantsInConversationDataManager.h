//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance;

@interface TIMXOParticipantsInConversationDataManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)participantsListOfParticipantsInAnyLocalConversationWithUidList:(id)arg0;
- (id)participantsListOfConversationsContainAnyUserInUidList:(id)arg0;
- (void)asyncGetParticipantWithConversationId:(id)arg0 userID:(id)arg1 completion:(id /* block */)arg2;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)arg0;

@end
