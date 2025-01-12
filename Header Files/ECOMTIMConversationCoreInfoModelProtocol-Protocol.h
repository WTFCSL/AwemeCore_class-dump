//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@protocol ECOMTIMConversationCoreInfoModelProtocol <NSObject>

@property (retain, nonatomic) NSString *belongingConversationIdentifier;
@property (nonatomic) long long infoVersion;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *notice;
@property (nonatomic) long long ownerID;
@property (nonatomic) int mode;
@property (retain, nonatomic) NSString *ext;
@property (nonatomic) long long creatorUid;
@property (retain, nonatomic) NSDictionary *extDictionary;
@property (nonatomic) long long createTime;

- (long long)creatorUid;
- (void)setCreatorUid:(long long)arg0;
- (void)setExt:(id)arg0;
- (id)belongingConversationIdentifier;
- (id)extDictionary;
- (void)setExtDictionary:(id)arg0;
- (long long)infoVersion;
- (void)setBelongingConversationIdentifier:(id)arg0;
- (void)setInfoVersion:(long long)arg0;
- (void)setupPropertyWithPBModel:(id)arg0;
- (id)desc;
- (id)icon;
- (void)setCreateTime:(long long)arg0;
- (int)mode;
- (void)setMode:(int)arg0;
- (void)setName:(id)arg0;
- (void)setIcon:(id)arg0;
- (long long)createTime;
- (void)setDesc:(id)arg0;
- (id)name;
- (id)notice;
- (void)setNotice:(id)arg0;
- (long long)ownerID;
- (void)setOwnerID:(long long)arg0;
- (id)ext;

@end
