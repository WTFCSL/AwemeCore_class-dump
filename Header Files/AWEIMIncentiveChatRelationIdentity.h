//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMIncentiveChatRelationIdentity : NSObject <WCTTableCoding> {
    NSString *_userID;
    unsigned long long _interactionType;
    unsigned long long _inviteType;
    long long _lastUpdateTime;
    NSString *_relationID;
    long long _relationLastUpdateTime;
}

@property (copy, nonatomic) NSString *userID;
@property (nonatomic) unsigned long long interactionType;
@property (nonatomic) unsigned long long inviteType;
@property (nonatomic) long long lastUpdateTime;
@property (copy, nonatomic) NSString *relationID;
@property (nonatomic) long long relationLastUpdateTime;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)inviteType;
+ (const void *)relationID;
+ (const void *)relationLastUpdateTime;
+ (const void *)userID;
+ (id)tableName;
+ (const void *)lastUpdateTime;
+ (const void *)interactionType;

- (unsigned long long)inviteType;
- (id)initWithDictionary:(id)arg0 relationID:(id)arg1 relationLastUpdateTime:(long long)arg2;
- (id)relationID;
- (void)setRelationID:(id)arg0;
- (long long)relationLastUpdateTime;
- (void)setInviteType:(unsigned long long)arg0;
- (void)setRelationLastUpdateTime:(long long)arg0;
- (id)userID;
- (long long)lastUpdateTime;
- (unsigned long long)interactionType;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (void)setLastUpdateTime:(long long)arg0;
- (BOOL)isEqual:(id)arg0;
- (void)setInteractionType:(unsigned long long)arg0;

@end
