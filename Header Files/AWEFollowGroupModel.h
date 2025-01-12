//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSArray;

@interface AWEFollowGroupModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_groupID;
    NSString *_name;
    NSString *_desc;
    long long _memberCount;
    NSArray *_userList;
}

@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long memberCount;
@property (retain, nonatomic) NSArray *userList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setMemberCount:(long long)arg0;
- (void)setUserList:(id)arg0;
- (id)desc;
- (void)setGroupID:(id)arg0;
- (id)groupID;
- (void).cxx_destruct;
- (long long)memberCount;
- (void)setName:(id)arg0;
- (void)setDesc:(id)arg0;
- (id)name;
- (id)userList;

@end
