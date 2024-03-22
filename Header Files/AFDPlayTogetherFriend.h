//
//     Generated by private class-dump
//

@class NSString, AWELiveRoomModel, AWEURLModel;

@interface AFDPlayTogetherFriend : AWEBaseApiModel {
    BOOL _isOnline;
    BOOL _hasInvited;
    BOOL _hasDisplayedInView;
    NSString *_uid;
    NSString *_secUid;
    NSString *_sessionID;
    AWEURLModel *_avatarURL;
    NSString *_nickname;
    NSString *_remarkName;
    long long _followStatus;
    unsigned long long _friendType;
    unsigned long long _linkmicDays;
    long long _invitedCount;
    double _lastInvitedTime;
    AWELiveRoomModel *_roomModel;
    unsigned long long _inviteStatus;
    unsigned long long _invitePage;
    long long _linkDays;
}

@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *secUid;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) AWEURLModel *avatarURL;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *remarkName;
@property (nonatomic) long long followStatus;
@property (nonatomic) BOOL isOnline;
@property (nonatomic) unsigned long long friendType;
@property (nonatomic) unsigned long long linkmicDays;
@property (nonatomic) BOOL hasInvited;
@property (nonatomic) long long invitedCount;
@property (nonatomic) double lastInvitedTime;
@property (retain, nonatomic) AWELiveRoomModel *roomModel;
@property (nonatomic) unsigned long long inviteStatus;
@property (nonatomic) BOOL hasDisplayedInView;
@property (nonatomic) unsigned long long invitePage;
@property (nonatomic) long long linkDays;

+ (id)avatarURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)followStatus;
- (id)secUid;
- (id)roomModel;
- (id)remarkName;
- (BOOL)hasInvited;
- (void)setHasInvited:(BOOL)arg0;
- (id)avatarURL;
- (void)setAvatarURL:(id)arg0;
- (void)setFollowStatus:(long long)arg0;
- (void)setSecUid:(id)arg0;
- (void)setFriendType:(unsigned long long)arg0;
- (void)setRoomModel:(id)arg0;
- (long long)linkDays;
- (double)lastInvitedTime;
- (void)setLastInvitedTime:(double)arg0;
- (long long)invitedCount;
- (void)setInvitedCount:(long long)arg0;
- (void)setInvitePage:(unsigned long long)arg0;
- (BOOL)hasDisplayedInView;
- (unsigned long long)linkmicDays;
- (void)setHasDisplayedInView:(BOOL)arg0;
- (void)setRemarkName:(id)arg0;
- (void)setLinkmicDays:(unsigned long long)arg0;
- (unsigned long long)invitePage;
- (void)setLinkDays:(long long)arg0;
- (void)setUid:(id)arg0;
- (id)uid;
- (id)init;
- (id)nickname;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (id)sessionID;
- (void)setNickname:(id)arg0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (BOOL)isOnline;
- (unsigned long long)inviteStatus;
- (void)setInviteStatus:(unsigned long long)arg0;
- (void)setIsOnline:(BOOL)arg0;
- (unsigned long long)friendType;

@end
