//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, TIMXPBNParticipantsPage;

@interface TIMXPBNSubConversation : GPBMessage

@property (nonatomic) long long parentConShortId;
@property (nonatomic) BOOL hasParentConShortId;
@property (nonatomic) long long subConShortId;
@property (nonatomic) BOOL hasSubConShortId;
@property (copy, nonatomic) NSString *parentConId;
@property (nonatomic) BOOL hasParentConId;
@property (copy, nonatomic) NSString *subConId;
@property (nonatomic) BOOL hasSubConId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) int inboxType;
@property (nonatomic) BOOL hasInboxType;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (copy, nonatomic) NSString *bizStatus;
@property (nonatomic) BOOL hasBizStatus;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;
@property (nonatomic) long long createTime;
@property (nonatomic) BOOL hasCreateTime;
@property (nonatomic) long long modifyTime;
@property (nonatomic) BOOL hasModifyTime;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) TIMXPBNParticipantsPage *firstPageParticipants;
@property (nonatomic) BOOL hasFirstPageParticipants;

+ (id)descriptor;

@end
