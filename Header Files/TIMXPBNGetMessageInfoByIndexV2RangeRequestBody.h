//
//     Generated by private class-dump
//

@class NSString;

@interface TIMXPBNGetMessageInfoByIndexV2RangeRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) long long minIndexInConversationV2;
@property (nonatomic) BOOL hasMinIndexInConversationV2;
@property (nonatomic) long long maxIndexInConversationV2;
@property (nonatomic) BOOL hasMaxIndexInConversationV2;
@property (nonatomic) int direction;
@property (nonatomic) BOOL hasDirection;

+ (id)descriptor;

@end
