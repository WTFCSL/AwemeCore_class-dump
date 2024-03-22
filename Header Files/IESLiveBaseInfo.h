//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, PoiInfo, NSNumber;

@interface IESLiveBaseInfo : IESLivePBBaseMessage

@property (readonly, nonatomic) NSNumber *userID;
@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *idStr;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *displayId;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) int gender;
@property (copy, nonatomic) NSString *signature;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (retain, nonatomic) HTSLiveImage *avatarMedium;
@property (nonatomic) BOOL hasAvatarMedium;
@property (retain, nonatomic) HTSLiveImage *avatarLarge;
@property (nonatomic) BOOL hasAvatarLarge;
@property (copy, nonatomic) NSString *city;
@property (retain, nonatomic) PoiInfo *poiInfo;
@property (nonatomic) BOOL hasPoiInfo;
@property (nonatomic) int secret;
@property (copy, nonatomic) NSString *remarkName;
@property (nonatomic) int age;
@property (copy, nonatomic) NSString *school;
@property (copy, nonatomic) NSString *locationCity;
@property (nonatomic) int mysteryMan;
@property (nonatomic) int accountType;

+ (id)descriptor;

- (id)userID;

@end
