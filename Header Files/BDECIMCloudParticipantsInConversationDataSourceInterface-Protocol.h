//
//     Generated by private class-dump
//

@class NSString, NSArray;
@protocol BDECIMCloudParticipantsInConversationDataSourceDelegate;

@protocol BDECIMCloudParticipantsInConversationDataSourceInterface <NSObject>

@property (weak, nonatomic) id<BDECIMCloudParticipantsInConversationDataSourceDelegate> delegate;
@property (readonly, nonatomic) NSString *conversationID;
@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic) NSArray *admParticipants;

- (id)initWithConversationID:(id)arg0 config:(id)arg1;
- (void)fetchParticipantsAlias:(id)arg0 secParticipants:(id)arg1 completion:(id /* block */)arg2;
- (id)admParticipants;
- (id)participants;
- (id)conversationID;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
