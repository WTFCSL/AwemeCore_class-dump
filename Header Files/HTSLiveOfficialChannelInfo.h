//
//     Generated by private class-dump
//

@class HTSLiveUser, NSString, GPBInt64Int64Dictionary, NSMutableArray, GPBInt64Array;

@interface HTSLiveOfficialChannelInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *mixHostUidsArray;
@property (retain, nonatomic) HTSLiveUser *originRoomOwner;
@property (retain, nonatomic) HTSLiveUser *channelUser;
@property (nonatomic) BOOL hasChannelUser;
@property (copy, nonatomic) NSString *channelName;
@property (copy, nonatomic) NSString *channelIntro;
@property (nonatomic) long long endTimestamp;
@property (nonatomic) long long forbiddenBeforeEnd;
@property (nonatomic) int currentShowId;
@property (nonatomic) long long maxEnterTime;
@property (nonatomic) long long maxNextTime;
@property (retain, nonatomic) GPBInt64Int64Dictionary *delayEnterTime;
@property (readonly, nonatomic) unsigned long long delayEnterTime_Count;
@property (nonatomic) BOOL hostPermission;
@property (nonatomic) long long backupRoomId;
@property (retain, nonatomic) HTSLiveUser *livingUser;
@property (nonatomic) BOOL hasLivingUser;
@property (nonatomic) BOOL hostCanAcceptGift;
@property (retain, nonatomic) GPBInt64Array *hostUidsArray;
@property (readonly, nonatomic) unsigned long long hostUidsArray_Count;
@property (copy, nonatomic) NSString *backupRoomIdStr;
@property (nonatomic) BOOL enableHost;

+ (id)descriptor;

- (id)originRoomOwner;
- (id)mixHostUidsArray;
- (void)setMixHostUidsArray:(id)arg0;
- (void)setOriginRoomOwner:(id)arg0;

@end
