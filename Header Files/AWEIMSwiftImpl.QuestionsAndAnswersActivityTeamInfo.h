//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMSwiftImpl.QuestionsAndAnswersActivityTeamInfo : MTLModel <MTLJSONSerializing> {
    void /* unknown type, empty encoding */ teamId;
    void /* unknown type, empty encoding */ conversationShortId;
    void /* unknown type, empty encoding */ activityId;
    void /* unknown type, empty encoding */ createTimeStamp;
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ creatorUid;
    void /* unknown type, empty encoding */ users;
    void /* unknown type, empty encoding */ match;
    void /* unknown type, empty encoding */ maxWaitingTime;
    void /* unknown type, empty encoding */ version;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ teamId;
@property (nonatomic, retain) void /* unknown type, empty encoding */ conversationShortId;
@property (nonatomic, copy) NSString *activityId;
@property (nonatomic, retain) void /* unknown type, empty encoding */ createTimeStamp;
@property (nonatomic) void /* unknown type, empty encoding */ status;
@property (nonatomic, retain) void /* unknown type, empty encoding */ creatorUid;
@property (nonatomic, retain) void /* unknown type, empty encoding */ users;
@property (nonatomic, retain) void /* unknown type, empty encoding */ match;
@property (nonatomic, retain) void /* unknown type, empty encoding */ maxWaitingTime;
@property (nonatomic, retain) void /* unknown type, empty encoding */ version;

+ (id)usersJSONTransformer;
+ (id)matchJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)conversationShortId;
- (void)setConversationShortId:(id)arg0;
- (id)createTimeStamp;
- (void)setCreateTimeStamp:(id)arg0;
- (id)creatorUid;
- (void)setCreatorUid:(id)arg0;
- (id)maxWaitingTime;
- (void)setMaxWaitingTime:(id)arg0;
- (id)users;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (long long)status;
- (void)setTeamId:(id)arg0;
- (id)match;
- (id)version;
- (void)setStatus:(long long)arg0;
- (id)initWithCoder:(id)arg0;
- (id)teamId;
- (void)setMatch:(id)arg0;
- (void)setUsers:(id)arg0;
- (id)activityId;
- (void)setActivityId:(id)arg0;

@end
