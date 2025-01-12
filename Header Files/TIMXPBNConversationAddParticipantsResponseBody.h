//
//     Generated by private class-dump
//

@class GPBInt64BoolDictionary, NSString, TIMXPBNConversationInfoV2, GPBInt64Array, NSMutableArray;

@interface TIMXPBNConversationAddParticipantsResponseBody : GPBMessage

@property (retain, nonatomic) GPBInt64Array *successParticipantsArray;
@property (readonly, nonatomic) unsigned long long successParticipantsArray_Count;
@property (retain, nonatomic) GPBInt64Array *failedParticipantsArray;
@property (readonly, nonatomic) unsigned long long failedParticipantsArray_Count;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (copy, nonatomic) NSString *extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
@property (nonatomic) long long checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (copy, nonatomic) NSString *checkMessage;
@property (nonatomic) BOOL hasCheckMessage;
@property (retain, nonatomic) NSMutableArray *secSuccessParticipantsArray;
@property (readonly, nonatomic) unsigned long long secSuccessParticipantsArray_Count;
@property (retain, nonatomic) NSMutableArray *secFailedParticipantsArray;
@property (readonly, nonatomic) unsigned long long secFailedParticipantsArray_Count;
@property (retain, nonatomic) TIMXPBNConversationInfoV2 *conversation;
@property (nonatomic) BOOL hasConversation;
@property (nonatomic) long long nowLastConversationIndex;
@property (nonatomic) BOOL hasNowLastConversationIndex;
@property (retain, nonatomic) GPBInt64BoolDictionary *blockConversationWhiteList;
@property (readonly, nonatomic) unsigned long long blockConversationWhiteList_Count;

+ (id)descriptor;

@end
