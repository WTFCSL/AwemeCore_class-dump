//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, TIMXPBNProfile;

@interface TIMXPBNApplyUserInfo : GPBMessage

@property (nonatomic) long long userId;
@property (nonatomic) BOOL hasUserId;
@property (nonatomic) long long applyTimeSecond;
@property (nonatomic) BOOL hasApplyTimeSecond;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (retain, nonatomic) TIMXPBNProfile *profile;
@property (nonatomic) BOOL hasProfile;
@property (nonatomic) long long index;
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) long long fromUserId;
@property (nonatomic) BOOL hasFromUserId;
@property (copy, nonatomic) NSString *applyId;
@property (nonatomic) BOOL hasApplyId;
@property (nonatomic) long long answerTime;
@property (nonatomic) BOOL hasAnswerTime;
@property (nonatomic) long long toUserId;
@property (nonatomic) BOOL hasToUserId;

+ (id)descriptor;

@end
