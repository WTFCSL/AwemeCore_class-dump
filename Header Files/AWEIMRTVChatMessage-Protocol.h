//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@protocol AWEIMRTVChatMessage <NSObject>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSString *sender;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *preferredSentIMConversationID;
@property (readonly, copy, nonatomic) NSDictionary *content;

- (id)preferredSentIMConversationID;
- (id)sender;
- (long long)status;
- (long long)type;
- (id)content;
- (id)conversationID;
- (id)identifier;

@optional

- (long long)orderIndex;

@end