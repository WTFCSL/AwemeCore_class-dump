//
//     Generated by private class-dump
//

@class HTSLiveHonorIconContent, HTSLiveUser;

@interface IESLiveLinkMicProfitContributeShowResponse_PlayModeHonorInfo : IESLivePBBaseMessage

@property (nonatomic) long long honorLevel;
@property (nonatomic) long long honorSubLevel;
@property (retain, nonatomic) HTSLiveHonorIconContent *honorIconContent;
@property (nonatomic) BOOL hasHonorIconContent;
@property (retain, nonatomic) HTSLiveUser *titleSponsor;
@property (nonatomic) BOOL hasTitleSponsor;

+ (id)descriptor;

@end
