//
//     Generated by private class-dump
//

@class NSString;

@interface GetLatestBanRecordResponseData : IESLivePBBaseMessage

@property (nonatomic) long long banTime;
@property (nonatomic) long long banDuration;
@property (nonatomic) BOOL isBannedForever;
@property (copy, nonatomic) NSString *banReason;
@property (nonatomic) int banStatus;
@property (copy, nonatomic) NSString *logIdStr;
@property (nonatomic) long long webcastAppealStatus;
@property (nonatomic) long long banType;
@property (nonatomic) BOOL isFromShield;
@property (nonatomic) BOOL specialSerial;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailURL;
@property (nonatomic) long long banTimeLeft;
@property (nonatomic) long long freezeMoney;
@property (copy, nonatomic) NSString *banDetailStr;
@property (nonatomic) long long freezeStatus;
@property (copy, nonatomic) NSString *appealURL;
@property (copy, nonatomic) NSString *banDetailSchema;
@property (copy, nonatomic) NSString *banDetailText;

+ (id)descriptor;

@end
