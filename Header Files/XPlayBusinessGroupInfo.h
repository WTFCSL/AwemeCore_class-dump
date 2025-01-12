//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface XPlayBusinessGroupInfo : NSObject <XPlayBusinessGroupInfo> {
    BOOL isJoined;
    int memberCount;
    int maxMemberCount;
    int applyStatus;
    NSString *groupId;
    NSString *groupName;
    NSString *groupDescription;
    NSString *avatarUri;
    NSArray *condition;
    NSArray *tags;
}

@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupDescription;
@property (copy, nonatomic) NSString *avatarUri;
@property (nonatomic) BOOL isJoined;
@property (nonatomic) int applyStatus;
@property (copy, nonatomic) NSArray *condition;
@property (copy, nonatomic) NSArray *tags;
@property (nonatomic) int memberCount;
@property (nonatomic) int maxMemberCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)avatarUri;
- (void)setAvatarUri:(id)arg0;
- (BOOL)isJoined;
- (void)setIsJoined:(BOOL)arg0;
- (void)setMemberCount:(int)arg0;
- (int)maxMemberCount;
- (void)setMaxMemberCount:(int)arg0;
- (id)condition;
- (id)groupDescription;
- (void).cxx_destruct;
- (void)setGroupId:(id)arg0;
- (int)memberCount;
- (id)tags;
- (id)groupId;
- (void)setTags:(id)arg0;
- (id)groupName;
- (void)setCondition:(id)arg0;
- (void)setGroupName:(id)arg0;
- (void)setGroupDescription:(id)arg0;
- (int)applyStatus;
- (void)setApplyStatus:(int)arg0;

@end
