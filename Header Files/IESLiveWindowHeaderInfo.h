//
//     Generated by private class-dump
//

@class NSString, IESLiveText, IESLiveAuthorReputation;

@interface IESLiveWindowHeaderInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *windowName;
@property (retain, nonatomic) IESLiveAuthorReputation *reputation;
@property (nonatomic) BOOL hasReputation;
@property (copy, nonatomic) NSString *windowURL;
@property (retain, nonatomic) IESLiveText *jumpGuideInfo;
@property (nonatomic) BOOL hasJumpGuideInfo;

+ (id)descriptor;

@end