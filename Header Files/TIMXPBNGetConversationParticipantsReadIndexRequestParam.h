//
//     Generated by private class-dump
//

@class NSString, GPBInt64Array;

@interface TIMXPBNGetConversationParticipantsReadIndexRequestParam : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (retain, nonatomic) GPBInt64Array *userIdsArray;
@property (readonly, nonatomic) unsigned long long userIdsArray_Count;

+ (id)descriptor;

@end