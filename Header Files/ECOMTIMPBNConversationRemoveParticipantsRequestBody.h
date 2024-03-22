//
//     Generated by private class-dump
//

@class NSString, GPBInt64Array, NSMutableDictionary;

@interface ECOMTIMPBNConversationRemoveParticipantsRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (retain, nonatomic) GPBInt64Array *participantsArray;
@property (readonly, nonatomic) unsigned long long participantsArray_Count;
@property (retain, nonatomic) NSMutableDictionary *bizExt;
@property (readonly, nonatomic) unsigned long long bizExt_Count;

+ (id)descriptor;

@end
