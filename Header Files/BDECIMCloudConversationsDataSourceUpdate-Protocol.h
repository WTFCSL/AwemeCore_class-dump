//
//     Generated by private class-dump
//

@class NSArray;

@protocol BDECIMCloudConversationsDataSourceUpdate <NSObject>

@property (retain, nonatomic) NSArray *deleteConversationIdentifiers;
@property (retain, nonatomic) NSArray *addConversationIdentifiers;
@property (retain, nonatomic) NSArray *currentConversationIdentifiers;

- (id)currentConversationIdentifiers;
- (id)deleteConversationIdentifiers;
- (void)setDeleteConversationIdentifiers:(id)arg0;
- (id)addConversationIdentifiers;
- (void)setAddConversationIdentifiers:(id)arg0;
- (void)setCurrentConversationIdentifiers:(id)arg0;

@end
