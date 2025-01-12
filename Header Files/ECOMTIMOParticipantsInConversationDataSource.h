//
//     Generated by private class-dump
//

@class NSString, NSArray;
@protocol ECOMTIMOParticipantsInConversationDataSourceDelegate;

@interface ECOMTIMOParticipantsInConversationDataSource : NSObject <ECOMTIMMessageStoreChangesObserver> {
    NSString *_conversationID;
    NSArray *_participants;
    NSArray *_admParticipants;
    id<ECOMTIMOParticipantsInConversationDataSourceDelegate> _delegate;
}

@property (retain, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSArray *participants;
@property (retain, nonatomic) NSArray *admParticipants;
@property (weak, nonatomic) id<ECOMTIMOParticipantsInConversationDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchParticipantsAlias:(id)arg0 secParticipants:(id)arg1 completion:(id /* block */)arg2;
- (id)admParticipants;
- (void)onParticipantsInConversationChanged:(id)arg0;
- (void)fetchAllAdministrator;
- (void)setAdmParticipants:(id)arg0;
- (void)setParticipants:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)participants;
- (id)conversationID;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setConversationID:(id)arg0;
- (id)initWithConversationID:(id)arg0;

@end
