//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveTeamInfo : IESLivePBBaseMessage

@property (nonatomic) long long teamId;
@property (copy, nonatomic) NSString *teamName;
@property (copy, nonatomic) NSString *schemaURL;
@property (retain, nonatomic) HTSLiveImage *teamIcon;
@property (nonatomic) BOOL hasTeamIcon;
@property (retain, nonatomic) HTSLiveImage *teamBadge;
@property (nonatomic) BOOL hasTeamBadge;
@property (retain, nonatomic) HTSLiveImage *teamBackground;
@property (nonatomic) BOOL hasTeamBackground;
@property (copy, nonatomic) NSString *systemMsg;
@property (copy, nonatomic) NSString *teamIdStr;
@property (retain, nonatomic) HTSLiveImage *teamAvatarBox;
@property (nonatomic) BOOL hasTeamAvatarBox;

+ (id)descriptor;

@end
