//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon, HTSLiveAgainst;

@interface HTSLiveMatchAgainstScoreMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveAgainst *against;
@property (nonatomic) BOOL hasAgainst;
@property (nonatomic) int matchStatus;
@property (nonatomic) int displayStatus;
@property (nonatomic) long long matchId;
@property (copy, nonatomic) NSString *matchIdStr;

+ (id)descriptor;

@end
