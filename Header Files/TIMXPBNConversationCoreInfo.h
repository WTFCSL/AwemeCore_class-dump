//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface TIMXPBNConversationCoreInfo : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long infoVersion;
@property (nonatomic) BOOL hasInfoVersion;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL hasDesc;
@property (copy, nonatomic) NSString *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) int inboxType;
@property (nonatomic) BOOL hasInboxType;
@property (copy, nonatomic) NSString *notice;
@property (nonatomic) BOOL hasNotice;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;
@property (nonatomic) long long owner;
@property (nonatomic) BOOL hasOwner;
@property (copy, nonatomic) NSString *secOwner;
@property (nonatomic) BOOL hasSecOwner;
@property (nonatomic) int blockStatus;
@property (nonatomic) BOOL hasBlockStatus;
@property (nonatomic) BOOL blockNormalOnly;
@property (nonatomic) BOOL hasBlockNormalOnly;
@property (nonatomic) int mode;
@property (nonatomic) BOOL hasMode;
@property (nonatomic) long long creatorUid;
@property (nonatomic) BOOL hasCreatorUid;
@property (nonatomic) long long createTime;
@property (nonatomic) BOOL hasCreateTime;
@property (nonatomic) int blockSource;
@property (nonatomic) BOOL hasBlockSource;
@property (nonatomic) long long leftBlockTime;
@property (nonatomic) BOOL hasLeftBlockTime;

+ (id)descriptor;

@end