//
//     Generated by private class-dump
//

@class NSString, GPBInt64Int64Dictionary;

@interface ECOMTIMPBNMarkMsgUnreadCountReportRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) long long totalUnreadCount;
@property (nonatomic) BOOL hasTotalUnreadCount;
@property (retain, nonatomic) GPBInt64Int64Dictionary *tagUnreadCount;
@property (readonly, nonatomic) unsigned long long tagUnreadCount_Count;

+ (id)descriptor;

@end
