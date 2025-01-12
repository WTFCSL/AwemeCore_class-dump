//
//     Generated by private class-dump
//

@class HTSLiveUser, NSString, HTSLiveText, HTSLiveRoom;

@interface HTSLiveCommon : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *method;
@property (nonatomic) long long msgId;
@property (nonatomic) long long roomId;
@property (nonatomic) long long createTime;
@property (nonatomic) int monitor;
@property (nonatomic) BOOL isShowMsg;
@property (copy, nonatomic) NSString *describe;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) long long foldType;
@property (nonatomic) long long anchorFoldType;
@property (nonatomic) long long priorityScore;
@property (copy, nonatomic) NSString *logId;
@property (copy, nonatomic) NSString *msgProcessFilterK;
@property (copy, nonatomic) NSString *msgProcessFilterV;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) BOOL hasRoom;
@property (nonatomic) long long anchorFoldTypeV2;
@property (nonatomic) long long processAtSeiTimeMs;
@property (nonatomic) long long randomDispatchMs;
@property (nonatomic) BOOL isDispatch;
@property (nonatomic) long long channelId;
@property (nonatomic) long long diffSei2AbsSecond;
@property (nonatomic) long long anchorFoldDuration;
@property (nonatomic) long long appId;

+ (id)descriptor;

@end
