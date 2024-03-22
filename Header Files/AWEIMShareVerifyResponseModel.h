//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEIMGroupInviteCardGroupOwnerInfo, AWEIMInterestGroupData, AWEIMGroupJoinPanelPopupInfo, NSDictionary;

@interface AWEIMShareVerifyResponseModel : MTLModel <MTLJSONSerializing> {
    int _memberCount;
    int _shareScene;
    int _shareType;
    NSString *_conversationID;
    long long _conversationShortID;
    NSString *_groupAvatar;
    NSString *_secondGroupAvatar;
    NSString *_groupName;
    long long _inviterID;
    NSString *_inviterSecID;
    NSString *_ticket;
    NSArray *_toFollowUserArray;
    AWEIMGroupInviteCardGroupOwnerInfo *_groupOwnerInfo;
    NSString *_groupDesc;
    NSArray *_entryLimits;
    NSArray *_groupTags;
    NSString *_groupType;
    NSString *_groupCreateType;
    AWEIMInterestGroupData *_interestGroupData;
    NSString *_joinText;
    NSArray *_userInfoList;
    AWEIMGroupJoinPanelPopupInfo *_popupViewData;
    NSDictionary *_joinExt;
}

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long conversationShortID;
@property (copy, nonatomic) NSString *groupAvatar;
@property (copy, nonatomic) NSString *secondGroupAvatar;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) int memberCount;
@property (nonatomic) long long inviterID;
@property (copy, nonatomic) NSString *inviterSecID;
@property (copy, nonatomic) NSString *ticket;
@property (nonatomic) int shareScene;
@property (nonatomic) int shareType;
@property (retain, nonatomic) NSArray *toFollowUserArray;
@property (retain, nonatomic) AWEIMGroupInviteCardGroupOwnerInfo *groupOwnerInfo;
@property (copy, nonatomic) NSString *groupDesc;
@property (retain, nonatomic) NSArray *entryLimits;
@property (retain, nonatomic) NSArray *groupTags;
@property (copy, nonatomic) NSString *groupType;
@property (copy, nonatomic) NSString *groupCreateType;
@property (retain, nonatomic) AWEIMInterestGroupData *interestGroupData;
@property (copy, nonatomic) NSString *joinText;
@property (copy, nonatomic) NSArray *userInfoList;
@property (retain, nonatomic) AWEIMGroupJoinPanelPopupInfo *popupViewData;
@property (copy, nonatomic) NSDictionary *joinExt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)toFollowUserArrayJSONTransformer;
+ (id)userInfoListJSONTransformer;
+ (id)popupViewDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)groupCreateType;
- (void)setGroupCreateType:(id)arg0;
- (void)setShareScene:(int)arg0;
- (void)setConversationShortID:(long long)arg0;
- (long long)conversationShortID;
- (void)setMemberCount:(int)arg0;
- (int)shareScene;
- (id)groupDesc;
- (void)setGroupDesc:(id)arg0;
- (id)groupAvatar;
- (void)setGroupAvatar:(id)arg0;
- (id)secondGroupAvatar;
- (void)setSecondGroupAvatar:(id)arg0;
- (id)inviterSecID;
- (void)setInviterSecID:(id)arg0;
- (id)toFollowUserArray;
- (void)setToFollowUserArray:(id)arg0;
- (id)groupOwnerInfo;
- (void)setGroupOwnerInfo:(id)arg0;
- (id)entryLimits;
- (void)setEntryLimits:(id)arg0;
- (id)groupTags;
- (void)setGroupTags:(id)arg0;
- (id)interestGroupData;
- (void)setInterestGroupData:(id)arg0;
- (id)joinText;
- (void)setJoinText:(id)arg0;
- (id)userInfoList;
- (void)setUserInfoList:(id)arg0;
- (id)popupViewData;
- (void)setPopupViewData:(id)arg0;
- (id)joinExt;
- (void)setJoinExt:(id)arg0;
- (void).cxx_destruct;
- (int)memberCount;
- (id)groupType;
- (id)conversationID;
- (id)groupName;
- (void)setGroupType:(id)arg0;
- (void)setGroupName:(id)arg0;
- (void)setConversationID:(id)arg0;
- (id)ticket;
- (void)setTicket:(id)arg0;
- (long long)inviterID;
- (void)setInviterID:(long long)arg0;
- (void)setShareType:(int)arg0;
- (int)shareType;

@end
