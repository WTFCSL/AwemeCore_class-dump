//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, GPBInt64Array, NSMutableArray;

@interface TIMXPBNCreateConversationV2RequestBody : GPBMessage

@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (retain, nonatomic) GPBInt64Array *participantsArray;
@property (readonly, nonatomic) unsigned long long participantsArray_Count;
@property (nonatomic) BOOL persistent;
@property (nonatomic) BOOL hasPersistent;
@property (copy, nonatomic) NSString *idempotentId;
@property (nonatomic) BOOL hasIdempotentId;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (copy, nonatomic) NSString *avatarURL;
@property (nonatomic) BOOL hasAvatarURL;
@property (copy, nonatomic) NSString *description_p;
@property (nonatomic) BOOL hasDescription_p;
@property (nonatomic) BOOL isSuperLargeGroup;
@property (nonatomic) BOOL hasIsSuperLargeGroup;
@property (copy, nonatomic) NSString *notice;
@property (nonatomic) BOOL hasNotice;
@property (retain, nonatomic) NSMutableDictionary *bizExt;
@property (readonly, nonatomic) unsigned long long bizExt_Count;
@property (copy, nonatomic) NSString *unuseField1;
@property (nonatomic) BOOL hasUnuseField1;
@property (retain, nonatomic) NSMutableArray *participantsObjArray;
@property (readonly, nonatomic) unsigned long long participantsObjArray_Count;

+ (id)descriptor;

@end
