//
//     Generated by private class-dump
//

@class HTSLivePkActivePush_Matcher, NSString, VoteSetting;

@interface HTSLivePkActivePush : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLivePkActivePush_Matcher *matcherR;
@property (nonatomic) BOOL hasMatcherR;
@property (copy, nonatomic) NSString *matchReason;
@property (nonatomic) long long waitSeconds;
@property (copy, nonatomic) NSString *signExtra;
@property (retain, nonatomic) VoteSetting *voteData;
@property (nonatomic) BOOL hasVoteData;
@property (copy, nonatomic) NSString *battleAttachedInfo;

+ (id)descriptor;

@end
