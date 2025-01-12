//
//     Generated by private class-dump
//

@class NSString;

@interface IESGCPPBGetPromotedGamesResponse_Data : GPBMessage

@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *anchorFanCount;
@property (copy, nonatomic) NSString *anchorFanLimit;
@property (nonatomic) BOOL isAnchorCertification;
@property (nonatomic) BOOL isInWhite;
@property (nonatomic) BOOL hasPropPermission;
@property (nonatomic) BOOL isAgreePropProtocol;
@property (copy, nonatomic) NSString *anchorValidLiveCount;
@property (copy, nonatomic) NSString *anchorValidLiveLimit;
@property (copy, nonatomic) NSString *anchorValidLiveMin;
@property (copy, nonatomic) NSString *validLiveCheckDays;
@property (copy, nonatomic) NSString *banRecordCheckDays;
@property (nonatomic) BOOL hasBanRecord;
@property (copy, nonatomic) NSString *gameId;
@property (nonatomic) long long bizMode;

+ (id)descriptor;

@end
