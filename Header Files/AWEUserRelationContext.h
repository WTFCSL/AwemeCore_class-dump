//
//     Generated by private class-dump
//

@class NSString, AWEUserModel, NSDictionary;

@interface AWEUserRelationContext : NSObject {
    BOOL _needMarkFriends;
    BOOL _needFakeFollow;
    BOOL _isInsert;
    AWEUserModel *_user;
    long long _fromPageType;
    long long _prePageType;
    long long _channelID;
    NSString *_itemID;
    NSString *_activityID;
    NSString *_referString;
    long long _subpageType;
    long long _followBackReminderType;
    long long _detailType;
    NSString *_detailUID;
    long long _fromAction;
    NSDictionary *_extra;
}

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long fromPageType;
@property (nonatomic) long long prePageType;
@property (nonatomic) long long channelID;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL needMarkFriends;
@property (nonatomic) long long subpageType;
@property (nonatomic) BOOL needFakeFollow;
@property (nonatomic) long long followBackReminderType;
@property (nonatomic) long long detailType;
@property (retain, nonatomic) NSString *detailUID;
@property (nonatomic) long long fromAction;
@property (nonatomic) BOOL isInsert;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)instanceWithBlock:(id /* block */)arg0;

- (id)referString;
- (void)setExtra:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)setPrePageType:(long long)arg0;
- (void)setFromPageType:(long long)arg0;
- (void)setFromAction:(long long)arg0;
- (void)setNeedFakeFollow:(BOOL)arg0;
- (long long)fromPageType;
- (long long)prePageType;
- (BOOL)needFakeFollow;
- (long long)subpageType;
- (BOOL)needMarkFriends;
- (id)detailUID;
- (long long)fromAction;
- (void)setSubpageType:(long long)arg0;
- (void)setNeedMarkFriends:(BOOL)arg0;
- (void)setFollowBackReminderType:(long long)arg0;
- (long long)followBackReminderType;
- (void)setDetailUID:(id)arg0;
- (void)setUser:(id)arg0;
- (id)init;
- (id)user;
- (long long)channelID;
- (void).cxx_destruct;
- (BOOL)isInsert;
- (id)itemID;
- (id)extra;
- (id)initWithBlock:(id /* block */)arg0;
- (void)setItemID:(id)arg0;
- (void)setChannelID:(long long)arg0;
- (void)setIsInsert:(BOOL)arg0;
- (id)activityID;
- (void)setDetailType:(long long)arg0;
- (long long)detailType;
- (void)setActivityID:(id)arg0;

@end