//
//     Generated by private class-dump
//

@class IESGCPPBIntroduceCardTag, NSString, IESGCPPBGameImageBundler, IESGCPPBFeaturedContent, NSMutableArray, IESGCPPBAtmosphereContent;

@interface IESGCPPBReserveIntroduceItem : GPBMessage

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *gameImage;
@property (copy, nonatomic) NSString *reserveTodayNum;
@property (copy, nonatomic) NSString *reserveTotalNum;
@property (nonatomic) long long introduceStartTime;
@property (nonatomic) int introduceTimeLimit;
@property (nonatomic) int reserveStatus;
@property (retain, nonatomic) NSMutableArray *gameTagNamesArray;
@property (readonly, nonatomic) unsigned long long gameTagNamesArray_Count;
@property (copy, nonatomic) NSString *gameBackgroundColor;
@property (copy, nonatomic) NSString *companyName;
@property (copy, nonatomic) NSString *iosSalePoint;
@property (copy, nonatomic) NSString *androidPrivacyURL;
@property (copy, nonatomic) NSString *androidAuthorizationURL;
@property (copy, nonatomic) NSString *iosAppId;
@property (copy, nonatomic) NSString *iosPrivacyURL;
@property (copy, nonatomic) NSString *iosAuthorizationURL;
@property (nonatomic) BOOL hasPlatformGift;
@property (nonatomic) long long supportPlatforms;
@property (copy, nonatomic) NSString *smallIcon;
@property (retain, nonatomic) IESGCPPBGameImageBundler *gameIcon;
@property (nonatomic) BOOL hasGameIcon;
@property (retain, nonatomic) IESGCPPBAtmosphereContent *atmosphereContent;
@property (nonatomic) BOOL hasAtmosphereContent;
@property (retain, nonatomic) IESGCPPBFeaturedContent *featuredContent;
@property (nonatomic) BOOL hasFeaturedContent;
@property (copy, nonatomic) NSString *promoteInstanceId;
@property (retain, nonatomic) IESGCPPBIntroduceCardTag *tag;
@property (nonatomic) BOOL hasTag;

+ (id)descriptor;

@end