//
//     Generated by private class-dump
//

@class NSString, TIMXPBNConversationSettingInfo;

@interface TIMXPBNUpsertConversationSettingExtInfoResponseBody : GPBMessage

@property (retain, nonatomic) TIMXPBNConversationSettingInfo *settingInfo;
@property (nonatomic) BOOL hasSettingInfo;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) long long checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (copy, nonatomic) NSString *checkMessage;
@property (nonatomic) BOOL hasCheckMessage;
@property (copy, nonatomic) NSString *extraInfo;
@property (nonatomic) BOOL hasExtraInfo;

+ (id)descriptor;

@end
