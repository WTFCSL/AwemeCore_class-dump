//
//     Generated by private class-dump
//

@class GPBInt64Array, TIMXPBNVoipInfo, NSString;

@interface TIMXPBNCallVoipResponseBody : GPBMessage

@property (retain, nonatomic) TIMXPBNVoipInfo *info;
@property (nonatomic) BOOL hasInfo;
@property (retain, nonatomic) GPBInt64Array *calleeIdsArray;
@property (readonly, nonatomic) unsigned long long calleeIdsArray_Count;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (copy, nonatomic) NSString *extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
@property (nonatomic) long long checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (copy, nonatomic) NSString *checkMessage;
@property (nonatomic) BOOL hasCheckMessage;
@property (copy, nonatomic) NSString *refChannelId;
@property (nonatomic) BOOL hasRefChannelId;
@property (nonatomic) int voipMode;
@property (nonatomic) BOOL hasVoipMode;

+ (id)descriptor;

@end
