//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface TIMXPBNUpdateConversationAuditSwitchRequestBody : GPBMessage

@property (nonatomic) long long convShortId;
@property (nonatomic) BOOL hasConvShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) BOOL switchStatus;
@property (nonatomic) BOOL hasSwitchStatus;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end
