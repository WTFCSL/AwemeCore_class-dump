//
//     Generated by private class-dump
//

@class GPBInt64Array, NSMutableDictionary, NSString;

@interface TIMXPBNSendConversationApplyRequestBody : GPBMessage

@property (nonatomic) long long convShortId;
@property (nonatomic) BOOL hasConvShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (retain, nonatomic) NSMutableDictionary *bizExt;
@property (readonly, nonatomic) unsigned long long bizExt_Count;
@property (nonatomic) long long inviteUserId;
@property (nonatomic) BOOL hasInviteUserId;
@property (retain, nonatomic) GPBInt64Array *invitedUserIdsArray;
@property (readonly, nonatomic) unsigned long long invitedUserIdsArray_Count;
@property (copy, nonatomic) NSString *applyReason;
@property (nonatomic) BOOL hasApplyReason;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end
