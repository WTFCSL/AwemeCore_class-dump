//
//     Generated by private class-dump
//

@class NSString, IESLiveLinkHostInfo, HTSLiveJoinTeamfightInfo, IESLiveMicPosTagInfo, IESLiveListUserEventInfo, NSMutableArray, HTSLiveUser, IESLiveUserHighScoreSongTag;

@interface IESLiveWaitingListUser : IESLivePBBaseMessage

@property (nonatomic) double connectionStartTime;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long linkmicId;
@property (nonatomic) long long modifyTime;
@property (nonatomic) int linkStatus;
@property (nonatomic) int linkType;
@property (nonatomic) int roleType;
@property (nonatomic) long long userPosition;
@property (nonatomic) int silenceStatus;
@property (copy, nonatomic) NSString *linkmicIdStr;
@property (retain, nonatomic) NSMutableArray *songListArray;
@property (readonly, nonatomic) unsigned long long songListArray_Count;
@property (nonatomic) long long appId;
@property (nonatomic) long long clientVersion;
@property (copy, nonatomic) NSString *devicePlatform;
@property (nonatomic) int listUserType;
@property (nonatomic) int listUserFromType;
@property (nonatomic) BOOL applicationHasExpired;
@property (nonatomic) BOOL isMutualFollowing;
@property (copy, nonatomic) NSString *applicationReason;
@property (copy, nonatomic) NSString *last7DaysGiftCountText;
@property (copy, nonatomic) NSString *fanTicket;
@property (nonatomic) long long offset;
@property (nonatomic) long long rank;
@property (nonatomic) BOOL isAddPrice;
@property (nonatomic) long long addPriceTimeMs;
@property (retain, nonatomic) IESLiveLinkHostInfo *host;
@property (nonatomic) BOOL hasHost;
@property (retain, nonatomic) IESLiveMicPosTagInfo *micPosTagInfo;
@property (nonatomic) BOOL hasMicPosTagInfo;
@property (nonatomic) BOOL isAnonymous;
@property (nonatomic) long long paidAmount;
@property (retain, nonatomic) HTSLiveJoinTeamfightInfo *joinTeamfightInfo;
@property (nonatomic) BOOL hasJoinTeamfightInfo;
@property (retain, nonatomic) HTSLiveUser *invitor;
@property (nonatomic) BOOL hasInvitor;
@property (nonatomic) int applyType;
@property (retain, nonatomic) IESLiveUserHighScoreSongTag *highScoreSongTag;
@property (nonatomic) BOOL hasHighScoreSongTag;
@property (nonatomic) BOOL alreadyInvited;
@property (nonatomic) long long orderSongCount;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;
@property (retain, nonatomic) IESLiveListUserEventInfo *eventInfo;
@property (nonatomic) BOOL hasEventInfo;
@property (nonatomic) BOOL isActive;

+ (id)descriptor;

- (id)initWithUser:(id)arg0 uid:(long long)arg1;
- (id)waitingDesStringWithNowTime:(id)arg0 isAddPrice:(BOOL)arg1;
- (double)connectionStartTime;
- (void)setConnectionStartTime:(double)arg0;

@end