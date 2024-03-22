//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, IESLiveLinkMicAudienceLeaveResponse_UserInfoDuringLinkmic;

@interface IESLiveLinkMicAudienceLeaveResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long linkmicId;
@property (nonatomic) long long modifyTime;
@property (nonatomic) int linkStatus;
@property (nonatomic) int linkType;
@property (nonatomic) int roleType;
@property (nonatomic) long long userPosition;
@property (nonatomic) int silenceStatus;
@property (nonatomic) long long fanTicket;
@property (copy, nonatomic) NSString *linkmicIdStr;
@property (nonatomic) int controlType;
@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (nonatomic) unsigned long long version;
@property (nonatomic) long long totalApply;
@property (nonatomic) long long totalLinked;
@property (nonatomic) long long paidCount;
@property (nonatomic) long long linkDuration;
@property (retain, nonatomic) IESLiveLinkMicAudienceLeaveResponse_UserInfoDuringLinkmic *userinfoDuringLinkmic;
@property (nonatomic) BOOL hasUserinfoDuringLinkmic;

+ (id)descriptor;

@end
