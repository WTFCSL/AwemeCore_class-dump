//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveWaitingListUserInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL applicationHasExpired;
@property (nonatomic) BOOL isMutualFollowing;
@property (copy, nonatomic) NSString *applicationReason;
@property (copy, nonatomic) NSString *last7DaysGiftCountText;
@property (copy, nonatomic) NSString *fuzzyFanTicketStr;
@property (nonatomic) long long applyTimeSec;

+ (id)descriptor;

@end