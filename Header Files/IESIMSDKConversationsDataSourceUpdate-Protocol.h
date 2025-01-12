//
//     Generated by private class-dump
//

@class NSArray;

@protocol IESIMSDKConversationsDataSourceUpdate <NSObject>

@property (readonly, nonatomic) NSArray *beforeUpdateConversationIdentifiers;
@property (readonly, nonatomic) NSArray *afterUpdateConversationIdentifiers;
@property (readonly, nonatomic) NSArray *deleteConversationIdentifiers;
@property (readonly, nonatomic) NSArray *addConversationIdentifiers;
@property (readonly, copy, nonatomic) NSArray *fetchConversationsMonitorArray;

- (id)deleteConversationIdentifiers;
- (id)addConversationIdentifiers;
- (id)beforeUpdateConversationIdentifiers;
- (id)calcDiffs;
- (id)afterUpdateConversationIdentifiers;
- (id)fetchConversationsMonitorArray;

@end
