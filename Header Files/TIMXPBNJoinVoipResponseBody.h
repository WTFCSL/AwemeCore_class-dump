//
//     Generated by private class-dump
//

@class NSString, TIMXPBNVoipInfo;

@interface TIMXPBNJoinVoipResponseBody : GPBMessage

@property (retain, nonatomic) TIMXPBNVoipInfo *info;
@property (nonatomic) BOOL hasInfo;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) long long checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (copy, nonatomic) NSString *checkMessage;
@property (nonatomic) BOOL hasCheckMessage;

+ (id)descriptor;

@end
