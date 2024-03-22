//
//     Generated by private class-dump
//

@class NSString, GPBInt64Array;

@interface ECOMTIMPBNGetConversationInfoV2RequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) BOOL needCoreinfoRelated;
@property (nonatomic) BOOL hasNeedCoreinfoRelated;
@property (nonatomic) BOOL needUserinfoRelated;
@property (nonatomic) BOOL hasNeedUserinfoRelated;
@property (retain, nonatomic) GPBInt64Array *userIdsArray;
@property (readonly, nonatomic) unsigned long long userIdsArray_Count;
@property (nonatomic) BOOL needSettinginfoRelated;
@property (nonatomic) BOOL hasNeedSettinginfoRelated;
@property (nonatomic) BOOL needLastConvindexV2;
@property (nonatomic) BOOL hasNeedLastConvindexV2;

+ (id)descriptor;

@end
