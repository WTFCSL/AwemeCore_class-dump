//
//     Generated by private class-dump
//

@class NSString, HTSLiveUser;

@interface IESLiveLinkMicProfitRoomBattleRandomMatchMatchingContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *openingTimeTitle;
@property (nonatomic) long long matchingExpectedTime;
@property (nonatomic) BOOL isMatching;
@property (nonatomic) long long operatorUserId;
@property (retain, nonatomic) HTSLiveUser *anchorUser;
@property (nonatomic) BOOL hasAnchorUser;

+ (id)descriptor;

@end