//
//     Generated by private class-dump
//

@class NSString, TIMXPBNSubConversation;

@interface TIMXPBNCreateSubConversationResponseBody : GPBMessage

@property (retain, nonatomic) TIMXPBNSubConversation *subConversation;
@property (nonatomic) BOOL hasSubConversation;
@property (nonatomic) long long checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (copy, nonatomic) NSString *checkMessage;
@property (nonatomic) BOOL hasCheckMessage;
@property (copy, nonatomic) NSString *extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;

+ (id)descriptor;

@end
