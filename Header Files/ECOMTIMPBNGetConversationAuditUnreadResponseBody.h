//
//     Generated by private class-dump
//

@class ECOMTIMPBNConversationApplyInfo, NSMutableDictionary;

@interface ECOMTIMPBNGetConversationAuditUnreadResponseBody : GPBMessage

@property (nonatomic) long long unreadCount;
@property (nonatomic) BOOL hasUnreadCount;
@property (retain, nonatomic) ECOMTIMPBNConversationApplyInfo *lastApplyInfo;
@property (nonatomic) BOOL hasLastApplyInfo;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end
