//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMIncentiveChatRelationProgress : NSObject <WCTTableCoding> {
    BOOL _hasCompleted;
    NSString *_relationID;
    NSString *_conversationID;
    NSString *_conversationShortID;
    long long _overallProgress;
    long long _targetProgress;
    long long _version;
    long long _msgCreateTime;
    unsigned long long _bonusType;
    unsigned long long _chatType;
}

@property (copy, nonatomic) NSString *relationID;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *conversationShortID;
@property (nonatomic) long long overallProgress;
@property (nonatomic) long long targetProgress;
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) long long version;
@property (nonatomic) long long msgCreateTime;
@property (nonatomic) unsigned long long bonusType;
@property (nonatomic) unsigned long long chatType;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)conversationShortID;
+ (const void *)bonusType;
+ (const void *)relationID;
+ (const void *)msgCreateTime;
+ (id)tableName;
+ (const void *)conversationID;
+ (const void *)version;
+ (const void *)hasCompleted;
+ (const void *)overallProgress;
+ (const void *)targetProgress;

- (unsigned long long)chatType;
- (void)setConversationShortID:(id)arg0;
- (id)conversationShortID;
- (void)setChatType:(unsigned long long)arg0;
- (unsigned long long)bonusType;
- (id)relationID;
- (void)setRelationID:(id)arg0;
- (long long)msgCreateTime;
- (void)setOverallProgress:(long long)arg0;
- (void)setMsgCreateTime:(long long)arg0;
- (void)setBonusType:(unsigned long long)arg0;
- (void)setVersion:(long long)arg0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;
- (id)conversationID;
- (long long)version;
- (BOOL)isEqual:(id)arg0;
- (void)setConversationID:(id)arg0;
- (void)setHasCompleted:(BOOL)arg0;
- (BOOL)hasCompleted;
- (long long)overallProgress;
- (long long)targetProgress;
- (void)setTargetProgress:(long long)arg0;

@end