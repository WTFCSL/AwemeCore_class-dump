//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveTeamBaseInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *teamName;
@property (retain, nonatomic) HTSLiveImage *teamFlagURL;
@property (nonatomic) BOOL hasTeamFlagURL;
@property (copy, nonatomic) NSString *teamColor;
@property (nonatomic) long long teamId;
@property (copy, nonatomic) NSString *teamIdStr;

+ (id)descriptor;

@end
