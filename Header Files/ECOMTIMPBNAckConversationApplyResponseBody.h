//
//     Generated by private class-dump
//

@class ECOMTIMPBNConversationApplyInfo, NSString;

@interface ECOMTIMPBNAckConversationApplyResponseBody : GPBMessage

@property (retain, nonatomic) ECOMTIMPBNConversationApplyInfo *applyInfo;
@property (nonatomic) BOOL hasApplyInfo;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) long long checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (copy, nonatomic) NSString *checkMessage;
@property (nonatomic) BOOL hasCheckMessage;

+ (id)descriptor;

@end