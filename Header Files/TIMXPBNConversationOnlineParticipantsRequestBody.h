//
//     Generated by private class-dump
//

@class NSString;

@interface TIMXPBNConversationOnlineParticipantsRequestBody : GPBMessage

@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasCursor;
@property (nonatomic) long long limit;
@property (nonatomic) BOOL hasLimit;
@property (nonatomic) int convType;
@property (nonatomic) BOOL hasConvType;
@property (copy, nonatomic) NSString *markType;
@property (nonatomic) BOOL hasMarkType;

+ (id)descriptor;

@end