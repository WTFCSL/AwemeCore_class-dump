//
//     Generated by private class-dump
//

@class NSString, GPBInt64Array;

@interface TIMXPBNGetConversationParticipantsReadIndexV3RequestBody : GPBMessage

@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (retain, nonatomic) GPBInt64Array *userIdsArray;
@property (readonly, nonatomic) unsigned long long userIdsArray_Count;

+ (id)descriptor;

@end